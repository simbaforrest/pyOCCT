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
#include <BRepBuilderAPI_MakeShape.hxx>
#include <Standard.hxx>
#include <TopoDS_Vertex.hxx>
#include <gp_Pnt2d.hxx>
#include <gp_Lin2d.hxx>
#include <Standard_TypeDef.hxx>
#include <gp_Circ2d.hxx>
#include <gp_Elips2d.hxx>
#include <gp_Hypr2d.hxx>
#include <gp_Parab2d.hxx>
#include <Standard_Handle.hxx>
#include <Geom2d_Curve.hxx>
#include <BRepBuilderAPI_EdgeError.hxx>
#include <TopoDS_Edge.hxx>
#include <BRepLib_MakeEdge2d.hxx>
#include <BRepBuilderAPI_MakeEdge2d.hxx>

void bind_BRepBuilderAPI_MakeEdge2d(py::module &mod){

py::class_<BRepBuilderAPI_MakeEdge2d, BRepBuilderAPI_MakeShape> cls_BRepBuilderAPI_MakeEdge2d(mod, "BRepBuilderAPI_MakeEdge2d", "Provides methods to build edges.");

// Constructors
cls_BRepBuilderAPI_MakeEdge2d.def(py::init<const TopoDS_Vertex &, const TopoDS_Vertex &>(), py::arg("V1"), py::arg("V2"));
cls_BRepBuilderAPI_MakeEdge2d.def(py::init<const gp_Pnt2d &, const gp_Pnt2d &>(), py::arg("P1"), py::arg("P2"));
cls_BRepBuilderAPI_MakeEdge2d.def(py::init<const gp_Lin2d &>(), py::arg("L"));
cls_BRepBuilderAPI_MakeEdge2d.def(py::init<const gp_Lin2d &, const Standard_Real, const Standard_Real>(), py::arg("L"), py::arg("p1"), py::arg("p2"));
cls_BRepBuilderAPI_MakeEdge2d.def(py::init<const gp_Lin2d &, const gp_Pnt2d &, const gp_Pnt2d &>(), py::arg("L"), py::arg("P1"), py::arg("P2"));
cls_BRepBuilderAPI_MakeEdge2d.def(py::init<const gp_Lin2d &, const TopoDS_Vertex &, const TopoDS_Vertex &>(), py::arg("L"), py::arg("V1"), py::arg("V2"));
cls_BRepBuilderAPI_MakeEdge2d.def(py::init<const gp_Circ2d &>(), py::arg("L"));
cls_BRepBuilderAPI_MakeEdge2d.def(py::init<const gp_Circ2d &, const Standard_Real, const Standard_Real>(), py::arg("L"), py::arg("p1"), py::arg("p2"));
cls_BRepBuilderAPI_MakeEdge2d.def(py::init<const gp_Circ2d &, const gp_Pnt2d &, const gp_Pnt2d &>(), py::arg("L"), py::arg("P1"), py::arg("P2"));
cls_BRepBuilderAPI_MakeEdge2d.def(py::init<const gp_Circ2d &, const TopoDS_Vertex &, const TopoDS_Vertex &>(), py::arg("L"), py::arg("V1"), py::arg("V2"));
cls_BRepBuilderAPI_MakeEdge2d.def(py::init<const gp_Elips2d &>(), py::arg("L"));
cls_BRepBuilderAPI_MakeEdge2d.def(py::init<const gp_Elips2d &, const Standard_Real, const Standard_Real>(), py::arg("L"), py::arg("p1"), py::arg("p2"));
cls_BRepBuilderAPI_MakeEdge2d.def(py::init<const gp_Elips2d &, const gp_Pnt2d &, const gp_Pnt2d &>(), py::arg("L"), py::arg("P1"), py::arg("P2"));
cls_BRepBuilderAPI_MakeEdge2d.def(py::init<const gp_Elips2d &, const TopoDS_Vertex &, const TopoDS_Vertex &>(), py::arg("L"), py::arg("V1"), py::arg("V2"));
cls_BRepBuilderAPI_MakeEdge2d.def(py::init<const gp_Hypr2d &>(), py::arg("L"));
cls_BRepBuilderAPI_MakeEdge2d.def(py::init<const gp_Hypr2d &, const Standard_Real, const Standard_Real>(), py::arg("L"), py::arg("p1"), py::arg("p2"));
cls_BRepBuilderAPI_MakeEdge2d.def(py::init<const gp_Hypr2d &, const gp_Pnt2d &, const gp_Pnt2d &>(), py::arg("L"), py::arg("P1"), py::arg("P2"));
cls_BRepBuilderAPI_MakeEdge2d.def(py::init<const gp_Hypr2d &, const TopoDS_Vertex &, const TopoDS_Vertex &>(), py::arg("L"), py::arg("V1"), py::arg("V2"));
cls_BRepBuilderAPI_MakeEdge2d.def(py::init<const gp_Parab2d &>(), py::arg("L"));
cls_BRepBuilderAPI_MakeEdge2d.def(py::init<const gp_Parab2d &, const Standard_Real, const Standard_Real>(), py::arg("L"), py::arg("p1"), py::arg("p2"));
cls_BRepBuilderAPI_MakeEdge2d.def(py::init<const gp_Parab2d &, const gp_Pnt2d &, const gp_Pnt2d &>(), py::arg("L"), py::arg("P1"), py::arg("P2"));
cls_BRepBuilderAPI_MakeEdge2d.def(py::init<const gp_Parab2d &, const TopoDS_Vertex &, const TopoDS_Vertex &>(), py::arg("L"), py::arg("V1"), py::arg("V2"));
cls_BRepBuilderAPI_MakeEdge2d.def(py::init<const opencascade::handle<Geom2d_Curve> &>(), py::arg("L"));
cls_BRepBuilderAPI_MakeEdge2d.def(py::init<const opencascade::handle<Geom2d_Curve> &, const Standard_Real, const Standard_Real>(), py::arg("L"), py::arg("p1"), py::arg("p2"));
cls_BRepBuilderAPI_MakeEdge2d.def(py::init<const opencascade::handle<Geom2d_Curve> &, const gp_Pnt2d &, const gp_Pnt2d &>(), py::arg("L"), py::arg("P1"), py::arg("P2"));
cls_BRepBuilderAPI_MakeEdge2d.def(py::init<const opencascade::handle<Geom2d_Curve> &, const TopoDS_Vertex &, const TopoDS_Vertex &>(), py::arg("L"), py::arg("V1"), py::arg("V2"));
cls_BRepBuilderAPI_MakeEdge2d.def(py::init<const opencascade::handle<Geom2d_Curve> &, const gp_Pnt2d &, const gp_Pnt2d &, const Standard_Real, const Standard_Real>(), py::arg("L"), py::arg("P1"), py::arg("P2"), py::arg("p1"), py::arg("p2"));
cls_BRepBuilderAPI_MakeEdge2d.def(py::init<const opencascade::handle<Geom2d_Curve> &, const TopoDS_Vertex &, const TopoDS_Vertex &, const Standard_Real, const Standard_Real>(), py::arg("L"), py::arg("V1"), py::arg("V2"), py::arg("p1"), py::arg("p2"));

// Fields

// Methods
// cls_BRepBuilderAPI_MakeEdge2d.def_static("operator new_", (void * (*)(size_t)) &BRepBuilderAPI_MakeEdge2d::operator new, "None", py::arg("theSize"));
// cls_BRepBuilderAPI_MakeEdge2d.def_static("operator delete_", (void (*)(void *)) &BRepBuilderAPI_MakeEdge2d::operator delete, "None", py::arg("theAddress"));
// cls_BRepBuilderAPI_MakeEdge2d.def_static("operator new[]_", (void * (*)(size_t)) &BRepBuilderAPI_MakeEdge2d::operator new[], "None", py::arg("theSize"));
// cls_BRepBuilderAPI_MakeEdge2d.def_static("operator delete[]_", (void (*)(void *)) &BRepBuilderAPI_MakeEdge2d::operator delete[], "None", py::arg("theAddress"));
// cls_BRepBuilderAPI_MakeEdge2d.def_static("operator new_", (void * (*)(size_t, void *)) &BRepBuilderAPI_MakeEdge2d::operator new, "None", py::arg(""), py::arg("theAddress"));
// cls_BRepBuilderAPI_MakeEdge2d.def_static("operator delete_", (void (*)(void *, void *)) &BRepBuilderAPI_MakeEdge2d::operator delete, "None", py::arg(""), py::arg(""));
cls_BRepBuilderAPI_MakeEdge2d.def("Init", (void (BRepBuilderAPI_MakeEdge2d::*)(const opencascade::handle<Geom2d_Curve> &)) &BRepBuilderAPI_MakeEdge2d::Init, "None", py::arg("C"));
cls_BRepBuilderAPI_MakeEdge2d.def("Init", (void (BRepBuilderAPI_MakeEdge2d::*)(const opencascade::handle<Geom2d_Curve> &, const Standard_Real, const Standard_Real)) &BRepBuilderAPI_MakeEdge2d::Init, "None", py::arg("C"), py::arg("p1"), py::arg("p2"));
cls_BRepBuilderAPI_MakeEdge2d.def("Init", (void (BRepBuilderAPI_MakeEdge2d::*)(const opencascade::handle<Geom2d_Curve> &, const gp_Pnt2d &, const gp_Pnt2d &)) &BRepBuilderAPI_MakeEdge2d::Init, "None", py::arg("C"), py::arg("P1"), py::arg("P2"));
cls_BRepBuilderAPI_MakeEdge2d.def("Init", (void (BRepBuilderAPI_MakeEdge2d::*)(const opencascade::handle<Geom2d_Curve> &, const TopoDS_Vertex &, const TopoDS_Vertex &)) &BRepBuilderAPI_MakeEdge2d::Init, "None", py::arg("C"), py::arg("V1"), py::arg("V2"));
cls_BRepBuilderAPI_MakeEdge2d.def("Init", (void (BRepBuilderAPI_MakeEdge2d::*)(const opencascade::handle<Geom2d_Curve> &, const gp_Pnt2d &, const gp_Pnt2d &, const Standard_Real, const Standard_Real)) &BRepBuilderAPI_MakeEdge2d::Init, "None", py::arg("C"), py::arg("P1"), py::arg("P2"), py::arg("p1"), py::arg("p2"));
cls_BRepBuilderAPI_MakeEdge2d.def("Init", (void (BRepBuilderAPI_MakeEdge2d::*)(const opencascade::handle<Geom2d_Curve> &, const TopoDS_Vertex &, const TopoDS_Vertex &, const Standard_Real, const Standard_Real)) &BRepBuilderAPI_MakeEdge2d::Init, "None", py::arg("C"), py::arg("V1"), py::arg("V2"), py::arg("p1"), py::arg("p2"));
cls_BRepBuilderAPI_MakeEdge2d.def("IsDone", (Standard_Boolean (BRepBuilderAPI_MakeEdge2d::*)() const) &BRepBuilderAPI_MakeEdge2d::IsDone, "None");
cls_BRepBuilderAPI_MakeEdge2d.def("Error", (BRepBuilderAPI_EdgeError (BRepBuilderAPI_MakeEdge2d::*)() const) &BRepBuilderAPI_MakeEdge2d::Error, "Returns the error description when NotDone.");
cls_BRepBuilderAPI_MakeEdge2d.def("Edge", (const TopoDS_Edge & (BRepBuilderAPI_MakeEdge2d::*)()) &BRepBuilderAPI_MakeEdge2d::Edge, "None");
cls_BRepBuilderAPI_MakeEdge2d.def("Vertex1", (const TopoDS_Vertex & (BRepBuilderAPI_MakeEdge2d::*)() const) &BRepBuilderAPI_MakeEdge2d::Vertex1, "Returns the first vertex of the edge. May be Null.");
cls_BRepBuilderAPI_MakeEdge2d.def("Vertex2", (const TopoDS_Vertex & (BRepBuilderAPI_MakeEdge2d::*)() const) &BRepBuilderAPI_MakeEdge2d::Vertex2, "Returns the second vertex of the edge. May be Null.");

// Enums

}