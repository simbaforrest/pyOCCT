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
#include <XmlMDataXtd_ShapeDriver.hxx>
#include <Standard_Type.hxx>

void bind_XmlMDataXtd_ShapeDriver(py::module &mod){

py::class_<XmlMDataXtd_ShapeDriver, opencascade::handle<XmlMDataXtd_ShapeDriver>, XmlMDF_ADriver> cls_XmlMDataXtd_ShapeDriver(mod, "XmlMDataXtd_ShapeDriver", "Attribute Driver.");

// Constructors
cls_XmlMDataXtd_ShapeDriver.def(py::init<const opencascade::handle<Message_Messenger> &>(), py::arg("theMessageDriver"));

// Fields

// Methods
cls_XmlMDataXtd_ShapeDriver.def("NewEmpty", (opencascade::handle<TDF_Attribute> (XmlMDataXtd_ShapeDriver::*)() const) &XmlMDataXtd_ShapeDriver::NewEmpty, "None");
cls_XmlMDataXtd_ShapeDriver.def("Paste", (Standard_Boolean (XmlMDataXtd_ShapeDriver::*)(const XmlObjMgt_Persistent &, const opencascade::handle<TDF_Attribute> &, XmlObjMgt_RRelocationTable &) const) &XmlMDataXtd_ShapeDriver::Paste, "None", py::arg("Source"), py::arg("Target"), py::arg("RelocTable"));
cls_XmlMDataXtd_ShapeDriver.def("Paste", (void (XmlMDataXtd_ShapeDriver::*)(const opencascade::handle<TDF_Attribute> &, XmlObjMgt_Persistent &, XmlObjMgt_SRelocationTable &) const) &XmlMDataXtd_ShapeDriver::Paste, "None", py::arg("Source"), py::arg("Target"), py::arg("RelocTable"));
cls_XmlMDataXtd_ShapeDriver.def_static("get_type_name_", (const char * (*)()) &XmlMDataXtd_ShapeDriver::get_type_name, "None");
cls_XmlMDataXtd_ShapeDriver.def_static("get_type_descriptor_", (const opencascade::handle<Standard_Type> & (*)()) &XmlMDataXtd_ShapeDriver::get_type_descriptor, "None");
cls_XmlMDataXtd_ShapeDriver.def("DynamicType", (const opencascade::handle<Standard_Type> & (XmlMDataXtd_ShapeDriver::*)() const) &XmlMDataXtd_ShapeDriver::DynamicType, "None");

// Enums

}