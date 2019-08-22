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
#include <StepShape_PointRepresentation.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <RWStepShape_RWPointRepresentation.hxx>

void bind_RWStepShape_RWPointRepresentation(py::module &mod){

py::class_<RWStepShape_RWPointRepresentation> cls_RWStepShape_RWPointRepresentation(mod, "RWStepShape_RWPointRepresentation", "Read & Write tool for PointRepresentation");

// Constructors
cls_RWStepShape_RWPointRepresentation.def(py::init<>());

// Fields

// Methods
// cls_RWStepShape_RWPointRepresentation.def_static("operator new_", (void * (*)(size_t)) &RWStepShape_RWPointRepresentation::operator new, "None", py::arg("theSize"));
// cls_RWStepShape_RWPointRepresentation.def_static("operator delete_", (void (*)(void *)) &RWStepShape_RWPointRepresentation::operator delete, "None", py::arg("theAddress"));
// cls_RWStepShape_RWPointRepresentation.def_static("operator new[]_", (void * (*)(size_t)) &RWStepShape_RWPointRepresentation::operator new[], "None", py::arg("theSize"));
// cls_RWStepShape_RWPointRepresentation.def_static("operator delete[]_", (void (*)(void *)) &RWStepShape_RWPointRepresentation::operator delete[], "None", py::arg("theAddress"));
// cls_RWStepShape_RWPointRepresentation.def_static("operator new_", (void * (*)(size_t, void *)) &RWStepShape_RWPointRepresentation::operator new, "None", py::arg(""), py::arg("theAddress"));
// cls_RWStepShape_RWPointRepresentation.def_static("operator delete_", (void (*)(void *, void *)) &RWStepShape_RWPointRepresentation::operator delete, "None", py::arg(""), py::arg(""));
cls_RWStepShape_RWPointRepresentation.def("ReadStep", (void (RWStepShape_RWPointRepresentation::*)(const opencascade::handle<StepData_StepReaderData> &, const Standard_Integer, opencascade::handle<Interface_Check> &, const opencascade::handle<StepShape_PointRepresentation> &) const) &RWStepShape_RWPointRepresentation::ReadStep, "Reads PointRepresentation", py::arg("data"), py::arg("num"), py::arg("ach"), py::arg("ent"));
cls_RWStepShape_RWPointRepresentation.def("WriteStep", (void (RWStepShape_RWPointRepresentation::*)(StepData_StepWriter &, const opencascade::handle<StepShape_PointRepresentation> &) const) &RWStepShape_RWPointRepresentation::WriteStep, "Writes PointRepresentation", py::arg("SW"), py::arg("ent"));
cls_RWStepShape_RWPointRepresentation.def("Share", (void (RWStepShape_RWPointRepresentation::*)(const opencascade::handle<StepShape_PointRepresentation> &, Interface_EntityIterator &) const) &RWStepShape_RWPointRepresentation::Share, "Fills data for graph (shared items)", py::arg("ent"), py::arg("iter"));

// Enums

}