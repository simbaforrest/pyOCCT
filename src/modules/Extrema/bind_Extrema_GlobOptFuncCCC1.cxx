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
#include <math_MultipleVarFunctionWithGradient.hxx>
#include <Adaptor3d_Curve.hxx>
#include <Adaptor2d_Curve2d.hxx>
#include <Standard_TypeDef.hxx>
#include <math_Vector.hxx>
#include <Extrema_GlobOptFuncCC.hxx>

void bind_Extrema_GlobOptFuncCCC1(py::module &mod){

py::class_<Extrema_GlobOptFuncCCC1, math_MultipleVarFunctionWithGradient> cls_Extrema_GlobOptFuncCCC1(mod, "Extrema_GlobOptFuncCCC1", "This class implements function which calculate Eucluidean distance between point on curve and point on other curve in case of C1 and C2 continuity is C1.");

// Constructors
cls_Extrema_GlobOptFuncCCC1.def(py::init<const Adaptor3d_Curve &, const Adaptor3d_Curve &>(), py::arg("C1"), py::arg("C2"));
cls_Extrema_GlobOptFuncCCC1.def(py::init<const Adaptor2d_Curve2d &, const Adaptor2d_Curve2d &>(), py::arg("C1"), py::arg("C2"));

// Fields

// Methods
cls_Extrema_GlobOptFuncCCC1.def("NbVariables", (Standard_Integer (Extrema_GlobOptFuncCCC1::*)() const) &Extrema_GlobOptFuncCCC1::NbVariables, "None");
cls_Extrema_GlobOptFuncCCC1.def("Value", [](Extrema_GlobOptFuncCCC1 &self, const math_Vector & X, Standard_Real & F){ Standard_Boolean rv = self.Value(X, F); return std::tuple<Standard_Boolean, Standard_Real &>(rv, F); }, "None", py::arg("X"), py::arg("F"));
cls_Extrema_GlobOptFuncCCC1.def("Gradient", (Standard_Boolean (Extrema_GlobOptFuncCCC1::*)(const math_Vector &, math_Vector &)) &Extrema_GlobOptFuncCCC1::Gradient, "None", py::arg("X"), py::arg("G"));
cls_Extrema_GlobOptFuncCCC1.def("Values", [](Extrema_GlobOptFuncCCC1 &self, const math_Vector & X, Standard_Real & F, math_Vector & G){ Standard_Boolean rv = self.Values(X, F, G); return std::tuple<Standard_Boolean, Standard_Real &>(rv, F); }, "None", py::arg("X"), py::arg("F"), py::arg("G"));

// Enums

}