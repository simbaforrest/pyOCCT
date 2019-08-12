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
#include <Interface_HArray1OfHAsciiString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <Standard_TypeDef.hxx>
#include <HeaderSection_FileDescription.hxx>
#include <Standard_Type.hxx>

void bind_HeaderSection_FileDescription(py::module &mod){

py::class_<HeaderSection_FileDescription, opencascade::handle<HeaderSection_FileDescription>, Standard_Transient> cls_HeaderSection_FileDescription(mod, "HeaderSection_FileDescription", "None");

// Constructors
cls_HeaderSection_FileDescription.def(py::init<>());

// Fields

// Methods
cls_HeaderSection_FileDescription.def("Init", (void (HeaderSection_FileDescription::*)(const opencascade::handle<Interface_HArray1OfHAsciiString> &, const opencascade::handle<TCollection_HAsciiString> &)) &HeaderSection_FileDescription::Init, "None", py::arg("aDescription"), py::arg("aImplementationLevel"));
cls_HeaderSection_FileDescription.def("SetDescription", (void (HeaderSection_FileDescription::*)(const opencascade::handle<Interface_HArray1OfHAsciiString> &)) &HeaderSection_FileDescription::SetDescription, "None", py::arg("aDescription"));
cls_HeaderSection_FileDescription.def("Description", (opencascade::handle<Interface_HArray1OfHAsciiString> (HeaderSection_FileDescription::*)() const) &HeaderSection_FileDescription::Description, "None");
cls_HeaderSection_FileDescription.def("DescriptionValue", (opencascade::handle<TCollection_HAsciiString> (HeaderSection_FileDescription::*)(const Standard_Integer) const) &HeaderSection_FileDescription::DescriptionValue, "None", py::arg("num"));
cls_HeaderSection_FileDescription.def("NbDescription", (Standard_Integer (HeaderSection_FileDescription::*)() const) &HeaderSection_FileDescription::NbDescription, "None");
cls_HeaderSection_FileDescription.def("SetImplementationLevel", (void (HeaderSection_FileDescription::*)(const opencascade::handle<TCollection_HAsciiString> &)) &HeaderSection_FileDescription::SetImplementationLevel, "None", py::arg("aImplementationLevel"));
cls_HeaderSection_FileDescription.def("ImplementationLevel", (opencascade::handle<TCollection_HAsciiString> (HeaderSection_FileDescription::*)() const) &HeaderSection_FileDescription::ImplementationLevel, "None");
cls_HeaderSection_FileDescription.def_static("get_type_name_", (const char * (*)()) &HeaderSection_FileDescription::get_type_name, "None");
cls_HeaderSection_FileDescription.def_static("get_type_descriptor_", (const opencascade::handle<Standard_Type> & (*)()) &HeaderSection_FileDescription::get_type_descriptor, "None");
cls_HeaderSection_FileDescription.def("DynamicType", (const opencascade::handle<Standard_Type> & (HeaderSection_FileDescription::*)() const) &HeaderSection_FileDescription::DynamicType, "None");

// Enums

}