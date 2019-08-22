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
#include <Geom_Surface.hxx>
#include <Standard_TypeDef.hxx>
#include <gp_Pnt.hxx>
#include <gp_Vec.hxx>
#include <GeomLProp_SurfaceTool.hxx>

void bind_GeomLProp_SurfaceTool(py::module &mod){

py::class_<GeomLProp_SurfaceTool> cls_GeomLProp_SurfaceTool(mod, "GeomLProp_SurfaceTool", "None");

// Constructors

// Fields

// Methods
// cls_GeomLProp_SurfaceTool.def_static("operator new_", (void * (*)(size_t)) &GeomLProp_SurfaceTool::operator new, "None", py::arg("theSize"));
// cls_GeomLProp_SurfaceTool.def_static("operator delete_", (void (*)(void *)) &GeomLProp_SurfaceTool::operator delete, "None", py::arg("theAddress"));
// cls_GeomLProp_SurfaceTool.def_static("operator new[]_", (void * (*)(size_t)) &GeomLProp_SurfaceTool::operator new[], "None", py::arg("theSize"));
// cls_GeomLProp_SurfaceTool.def_static("operator delete[]_", (void (*)(void *)) &GeomLProp_SurfaceTool::operator delete[], "None", py::arg("theAddress"));
// cls_GeomLProp_SurfaceTool.def_static("operator new_", (void * (*)(size_t, void *)) &GeomLProp_SurfaceTool::operator new, "None", py::arg(""), py::arg("theAddress"));
// cls_GeomLProp_SurfaceTool.def_static("operator delete_", (void (*)(void *, void *)) &GeomLProp_SurfaceTool::operator delete, "None", py::arg(""), py::arg(""));
cls_GeomLProp_SurfaceTool.def_static("Value_", (void (*)(const opencascade::handle<Geom_Surface> &, const Standard_Real, const Standard_Real, gp_Pnt &)) &GeomLProp_SurfaceTool::Value, "Computes the point <P> of parameter <U> and <V> on the Surface <S>.", py::arg("S"), py::arg("U"), py::arg("V"), py::arg("P"));
cls_GeomLProp_SurfaceTool.def_static("D1_", (void (*)(const opencascade::handle<Geom_Surface> &, const Standard_Real, const Standard_Real, gp_Pnt &, gp_Vec &, gp_Vec &)) &GeomLProp_SurfaceTool::D1, "Computes the point <P> and first derivative <D1*> of parameter <U> and <V> on the Surface <S>.", py::arg("S"), py::arg("U"), py::arg("V"), py::arg("P"), py::arg("D1U"), py::arg("D1V"));
cls_GeomLProp_SurfaceTool.def_static("D2_", (void (*)(const opencascade::handle<Geom_Surface> &, const Standard_Real, const Standard_Real, gp_Pnt &, gp_Vec &, gp_Vec &, gp_Vec &, gp_Vec &, gp_Vec &)) &GeomLProp_SurfaceTool::D2, "Computes the point <P>, the first derivative <D1*> and second derivative <D2*> of parameter <U> and <V> on the Surface <S>.", py::arg("S"), py::arg("U"), py::arg("V"), py::arg("P"), py::arg("D1U"), py::arg("D1V"), py::arg("D2U"), py::arg("D2V"), py::arg("DUV"));
cls_GeomLProp_SurfaceTool.def_static("DN_", (gp_Vec (*)(const opencascade::handle<Geom_Surface> &, const Standard_Real, const Standard_Real, const Standard_Integer, const Standard_Integer)) &GeomLProp_SurfaceTool::DN, "None", py::arg("S"), py::arg("U"), py::arg("V"), py::arg("IU"), py::arg("IV"));
cls_GeomLProp_SurfaceTool.def_static("Continuity_", (Standard_Integer (*)(const opencascade::handle<Geom_Surface> &)) &GeomLProp_SurfaceTool::Continuity, "returns the order of continuity of the Surface <S>. returns 1 : first derivative only is computable returns 2 : first and second derivative only are computable.", py::arg("S"));
cls_GeomLProp_SurfaceTool.def_static("Bounds_", [](const opencascade::handle<Geom_Surface> & S, Standard_Real & U1, Standard_Real & V1, Standard_Real & U2, Standard_Real & V2){ GeomLProp_SurfaceTool::Bounds(S, U1, V1, U2, V2); return std::tuple<Standard_Real &, Standard_Real &, Standard_Real &, Standard_Real &>(U1, V1, U2, V2); }, "returns the bounds of the Surface.", py::arg("S"), py::arg("U1"), py::arg("V1"), py::arg("U2"), py::arg("V2"));

// Enums

}