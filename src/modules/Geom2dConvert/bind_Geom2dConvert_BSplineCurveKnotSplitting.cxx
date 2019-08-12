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
#include <Geom2d_BSplineCurve.hxx>
#include <Standard_TypeDef.hxx>
#include <TColStd_Array1OfInteger.hxx>
#include <TColStd_HArray1OfInteger.hxx>
#include <Geom2dConvert_BSplineCurveKnotSplitting.hxx>

void bind_Geom2dConvert_BSplineCurveKnotSplitting(py::module &mod){

py::class_<Geom2dConvert_BSplineCurveKnotSplitting, std::unique_ptr<Geom2dConvert_BSplineCurveKnotSplitting, Deleter<Geom2dConvert_BSplineCurveKnotSplitting>>> cls_Geom2dConvert_BSplineCurveKnotSplitting(mod, "Geom2dConvert_BSplineCurveKnotSplitting", "An algorithm to determine points at which a BSpline curve should be split in order to obtain arcs of the same continuity. If you require curves with a minimum continuity for your computation, it is useful to know the points between which an arc has a continuity of a given order. The continuity order is given at the construction time. For a BSpline curve, the discontinuities are localized at the knot values. Between two knot values the BSpline is infinitely and continuously differentiable. At a given knot, the continuity is equal to: Degree - Mult, where Degree is the degree of the BSpline curve and Mult is the multiplicity of the knot. It is possible to compute the arcs which correspond to this splitting using the global function SplitBSplineCurve provided by the package Geom2dConvert. A BSplineCurveKnotSplitting object provides a framework for: - defining the curve to be analysed and the required degree of continuity, - implementing the computation algorithm, and - consulting the results.");

// Constructors
cls_Geom2dConvert_BSplineCurveKnotSplitting.def(py::init<const opencascade::handle<Geom2d_BSplineCurve> &, const Standard_Integer>(), py::arg("BasisCurve"), py::arg("ContinuityRange"));

// Fields

// Methods
// cls_Geom2dConvert_BSplineCurveKnotSplitting.def_static("operator new_", (void * (*)(size_t)) &Geom2dConvert_BSplineCurveKnotSplitting::operator new, "None", py::arg("theSize"));
// cls_Geom2dConvert_BSplineCurveKnotSplitting.def_static("operator delete_", (void (*)(void *)) &Geom2dConvert_BSplineCurveKnotSplitting::operator delete, "None", py::arg("theAddress"));
// cls_Geom2dConvert_BSplineCurveKnotSplitting.def_static("operator new[]_", (void * (*)(size_t)) &Geom2dConvert_BSplineCurveKnotSplitting::operator new[], "None", py::arg("theSize"));
// cls_Geom2dConvert_BSplineCurveKnotSplitting.def_static("operator delete[]_", (void (*)(void *)) &Geom2dConvert_BSplineCurveKnotSplitting::operator delete[], "None", py::arg("theAddress"));
// cls_Geom2dConvert_BSplineCurveKnotSplitting.def_static("operator new_", (void * (*)(size_t, void *)) &Geom2dConvert_BSplineCurveKnotSplitting::operator new, "None", py::arg(""), py::arg("theAddress"));
// cls_Geom2dConvert_BSplineCurveKnotSplitting.def_static("operator delete_", (void (*)(void *, void *)) &Geom2dConvert_BSplineCurveKnotSplitting::operator delete, "None", py::arg(""), py::arg(""));
cls_Geom2dConvert_BSplineCurveKnotSplitting.def("NbSplits", (Standard_Integer (Geom2dConvert_BSplineCurveKnotSplitting::*)() const) &Geom2dConvert_BSplineCurveKnotSplitting::NbSplits, "Returns the number of points at which the analysed BSpline curve should be split, in order to obtain arcs with the continuity required by this framework. All these points correspond to knot values. Note that the first and last points of the curve, which bound the first and last arcs, are counted among these splitting points.");
cls_Geom2dConvert_BSplineCurveKnotSplitting.def("Splitting", (void (Geom2dConvert_BSplineCurveKnotSplitting::*)(TColStd_Array1OfInteger &) const) &Geom2dConvert_BSplineCurveKnotSplitting::Splitting, "Loads the SplitValues table with the split knots values computed in this framework. Each value in the table is an index in the knots table of the BSpline curve analysed by this algorithm. The values in SplitValues are given in ascending order and comprise the indices of the knots which give the first and last points of the curve. Use two consecutive values from the table as arguments of the global function SplitBSplineCurve (provided by the package Geom2dConvert) to split the curve. Exceptions Standard_DimensionError if the array SplitValues was not created with the following bounds: - 1, and - the number of split points computed in this framework (as given by the function NbSplits).", py::arg("SplitValues"));
cls_Geom2dConvert_BSplineCurveKnotSplitting.def("SplitValue", (Standard_Integer (Geom2dConvert_BSplineCurveKnotSplitting::*)(const Standard_Integer) const) &Geom2dConvert_BSplineCurveKnotSplitting::SplitValue, "Returns the split knot of index Index to the split knots table computed in this framework. The returned value is an index in the knots table of the BSpline curve analysed by this algorithm. Notes: - If Index is equal to 1, the corresponding knot gives the first point of the curve. - If Index is equal to the number of split knots computed in this framework, the corresponding point is the last point of the curve. Exceptions Standard_RangeError if Index is less than 1 or greater than the number of split knots computed in this framework.", py::arg("Index"));

// Enums

}