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
#include <Standard_Handle.hxx>
#include <Prs3d_Presentation.hxx>
#include <Prs3d_Drawer.hxx>
#include <TopoDS_Shape.hxx>
#include <Standard_TypeDef.hxx>
#include <DsgPrs_ShapeDirPresentation.hxx>

void bind_DsgPrs_ShapeDirPresentation(py::module &mod){

py::class_<DsgPrs_ShapeDirPresentation, std::unique_ptr<DsgPrs_ShapeDirPresentation, Deleter<DsgPrs_ShapeDirPresentation>>> cls_DsgPrs_ShapeDirPresentation(mod, "DsgPrs_ShapeDirPresentation", "A framework to define display of the normal to the surface of a shape.");

// Constructors

// Fields

// Methods
// cls_DsgPrs_ShapeDirPresentation.def_static("operator new_", (void * (*)(size_t)) &DsgPrs_ShapeDirPresentation::operator new, "None", py::arg("theSize"));
// cls_DsgPrs_ShapeDirPresentation.def_static("operator delete_", (void (*)(void *)) &DsgPrs_ShapeDirPresentation::operator delete, "None", py::arg("theAddress"));
// cls_DsgPrs_ShapeDirPresentation.def_static("operator new[]_", (void * (*)(size_t)) &DsgPrs_ShapeDirPresentation::operator new[], "None", py::arg("theSize"));
// cls_DsgPrs_ShapeDirPresentation.def_static("operator delete[]_", (void (*)(void *)) &DsgPrs_ShapeDirPresentation::operator delete[], "None", py::arg("theAddress"));
// cls_DsgPrs_ShapeDirPresentation.def_static("operator new_", (void * (*)(size_t, void *)) &DsgPrs_ShapeDirPresentation::operator new, "None", py::arg(""), py::arg("theAddress"));
// cls_DsgPrs_ShapeDirPresentation.def_static("operator delete_", (void (*)(void *, void *)) &DsgPrs_ShapeDirPresentation::operator delete, "None", py::arg(""), py::arg(""));
cls_DsgPrs_ShapeDirPresentation.def_static("Add_", (void (*)(const opencascade::handle<Prs3d_Presentation> &, const opencascade::handle<Prs3d_Drawer> &, const TopoDS_Shape &, const Standard_Integer)) &DsgPrs_ShapeDirPresentation::Add, "Adds the shape shape and the mode mode to the presentation object prs. The display attributes of the normal are defined by the attribute manager aDrawer. mode determines whether the first or the last point of the normal is given to the presentation object. If the first point: 0; if the last point, 1.", py::arg("prs"), py::arg("aDrawer"), py::arg("shape"), py::arg("mode"));

// Enums

}