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
#include <Standard.hxx>
#include <AppDef_MultiLine.hxx>
#include <Standard_TypeDef.hxx>
#include <AppParCurves_Constraint.hxx>
#include <math_Vector.hxx>
#include <TColStd_Array1OfReal.hxx>
#include <TColStd_Array1OfInteger.hxx>
#include <AppParCurves_MultiCurve.hxx>
#include <AppParCurves_MultiBSpCurve.hxx>
#include <math_Matrix.hxx>
#include <math_IntegerVector.hxx>
#include <Standard_Handle.hxx>
#include <TColStd_HArray1OfReal.hxx>
#include <TColStd_HArray1OfInteger.hxx>
#include <AppDef_ParLeastSquareOfTheGradient.hxx>

void bind_AppDef_ParLeastSquareOfTheGradient(py::module &mod){

py::class_<AppDef_ParLeastSquareOfTheGradient, std::unique_ptr<AppDef_ParLeastSquareOfTheGradient, Deleter<AppDef_ParLeastSquareOfTheGradient>>> cls_AppDef_ParLeastSquareOfTheGradient(mod, "AppDef_ParLeastSquareOfTheGradient", "None");

// Constructors
cls_AppDef_ParLeastSquareOfTheGradient.def(py::init<const AppDef_MultiLine &, const Standard_Integer, const Standard_Integer, const AppParCurves_Constraint, const AppParCurves_Constraint, const math_Vector &, const Standard_Integer>(), py::arg("SSP"), py::arg("FirstPoint"), py::arg("LastPoint"), py::arg("FirstCons"), py::arg("LastCons"), py::arg("Parameters"), py::arg("NbPol"));
cls_AppDef_ParLeastSquareOfTheGradient.def(py::init<const AppDef_MultiLine &, const Standard_Integer, const Standard_Integer, const AppParCurves_Constraint, const AppParCurves_Constraint, const Standard_Integer>(), py::arg("SSP"), py::arg("FirstPoint"), py::arg("LastPoint"), py::arg("FirstCons"), py::arg("LastCons"), py::arg("NbPol"));
cls_AppDef_ParLeastSquareOfTheGradient.def(py::init<const AppDef_MultiLine &, const TColStd_Array1OfReal &, const TColStd_Array1OfInteger &, const Standard_Integer, const Standard_Integer, const AppParCurves_Constraint, const AppParCurves_Constraint, const math_Vector &, const Standard_Integer>(), py::arg("SSP"), py::arg("Knots"), py::arg("Mults"), py::arg("FirstPoint"), py::arg("LastPoint"), py::arg("FirstCons"), py::arg("LastCons"), py::arg("Parameters"), py::arg("NbPol"));
cls_AppDef_ParLeastSquareOfTheGradient.def(py::init<const AppDef_MultiLine &, const TColStd_Array1OfReal &, const TColStd_Array1OfInteger &, const Standard_Integer, const Standard_Integer, const AppParCurves_Constraint, const AppParCurves_Constraint, const Standard_Integer>(), py::arg("SSP"), py::arg("Knots"), py::arg("Mults"), py::arg("FirstPoint"), py::arg("LastPoint"), py::arg("FirstCons"), py::arg("LastCons"), py::arg("NbPol"));

// Fields

// Methods
// cls_AppDef_ParLeastSquareOfTheGradient.def_static("operator new_", (void * (*)(size_t)) &AppDef_ParLeastSquareOfTheGradient::operator new, "None", py::arg("theSize"));
// cls_AppDef_ParLeastSquareOfTheGradient.def_static("operator delete_", (void (*)(void *)) &AppDef_ParLeastSquareOfTheGradient::operator delete, "None", py::arg("theAddress"));
// cls_AppDef_ParLeastSquareOfTheGradient.def_static("operator new[]_", (void * (*)(size_t)) &AppDef_ParLeastSquareOfTheGradient::operator new[], "None", py::arg("theSize"));
// cls_AppDef_ParLeastSquareOfTheGradient.def_static("operator delete[]_", (void (*)(void *)) &AppDef_ParLeastSquareOfTheGradient::operator delete[], "None", py::arg("theAddress"));
// cls_AppDef_ParLeastSquareOfTheGradient.def_static("operator new_", (void * (*)(size_t, void *)) &AppDef_ParLeastSquareOfTheGradient::operator new, "None", py::arg(""), py::arg("theAddress"));
// cls_AppDef_ParLeastSquareOfTheGradient.def_static("operator delete_", (void (*)(void *, void *)) &AppDef_ParLeastSquareOfTheGradient::operator delete, "None", py::arg(""), py::arg(""));
cls_AppDef_ParLeastSquareOfTheGradient.def("Perform", (void (AppDef_ParLeastSquareOfTheGradient::*)(const math_Vector &)) &AppDef_ParLeastSquareOfTheGradient::Perform, "Is used after having initialized the fields. The case 'CurvaturePoint' is not treated in this method.", py::arg("Parameters"));
cls_AppDef_ParLeastSquareOfTheGradient.def("Perform", (void (AppDef_ParLeastSquareOfTheGradient::*)(const math_Vector &, const Standard_Real, const Standard_Real)) &AppDef_ParLeastSquareOfTheGradient::Perform, "Is used after having initialized the fields.", py::arg("Parameters"), py::arg("l1"), py::arg("l2"));
cls_AppDef_ParLeastSquareOfTheGradient.def("Perform", (void (AppDef_ParLeastSquareOfTheGradient::*)(const math_Vector &, const math_Vector &, const math_Vector &, const Standard_Real, const Standard_Real)) &AppDef_ParLeastSquareOfTheGradient::Perform, "Is used after having initialized the fields. <V1t> is the tangent vector at the first point. <V2t> is the tangent vector at the last point.", py::arg("Parameters"), py::arg("V1t"), py::arg("V2t"), py::arg("l1"), py::arg("l2"));
cls_AppDef_ParLeastSquareOfTheGradient.def("Perform", (void (AppDef_ParLeastSquareOfTheGradient::*)(const math_Vector &, const math_Vector &, const math_Vector &, const math_Vector &, const math_Vector &, const Standard_Real, const Standard_Real)) &AppDef_ParLeastSquareOfTheGradient::Perform, "Is used after having initialized the fields. <V1t> is the tangent vector at the first point. <V2t> is the tangent vector at the last point. <V1c> is the tangent vector at the first point. <V2c> is the tangent vector at the last point.", py::arg("Parameters"), py::arg("V1t"), py::arg("V2t"), py::arg("V1c"), py::arg("V2c"), py::arg("l1"), py::arg("l2"));
cls_AppDef_ParLeastSquareOfTheGradient.def("IsDone", (Standard_Boolean (AppDef_ParLeastSquareOfTheGradient::*)() const) &AppDef_ParLeastSquareOfTheGradient::IsDone, "returns True if all has been correctly done.");
cls_AppDef_ParLeastSquareOfTheGradient.def("BezierValue", (AppParCurves_MultiCurve (AppDef_ParLeastSquareOfTheGradient::*)()) &AppDef_ParLeastSquareOfTheGradient::BezierValue, "returns the result of the approximation, i.e. all the Curves. An exception is raised if NotDone.");
cls_AppDef_ParLeastSquareOfTheGradient.def("BSplineValue", (const AppParCurves_MultiBSpCurve & (AppDef_ParLeastSquareOfTheGradient::*)()) &AppDef_ParLeastSquareOfTheGradient::BSplineValue, "returns the result of the approximation, i.e. all the Curves. An exception is raised if NotDone.");
cls_AppDef_ParLeastSquareOfTheGradient.def("FunctionMatrix", (const math_Matrix & (AppDef_ParLeastSquareOfTheGradient::*)() const) &AppDef_ParLeastSquareOfTheGradient::FunctionMatrix, "returns the function matrix used to approximate the set.");
cls_AppDef_ParLeastSquareOfTheGradient.def("DerivativeFunctionMatrix", (const math_Matrix & (AppDef_ParLeastSquareOfTheGradient::*)() const) &AppDef_ParLeastSquareOfTheGradient::DerivativeFunctionMatrix, "returns the derivative function matrix used to approximate the set.");
cls_AppDef_ParLeastSquareOfTheGradient.def("ErrorGradient", [](AppDef_ParLeastSquareOfTheGradient &self, math_Vector & Grad, Standard_Real & F, Standard_Real & MaxE3d, Standard_Real & MaxE2d){ self.ErrorGradient(Grad, F, MaxE3d, MaxE2d); return std::tuple<Standard_Real &, Standard_Real &, Standard_Real &>(F, MaxE3d, MaxE2d); }, "returns the maximum errors between the MultiLine and the approximation curves. F is the sum of the square distances. Grad is the derivative vector of the function F.", py::arg("Grad"), py::arg("F"), py::arg("MaxE3d"), py::arg("MaxE2d"));
cls_AppDef_ParLeastSquareOfTheGradient.def("Distance", (const math_Matrix & (AppDef_ParLeastSquareOfTheGradient::*)()) &AppDef_ParLeastSquareOfTheGradient::Distance, "returns the distances between the points of the multiline and the approximation curves.");
cls_AppDef_ParLeastSquareOfTheGradient.def("Error", [](AppDef_ParLeastSquareOfTheGradient &self, Standard_Real & F, Standard_Real & MaxE3d, Standard_Real & MaxE2d){ self.Error(F, MaxE3d, MaxE2d); return std::tuple<Standard_Real &, Standard_Real &, Standard_Real &>(F, MaxE3d, MaxE2d); }, "returns the maximum errors between the MultiLine and the approximation curves. F is the sum of the square distances.", py::arg("F"), py::arg("MaxE3d"), py::arg("MaxE2d"));
cls_AppDef_ParLeastSquareOfTheGradient.def("FirstLambda", (Standard_Real (AppDef_ParLeastSquareOfTheGradient::*)() const) &AppDef_ParLeastSquareOfTheGradient::FirstLambda, "returns the value (P2 - P1)/ V1 if the first point was a tangency point.");
cls_AppDef_ParLeastSquareOfTheGradient.def("LastLambda", (Standard_Real (AppDef_ParLeastSquareOfTheGradient::*)() const) &AppDef_ParLeastSquareOfTheGradient::LastLambda, "returns the value (PN - PN-1)/ VN if the last point was a tangency point.");
cls_AppDef_ParLeastSquareOfTheGradient.def("Points", (const math_Matrix & (AppDef_ParLeastSquareOfTheGradient::*)() const) &AppDef_ParLeastSquareOfTheGradient::Points, "returns the matrix of points value.");
cls_AppDef_ParLeastSquareOfTheGradient.def("Poles", (const math_Matrix & (AppDef_ParLeastSquareOfTheGradient::*)() const) &AppDef_ParLeastSquareOfTheGradient::Poles, "returns the matrix of resulting control points value.");
cls_AppDef_ParLeastSquareOfTheGradient.def("KIndex", (const math_IntegerVector & (AppDef_ParLeastSquareOfTheGradient::*)() const) &AppDef_ParLeastSquareOfTheGradient::KIndex, "Returns the indexes of the first non null values of A and DA. The values are non null from Index(ieme point) +1 to Index(ieme point) + degree +1.");

// Enums

}