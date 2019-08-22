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
#include <GeomInt_TheMultiLineOfWLApprox.hxx>
#include <Standard_TypeDef.hxx>
#include <Standard_Handle.hxx>
#include <AppParCurves_HArray1OfConstraintCouple.hxx>
#include <math_Vector.hxx>
#include <TColStd_Array1OfReal.hxx>
#include <TColStd_Array1OfInteger.hxx>
#include <AppParCurves_MultiBSpCurve.hxx>
#include <GeomInt_MyBSplGradientOfTheComputeLineOfWLApprox.hxx>

void bind_GeomInt_MyBSplGradientOfTheComputeLineOfWLApprox(py::module &mod){

py::class_<GeomInt_MyBSplGradientOfTheComputeLineOfWLApprox> cls_GeomInt_MyBSplGradientOfTheComputeLineOfWLApprox(mod, "GeomInt_MyBSplGradientOfTheComputeLineOfWLApprox", "None");

// Constructors
cls_GeomInt_MyBSplGradientOfTheComputeLineOfWLApprox.def(py::init<const GeomInt_TheMultiLineOfWLApprox &, const Standard_Integer, const Standard_Integer, const opencascade::handle<AppParCurves_HArray1OfConstraintCouple> &, math_Vector &, const TColStd_Array1OfReal &, const TColStd_Array1OfInteger &, const Standard_Integer, const Standard_Real, const Standard_Real>(), py::arg("SSP"), py::arg("FirstPoint"), py::arg("LastPoint"), py::arg("TheConstraints"), py::arg("Parameters"), py::arg("Knots"), py::arg("Mults"), py::arg("Deg"), py::arg("Tol3d"), py::arg("Tol2d"));
cls_GeomInt_MyBSplGradientOfTheComputeLineOfWLApprox.def(py::init<const GeomInt_TheMultiLineOfWLApprox &, const Standard_Integer, const Standard_Integer, const opencascade::handle<AppParCurves_HArray1OfConstraintCouple> &, math_Vector &, const TColStd_Array1OfReal &, const TColStd_Array1OfInteger &, const Standard_Integer, const Standard_Real, const Standard_Real, const Standard_Integer>(), py::arg("SSP"), py::arg("FirstPoint"), py::arg("LastPoint"), py::arg("TheConstraints"), py::arg("Parameters"), py::arg("Knots"), py::arg("Mults"), py::arg("Deg"), py::arg("Tol3d"), py::arg("Tol2d"), py::arg("NbIterations"));
cls_GeomInt_MyBSplGradientOfTheComputeLineOfWLApprox.def(py::init<const GeomInt_TheMultiLineOfWLApprox &, const Standard_Integer, const Standard_Integer, const opencascade::handle<AppParCurves_HArray1OfConstraintCouple> &, math_Vector &, const TColStd_Array1OfReal &, const TColStd_Array1OfInteger &, const Standard_Integer, const Standard_Real, const Standard_Real, const Standard_Integer, const Standard_Real, const Standard_Real>(), py::arg("SSP"), py::arg("FirstPoint"), py::arg("LastPoint"), py::arg("TheConstraints"), py::arg("Parameters"), py::arg("Knots"), py::arg("Mults"), py::arg("Deg"), py::arg("Tol3d"), py::arg("Tol2d"), py::arg("NbIterations"), py::arg("lambda1"), py::arg("lambda2"));

// Fields

// Methods
// cls_GeomInt_MyBSplGradientOfTheComputeLineOfWLApprox.def_static("operator new_", (void * (*)(size_t)) &GeomInt_MyBSplGradientOfTheComputeLineOfWLApprox::operator new, "None", py::arg("theSize"));
// cls_GeomInt_MyBSplGradientOfTheComputeLineOfWLApprox.def_static("operator delete_", (void (*)(void *)) &GeomInt_MyBSplGradientOfTheComputeLineOfWLApprox::operator delete, "None", py::arg("theAddress"));
// cls_GeomInt_MyBSplGradientOfTheComputeLineOfWLApprox.def_static("operator new[]_", (void * (*)(size_t)) &GeomInt_MyBSplGradientOfTheComputeLineOfWLApprox::operator new[], "None", py::arg("theSize"));
// cls_GeomInt_MyBSplGradientOfTheComputeLineOfWLApprox.def_static("operator delete[]_", (void (*)(void *)) &GeomInt_MyBSplGradientOfTheComputeLineOfWLApprox::operator delete[], "None", py::arg("theAddress"));
// cls_GeomInt_MyBSplGradientOfTheComputeLineOfWLApprox.def_static("operator new_", (void * (*)(size_t, void *)) &GeomInt_MyBSplGradientOfTheComputeLineOfWLApprox::operator new, "None", py::arg(""), py::arg("theAddress"));
// cls_GeomInt_MyBSplGradientOfTheComputeLineOfWLApprox.def_static("operator delete_", (void (*)(void *, void *)) &GeomInt_MyBSplGradientOfTheComputeLineOfWLApprox::operator delete, "None", py::arg(""), py::arg(""));
cls_GeomInt_MyBSplGradientOfTheComputeLineOfWLApprox.def("IsDone", (Standard_Boolean (GeomInt_MyBSplGradientOfTheComputeLineOfWLApprox::*)() const) &GeomInt_MyBSplGradientOfTheComputeLineOfWLApprox::IsDone, "returns True if all has been correctly done.");
cls_GeomInt_MyBSplGradientOfTheComputeLineOfWLApprox.def("Value", (AppParCurves_MultiBSpCurve (GeomInt_MyBSplGradientOfTheComputeLineOfWLApprox::*)() const) &GeomInt_MyBSplGradientOfTheComputeLineOfWLApprox::Value, "returns all the BSpline curves approximating the MultiLine SSP after minimization of the parameter.");
cls_GeomInt_MyBSplGradientOfTheComputeLineOfWLApprox.def("Error", (Standard_Real (GeomInt_MyBSplGradientOfTheComputeLineOfWLApprox::*)(const Standard_Integer) const) &GeomInt_MyBSplGradientOfTheComputeLineOfWLApprox::Error, "returns the difference between the old and the new approximation. An exception is raised if NotDone. An exception is raised if Index<1 or Index>NbParameters.", py::arg("Index"));
cls_GeomInt_MyBSplGradientOfTheComputeLineOfWLApprox.def("MaxError3d", (Standard_Real (GeomInt_MyBSplGradientOfTheComputeLineOfWLApprox::*)() const) &GeomInt_MyBSplGradientOfTheComputeLineOfWLApprox::MaxError3d, "returns the maximum difference between the old and the new approximation.");
cls_GeomInt_MyBSplGradientOfTheComputeLineOfWLApprox.def("MaxError2d", (Standard_Real (GeomInt_MyBSplGradientOfTheComputeLineOfWLApprox::*)() const) &GeomInt_MyBSplGradientOfTheComputeLineOfWLApprox::MaxError2d, "returns the maximum difference between the old and the new approximation.");
cls_GeomInt_MyBSplGradientOfTheComputeLineOfWLApprox.def("AverageError", (Standard_Real (GeomInt_MyBSplGradientOfTheComputeLineOfWLApprox::*)() const) &GeomInt_MyBSplGradientOfTheComputeLineOfWLApprox::AverageError, "returns the average error between the old and the new approximation.");

// Enums

}