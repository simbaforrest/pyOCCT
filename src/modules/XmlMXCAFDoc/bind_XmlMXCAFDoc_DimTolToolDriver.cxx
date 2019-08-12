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
#include <XmlMXCAFDoc_DimTolToolDriver.hxx>
#include <Standard_Type.hxx>

void bind_XmlMXCAFDoc_DimTolToolDriver(py::module &mod){

py::class_<XmlMXCAFDoc_DimTolToolDriver, opencascade::handle<XmlMXCAFDoc_DimTolToolDriver>, XmlMDF_ADriver> cls_XmlMXCAFDoc_DimTolToolDriver(mod, "XmlMXCAFDoc_DimTolToolDriver", "Attribute Driver.");

// Constructors
cls_XmlMXCAFDoc_DimTolToolDriver.def(py::init<const opencascade::handle<Message_Messenger> &>(), py::arg("theMsgDriver"));

// Fields

// Methods
cls_XmlMXCAFDoc_DimTolToolDriver.def("NewEmpty", (opencascade::handle<TDF_Attribute> (XmlMXCAFDoc_DimTolToolDriver::*)() const) &XmlMXCAFDoc_DimTolToolDriver::NewEmpty, "None");
cls_XmlMXCAFDoc_DimTolToolDriver.def("Paste", (Standard_Boolean (XmlMXCAFDoc_DimTolToolDriver::*)(const XmlObjMgt_Persistent &, const opencascade::handle<TDF_Attribute> &, XmlObjMgt_RRelocationTable &) const) &XmlMXCAFDoc_DimTolToolDriver::Paste, "None", py::arg("theSource"), py::arg("theTarget"), py::arg("theRelocTable"));
cls_XmlMXCAFDoc_DimTolToolDriver.def("Paste", (void (XmlMXCAFDoc_DimTolToolDriver::*)(const opencascade::handle<TDF_Attribute> &, XmlObjMgt_Persistent &, XmlObjMgt_SRelocationTable &) const) &XmlMXCAFDoc_DimTolToolDriver::Paste, "None", py::arg("theSource"), py::arg("theTarget"), py::arg("theRelocTable"));
cls_XmlMXCAFDoc_DimTolToolDriver.def_static("get_type_name_", (const char * (*)()) &XmlMXCAFDoc_DimTolToolDriver::get_type_name, "None");
cls_XmlMXCAFDoc_DimTolToolDriver.def_static("get_type_descriptor_", (const opencascade::handle<Standard_Type> & (*)()) &XmlMXCAFDoc_DimTolToolDriver::get_type_descriptor, "None");
cls_XmlMXCAFDoc_DimTolToolDriver.def("DynamicType", (const opencascade::handle<Standard_Type> & (XmlMXCAFDoc_DimTolToolDriver::*)() const) &XmlMXCAFDoc_DimTolToolDriver::DynamicType, "None");

// Enums

}