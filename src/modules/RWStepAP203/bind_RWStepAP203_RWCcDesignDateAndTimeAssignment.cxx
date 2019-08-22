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
#include <StepAP203_CcDesignDateAndTimeAssignment.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_EntityIterator.hxx>
#include <RWStepAP203_RWCcDesignDateAndTimeAssignment.hxx>

void bind_RWStepAP203_RWCcDesignDateAndTimeAssignment(py::module &mod){

py::class_<RWStepAP203_RWCcDesignDateAndTimeAssignment> cls_RWStepAP203_RWCcDesignDateAndTimeAssignment(mod, "RWStepAP203_RWCcDesignDateAndTimeAssignment", "Read & Write tool for CcDesignDateAndTimeAssignment");

// Constructors
cls_RWStepAP203_RWCcDesignDateAndTimeAssignment.def(py::init<>());

// Fields

// Methods
// cls_RWStepAP203_RWCcDesignDateAndTimeAssignment.def_static("operator new_", (void * (*)(size_t)) &RWStepAP203_RWCcDesignDateAndTimeAssignment::operator new, "None", py::arg("theSize"));
// cls_RWStepAP203_RWCcDesignDateAndTimeAssignment.def_static("operator delete_", (void (*)(void *)) &RWStepAP203_RWCcDesignDateAndTimeAssignment::operator delete, "None", py::arg("theAddress"));
// cls_RWStepAP203_RWCcDesignDateAndTimeAssignment.def_static("operator new[]_", (void * (*)(size_t)) &RWStepAP203_RWCcDesignDateAndTimeAssignment::operator new[], "None", py::arg("theSize"));
// cls_RWStepAP203_RWCcDesignDateAndTimeAssignment.def_static("operator delete[]_", (void (*)(void *)) &RWStepAP203_RWCcDesignDateAndTimeAssignment::operator delete[], "None", py::arg("theAddress"));
// cls_RWStepAP203_RWCcDesignDateAndTimeAssignment.def_static("operator new_", (void * (*)(size_t, void *)) &RWStepAP203_RWCcDesignDateAndTimeAssignment::operator new, "None", py::arg(""), py::arg("theAddress"));
// cls_RWStepAP203_RWCcDesignDateAndTimeAssignment.def_static("operator delete_", (void (*)(void *, void *)) &RWStepAP203_RWCcDesignDateAndTimeAssignment::operator delete, "None", py::arg(""), py::arg(""));
cls_RWStepAP203_RWCcDesignDateAndTimeAssignment.def("ReadStep", (void (RWStepAP203_RWCcDesignDateAndTimeAssignment::*)(const opencascade::handle<StepData_StepReaderData> &, const Standard_Integer, opencascade::handle<Interface_Check> &, const opencascade::handle<StepAP203_CcDesignDateAndTimeAssignment> &) const) &RWStepAP203_RWCcDesignDateAndTimeAssignment::ReadStep, "Reads CcDesignDateAndTimeAssignment", py::arg("data"), py::arg("num"), py::arg("ach"), py::arg("ent"));
cls_RWStepAP203_RWCcDesignDateAndTimeAssignment.def("WriteStep", (void (RWStepAP203_RWCcDesignDateAndTimeAssignment::*)(StepData_StepWriter &, const opencascade::handle<StepAP203_CcDesignDateAndTimeAssignment> &) const) &RWStepAP203_RWCcDesignDateAndTimeAssignment::WriteStep, "Writes CcDesignDateAndTimeAssignment", py::arg("SW"), py::arg("ent"));
cls_RWStepAP203_RWCcDesignDateAndTimeAssignment.def("Share", (void (RWStepAP203_RWCcDesignDateAndTimeAssignment::*)(const opencascade::handle<StepAP203_CcDesignDateAndTimeAssignment> &, Interface_EntityIterator &) const) &RWStepAP203_RWCcDesignDateAndTimeAssignment::Share, "Fills data for graph (shared items)", py::arg("ent"), py::arg("iter"));

// Enums

}