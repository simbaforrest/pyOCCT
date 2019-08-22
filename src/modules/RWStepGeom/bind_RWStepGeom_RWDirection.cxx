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
#include <StepGeom_Direction.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_ShareTool.hxx>
#include <RWStepGeom_RWDirection.hxx>

void bind_RWStepGeom_RWDirection(py::module &mod){

py::class_<RWStepGeom_RWDirection> cls_RWStepGeom_RWDirection(mod, "RWStepGeom_RWDirection", "Read & Write Module for Direction Check added by CKY , 7-OCT-1996");

// Constructors
cls_RWStepGeom_RWDirection.def(py::init<>());

// Fields

// Methods
// cls_RWStepGeom_RWDirection.def_static("operator new_", (void * (*)(size_t)) &RWStepGeom_RWDirection::operator new, "None", py::arg("theSize"));
// cls_RWStepGeom_RWDirection.def_static("operator delete_", (void (*)(void *)) &RWStepGeom_RWDirection::operator delete, "None", py::arg("theAddress"));
// cls_RWStepGeom_RWDirection.def_static("operator new[]_", (void * (*)(size_t)) &RWStepGeom_RWDirection::operator new[], "None", py::arg("theSize"));
// cls_RWStepGeom_RWDirection.def_static("operator delete[]_", (void (*)(void *)) &RWStepGeom_RWDirection::operator delete[], "None", py::arg("theAddress"));
// cls_RWStepGeom_RWDirection.def_static("operator new_", (void * (*)(size_t, void *)) &RWStepGeom_RWDirection::operator new, "None", py::arg(""), py::arg("theAddress"));
// cls_RWStepGeom_RWDirection.def_static("operator delete_", (void (*)(void *, void *)) &RWStepGeom_RWDirection::operator delete, "None", py::arg(""), py::arg(""));
cls_RWStepGeom_RWDirection.def("ReadStep", (void (RWStepGeom_RWDirection::*)(const opencascade::handle<StepData_StepReaderData> &, const Standard_Integer, opencascade::handle<Interface_Check> &, const opencascade::handle<StepGeom_Direction> &) const) &RWStepGeom_RWDirection::ReadStep, "None", py::arg("data"), py::arg("num"), py::arg("ach"), py::arg("ent"));
cls_RWStepGeom_RWDirection.def("WriteStep", (void (RWStepGeom_RWDirection::*)(StepData_StepWriter &, const opencascade::handle<StepGeom_Direction> &) const) &RWStepGeom_RWDirection::WriteStep, "None", py::arg("SW"), py::arg("ent"));
cls_RWStepGeom_RWDirection.def("Check", (void (RWStepGeom_RWDirection::*)(const opencascade::handle<StepGeom_Direction> &, const Interface_ShareTool &, opencascade::handle<Interface_Check> &) const) &RWStepGeom_RWDirection::Check, "None", py::arg("ent"), py::arg("shares"), py::arg("ach"));

// Enums

}