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
#include <BRepSweep_NumLinearRegularSweep.hxx>
#include <Standard.hxx>
#include <Standard_TypeDef.hxx>
#include <TopoDS_Shape.hxx>
#include <Sweep_NumShape.hxx>
#include <TopAbs_Orientation.hxx>
#include <BRep_Builder.hxx>
#include <TopLoc_Location.hxx>
#include <BRepSweep_Trsf.hxx>

void bind_BRepSweep_Trsf(py::module &mod){

py::class_<BRepSweep_Trsf, BRepSweep_NumLinearRegularSweep> cls_BRepSweep_Trsf(mod, "BRepSweep_Trsf", "This class is inherited from NumLinearRegularSweep to implement the simple swept primitives built moving a Shape with a Trsf. It often is possible to build the constructed subshapes by a simple move of the generating subshapes (shared topology and geometry). So two ways of construction are proposed :");

// Fields

// Methods
// cls_BRepSweep_Trsf.def_static("operator new_", (void * (*)(size_t)) &BRepSweep_Trsf::operator new, "None", py::arg("theSize"));
// cls_BRepSweep_Trsf.def_static("operator delete_", (void (*)(void *)) &BRepSweep_Trsf::operator delete, "None", py::arg("theAddress"));
// cls_BRepSweep_Trsf.def_static("operator new[]_", (void * (*)(size_t)) &BRepSweep_Trsf::operator new[], "None", py::arg("theSize"));
// cls_BRepSweep_Trsf.def_static("operator delete[]_", (void (*)(void *)) &BRepSweep_Trsf::operator delete[], "None", py::arg("theAddress"));
// cls_BRepSweep_Trsf.def_static("operator new_", (void * (*)(size_t, void *)) &BRepSweep_Trsf::operator new, "None", py::arg(""), py::arg("theAddress"));
// cls_BRepSweep_Trsf.def_static("operator delete_", (void (*)(void *, void *)) &BRepSweep_Trsf::operator delete, "None", py::arg(""), py::arg(""));
cls_BRepSweep_Trsf.def("Init", (void (BRepSweep_Trsf::*)()) &BRepSweep_Trsf::Init, "ends the construction of the swept primitive calling the virtual geometric functions that can't be called in the initialize.");
cls_BRepSweep_Trsf.def("Process", (Standard_Boolean (BRepSweep_Trsf::*)(const TopoDS_Shape &, const Sweep_NumShape &)) &BRepSweep_Trsf::Process, "function called to analize the way of construction of the shapes generated by aGenS and aDirV.", py::arg("aGenS"), py::arg("aDirV"));
cls_BRepSweep_Trsf.def("MakeEmptyVertex", (TopoDS_Shape (BRepSweep_Trsf::*)(const TopoDS_Shape &, const Sweep_NumShape &)) &BRepSweep_Trsf::MakeEmptyVertex, "Builds the vertex addressed by [aGenV,aDirV], with its geometric part, but without subcomponents.", py::arg("aGenV"), py::arg("aDirV"));
cls_BRepSweep_Trsf.def("MakeEmptyDirectingEdge", (TopoDS_Shape (BRepSweep_Trsf::*)(const TopoDS_Shape &, const Sweep_NumShape &)) &BRepSweep_Trsf::MakeEmptyDirectingEdge, "Builds the edge addressed by [aGenV,aDirE], with its geometric part, but without subcomponents.", py::arg("aGenV"), py::arg("aDirE"));
cls_BRepSweep_Trsf.def("MakeEmptyGeneratingEdge", (TopoDS_Shape (BRepSweep_Trsf::*)(const TopoDS_Shape &, const Sweep_NumShape &)) &BRepSweep_Trsf::MakeEmptyGeneratingEdge, "Builds the edge addressed by [aGenE,aDirV], with its geometric part, but without subcomponents.", py::arg("aGenE"), py::arg("aDirV"));
cls_BRepSweep_Trsf.def("SetParameters", (void (BRepSweep_Trsf::*)(const TopoDS_Shape &, TopoDS_Shape &, const TopoDS_Shape &, const TopoDS_Shape &, const Sweep_NumShape &)) &BRepSweep_Trsf::SetParameters, "Sets the parameters of the new vertex on the new face. The new face and new vertex where generated from aGenF, aGenV and aDirV .", py::arg("aNewFace"), py::arg("aNewVertex"), py::arg("aGenF"), py::arg("aGenV"), py::arg("aDirV"));
cls_BRepSweep_Trsf.def("SetDirectingParameter", (void (BRepSweep_Trsf::*)(const TopoDS_Shape &, TopoDS_Shape &, const TopoDS_Shape &, const Sweep_NumShape &, const Sweep_NumShape &)) &BRepSweep_Trsf::SetDirectingParameter, "Sets the parameter of the new vertex on the new edge. The new edge and new vertex where generated from aGenV aDirE, and aDirV.", py::arg("aNewEdge"), py::arg("aNewVertex"), py::arg("aGenV"), py::arg("aDirE"), py::arg("aDirV"));
cls_BRepSweep_Trsf.def("SetGeneratingParameter", (void (BRepSweep_Trsf::*)(const TopoDS_Shape &, TopoDS_Shape &, const TopoDS_Shape &, const TopoDS_Shape &, const Sweep_NumShape &)) &BRepSweep_Trsf::SetGeneratingParameter, "Sets the parameter of the new vertex on the new edge. The new edge and new vertex where generated from aGenE, aGenV and aDirV .", py::arg("aNewEdge"), py::arg("aNewVertex"), py::arg("aGenE"), py::arg("aGenV"), py::arg("aDirV"));
cls_BRepSweep_Trsf.def("MakeEmptyFace", (TopoDS_Shape (BRepSweep_Trsf::*)(const TopoDS_Shape &, const Sweep_NumShape &)) &BRepSweep_Trsf::MakeEmptyFace, "Builds the face addressed by [aGenS,aDirS], with its geometric part, but without subcomponents. The couple aGenS, aDirS can be a 'generating face and a directing vertex' or 'a generating edge and a directing edge'.", py::arg("aGenS"), py::arg("aDirS"));
cls_BRepSweep_Trsf.def("SetPCurve", (void (BRepSweep_Trsf::*)(const TopoDS_Shape &, TopoDS_Shape &, const TopoDS_Shape &, const TopoDS_Shape &, const Sweep_NumShape &, const TopAbs_Orientation)) &BRepSweep_Trsf::SetPCurve, "Sets the PCurve for a new edge on a new face. The new edge and the new face were generated using aGenF, aGenE and aDirV.", py::arg("aNewFace"), py::arg("aNewEdge"), py::arg("aGenF"), py::arg("aGenE"), py::arg("aDirV"), py::arg("orien"));
cls_BRepSweep_Trsf.def("SetGeneratingPCurve", (void (BRepSweep_Trsf::*)(const TopoDS_Shape &, TopoDS_Shape &, const TopoDS_Shape &, const Sweep_NumShape &, const Sweep_NumShape &, const TopAbs_Orientation)) &BRepSweep_Trsf::SetGeneratingPCurve, "Sets the PCurve for a new edge on a new face. The new edge and the new face were generated using aGenE, aDirE and aDirV.", py::arg("aNewFace"), py::arg("aNewEdge"), py::arg("aGenE"), py::arg("aDirE"), py::arg("aDirV"), py::arg("orien"));
cls_BRepSweep_Trsf.def("SetDirectingPCurve", (void (BRepSweep_Trsf::*)(const TopoDS_Shape &, TopoDS_Shape &, const TopoDS_Shape &, const TopoDS_Shape &, const Sweep_NumShape &, const TopAbs_Orientation)) &BRepSweep_Trsf::SetDirectingPCurve, "Sets the PCurve for a new edge on a new face. The new edge and the new face were generated using aGenE, aDirE and aGenV.", py::arg("aNewFace"), py::arg("aNewEdge"), py::arg("aGenE"), py::arg("aGenV"), py::arg("aDirE"), py::arg("orien"));
cls_BRepSweep_Trsf.def("GGDShapeIsToAdd", (Standard_Boolean (BRepSweep_Trsf::*)(const TopoDS_Shape &, const TopoDS_Shape &, const TopoDS_Shape &, const TopoDS_Shape &, const Sweep_NumShape &) const) &BRepSweep_Trsf::GGDShapeIsToAdd, "Returns true if aNewSubShape (addressed by aSubGenS and aDirS) must be added in aNewShape (addressed by aGenS and aDirS).", py::arg("aNewShape"), py::arg("aNewSubShape"), py::arg("aGenS"), py::arg("aSubGenS"), py::arg("aDirS"));
cls_BRepSweep_Trsf.def("GDDShapeIsToAdd", (Standard_Boolean (BRepSweep_Trsf::*)(const TopoDS_Shape &, const TopoDS_Shape &, const TopoDS_Shape &, const Sweep_NumShape &, const Sweep_NumShape &) const) &BRepSweep_Trsf::GDDShapeIsToAdd, "Returns true if aNewSubShape (addressed by aGenS and aSubDirS) must be added in aNewShape (addressed by aGenS and aDirS).", py::arg("aNewShape"), py::arg("aNewSubShape"), py::arg("aGenS"), py::arg("aDirS"), py::arg("aSubDirS"));
cls_BRepSweep_Trsf.def("SeparatedWires", (Standard_Boolean (BRepSweep_Trsf::*)(const TopoDS_Shape &, const TopoDS_Shape &, const TopoDS_Shape &, const TopoDS_Shape &, const Sweep_NumShape &) const) &BRepSweep_Trsf::SeparatedWires, "In some particular cases the topology of a generated face must be composed of independant closed wires, in this case this function returns true.", py::arg("aNewShape"), py::arg("aNewSubShape"), py::arg("aGenS"), py::arg("aSubGenS"), py::arg("aDirS"));
cls_BRepSweep_Trsf.def("HasShape", (Standard_Boolean (BRepSweep_Trsf::*)(const TopoDS_Shape &, const Sweep_NumShape &) const) &BRepSweep_Trsf::HasShape, "Returns true if aDirS and aGenS addresses a resulting Shape. In some specific cases the shape can be geometrically inexsistant, then this function returns false.", py::arg("aGenS"), py::arg("aDirS"));
cls_BRepSweep_Trsf.def("IsInvariant", (Standard_Boolean (BRepSweep_Trsf::*)(const TopoDS_Shape &) const) &BRepSweep_Trsf::IsInvariant, "Returns true if the geometry of aGenS is not modified by the trsf of the BRepSweep Trsf.", py::arg("aGenS"));
cls_BRepSweep_Trsf.def("SetContinuity", (void (BRepSweep_Trsf::*)(const TopoDS_Shape &, const Sweep_NumShape &)) &BRepSweep_Trsf::SetContinuity, "Called to propagate the continuity of every vertex between two edges of the generating wire aGenS on the generated edge and faces.", py::arg("aGenS"), py::arg("aDirS"));

// Enums

}