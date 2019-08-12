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
#include <IGESData_IGESEntity.hxx>
#include <Standard_Handle.hxx>
#include <IGESData_LineFontEntity.hxx>
#include <Standard_Type.hxx>

void bind_IGESData_LineFontEntity(py::module &mod){

py::class_<IGESData_LineFontEntity, opencascade::handle<IGESData_LineFontEntity>, IGESData_IGESEntity> cls_IGESData_LineFontEntity(mod, "IGESData_LineFontEntity", "defines required type for LineFont in directory part an effective LineFont entity must inherits it");

// Constructors

// Fields

// Methods
cls_IGESData_LineFontEntity.def_static("get_type_name_", (const char * (*)()) &IGESData_LineFontEntity::get_type_name, "None");
cls_IGESData_LineFontEntity.def_static("get_type_descriptor_", (const opencascade::handle<Standard_Type> & (*)()) &IGESData_LineFontEntity::get_type_descriptor, "None");
cls_IGESData_LineFontEntity.def("DynamicType", (const opencascade::handle<Standard_Type> & (IGESData_LineFontEntity::*)() const) &IGESData_LineFontEntity::DynamicType, "None");

// Enums

}