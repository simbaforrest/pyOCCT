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
#include <XmlMDF_ADriver.hxx>
#include <Standard_Handle.hxx>
#include <Message_Messenger.hxx>
#include <TDF_Attribute.hxx>
#include <Standard_TypeDef.hxx>
#include <XmlObjMgt_Persistent.hxx>
#include <XmlObjMgt_RRelocationTable.hxx>
#include <XmlObjMgt_SRelocationTable.hxx>
#include <XmlMDataStd_RealListDriver.hxx>
#include <Standard_Type.hxx>

void bind_XmlMDataStd_RealListDriver(py::module &mod){

py::class_<XmlMDataStd_RealListDriver, opencascade::handle<XmlMDataStd_RealListDriver>, XmlMDF_ADriver> cls_XmlMDataStd_RealListDriver(mod, "XmlMDataStd_RealListDriver", "None");

// Constructors
cls_XmlMDataStd_RealListDriver.def(py::init<const opencascade::handle<Message_Messenger> &>(), py::arg("theMessageDriver"));

// Fields

// Methods
cls_XmlMDataStd_RealListDriver.def("NewEmpty", (opencascade::handle<TDF_Attribute> (XmlMDataStd_RealListDriver::*)() const) &XmlMDataStd_RealListDriver::NewEmpty, "None");
cls_XmlMDataStd_RealListDriver.def("Paste", (Standard_Boolean (XmlMDataStd_RealListDriver::*)(const XmlObjMgt_Persistent &, const opencascade::handle<TDF_Attribute> &, XmlObjMgt_RRelocationTable &) const) &XmlMDataStd_RealListDriver::Paste, "None", py::arg("Source"), py::arg("Target"), py::arg("RelocTable"));
cls_XmlMDataStd_RealListDriver.def("Paste", (void (XmlMDataStd_RealListDriver::*)(const opencascade::handle<TDF_Attribute> &, XmlObjMgt_Persistent &, XmlObjMgt_SRelocationTable &) const) &XmlMDataStd_RealListDriver::Paste, "None", py::arg("Source"), py::arg("Target"), py::arg("RelocTable"));
cls_XmlMDataStd_RealListDriver.def_static("get_type_name_", (const char * (*)()) &XmlMDataStd_RealListDriver::get_type_name, "None");
cls_XmlMDataStd_RealListDriver.def_static("get_type_descriptor_", (const opencascade::handle<Standard_Type> & (*)()) &XmlMDataStd_RealListDriver::get_type_descriptor, "None");
cls_XmlMDataStd_RealListDriver.def("DynamicType", (const opencascade::handle<Standard_Type> & (XmlMDataStd_RealListDriver::*)() const) &XmlMDataStd_RealListDriver::DynamicType, "None");

// Enums

}