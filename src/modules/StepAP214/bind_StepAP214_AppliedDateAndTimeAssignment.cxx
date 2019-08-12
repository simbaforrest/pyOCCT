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
#include <StepBasic_DateAndTimeAssignment.hxx>
#include <Standard_Handle.hxx>
#include <StepBasic_DateAndTime.hxx>
#include <StepBasic_DateTimeRole.hxx>
#include <StepAP214_HArray1OfDateAndTimeItem.hxx>
#include <StepAP214_DateAndTimeItem.hxx>
#include <Standard_TypeDef.hxx>
#include <StepAP214_AppliedDateAndTimeAssignment.hxx>
#include <Standard_Type.hxx>

void bind_StepAP214_AppliedDateAndTimeAssignment(py::module &mod){

py::class_<StepAP214_AppliedDateAndTimeAssignment, opencascade::handle<StepAP214_AppliedDateAndTimeAssignment>, StepBasic_DateAndTimeAssignment> cls_StepAP214_AppliedDateAndTimeAssignment(mod, "StepAP214_AppliedDateAndTimeAssignment", "None");

// Constructors
cls_StepAP214_AppliedDateAndTimeAssignment.def(py::init<>());

// Fields

// Methods
cls_StepAP214_AppliedDateAndTimeAssignment.def("Init", (void (StepAP214_AppliedDateAndTimeAssignment::*)(const opencascade::handle<StepBasic_DateAndTime> &, const opencascade::handle<StepBasic_DateTimeRole> &, const opencascade::handle<StepAP214_HArray1OfDateAndTimeItem> &)) &StepAP214_AppliedDateAndTimeAssignment::Init, "None", py::arg("aAssignedDateAndTime"), py::arg("aRole"), py::arg("aItems"));
cls_StepAP214_AppliedDateAndTimeAssignment.def("SetItems", (void (StepAP214_AppliedDateAndTimeAssignment::*)(const opencascade::handle<StepAP214_HArray1OfDateAndTimeItem> &)) &StepAP214_AppliedDateAndTimeAssignment::SetItems, "None", py::arg("aItems"));
cls_StepAP214_AppliedDateAndTimeAssignment.def("Items", (opencascade::handle<StepAP214_HArray1OfDateAndTimeItem> (StepAP214_AppliedDateAndTimeAssignment::*)() const) &StepAP214_AppliedDateAndTimeAssignment::Items, "None");
cls_StepAP214_AppliedDateAndTimeAssignment.def("ItemsValue", (StepAP214_DateAndTimeItem (StepAP214_AppliedDateAndTimeAssignment::*)(const Standard_Integer) const) &StepAP214_AppliedDateAndTimeAssignment::ItemsValue, "None", py::arg("num"));
cls_StepAP214_AppliedDateAndTimeAssignment.def("NbItems", (Standard_Integer (StepAP214_AppliedDateAndTimeAssignment::*)() const) &StepAP214_AppliedDateAndTimeAssignment::NbItems, "None");
cls_StepAP214_AppliedDateAndTimeAssignment.def_static("get_type_name_", (const char * (*)()) &StepAP214_AppliedDateAndTimeAssignment::get_type_name, "None");
cls_StepAP214_AppliedDateAndTimeAssignment.def_static("get_type_descriptor_", (const opencascade::handle<Standard_Type> & (*)()) &StepAP214_AppliedDateAndTimeAssignment::get_type_descriptor, "None");
cls_StepAP214_AppliedDateAndTimeAssignment.def("DynamicType", (const opencascade::handle<Standard_Type> & (StepAP214_AppliedDateAndTimeAssignment::*)() const) &StepAP214_AppliedDateAndTimeAssignment::DynamicType, "None");

// Enums

}