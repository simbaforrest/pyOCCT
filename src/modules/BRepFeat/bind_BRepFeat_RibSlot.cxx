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
#include <BRepBuilderAPI_MakeShape.hxx>
#include <Standard.hxx>
#include <Standard_TypeDef.hxx>
#include <TopoDS_Shape.hxx>
#include <TopTools_ListOfShape.hxx>
#include <Standard_Handle.hxx>
#include <Geom_Curve.hxx>
#include <gp_Pnt.hxx>
#include <TopoDS_Face.hxx>
#include <Geom_Plane.hxx>
#include <BRepFeat_StatusError.hxx>
#include <TopoDS_Edge.hxx>
#include <gp_Dir.hxx>
#include <TopoDS_Vertex.hxx>
#include <LocOpe_Gluer.hxx>
#include <BRepAlgoAPI_BooleanOperation.hxx>
#include <TopTools_DataMapOfShapeListOfShape.hxx>
#include <BRepFeat_PerfSelection.hxx>
#include <TopoDS_Wire.hxx>
#include <TopTools_DataMapOfShapeShape.hxx>
#include <BRepFeat_RibSlot.hxx>

void bind_BRepFeat_RibSlot(py::module &mod){

py::class_<BRepFeat_RibSlot, BRepBuilderAPI_MakeShape> cls_BRepFeat_RibSlot(mod, "BRepFeat_RibSlot", "Provides functions to build mechanical features. Mechanical features include ribs - protrusions and grooves (or slots) - depressions along planar (linear) surfaces or revolution surfaces. The semantics of mechanical features is built around giving thickness to a contour. This thickness can either be unilateral - on one side of the contour - or bilateral - on both sides. As in the semantics of form features, the thickness is defined by construction of shapes in specific contexts. The development contexts differ, however,in case of mechanical features. Here they include extrusion: - to a limiting face of the basis shape - to or from a limiting plane - to a height.");

// Constructors

// Fields

// Methods
// cls_BRepFeat_RibSlot.def_static("operator new_", (void * (*)(size_t)) &BRepFeat_RibSlot::operator new, "None", py::arg("theSize"));
// cls_BRepFeat_RibSlot.def_static("operator delete_", (void (*)(void *)) &BRepFeat_RibSlot::operator delete, "None", py::arg("theAddress"));
// cls_BRepFeat_RibSlot.def_static("operator new[]_", (void * (*)(size_t)) &BRepFeat_RibSlot::operator new[], "None", py::arg("theSize"));
// cls_BRepFeat_RibSlot.def_static("operator delete[]_", (void (*)(void *)) &BRepFeat_RibSlot::operator delete[], "None", py::arg("theAddress"));
// cls_BRepFeat_RibSlot.def_static("operator new_", (void * (*)(size_t, void *)) &BRepFeat_RibSlot::operator new, "None", py::arg(""), py::arg("theAddress"));
// cls_BRepFeat_RibSlot.def_static("operator delete_", (void (*)(void *, void *)) &BRepFeat_RibSlot::operator delete, "None", py::arg(""), py::arg(""));
cls_BRepFeat_RibSlot.def("IsDeleted", (Standard_Boolean (BRepFeat_RibSlot::*)(const TopoDS_Shape &)) &BRepFeat_RibSlot::IsDeleted, "Returns true if F a TopoDS_Shape of type edge or face has been deleted.", py::arg("F"));
cls_BRepFeat_RibSlot.def("Modified", (const TopTools_ListOfShape & (BRepFeat_RibSlot::*)(const TopoDS_Shape &)) &BRepFeat_RibSlot::Modified, "Returns the list of generated Faces F. This list may be empty.", py::arg("F"));
cls_BRepFeat_RibSlot.def("Generated", (const TopTools_ListOfShape & (BRepFeat_RibSlot::*)(const TopoDS_Shape &)) &BRepFeat_RibSlot::Generated, "Returns a list TopTools_ListOfShape of the faces S created in the shape.", py::arg("S"));
cls_BRepFeat_RibSlot.def("FirstShape", (const TopTools_ListOfShape & (BRepFeat_RibSlot::*)() const) &BRepFeat_RibSlot::FirstShape, "Returns the list of shapes created at the bottom of the created form. It may be an empty list.");
cls_BRepFeat_RibSlot.def("LastShape", (const TopTools_ListOfShape & (BRepFeat_RibSlot::*)() const) &BRepFeat_RibSlot::LastShape, "Returns the list of shapes created at the top of the created form. It may be an empty list.");
cls_BRepFeat_RibSlot.def("FacesForDraft", (const TopTools_ListOfShape & (BRepFeat_RibSlot::*)() const) &BRepFeat_RibSlot::FacesForDraft, "Returns a list of the limiting and glueing faces generated by the feature. These faces did not originally exist in the basis shape. The list provides the information necessary for subsequent addition of a draft to a face. It may be an empty list. If a face has tangent edges, no draft is possible, and the tangent edges must subsequently be removed if you want to add a draft to the face.");
cls_BRepFeat_RibSlot.def("NewEdges", (const TopTools_ListOfShape & (BRepFeat_RibSlot::*)() const) &BRepFeat_RibSlot::NewEdges, "Returns a list of the limiting and glueing edges generated by the feature. These edges did not originally exist in the basis shape. The list provides the information necessary for subsequent addition of fillets. It may be an empty list.");
cls_BRepFeat_RibSlot.def("TgtEdges", (const TopTools_ListOfShape & (BRepFeat_RibSlot::*)() const) &BRepFeat_RibSlot::TgtEdges, "Returns a list of the tangent edges among the limiting and glueing edges generated by the feature. These edges did not originally exist in the basis shape and are tangent to the face against which the feature is built. The list provides the information necessary for subsequent addition of fillets. It may be an empty list. If an edge is tangent, no fillet is possible, and the edge must subsequently be removed if you want to add a fillet.");
cls_BRepFeat_RibSlot.def_static("IntPar_", (Standard_Real (*)(const opencascade::handle<Geom_Curve> &, const gp_Pnt &)) &BRepFeat_RibSlot::IntPar, "None", py::arg("C"), py::arg("P"));
cls_BRepFeat_RibSlot.def_static("ChoiceOfFaces_", (TopoDS_Face (*)(TopTools_ListOfShape &, const opencascade::handle<Geom_Curve> &, const Standard_Real, const Standard_Real, const opencascade::handle<Geom_Plane> &)) &BRepFeat_RibSlot::ChoiceOfFaces, "None", py::arg("faces"), py::arg("cc"), py::arg("par"), py::arg("bnd"), py::arg("Pln"));
cls_BRepFeat_RibSlot.def("CurrentStatusError", (BRepFeat_StatusError (BRepFeat_RibSlot::*)() const) &BRepFeat_RibSlot::CurrentStatusError, "None");

// Enums

}