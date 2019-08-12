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
#include <Graphic3d_Texture2D.hxx>
#include <Standard_Handle.hxx>
#include <Graphic3d_Texture2Dmanual.hxx>
#include <Standard_Type.hxx>
#include <TCollection_AsciiString.hxx>
#include <Graphic3d_NameOfTexture2D.hxx>
#include <Image_PixMap.hxx>

void bind_Graphic3d_Texture2Dmanual(py::module &mod){

py::class_<Graphic3d_Texture2Dmanual, opencascade::handle<Graphic3d_Texture2Dmanual>, Graphic3d_Texture2D> cls_Graphic3d_Texture2Dmanual(mod, "Graphic3d_Texture2Dmanual", "This class defined a manual texture 2D facets MUST define texture coordinate if you want to see somethings on.");

// Constructors
cls_Graphic3d_Texture2Dmanual.def(py::init<const TCollection_AsciiString &>(), py::arg("theFileName"));
cls_Graphic3d_Texture2Dmanual.def(py::init<const Graphic3d_NameOfTexture2D>(), py::arg("theNOT"));
cls_Graphic3d_Texture2Dmanual.def(py::init<const opencascade::handle<Image_PixMap> &>(), py::arg("thePixMap"));

// Fields

// Methods
cls_Graphic3d_Texture2Dmanual.def_static("get_type_name_", (const char * (*)()) &Graphic3d_Texture2Dmanual::get_type_name, "None");
cls_Graphic3d_Texture2Dmanual.def_static("get_type_descriptor_", (const opencascade::handle<Standard_Type> & (*)()) &Graphic3d_Texture2Dmanual::get_type_descriptor, "None");
cls_Graphic3d_Texture2Dmanual.def("DynamicType", (const opencascade::handle<Standard_Type> & (Graphic3d_Texture2Dmanual::*)() const) &Graphic3d_Texture2Dmanual::DynamicType, "None");

// Enums

}