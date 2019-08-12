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
#include <Standard_Transient.hxx>
#include <Standard_Handle.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepBasic_CertificationType.hxx>
#include <StepBasic_Certification.hxx>
#include <Standard_Type.hxx>

void bind_StepBasic_Certification(py::module &mod){

py::class_<StepBasic_Certification, opencascade::handle<StepBasic_Certification>, Standard_Transient> cls_StepBasic_Certification(mod, "StepBasic_Certification", "Representation of STEP entity Certification");

// Constructors
cls_StepBasic_Certification.def(py::init<>());

// Fields

// Methods
cls_StepBasic_Certification.def("Init", (void (StepBasic_Certification::*)(const opencascade::handle<TCollection_HAsciiString> &, const opencascade::handle<TCollection_HAsciiString> &, const opencascade::handle<StepBasic_CertificationType> &)) &StepBasic_Certification::Init, "Initialize all fields (own and inherited)", py::arg("aName"), py::arg("aPurpose"), py::arg("aKind"));
cls_StepBasic_Certification.def("Name", (opencascade::handle<TCollection_HAsciiString> (StepBasic_Certification::*)() const) &StepBasic_Certification::Name, "Returns field Name");
cls_StepBasic_Certification.def("SetName", (void (StepBasic_Certification::*)(const opencascade::handle<TCollection_HAsciiString> &)) &StepBasic_Certification::SetName, "Set field Name", py::arg("Name"));
cls_StepBasic_Certification.def("Purpose", (opencascade::handle<TCollection_HAsciiString> (StepBasic_Certification::*)() const) &StepBasic_Certification::Purpose, "Returns field Purpose");
cls_StepBasic_Certification.def("SetPurpose", (void (StepBasic_Certification::*)(const opencascade::handle<TCollection_HAsciiString> &)) &StepBasic_Certification::SetPurpose, "Set field Purpose", py::arg("Purpose"));
cls_StepBasic_Certification.def("Kind", (opencascade::handle<StepBasic_CertificationType> (StepBasic_Certification::*)() const) &StepBasic_Certification::Kind, "Returns field Kind");
cls_StepBasic_Certification.def("SetKind", (void (StepBasic_Certification::*)(const opencascade::handle<StepBasic_CertificationType> &)) &StepBasic_Certification::SetKind, "Set field Kind", py::arg("Kind"));
cls_StepBasic_Certification.def_static("get_type_name_", (const char * (*)()) &StepBasic_Certification::get_type_name, "None");
cls_StepBasic_Certification.def_static("get_type_descriptor_", (const opencascade::handle<Standard_Type> & (*)()) &StepBasic_Certification::get_type_descriptor, "None");
cls_StepBasic_Certification.def("DynamicType", (const opencascade::handle<Standard_Type> & (StepBasic_Certification::*)() const) &StepBasic_Certification::DynamicType, "None");

// Enums

}