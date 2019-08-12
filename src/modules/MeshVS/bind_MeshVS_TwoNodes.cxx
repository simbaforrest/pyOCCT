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
#include <Standard_TypeDef.hxx>
#include <MeshVS_TwoNodes.hxx>

void bind_MeshVS_TwoNodes(py::module &mod){

py::class_<MeshVS_TwoNodes, std::unique_ptr<MeshVS_TwoNodes, Deleter<MeshVS_TwoNodes>>> cls_MeshVS_TwoNodes(mod, "MeshVS_TwoNodes", "Structure containing two IDs (of nodes) for using as a key in a map (as representation of a mesh link)");

// Constructors
cls_MeshVS_TwoNodes.def(py::init<>());
cls_MeshVS_TwoNodes.def(py::init<Standard_Integer>(), py::arg("aFirst"));
cls_MeshVS_TwoNodes.def(py::init<Standard_Integer, Standard_Integer>(), py::arg("aFirst"), py::arg("aSecond"));

// Fields
cls_MeshVS_TwoNodes.def_readwrite("First", &MeshVS_TwoNodes::First, "None");
cls_MeshVS_TwoNodes.def_readwrite("Second", &MeshVS_TwoNodes::Second, "None");

// Methods

// Enums

}