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

void bind_ShapeConstruct(py::module &);
void bind_ShapeConstruct_Curve(py::module &);
void bind_ShapeConstruct_MakeTriangulation(py::module &);
void bind_ShapeConstruct_ProjectCurveOnSurface(py::module &);

PYBIND11_MODULE(ShapeConstruct, mod) {

py::module::import("OCCT.Standard");
py::module::import("OCCT.Geom");
py::module::import("OCCT.GeomAbs");
py::module::import("OCCT.Geom2d");
py::module::import("OCCT.TopTools");
py::module::import("OCCT.TopoDS");
py::module::import("OCCT.TopAbs");
py::module::import("OCCT.gp");
py::module::import("OCCT.TColStd");
py::module::import("OCCT.BRepBuilderAPI");
py::module::import("OCCT.TColgp");
py::module::import("OCCT.ShapeAnalysis");
py::module::import("OCCT.ShapeExtend");

bind_ShapeConstruct(mod);
bind_ShapeConstruct_Curve(mod);
bind_ShapeConstruct_MakeTriangulation(mod);
bind_ShapeConstruct_ProjectCurveOnSurface(mod);

}
