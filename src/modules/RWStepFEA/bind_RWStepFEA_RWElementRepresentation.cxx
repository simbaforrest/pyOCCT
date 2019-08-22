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
#include <StepFEA_ElementRepresentation.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <RWStepFEA_RWElementRepresentation.hxx>

void bind_RWStepFEA_RWElementRepresentation(py::module &mod){

py::class_<RWStepFEA_RWElementRepresentation> cls_RWStepFEA_RWElementRepresentation(mod, "RWStepFEA_RWElementRepresentation", "Read & Write tool for ElementRepresentation");

// Constructors
cls_RWStepFEA_RWElementRepresentation.def(py::init<>());

// Fields

// Methods
// cls_RWStepFEA_RWElementRepresentation.def_static("operator new_", (void * (*)(size_t)) &RWStepFEA_RWElementRepresentation::operator new, "None", py::arg("theSize"));
// cls_RWStepFEA_RWElementRepresentation.def_static("operator delete_", (void (*)(void *)) &RWStepFEA_RWElementRepresentation::operator delete, "None", py::arg("theAddress"));
// cls_RWStepFEA_RWElementRepresentation.def_static("operator new[]_", (void * (*)(size_t)) &RWStepFEA_RWElementRepresentation::operator new[], "None", py::arg("theSize"));
// cls_RWStepFEA_RWElementRepresentation.def_static("operator delete[]_", (void (*)(void *)) &RWStepFEA_RWElementRepresentation::operator delete[], "None", py::arg("theAddress"));
// cls_RWStepFEA_RWElementRepresentation.def_static("operator new_", (void * (*)(size_t, void *)) &RWStepFEA_RWElementRepresentation::operator new, "None", py::arg(""), py::arg("theAddress"));
// cls_RWStepFEA_RWElementRepresentation.def_static("operator delete_", (void (*)(void *, void *)) &RWStepFEA_RWElementRepresentation::operator delete, "None", py::arg(""), py::arg(""));
cls_RWStepFEA_RWElementRepresentation.def("ReadStep", (void (RWStepFEA_RWElementRepresentation::*)(const opencascade::handle<StepData_StepReaderData> &, const Standard_Integer, opencascade::handle<Interface_Check> &, const opencascade::handle<StepFEA_ElementRepresentation> &) const) &RWStepFEA_RWElementRepresentation::ReadStep, "Reads ElementRepresentation", py::arg("data"), py::arg("num"), py::arg("ach"), py::arg("ent"));
cls_RWStepFEA_RWElementRepresentation.def("WriteStep", (void (RWStepFEA_RWElementRepresentation::*)(StepData_StepWriter &, const opencascade::handle<StepFEA_ElementRepresentation> &) const) &RWStepFEA_RWElementRepresentation::WriteStep, "Writes ElementRepresentation", py::arg("SW"), py::arg("ent"));
cls_RWStepFEA_RWElementRepresentation.def("Share", (void (RWStepFEA_RWElementRepresentation::*)(const opencascade::handle<StepFEA_ElementRepresentation> &, Interface_EntityIterator &) const) &RWStepFEA_RWElementRepresentation::Share, "Fills data for graph (shared items)", py::arg("ent"), py::arg("iter"));

// Enums

}