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
#include <Standard.hxx>
#include <Standard_OStream.hxx>
#include <Standard_Handle.hxx>
#include <BRepAdaptor_HSurface.hxx>
#include <VrmlConverter_Drawer.hxx>
#include <Standard_TypeDef.hxx>
#include <VrmlConverter_WFDeflectionRestrictedFace.hxx>

void bind_VrmlConverter_WFDeflectionRestrictedFace(py::module &mod){

py::class_<VrmlConverter_WFDeflectionRestrictedFace, std::unique_ptr<VrmlConverter_WFDeflectionRestrictedFace, Deleter<VrmlConverter_WFDeflectionRestrictedFace>>> cls_VrmlConverter_WFDeflectionRestrictedFace(mod, "VrmlConverter_WFDeflectionRestrictedFace", "WFDeflectionRestrictedFace - computes the wireframe presentation of faces with restrictions by displaying a given number of U and/or V isoparametric curves, converts his into VRML objects and writes (adds) them into anOStream. All requested properties of the representation are specify in aDrawer of Drawer class (Prs3d). This kind of the presentation is converted into IndexedFaceSet and IndexedLineSet ( VRML ).");

// Constructors

// Fields

// Methods
// cls_VrmlConverter_WFDeflectionRestrictedFace.def_static("operator new_", (void * (*)(size_t)) &VrmlConverter_WFDeflectionRestrictedFace::operator new, "None", py::arg("theSize"));
// cls_VrmlConverter_WFDeflectionRestrictedFace.def_static("operator delete_", (void (*)(void *)) &VrmlConverter_WFDeflectionRestrictedFace::operator delete, "None", py::arg("theAddress"));
// cls_VrmlConverter_WFDeflectionRestrictedFace.def_static("operator new[]_", (void * (*)(size_t)) &VrmlConverter_WFDeflectionRestrictedFace::operator new[], "None", py::arg("theSize"));
// cls_VrmlConverter_WFDeflectionRestrictedFace.def_static("operator delete[]_", (void (*)(void *)) &VrmlConverter_WFDeflectionRestrictedFace::operator delete[], "None", py::arg("theAddress"));
// cls_VrmlConverter_WFDeflectionRestrictedFace.def_static("operator new_", (void * (*)(size_t, void *)) &VrmlConverter_WFDeflectionRestrictedFace::operator new, "None", py::arg(""), py::arg("theAddress"));
// cls_VrmlConverter_WFDeflectionRestrictedFace.def_static("operator delete_", (void (*)(void *, void *)) &VrmlConverter_WFDeflectionRestrictedFace::operator delete, "None", py::arg(""), py::arg(""));
cls_VrmlConverter_WFDeflectionRestrictedFace.def_static("Add_", (void (*)(Standard_OStream &, const opencascade::handle<BRepAdaptor_HSurface> &, const opencascade::handle<VrmlConverter_Drawer> &)) &VrmlConverter_WFDeflectionRestrictedFace::Add, "None", py::arg("anOStream"), py::arg("aFace"), py::arg("aDrawer"));
cls_VrmlConverter_WFDeflectionRestrictedFace.def_static("AddUIso_", (void (*)(Standard_OStream &, const opencascade::handle<BRepAdaptor_HSurface> &, const opencascade::handle<VrmlConverter_Drawer> &)) &VrmlConverter_WFDeflectionRestrictedFace::AddUIso, "None", py::arg("anOStream"), py::arg("aFace"), py::arg("aDrawer"));
cls_VrmlConverter_WFDeflectionRestrictedFace.def_static("AddVIso_", (void (*)(Standard_OStream &, const opencascade::handle<BRepAdaptor_HSurface> &, const opencascade::handle<VrmlConverter_Drawer> &)) &VrmlConverter_WFDeflectionRestrictedFace::AddVIso, "None", py::arg("anOStream"), py::arg("aFace"), py::arg("aDrawer"));
cls_VrmlConverter_WFDeflectionRestrictedFace.def_static("Add_", (void (*)(Standard_OStream &, const opencascade::handle<BRepAdaptor_HSurface> &, const Standard_Boolean, const Standard_Boolean, const Standard_Real, const Standard_Integer, const Standard_Integer, const opencascade::handle<VrmlConverter_Drawer> &)) &VrmlConverter_WFDeflectionRestrictedFace::Add, "None", py::arg("anOStream"), py::arg("aFace"), py::arg("DrawUIso"), py::arg("DrawVIso"), py::arg("Deflection"), py::arg("NBUiso"), py::arg("NBViso"), py::arg("aDrawer"));

// Enums

}