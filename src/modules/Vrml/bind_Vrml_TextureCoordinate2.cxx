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
#include <TColgp_HArray1OfVec2d.hxx>
#include <Standard_OStream.hxx>
#include <Vrml_TextureCoordinate2.hxx>
#include <Standard_Type.hxx>

void bind_Vrml_TextureCoordinate2(py::module &mod){

py::class_<Vrml_TextureCoordinate2, opencascade::handle<Vrml_TextureCoordinate2>, Standard_Transient> cls_Vrml_TextureCoordinate2(mod, "Vrml_TextureCoordinate2", "defines a TextureCoordinate2 node of VRML specifying properties of geometry and its appearance. This node defines a set of 2D coordinates to be used to map textures to the vertices of subsequent PointSet, IndexedLineSet, or IndexedFaceSet objects. It replaces the current texture coordinates in the rendering state for the shapes to use. Texture coordinates range from 0 to 1 across the texture. The horizontal coordinate, called S, is specified first, followed by vertical coordinate, T. By default : myPoint (0 0)");

// Constructors
cls_Vrml_TextureCoordinate2.def(py::init<>());
cls_Vrml_TextureCoordinate2.def(py::init<const opencascade::handle<TColgp_HArray1OfVec2d> &>(), py::arg("aPoint"));

// Fields

// Methods
cls_Vrml_TextureCoordinate2.def("SetPoint", (void (Vrml_TextureCoordinate2::*)(const opencascade::handle<TColgp_HArray1OfVec2d> &)) &Vrml_TextureCoordinate2::SetPoint, "None", py::arg("aPoint"));
cls_Vrml_TextureCoordinate2.def("Point", (opencascade::handle<TColgp_HArray1OfVec2d> (Vrml_TextureCoordinate2::*)() const) &Vrml_TextureCoordinate2::Point, "None");
cls_Vrml_TextureCoordinate2.def("Print", (Standard_OStream & (Vrml_TextureCoordinate2::*)(Standard_OStream &) const) &Vrml_TextureCoordinate2::Print, "None", py::arg("anOStream"));
cls_Vrml_TextureCoordinate2.def_static("get_type_name_", (const char * (*)()) &Vrml_TextureCoordinate2::get_type_name, "None");
cls_Vrml_TextureCoordinate2.def_static("get_type_descriptor_", (const opencascade::handle<Standard_Type> & (*)()) &Vrml_TextureCoordinate2::get_type_descriptor, "None");
cls_Vrml_TextureCoordinate2.def("DynamicType", (const opencascade::handle<Standard_Type> & (Vrml_TextureCoordinate2::*)() const) &Vrml_TextureCoordinate2::DynamicType, "None");

// Enums

}