/*
This file is part of pyOCCT which provides Python bindings to the OpenCASCADE
geometry kernel.

Copyright (C) 2016-2018  Laughlin Research, LLC
Copyright (C) 2019 Trevor Laughlin and the pyOCCT contributors

This library is free software; you can redistribute it and/or
modify it under the terms of the GNU Lesser General Public
License as published by the Free Software Foundation; either
version 2.1 of the License, or (at your option) any later version.

This library is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
Lesser General Public License for more details.

You should have received a copy of the GNU Lesser General Public
License along with this library; if not, write to the Free Software
Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
*/
#include <pyOCCT_Common.hxx>
#include <Geom_Surface.hxx>
#include <Standard_Handle.hxx>
#include <Plate_Plate.hxx>
#include <Standard_TypeDef.hxx>
#include <gp_Trsf.hxx>
#include <gp_GTrsf2d.hxx>
#include <Geom_Curve.hxx>
#include <GeomAbs_Shape.hxx>
#include <gp_Pnt.hxx>
#include <gp_Vec.hxx>
#include <Geom_Geometry.hxx>
#include <TColgp_SequenceOfXY.hxx>
#include <GeomPlate_Surface.hxx>
#include <Standard_Type.hxx>

void bind_GeomPlate_Surface(py::module &mod){

py::class_<GeomPlate_Surface, opencascade::handle<GeomPlate_Surface>, Geom_Surface> cls_GeomPlate_Surface(mod, "GeomPlate_Surface", "Describes the characteristics of plate surface objects returned by BuildPlateSurface::Surface. These can be used to verify the quality of the resulting surface before approximating it to a Geom_BSpline surface generated by MakeApprox. This proves necessary in cases where you want to use the resulting surface as the support for a shape. The algorithmically generated surface cannot fill this function as is, and as a result must be converted first.");

// Constructors
cls_GeomPlate_Surface.def(py::init<const opencascade::handle<Geom_Surface> &, const Plate_Plate &>(), py::arg("Surfinit"), py::arg("Surfinter"));

// Fields

// Methods
cls_GeomPlate_Surface.def("UReverse", (void (GeomPlate_Surface::*)()) &GeomPlate_Surface::UReverse, "Reverses the U direction of parametrization of <me>. The bounds of the surface are not modified.");
cls_GeomPlate_Surface.def("UReversedParameter", (Standard_Real (GeomPlate_Surface::*)(const Standard_Real) const) &GeomPlate_Surface::UReversedParameter, "Return the parameter on the Ureversed surface for the point of parameter U on <me>.", py::arg("U"));
cls_GeomPlate_Surface.def("VReverse", (void (GeomPlate_Surface::*)()) &GeomPlate_Surface::VReverse, "Reverses the V direction of parametrization of <me>. The bounds of the surface are not modified.");
cls_GeomPlate_Surface.def("VReversedParameter", (Standard_Real (GeomPlate_Surface::*)(const Standard_Real) const) &GeomPlate_Surface::VReversedParameter, "Return the parameter on the Vreversed surface for the point of parameter V on <me>.", py::arg("V"));
cls_GeomPlate_Surface.def("TransformParameters", [](GeomPlate_Surface &self, Standard_Real & U, Standard_Real & V, const gp_Trsf & T){ self.TransformParameters(U, V, T); return std::tuple<Standard_Real &, Standard_Real &>(U, V); }, "Computes the parameters on the transformed surface for the transform of the point of parameters U,V on <me>.", py::arg("U"), py::arg("V"), py::arg("T"));
cls_GeomPlate_Surface.def("ParametricTransformation", (gp_GTrsf2d (GeomPlate_Surface::*)(const gp_Trsf &) const) &GeomPlate_Surface::ParametricTransformation, "Returns a 2d transformation used to find the new parameters of a point on the transformed surface.", py::arg("T"));
cls_GeomPlate_Surface.def("Bounds", [](GeomPlate_Surface &self, Standard_Real & U1, Standard_Real & U2, Standard_Real & V1, Standard_Real & V2){ self.Bounds(U1, U2, V1, V2); return std::tuple<Standard_Real &, Standard_Real &, Standard_Real &, Standard_Real &>(U1, U2, V1, V2); }, "None", py::arg("U1"), py::arg("U2"), py::arg("V1"), py::arg("V2"));
cls_GeomPlate_Surface.def("IsUClosed", (Standard_Boolean (GeomPlate_Surface::*)() const) &GeomPlate_Surface::IsUClosed, "Is the surface closed in the parametric direction U ? Returns True if for each parameter V the distance between the point P (UFirst, V) and P (ULast, V) is lower or equal to Resolution from gp. UFirst and ULast are the parametric bounds in the U direction.");
cls_GeomPlate_Surface.def("IsVClosed", (Standard_Boolean (GeomPlate_Surface::*)() const) &GeomPlate_Surface::IsVClosed, "Is the surface closed in the parametric direction V ? Returns True if for each parameter U the distance between the point P (U, VFirst) and P (U, VLast) is lower or equal to Resolution from gp. VFirst and VLast are the parametric bounds in the V direction.");
cls_GeomPlate_Surface.def("IsUPeriodic", (Standard_Boolean (GeomPlate_Surface::*)() const) &GeomPlate_Surface::IsUPeriodic, "Is the parametrization of a surface periodic in the direction U ? It is possible only if the surface is closed in this parametric direction and if the following relation is satisfied : for each parameter V the distance between the point P (U, V) and the point P (U + T, V) is lower or equal to Resolution from package gp. T is the parametric period and must be a constant.");
cls_GeomPlate_Surface.def("UPeriod", (Standard_Real (GeomPlate_Surface::*)() const) &GeomPlate_Surface::UPeriod, "returns the Uperiod. raises if the surface is not uperiodic.");
cls_GeomPlate_Surface.def("IsVPeriodic", (Standard_Boolean (GeomPlate_Surface::*)() const) &GeomPlate_Surface::IsVPeriodic, "Is the parametrization of a surface periodic in the direction U ? It is possible only if the surface is closed in this parametric direction and if the following relation is satisfied : for each parameter V the distance between the point P (U, V) and the point P (U + T, V) is lower or equal to Resolution from package gp. T is the parametric period and must be a constant.");
cls_GeomPlate_Surface.def("VPeriod", (Standard_Real (GeomPlate_Surface::*)() const) &GeomPlate_Surface::VPeriod, "returns the Vperiod. raises if the surface is not vperiodic.");
cls_GeomPlate_Surface.def("UIso", (opencascade::handle<Geom_Curve> (GeomPlate_Surface::*)(const Standard_Real) const) &GeomPlate_Surface::UIso, "Computes the U isoparametric curve.", py::arg("U"));
cls_GeomPlate_Surface.def("VIso", (opencascade::handle<Geom_Curve> (GeomPlate_Surface::*)(const Standard_Real) const) &GeomPlate_Surface::VIso, "Computes the V isoparametric curve.", py::arg("V"));
cls_GeomPlate_Surface.def("Continuity", (GeomAbs_Shape (GeomPlate_Surface::*)() const) &GeomPlate_Surface::Continuity, "Global Continuity of the surface in direction U and V : C0 : only geometric continuity, C1 : continuity of the first derivative all along the surface, C2 : continuity of the second derivative all along the surface, C3 : continuity of the third derivative all along the surface, G1 : tangency continuity all along the surface, G2 : curvature continuity all along the surface, CN : the order of continuity is infinite. Example : If the surface is C1 in the V parametric direction and C2 in the U parametric direction Shape = C1.");
cls_GeomPlate_Surface.def("IsCNu", (Standard_Boolean (GeomPlate_Surface::*)(const Standard_Integer) const) &GeomPlate_Surface::IsCNu, "Returns the order of continuity of the surface in the U parametric direction. Raised if N < 0.", py::arg("N"));
cls_GeomPlate_Surface.def("IsCNv", (Standard_Boolean (GeomPlate_Surface::*)(const Standard_Integer) const) &GeomPlate_Surface::IsCNv, "Returns the order of continuity of the surface in the V parametric direction. Raised if N < 0.", py::arg("N"));
cls_GeomPlate_Surface.def("D0", (void (GeomPlate_Surface::*)(const Standard_Real, const Standard_Real, gp_Pnt &) const) &GeomPlate_Surface::D0, "Computes the point of parameter U,V on the surface.", py::arg("U"), py::arg("V"), py::arg("P"));
cls_GeomPlate_Surface.def("D1", (void (GeomPlate_Surface::*)(const Standard_Real, const Standard_Real, gp_Pnt &, gp_Vec &, gp_Vec &) const) &GeomPlate_Surface::D1, "Computes the point P and the first derivatives in the directions U and V at this point. Raised if the continuity of the surface is not C1.", py::arg("U"), py::arg("V"), py::arg("P"), py::arg("D1U"), py::arg("D1V"));
cls_GeomPlate_Surface.def("D2", (void (GeomPlate_Surface::*)(const Standard_Real, const Standard_Real, gp_Pnt &, gp_Vec &, gp_Vec &, gp_Vec &, gp_Vec &, gp_Vec &) const) &GeomPlate_Surface::D2, "Computes the point P, the first and the second derivatives in the directions U and V at this point. Raised if the continuity of the surface is not C2.", py::arg("U"), py::arg("V"), py::arg("P"), py::arg("D1U"), py::arg("D1V"), py::arg("D2U"), py::arg("D2V"), py::arg("D2UV"));
cls_GeomPlate_Surface.def("D3", (void (GeomPlate_Surface::*)(const Standard_Real, const Standard_Real, gp_Pnt &, gp_Vec &, gp_Vec &, gp_Vec &, gp_Vec &, gp_Vec &, gp_Vec &, gp_Vec &, gp_Vec &, gp_Vec &) const) &GeomPlate_Surface::D3, "Computes the point P, the first,the second and the third derivatives in the directions U and V at this point. Raised if the continuity of the surface is not C2.", py::arg("U"), py::arg("V"), py::arg("P"), py::arg("D1U"), py::arg("D1V"), py::arg("D2U"), py::arg("D2V"), py::arg("D2UV"), py::arg("D3U"), py::arg("D3V"), py::arg("D3UUV"), py::arg("D3UVV"));
cls_GeomPlate_Surface.def("DN", (gp_Vec (GeomPlate_Surface::*)(const Standard_Real, const Standard_Real, const Standard_Integer, const Standard_Integer) const) &GeomPlate_Surface::DN, "---Purpose ; Computes the derivative of order Nu in the direction U and Nv in the direction V at the point P(U, V).", py::arg("U"), py::arg("V"), py::arg("Nu"), py::arg("Nv"));
cls_GeomPlate_Surface.def("Copy", (opencascade::handle<Geom_Geometry> (GeomPlate_Surface::*)() const) &GeomPlate_Surface::Copy, "None");
cls_GeomPlate_Surface.def("Transform", (void (GeomPlate_Surface::*)(const gp_Trsf &)) &GeomPlate_Surface::Transform, "Transformation of a geometric object. This tansformation can be a translation, a rotation, a symmetry, a scaling or a complex transformation obtained by combination of the previous elementaries transformations. (see class Transformation of the package Geom).", py::arg("T"));
cls_GeomPlate_Surface.def("CallSurfinit", (opencascade::handle<Geom_Surface> (GeomPlate_Surface::*)() const) &GeomPlate_Surface::CallSurfinit, "None");
cls_GeomPlate_Surface.def("SetBounds", (void (GeomPlate_Surface::*)(const Standard_Real, const Standard_Real, const Standard_Real, const Standard_Real)) &GeomPlate_Surface::SetBounds, "None", py::arg("Umin"), py::arg("Umax"), py::arg("Vmin"), py::arg("Vmax"));
cls_GeomPlate_Surface.def("RealBounds", [](GeomPlate_Surface &self, Standard_Real & U1, Standard_Real & U2, Standard_Real & V1, Standard_Real & V2){ self.RealBounds(U1, U2, V1, V2); return std::tuple<Standard_Real &, Standard_Real &, Standard_Real &, Standard_Real &>(U1, U2, V1, V2); }, "None", py::arg("U1"), py::arg("U2"), py::arg("V1"), py::arg("V2"));
cls_GeomPlate_Surface.def("Constraints", (void (GeomPlate_Surface::*)(TColgp_SequenceOfXY &) const) &GeomPlate_Surface::Constraints, "None", py::arg("Seq"));
cls_GeomPlate_Surface.def_static("get_type_name_", (const char * (*)()) &GeomPlate_Surface::get_type_name, "None");
cls_GeomPlate_Surface.def_static("get_type_descriptor_", (const opencascade::handle<Standard_Type> & (*)()) &GeomPlate_Surface::get_type_descriptor, "None");
cls_GeomPlate_Surface.def("DynamicType", (const opencascade::handle<Standard_Type> & (GeomPlate_Surface::*)() const) &GeomPlate_Surface::DynamicType, "None");

// Enums

}