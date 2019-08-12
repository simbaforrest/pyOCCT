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

void bind_TColGeom2d_Array1OfCurve(py::module &);
void bind_TColGeom2d_HArray1OfCurve(py::module &);
void bind_TColGeom2d_SequenceOfCurve(py::module &);
void bind_TColGeom2d_Array1OfBSplineCurve(py::module &);
void bind_TColGeom2d_HArray1OfBSplineCurve(py::module &);
void bind_TColGeom2d_Array1OfBezierCurve(py::module &);
void bind_TColGeom2d_SequenceOfGeometry(py::module &);
void bind_TColGeom2d_SequenceOfBoundedCurve(py::module &);
void bind_TColGeom2d_HSequenceOfBoundedCurve(py::module &);
void bind_TColGeom2d_HSequenceOfCurve(py::module &);
void bind_TColGeom2d_HArray1OfBezierCurve(py::module &);

PYBIND11_MODULE(TColGeom2d, mod) {

py::module::import("OCCT.NCollection");
py::module::import("OCCT.Standard");
py::module::import("OCCT.Geom2d");

bind_TColGeom2d_Array1OfCurve(mod);
bind_TColGeom2d_HArray1OfCurve(mod);
bind_TColGeom2d_SequenceOfCurve(mod);
bind_TColGeom2d_Array1OfBSplineCurve(mod);
bind_TColGeom2d_HArray1OfBSplineCurve(mod);
bind_TColGeom2d_Array1OfBezierCurve(mod);
bind_TColGeom2d_SequenceOfGeometry(mod);
bind_TColGeom2d_SequenceOfBoundedCurve(mod);
bind_TColGeom2d_HSequenceOfBoundedCurve(mod);
bind_TColGeom2d_HSequenceOfCurve(mod);
bind_TColGeom2d_HArray1OfBezierCurve(mod);

}
