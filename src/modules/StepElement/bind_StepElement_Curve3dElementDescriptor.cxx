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
#include <StepElement_ElementDescriptor.hxx>
#include <StepElement_ElementOrder.hxx>
#include <Standard_Handle.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepElement_HArray1OfHSequenceOfCurveElementPurposeMember.hxx>
#include <StepElement_Curve3dElementDescriptor.hxx>
#include <Standard_Type.hxx>

void bind_StepElement_Curve3dElementDescriptor(py::module &mod){

py::class_<StepElement_Curve3dElementDescriptor, opencascade::handle<StepElement_Curve3dElementDescriptor>, StepElement_ElementDescriptor> cls_StepElement_Curve3dElementDescriptor(mod, "StepElement_Curve3dElementDescriptor", "Representation of STEP entity Curve3dElementDescriptor");

// Constructors
cls_StepElement_Curve3dElementDescriptor.def(py::init<>());

// Fields

// Methods
cls_StepElement_Curve3dElementDescriptor.def("Init", (void (StepElement_Curve3dElementDescriptor::*)(const StepElement_ElementOrder, const opencascade::handle<TCollection_HAsciiString> &, const opencascade::handle<StepElement_HArray1OfHSequenceOfCurveElementPurposeMember> &)) &StepElement_Curve3dElementDescriptor::Init, "Initialize all fields (own and inherited)", py::arg("aElementDescriptor_TopologyOrder"), py::arg("aElementDescriptor_Description"), py::arg("aPurpose"));
cls_StepElement_Curve3dElementDescriptor.def("Purpose", (opencascade::handle<StepElement_HArray1OfHSequenceOfCurveElementPurposeMember> (StepElement_Curve3dElementDescriptor::*)() const) &StepElement_Curve3dElementDescriptor::Purpose, "Returns field Purpose");
cls_StepElement_Curve3dElementDescriptor.def("SetPurpose", (void (StepElement_Curve3dElementDescriptor::*)(const opencascade::handle<StepElement_HArray1OfHSequenceOfCurveElementPurposeMember> &)) &StepElement_Curve3dElementDescriptor::SetPurpose, "Set field Purpose", py::arg("Purpose"));
cls_StepElement_Curve3dElementDescriptor.def_static("get_type_name_", (const char * (*)()) &StepElement_Curve3dElementDescriptor::get_type_name, "None");
cls_StepElement_Curve3dElementDescriptor.def_static("get_type_descriptor_", (const opencascade::handle<Standard_Type> & (*)()) &StepElement_Curve3dElementDescriptor::get_type_descriptor, "None");
cls_StepElement_Curve3dElementDescriptor.def("DynamicType", (const opencascade::handle<Standard_Type> & (StepElement_Curve3dElementDescriptor::*)() const) &StepElement_Curve3dElementDescriptor::DynamicType, "None");

// Enums

}