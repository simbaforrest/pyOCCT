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
#include <BRepMesh_Status.hxx>

void bind_BRepMesh_Status(py::module &mod){

py::enum_<BRepMesh_Status>(mod, "BRepMesh_Status", "Discribes the wires discretisation.")
	.value("BRepMesh_NoError", BRepMesh_Status::BRepMesh_NoError)
	.value("BRepMesh_OpenWire", BRepMesh_Status::BRepMesh_OpenWire)
	.value("BRepMesh_SelfIntersectingWire", BRepMesh_Status::BRepMesh_SelfIntersectingWire)
	.value("BRepMesh_Failure", BRepMesh_Status::BRepMesh_Failure)
	.value("BRepMesh_ReMesh", BRepMesh_Status::BRepMesh_ReMesh)
	.export_values();


}