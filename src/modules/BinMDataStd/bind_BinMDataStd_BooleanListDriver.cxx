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
#include <BinMDF_ADriver.hxx>
#include <Standard_Handle.hxx>
#include <Message_Messenger.hxx>
#include <TDF_Attribute.hxx>
#include <Standard_TypeDef.hxx>
#include <BinObjMgt_Persistent.hxx>
#include <BinObjMgt_RRelocationTable.hxx>
#include <BinObjMgt_SRelocationTable.hxx>
#include <BinMDataStd_BooleanListDriver.hxx>
#include <Standard_Type.hxx>

void bind_BinMDataStd_BooleanListDriver(py::module &mod){

py::class_<BinMDataStd_BooleanListDriver, opencascade::handle<BinMDataStd_BooleanListDriver>, BinMDF_ADriver> cls_BinMDataStd_BooleanListDriver(mod, "BinMDataStd_BooleanListDriver", "None");

// Constructors
cls_BinMDataStd_BooleanListDriver.def(py::init<const opencascade::handle<Message_Messenger> &>(), py::arg("theMessageDriver"));

// Fields

// Methods
cls_BinMDataStd_BooleanListDriver.def("NewEmpty", (opencascade::handle<TDF_Attribute> (BinMDataStd_BooleanListDriver::*)() const) &BinMDataStd_BooleanListDriver::NewEmpty, "None");
cls_BinMDataStd_BooleanListDriver.def("Paste", (Standard_Boolean (BinMDataStd_BooleanListDriver::*)(const BinObjMgt_Persistent &, const opencascade::handle<TDF_Attribute> &, BinObjMgt_RRelocationTable &) const) &BinMDataStd_BooleanListDriver::Paste, "None", py::arg("Source"), py::arg("Target"), py::arg("RelocTable"));
cls_BinMDataStd_BooleanListDriver.def("Paste", (void (BinMDataStd_BooleanListDriver::*)(const opencascade::handle<TDF_Attribute> &, BinObjMgt_Persistent &, BinObjMgt_SRelocationTable &) const) &BinMDataStd_BooleanListDriver::Paste, "None", py::arg("Source"), py::arg("Target"), py::arg("RelocTable"));
cls_BinMDataStd_BooleanListDriver.def_static("get_type_name_", (const char * (*)()) &BinMDataStd_BooleanListDriver::get_type_name, "None");
cls_BinMDataStd_BooleanListDriver.def_static("get_type_descriptor_", (const opencascade::handle<Standard_Type> & (*)()) &BinMDataStd_BooleanListDriver::get_type_descriptor, "None");
cls_BinMDataStd_BooleanListDriver.def("DynamicType", (const opencascade::handle<Standard_Type> & (BinMDataStd_BooleanListDriver::*)() const) &BinMDataStd_BooleanListDriver::DynamicType, "None");

// Enums

}