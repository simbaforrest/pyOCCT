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
#include <StepBasic_DateAssignment.hxx>
#include <Standard_Handle.hxx>
#include <StepBasic_Date.hxx>
#include <StepBasic_DateRole.hxx>
#include <StepAP214_HArray1OfAutoDesignDatedItem.hxx>
#include <StepAP214_AutoDesignDatedItem.hxx>
#include <Standard_TypeDef.hxx>
#include <StepAP214_AutoDesignActualDateAssignment.hxx>
#include <Standard_Type.hxx>

void bind_StepAP214_AutoDesignActualDateAssignment(py::module &mod){

py::class_<StepAP214_AutoDesignActualDateAssignment, opencascade::handle<StepAP214_AutoDesignActualDateAssignment>, StepBasic_DateAssignment> cls_StepAP214_AutoDesignActualDateAssignment(mod, "StepAP214_AutoDesignActualDateAssignment", "None");

// Constructors
cls_StepAP214_AutoDesignActualDateAssignment.def(py::init<>());

// Fields

// Methods
cls_StepAP214_AutoDesignActualDateAssignment.def("Init", (void (StepAP214_AutoDesignActualDateAssignment::*)(const opencascade::handle<StepBasic_Date> &, const opencascade::handle<StepBasic_DateRole> &, const opencascade::handle<StepAP214_HArray1OfAutoDesignDatedItem> &)) &StepAP214_AutoDesignActualDateAssignment::Init, "None", py::arg("aAssignedDate"), py::arg("aRole"), py::arg("aItems"));
cls_StepAP214_AutoDesignActualDateAssignment.def("SetItems", (void (StepAP214_AutoDesignActualDateAssignment::*)(const opencascade::handle<StepAP214_HArray1OfAutoDesignDatedItem> &)) &StepAP214_AutoDesignActualDateAssignment::SetItems, "None", py::arg("aItems"));
cls_StepAP214_AutoDesignActualDateAssignment.def("Items", (opencascade::handle<StepAP214_HArray1OfAutoDesignDatedItem> (StepAP214_AutoDesignActualDateAssignment::*)() const) &StepAP214_AutoDesignActualDateAssignment::Items, "None");
cls_StepAP214_AutoDesignActualDateAssignment.def("ItemsValue", (StepAP214_AutoDesignDatedItem (StepAP214_AutoDesignActualDateAssignment::*)(const Standard_Integer) const) &StepAP214_AutoDesignActualDateAssignment::ItemsValue, "None", py::arg("num"));
cls_StepAP214_AutoDesignActualDateAssignment.def("NbItems", (Standard_Integer (StepAP214_AutoDesignActualDateAssignment::*)() const) &StepAP214_AutoDesignActualDateAssignment::NbItems, "None");
cls_StepAP214_AutoDesignActualDateAssignment.def_static("get_type_name_", (const char * (*)()) &StepAP214_AutoDesignActualDateAssignment::get_type_name, "None");
cls_StepAP214_AutoDesignActualDateAssignment.def_static("get_type_descriptor_", (const opencascade::handle<Standard_Type> & (*)()) &StepAP214_AutoDesignActualDateAssignment::get_type_descriptor, "None");
cls_StepAP214_AutoDesignActualDateAssignment.def("DynamicType", (const opencascade::handle<Standard_Type> & (StepAP214_AutoDesignActualDateAssignment::*)() const) &StepAP214_AutoDesignActualDateAssignment::DynamicType, "None");

// Enums

}