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
#include <TopOpeBRepBuild_Area3dBuilder.hxx>
#include <Standard.hxx>
#include <TopOpeBRepBuild_LoopSet.hxx>
#include <TopOpeBRepBuild_LoopClassifier.hxx>
#include <Standard_TypeDef.hxx>
#include <TopOpeBRepBuild_SolidAreaBuilder.hxx>

void bind_TopOpeBRepBuild_SolidAreaBuilder(py::module &mod){

py::class_<TopOpeBRepBuild_SolidAreaBuilder, std::unique_ptr<TopOpeBRepBuild_SolidAreaBuilder, Deleter<TopOpeBRepBuild_SolidAreaBuilder>>, TopOpeBRepBuild_Area3dBuilder> cls_TopOpeBRepBuild_SolidAreaBuilder(mod, "TopOpeBRepBuild_SolidAreaBuilder", "The SolidAreaBuilder algorithm is used to construct Solids from a LoopSet, where the Loop is the composite topological object of the boundary, here wire or block of edges. The LoopSet gives an iteration on Loops. For each Loop it indicates if it is on the boundary (wire) or if it results from an interference (block of edges). The result of the SolidAreaBuilder is an iteration on areas. An area is described by a set of Loops.");

// Constructors
cls_TopOpeBRepBuild_SolidAreaBuilder.def(py::init<>());
cls_TopOpeBRepBuild_SolidAreaBuilder.def(py::init<TopOpeBRepBuild_LoopSet &, TopOpeBRepBuild_LoopClassifier &>(), py::arg("LS"), py::arg("LC"));
cls_TopOpeBRepBuild_SolidAreaBuilder.def(py::init<TopOpeBRepBuild_LoopSet &, TopOpeBRepBuild_LoopClassifier &, const Standard_Boolean>(), py::arg("LS"), py::arg("LC"), py::arg("ForceClass"));

// Fields

// Methods
// cls_TopOpeBRepBuild_SolidAreaBuilder.def_static("operator new_", (void * (*)(size_t)) &TopOpeBRepBuild_SolidAreaBuilder::operator new, "None", py::arg("theSize"));
// cls_TopOpeBRepBuild_SolidAreaBuilder.def_static("operator delete_", (void (*)(void *)) &TopOpeBRepBuild_SolidAreaBuilder::operator delete, "None", py::arg("theAddress"));
// cls_TopOpeBRepBuild_SolidAreaBuilder.def_static("operator new[]_", (void * (*)(size_t)) &TopOpeBRepBuild_SolidAreaBuilder::operator new[], "None", py::arg("theSize"));
// cls_TopOpeBRepBuild_SolidAreaBuilder.def_static("operator delete[]_", (void (*)(void *)) &TopOpeBRepBuild_SolidAreaBuilder::operator delete[], "None", py::arg("theAddress"));
// cls_TopOpeBRepBuild_SolidAreaBuilder.def_static("operator new_", (void * (*)(size_t, void *)) &TopOpeBRepBuild_SolidAreaBuilder::operator new, "None", py::arg(""), py::arg("theAddress"));
// cls_TopOpeBRepBuild_SolidAreaBuilder.def_static("operator delete_", (void (*)(void *, void *)) &TopOpeBRepBuild_SolidAreaBuilder::operator delete, "None", py::arg(""), py::arg(""));
cls_TopOpeBRepBuild_SolidAreaBuilder.def("InitSolidAreaBuilder", [](TopOpeBRepBuild_SolidAreaBuilder &self, TopOpeBRepBuild_LoopSet & a0, TopOpeBRepBuild_LoopClassifier & a1) -> void { return self.InitSolidAreaBuilder(a0, a1); });
cls_TopOpeBRepBuild_SolidAreaBuilder.def("InitSolidAreaBuilder", (void (TopOpeBRepBuild_SolidAreaBuilder::*)(TopOpeBRepBuild_LoopSet &, TopOpeBRepBuild_LoopClassifier &, const Standard_Boolean)) &TopOpeBRepBuild_SolidAreaBuilder::InitSolidAreaBuilder, "None", py::arg("LS"), py::arg("LC"), py::arg("ForceClass"));

// Enums

}