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
#include <StepElement_CurveElementSectionDefinition.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <RWStepElement_RWCurveElementSectionDefinition.hxx>

void bind_RWStepElement_RWCurveElementSectionDefinition(py::module &mod){

py::class_<RWStepElement_RWCurveElementSectionDefinition, std::unique_ptr<RWStepElement_RWCurveElementSectionDefinition, Deleter<RWStepElement_RWCurveElementSectionDefinition>>> cls_RWStepElement_RWCurveElementSectionDefinition(mod, "RWStepElement_RWCurveElementSectionDefinition", "Read & Write tool for CurveElementSectionDefinition");

// Constructors
cls_RWStepElement_RWCurveElementSectionDefinition.def(py::init<>());

// Fields

// Methods
// cls_RWStepElement_RWCurveElementSectionDefinition.def_static("operator new_", (void * (*)(size_t)) &RWStepElement_RWCurveElementSectionDefinition::operator new, "None", py::arg("theSize"));
// cls_RWStepElement_RWCurveElementSectionDefinition.def_static("operator delete_", (void (*)(void *)) &RWStepElement_RWCurveElementSectionDefinition::operator delete, "None", py::arg("theAddress"));
// cls_RWStepElement_RWCurveElementSectionDefinition.def_static("operator new[]_", (void * (*)(size_t)) &RWStepElement_RWCurveElementSectionDefinition::operator new[], "None", py::arg("theSize"));
// cls_RWStepElement_RWCurveElementSectionDefinition.def_static("operator delete[]_", (void (*)(void *)) &RWStepElement_RWCurveElementSectionDefinition::operator delete[], "None", py::arg("theAddress"));
// cls_RWStepElement_RWCurveElementSectionDefinition.def_static("operator new_", (void * (*)(size_t, void *)) &RWStepElement_RWCurveElementSectionDefinition::operator new, "None", py::arg(""), py::arg("theAddress"));
// cls_RWStepElement_RWCurveElementSectionDefinition.def_static("operator delete_", (void (*)(void *, void *)) &RWStepElement_RWCurveElementSectionDefinition::operator delete, "None", py::arg(""), py::arg(""));
cls_RWStepElement_RWCurveElementSectionDefinition.def("ReadStep", (void (RWStepElement_RWCurveElementSectionDefinition::*)(const opencascade::handle<StepData_StepReaderData> &, const Standard_Integer, opencascade::handle<Interface_Check> &, const opencascade::handle<StepElement_CurveElementSectionDefinition> &) const) &RWStepElement_RWCurveElementSectionDefinition::ReadStep, "Reads CurveElementSectionDefinition", py::arg("data"), py::arg("num"), py::arg("ach"), py::arg("ent"));
cls_RWStepElement_RWCurveElementSectionDefinition.def("WriteStep", (void (RWStepElement_RWCurveElementSectionDefinition::*)(StepData_StepWriter &, const opencascade::handle<StepElement_CurveElementSectionDefinition> &) const) &RWStepElement_RWCurveElementSectionDefinition::WriteStep, "Writes CurveElementSectionDefinition", py::arg("SW"), py::arg("ent"));
cls_RWStepElement_RWCurveElementSectionDefinition.def("Share", (void (RWStepElement_RWCurveElementSectionDefinition::*)(const opencascade::handle<StepElement_CurveElementSectionDefinition> &, Interface_EntityIterator &) const) &RWStepElement_RWCurveElementSectionDefinition::Share, "Fills data for graph (shared items)", py::arg("ent"), py::arg("iter"));

// Enums

}