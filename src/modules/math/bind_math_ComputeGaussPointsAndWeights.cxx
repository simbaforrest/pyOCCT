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
#include <Standard_TypeDef.hxx>
#include <math_Vector.hxx>
#include <Standard_Handle.hxx>
#include <TColStd_HArray1OfReal.hxx>
#include <math_ComputeGaussPointsAndWeights.hxx>

void bind_math_ComputeGaussPointsAndWeights(py::module &mod){

py::class_<math_ComputeGaussPointsAndWeights, std::unique_ptr<math_ComputeGaussPointsAndWeights, Deleter<math_ComputeGaussPointsAndWeights>>> cls_math_ComputeGaussPointsAndWeights(mod, "math_ComputeGaussPointsAndWeights", "None");

// Constructors
cls_math_ComputeGaussPointsAndWeights.def(py::init<const Standard_Integer>(), py::arg("Number"));

// Fields

// Methods
// cls_math_ComputeGaussPointsAndWeights.def_static("operator new_", (void * (*)(size_t)) &math_ComputeGaussPointsAndWeights::operator new, "None", py::arg("theSize"));
// cls_math_ComputeGaussPointsAndWeights.def_static("operator delete_", (void (*)(void *)) &math_ComputeGaussPointsAndWeights::operator delete, "None", py::arg("theAddress"));
// cls_math_ComputeGaussPointsAndWeights.def_static("operator new[]_", (void * (*)(size_t)) &math_ComputeGaussPointsAndWeights::operator new[], "None", py::arg("theSize"));
// cls_math_ComputeGaussPointsAndWeights.def_static("operator delete[]_", (void (*)(void *)) &math_ComputeGaussPointsAndWeights::operator delete[], "None", py::arg("theAddress"));
// cls_math_ComputeGaussPointsAndWeights.def_static("operator new_", (void * (*)(size_t, void *)) &math_ComputeGaussPointsAndWeights::operator new, "None", py::arg(""), py::arg("theAddress"));
// cls_math_ComputeGaussPointsAndWeights.def_static("operator delete_", (void (*)(void *, void *)) &math_ComputeGaussPointsAndWeights::operator delete, "None", py::arg(""), py::arg(""));
cls_math_ComputeGaussPointsAndWeights.def("IsDone", (Standard_Boolean (math_ComputeGaussPointsAndWeights::*)() const) &math_ComputeGaussPointsAndWeights::IsDone, "None");
cls_math_ComputeGaussPointsAndWeights.def("Points", (math_Vector (math_ComputeGaussPointsAndWeights::*)() const) &math_ComputeGaussPointsAndWeights::Points, "None");
cls_math_ComputeGaussPointsAndWeights.def("Weights", (math_Vector (math_ComputeGaussPointsAndWeights::*)() const) &math_ComputeGaussPointsAndWeights::Weights, "None");

// Enums

}