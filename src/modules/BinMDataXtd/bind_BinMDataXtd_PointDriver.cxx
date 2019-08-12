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
#include <BinMDataXtd_PointDriver.hxx>
#include <Standard_Type.hxx>

void bind_BinMDataXtd_PointDriver(py::module &mod){

py::class_<BinMDataXtd_PointDriver, opencascade::handle<BinMDataXtd_PointDriver>, BinMDF_ADriver> cls_BinMDataXtd_PointDriver(mod, "BinMDataXtd_PointDriver", "Point attribute Driver.");

// Constructors
cls_BinMDataXtd_PointDriver.def(py::init<const opencascade::handle<Message_Messenger> &>(), py::arg("theMessageDriver"));

// Fields

// Methods
cls_BinMDataXtd_PointDriver.def("NewEmpty", (opencascade::handle<TDF_Attribute> (BinMDataXtd_PointDriver::*)() const) &BinMDataXtd_PointDriver::NewEmpty, "None");
cls_BinMDataXtd_PointDriver.def("Paste", (Standard_Boolean (BinMDataXtd_PointDriver::*)(const BinObjMgt_Persistent &, const opencascade::handle<TDF_Attribute> &, BinObjMgt_RRelocationTable &) const) &BinMDataXtd_PointDriver::Paste, "None", py::arg("Source"), py::arg("Target"), py::arg("RelocTable"));
cls_BinMDataXtd_PointDriver.def("Paste", (void (BinMDataXtd_PointDriver::*)(const opencascade::handle<TDF_Attribute> &, BinObjMgt_Persistent &, BinObjMgt_SRelocationTable &) const) &BinMDataXtd_PointDriver::Paste, "None", py::arg("Source"), py::arg("Target"), py::arg("RelocTable"));
cls_BinMDataXtd_PointDriver.def_static("get_type_name_", (const char * (*)()) &BinMDataXtd_PointDriver::get_type_name, "None");
cls_BinMDataXtd_PointDriver.def_static("get_type_descriptor_", (const opencascade::handle<Standard_Type> & (*)()) &BinMDataXtd_PointDriver::get_type_descriptor, "None");
cls_BinMDataXtd_PointDriver.def("DynamicType", (const opencascade::handle<Standard_Type> & (BinMDataXtd_PointDriver::*)() const) &BinMDataXtd_PointDriver::DynamicType, "None");

// Enums

}