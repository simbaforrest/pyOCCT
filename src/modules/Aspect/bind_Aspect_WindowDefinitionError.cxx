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
#include <Standard_OutOfRange.hxx>
#include <Standard_TypeDef.hxx>
#include <Standard_Handle.hxx>
#include <Aspect_WindowDefinitionError.hxx>
#include <Standard_SStream.hxx>
#include <Standard_Type.hxx>

void bind_Aspect_WindowDefinitionError(py::module &mod){

py::class_<Aspect_WindowDefinitionError, opencascade::handle<Aspect_WindowDefinitionError>, Standard_OutOfRange> cls_Aspect_WindowDefinitionError(mod, "Aspect_WindowDefinitionError", "None");

// Constructors
cls_Aspect_WindowDefinitionError.def(py::init<>());
cls_Aspect_WindowDefinitionError.def(py::init<const Standard_CString>(), py::arg("theMessage"));

// Fields

// Methods
cls_Aspect_WindowDefinitionError.def_static("Raise_", (void (*)(const Standard_CString)) &Aspect_WindowDefinitionError::Raise, "None", py::arg("theMessage"));
cls_Aspect_WindowDefinitionError.def_static("Raise_", (void (*)(Standard_SStream &)) &Aspect_WindowDefinitionError::Raise, "None", py::arg("theMessage"));
cls_Aspect_WindowDefinitionError.def_static("NewInstance_", (opencascade::handle<Aspect_WindowDefinitionError> (*)(const Standard_CString)) &Aspect_WindowDefinitionError::NewInstance, "None", py::arg("theMessage"));
cls_Aspect_WindowDefinitionError.def_static("get_type_name_", (const char * (*)()) &Aspect_WindowDefinitionError::get_type_name, "None");
cls_Aspect_WindowDefinitionError.def_static("get_type_descriptor_", (const opencascade::handle<Standard_Type> & (*)()) &Aspect_WindowDefinitionError::get_type_descriptor, "None");
cls_Aspect_WindowDefinitionError.def("DynamicType", (const opencascade::handle<Standard_Type> & (Aspect_WindowDefinitionError::*)() const) &Aspect_WindowDefinitionError::DynamicType, "None");

// Enums

}