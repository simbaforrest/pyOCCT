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
#include <StepShape_Loop.hxx>
#include <Standard_Handle.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepShape_Vertex.hxx>
#include <StepShape_VertexLoop.hxx>
#include <Standard_Type.hxx>

void bind_StepShape_VertexLoop(py::module &mod){

py::class_<StepShape_VertexLoop, opencascade::handle<StepShape_VertexLoop>, StepShape_Loop> cls_StepShape_VertexLoop(mod, "StepShape_VertexLoop", "None");

// Constructors
cls_StepShape_VertexLoop.def(py::init<>());

// Fields

// Methods
cls_StepShape_VertexLoop.def("Init", (void (StepShape_VertexLoop::*)(const opencascade::handle<TCollection_HAsciiString> &, const opencascade::handle<StepShape_Vertex> &)) &StepShape_VertexLoop::Init, "None", py::arg("aName"), py::arg("aLoopVertex"));
cls_StepShape_VertexLoop.def("SetLoopVertex", (void (StepShape_VertexLoop::*)(const opencascade::handle<StepShape_Vertex> &)) &StepShape_VertexLoop::SetLoopVertex, "None", py::arg("aLoopVertex"));
cls_StepShape_VertexLoop.def("LoopVertex", (opencascade::handle<StepShape_Vertex> (StepShape_VertexLoop::*)() const) &StepShape_VertexLoop::LoopVertex, "None");
cls_StepShape_VertexLoop.def_static("get_type_name_", (const char * (*)()) &StepShape_VertexLoop::get_type_name, "None");
cls_StepShape_VertexLoop.def_static("get_type_descriptor_", (const opencascade::handle<Standard_Type> & (*)()) &StepShape_VertexLoop::get_type_descriptor, "None");
cls_StepShape_VertexLoop.def("DynamicType", (const opencascade::handle<Standard_Type> & (StepShape_VertexLoop::*)() const) &StepShape_VertexLoop::DynamicType, "None");

// Enums

}