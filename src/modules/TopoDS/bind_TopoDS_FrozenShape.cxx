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
#include <Standard_DomainError.hxx>
#include <Standard_TypeDef.hxx>
#include <Standard_Handle.hxx>
#include <TopoDS_FrozenShape.hxx>
#include <Standard_SStream.hxx>
#include <Standard_Type.hxx>

void bind_TopoDS_FrozenShape(py::module &mod){

py::class_<TopoDS_FrozenShape, opencascade::handle<TopoDS_FrozenShape>, Standard_DomainError> cls_TopoDS_FrozenShape(mod, "TopoDS_FrozenShape", "An attempt was made to modify a Shape already shared or protected.");

// Constructors
cls_TopoDS_FrozenShape.def(py::init<>());
cls_TopoDS_FrozenShape.def(py::init<const Standard_CString>(), py::arg("theMessage"));

// Fields

// Methods
cls_TopoDS_FrozenShape.def_static("Raise_", (void (*)(const Standard_CString)) &TopoDS_FrozenShape::Raise, "None", py::arg("theMessage"));
cls_TopoDS_FrozenShape.def_static("Raise_", (void (*)(Standard_SStream &)) &TopoDS_FrozenShape::Raise, "None", py::arg("theMessage"));
cls_TopoDS_FrozenShape.def_static("NewInstance_", (opencascade::handle<TopoDS_FrozenShape> (*)(const Standard_CString)) &TopoDS_FrozenShape::NewInstance, "None", py::arg("theMessage"));
cls_TopoDS_FrozenShape.def_static("get_type_name_", (const char * (*)()) &TopoDS_FrozenShape::get_type_name, "None");
cls_TopoDS_FrozenShape.def_static("get_type_descriptor_", (const opencascade::handle<Standard_Type> & (*)()) &TopoDS_FrozenShape::get_type_descriptor, "None");
cls_TopoDS_FrozenShape.def("DynamicType", (const opencascade::handle<Standard_Type> & (TopoDS_FrozenShape::*)() const) &TopoDS_FrozenShape::DynamicType, "None");

// Enums

}