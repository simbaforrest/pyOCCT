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
#include <StepDimTol_GeometricTolerance.hxx>
#include <Standard_Handle.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepBasic_MeasureWithUnit.hxx>
#include <StepDimTol_GeometricToleranceTarget.hxx>
#include <StepDimTol_HArray1OfGeometricToleranceModifier.hxx>
#include <Standard_TypeDef.hxx>
#include <StepDimTol_GeometricToleranceModifier.hxx>
#include <StepDimTol_GeometricToleranceWithModifiers.hxx>
#include <Standard_Type.hxx>

void bind_StepDimTol_GeometricToleranceWithModifiers(py::module &mod){

py::class_<StepDimTol_GeometricToleranceWithModifiers, opencascade::handle<StepDimTol_GeometricToleranceWithModifiers>, StepDimTol_GeometricTolerance> cls_StepDimTol_GeometricToleranceWithModifiers(mod, "StepDimTol_GeometricToleranceWithModifiers", "Representation of STEP entity GeometricToleranceWithModifiers");

// Constructors
cls_StepDimTol_GeometricToleranceWithModifiers.def(py::init<>());

// Fields

// Methods
cls_StepDimTol_GeometricToleranceWithModifiers.def("Init", (void (StepDimTol_GeometricToleranceWithModifiers::*)(const opencascade::handle<TCollection_HAsciiString> &, const opencascade::handle<TCollection_HAsciiString> &, const opencascade::handle<StepBasic_MeasureWithUnit> &, const StepDimTol_GeometricToleranceTarget &, const opencascade::handle<StepDimTol_HArray1OfGeometricToleranceModifier> &)) &StepDimTol_GeometricToleranceWithModifiers::Init, "Initialize all fields (own and inherited)", py::arg("theName"), py::arg("theDescription"), py::arg("theMagnitude"), py::arg("theTolerancedShapeAspect"), py::arg("theModifiers"));
cls_StepDimTol_GeometricToleranceWithModifiers.def("Modifiers", (opencascade::handle<StepDimTol_HArray1OfGeometricToleranceModifier> (StepDimTol_GeometricToleranceWithModifiers::*)() const) &StepDimTol_GeometricToleranceWithModifiers::Modifiers, "Returns field Modifiers");
cls_StepDimTol_GeometricToleranceWithModifiers.def("SetModifiers", (void (StepDimTol_GeometricToleranceWithModifiers::*)(const opencascade::handle<StepDimTol_HArray1OfGeometricToleranceModifier> &)) &StepDimTol_GeometricToleranceWithModifiers::SetModifiers, "Set field Modifiers", py::arg("theModifiers"));
cls_StepDimTol_GeometricToleranceWithModifiers.def("NbModifiers", (Standard_Integer (StepDimTol_GeometricToleranceWithModifiers::*)() const) &StepDimTol_GeometricToleranceWithModifiers::NbModifiers, "Returns number of modifiers");
cls_StepDimTol_GeometricToleranceWithModifiers.def("ModifierValue", (StepDimTol_GeometricToleranceModifier (StepDimTol_GeometricToleranceWithModifiers::*)(const Standard_Integer) const) &StepDimTol_GeometricToleranceWithModifiers::ModifierValue, "Returns modifier with the given number", py::arg("theNum"));
cls_StepDimTol_GeometricToleranceWithModifiers.def("SetModifierValue", (void (StepDimTol_GeometricToleranceWithModifiers::*)(const Standard_Integer, const StepDimTol_GeometricToleranceModifier)) &StepDimTol_GeometricToleranceWithModifiers::SetModifierValue, "Sets modifier with given number", py::arg("theNum"), py::arg("theItem"));
cls_StepDimTol_GeometricToleranceWithModifiers.def_static("get_type_name_", (const char * (*)()) &StepDimTol_GeometricToleranceWithModifiers::get_type_name, "None");
cls_StepDimTol_GeometricToleranceWithModifiers.def_static("get_type_descriptor_", (const opencascade::handle<Standard_Type> & (*)()) &StepDimTol_GeometricToleranceWithModifiers::get_type_descriptor, "None");
cls_StepDimTol_GeometricToleranceWithModifiers.def("DynamicType", (const opencascade::handle<Standard_Type> & (StepDimTol_GeometricToleranceWithModifiers::*)() const) &StepDimTol_GeometricToleranceWithModifiers::DynamicType, "None");

// Enums

}