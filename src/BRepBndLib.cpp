/*
This file is part of pyOCCT which provides Python bindings to the OpenCASCADE
geometry kernel.

Copyright (C) 2016-2018  Laughlin Research, LLC (info@laughlinresearch.com)

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
#include <pyOCCT_Common.hpp>

#include <TopoDS_Shape.hxx>
#include <Bnd_Box.hxx>
#include <Standard_TypeDef.hxx>
#include <BRepBndLib.hxx>

PYBIND11_MODULE(BRepBndLib, mod) {

	// IMPORT
	py::module::import("OCCT.TopoDS");
	py::module::import("OCCT.Bnd");
	py::module::import("OCCT.Standard");

	py::module other_mod;

	// IMPORT GUARDS

	// ENUMS

	// FUNCTIONS

	// CLASSES
	// C:\Miniconda\envs\occt\Library\include\opencascade\BRepBndLib.hxx
	py::class_<BRepBndLib, std::unique_ptr<BRepBndLib, Deleter<BRepBndLib>>> cls_BRepBndLib(mod, "BRepBndLib", "This package provides the bounding boxes for curves and surfaces from BRepAdaptor. Functions to add a topological shape to a bounding box");
	cls_BRepBndLib.def(py::init<>());
	cls_BRepBndLib.def_static("Add_", [](const TopoDS_Shape & a0, Bnd_Box & a1) -> void { return BRepBndLib::Add(a0, a1); }, py::arg("S"), py::arg("B"));
	cls_BRepBndLib.def_static("Add_", (void (*)(const TopoDS_Shape &, Bnd_Box &, const Standard_Boolean)) &BRepBndLib::Add, "Adds the shape S to the bounding box B. More precisely are successively added to B: - each face of S; the triangulation of the face is used if it exists, - then each edge of S which does not belong to a face, the polygon of the edge is used if it exists - and last each vertex of S which does not belong to an edge. After each elementary operation, the bounding box B is enlarged by the tolerance value of the relative sub-shape. When working with the triangulation of a face this value of enlargement is the sum of the triangulation deflection and the face tolerance. When working with the polygon of an edge this value of enlargement is the sum of the polygon deflection and the edge tolerance. Warning - This algorithm is time consuming if triangulation has not been inserted inside the data structure of the shape S. - The resulting bounding box may be somewhat larger than the object.", py::arg("S"), py::arg("B"), py::arg("useTriangulation"));
	cls_BRepBndLib.def_static("AddClose_", (void (*)(const TopoDS_Shape &, Bnd_Box &)) &BRepBndLib::AddClose, "Adds the shape S to the bounding box B. This is a quick algorithm but only works if the shape S is composed of polygonal planar faces, as is the case if S is an approached polyhedral representation of an exact shape. Pay particular attention to this because this condition is not checked and, if it not respected, an error may occur in the algorithm for which the bounding box is built. Note that the resulting bounding box is not enlarged by the tolerance value of the sub-shapes as is the case with the Add function. So the added part of the resulting bounding box is closer to the shape S.", py::arg("S"), py::arg("B"));
	cls_BRepBndLib.def_static("AddOptimal_", [](const TopoDS_Shape & a0, Bnd_Box & a1) -> void { return BRepBndLib::AddOptimal(a0, a1); }, py::arg("S"), py::arg("B"));
	cls_BRepBndLib.def_static("AddOptimal_", [](const TopoDS_Shape & a0, Bnd_Box & a1, const Standard_Boolean a2) -> void { return BRepBndLib::AddOptimal(a0, a1, a2); }, py::arg("S"), py::arg("B"), py::arg("useTriangulation"));
	cls_BRepBndLib.def_static("AddOptimal_", (void (*)(const TopoDS_Shape &, Bnd_Box &, const Standard_Boolean, const Standard_Boolean)) &BRepBndLib::AddOptimal, "Adds the shape S to the bounding box B. This algorith builds precise bounding box, which differs from exact geometry boundaries of shape only on shape entities tolerances Algorithm is the same as for method Add(..), but uses more precise methods for building boxes for geometry objects. If useShapeTolerance = True, bounding box is enlardged by shape tolerances and these tolerances are used for numerical methods of bounding box size calculations, otherwise bounding box is built according to sizes of uderlined geometrical entities, numerical calculation use tolerance Precision::Confusion().", py::arg("S"), py::arg("B"), py::arg("useTriangulation"), py::arg("useShapeTolerance"));


}
