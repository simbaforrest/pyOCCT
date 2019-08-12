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
#include <Standard_Handle.hxx>
#include <StepData_StepReaderData.hxx>
#include <Standard_TypeDef.hxx>
#include <Interface_Check.hxx>
#include <StepFEA_Node.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <RWStepFEA_RWNode.hxx>

void bind_RWStepFEA_RWNode(py::module &mod){

py::class_<RWStepFEA_RWNode, std::unique_ptr<RWStepFEA_RWNode, Deleter<RWStepFEA_RWNode>>> cls_RWStepFEA_RWNode(mod, "RWStepFEA_RWNode", "Read & Write tool for Node");

// Constructors
cls_RWStepFEA_RWNode.def(py::init<>());

// Fields

// Methods
// cls_RWStepFEA_RWNode.def_static("operator new_", (void * (*)(size_t)) &RWStepFEA_RWNode::operator new, "None", py::arg("theSize"));
// cls_RWStepFEA_RWNode.def_static("operator delete_", (void (*)(void *)) &RWStepFEA_RWNode::operator delete, "None", py::arg("theAddress"));
// cls_RWStepFEA_RWNode.def_static("operator new[]_", (void * (*)(size_t)) &RWStepFEA_RWNode::operator new[], "None", py::arg("theSize"));
// cls_RWStepFEA_RWNode.def_static("operator delete[]_", (void (*)(void *)) &RWStepFEA_RWNode::operator delete[], "None", py::arg("theAddress"));
// cls_RWStepFEA_RWNode.def_static("operator new_", (void * (*)(size_t, void *)) &RWStepFEA_RWNode::operator new, "None", py::arg(""), py::arg("theAddress"));
// cls_RWStepFEA_RWNode.def_static("operator delete_", (void (*)(void *, void *)) &RWStepFEA_RWNode::operator delete, "None", py::arg(""), py::arg(""));
cls_RWStepFEA_RWNode.def("ReadStep", (void (RWStepFEA_RWNode::*)(const opencascade::handle<StepData_StepReaderData> &, const Standard_Integer, opencascade::handle<Interface_Check> &, const opencascade::handle<StepFEA_Node> &) const) &RWStepFEA_RWNode::ReadStep, "Reads Node", py::arg("data"), py::arg("num"), py::arg("ach"), py::arg("ent"));
cls_RWStepFEA_RWNode.def("WriteStep", (void (RWStepFEA_RWNode::*)(StepData_StepWriter &, const opencascade::handle<StepFEA_Node> &) const) &RWStepFEA_RWNode::WriteStep, "Writes Node", py::arg("SW"), py::arg("ent"));
cls_RWStepFEA_RWNode.def("Share", (void (RWStepFEA_RWNode::*)(const opencascade::handle<StepFEA_Node> &, Interface_EntityIterator &) const) &RWStepFEA_RWNode::Share, "Fills data for graph (shared items)", py::arg("ent"), py::arg("iter"));

// Enums

}