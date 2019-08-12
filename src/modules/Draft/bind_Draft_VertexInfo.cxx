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
#include <TopoDS_Edge.hxx>
#include <gp_Pnt.hxx>
#include <Standard_TypeDef.hxx>
#include <TopTools_ListOfShape.hxx>
#include <TColStd_ListOfReal.hxx>
#include <Draft_VertexInfo.hxx>

void bind_Draft_VertexInfo(py::module &mod){

py::class_<Draft_VertexInfo, std::unique_ptr<Draft_VertexInfo, Deleter<Draft_VertexInfo>>> cls_Draft_VertexInfo(mod, "Draft_VertexInfo", "None");

// Constructors
cls_Draft_VertexInfo.def(py::init<>());

// Fields

// Methods
// cls_Draft_VertexInfo.def_static("operator new_", (void * (*)(size_t)) &Draft_VertexInfo::operator new, "None", py::arg("theSize"));
// cls_Draft_VertexInfo.def_static("operator delete_", (void (*)(void *)) &Draft_VertexInfo::operator delete, "None", py::arg("theAddress"));
// cls_Draft_VertexInfo.def_static("operator new[]_", (void * (*)(size_t)) &Draft_VertexInfo::operator new[], "None", py::arg("theSize"));
// cls_Draft_VertexInfo.def_static("operator delete[]_", (void (*)(void *)) &Draft_VertexInfo::operator delete[], "None", py::arg("theAddress"));
// cls_Draft_VertexInfo.def_static("operator new_", (void * (*)(size_t, void *)) &Draft_VertexInfo::operator new, "None", py::arg(""), py::arg("theAddress"));
// cls_Draft_VertexInfo.def_static("operator delete_", (void (*)(void *, void *)) &Draft_VertexInfo::operator delete, "None", py::arg(""), py::arg(""));
cls_Draft_VertexInfo.def("Add", (void (Draft_VertexInfo::*)(const TopoDS_Edge &)) &Draft_VertexInfo::Add, "None", py::arg("E"));
cls_Draft_VertexInfo.def("Geometry", (const gp_Pnt & (Draft_VertexInfo::*)() const) &Draft_VertexInfo::Geometry, "None");
cls_Draft_VertexInfo.def("Parameter", (Standard_Real (Draft_VertexInfo::*)(const TopoDS_Edge &)) &Draft_VertexInfo::Parameter, "None", py::arg("E"));
cls_Draft_VertexInfo.def("InitEdgeIterator", (void (Draft_VertexInfo::*)()) &Draft_VertexInfo::InitEdgeIterator, "None");
cls_Draft_VertexInfo.def("Edge", (const TopoDS_Edge & (Draft_VertexInfo::*)() const) &Draft_VertexInfo::Edge, "None");
cls_Draft_VertexInfo.def("NextEdge", (void (Draft_VertexInfo::*)()) &Draft_VertexInfo::NextEdge, "None");
cls_Draft_VertexInfo.def("MoreEdge", (Standard_Boolean (Draft_VertexInfo::*)() const) &Draft_VertexInfo::MoreEdge, "None");
cls_Draft_VertexInfo.def("ChangeGeometry", (gp_Pnt & (Draft_VertexInfo::*)()) &Draft_VertexInfo::ChangeGeometry, "None");
cls_Draft_VertexInfo.def("ChangeParameter", (Standard_Real & (Draft_VertexInfo::*)(const TopoDS_Edge &)) &Draft_VertexInfo::ChangeParameter, "None", py::arg("E"));

// Enums

}