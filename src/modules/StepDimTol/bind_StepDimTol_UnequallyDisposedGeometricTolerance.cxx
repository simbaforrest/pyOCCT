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
#include <StepBasic_LengthMeasureWithUnit.hxx>
#include <StepDimTol_UnequallyDisposedGeometricTolerance.hxx>
#include <Standard_Type.hxx>

void bind_StepDimTol_UnequallyDisposedGeometricTolerance(py::module &mod){

py::class_<StepDimTol_UnequallyDisposedGeometricTolerance, opencascade::handle<StepDimTol_UnequallyDisposedGeometricTolerance>, StepDimTol_GeometricTolerance> cls_StepDimTol_UnequallyDisposedGeometricTolerance(mod, "StepDimTol_UnequallyDisposedGeometricTolerance", "Representation of STEP entity UnequallyDisposedGeometricTolerance");

// Constructors
cls_StepDimTol_UnequallyDisposedGeometricTolerance.def(py::init<>());

// Fields

// Methods
cls_StepDimTol_UnequallyDisposedGeometricTolerance.def("Init", (void (StepDimTol_UnequallyDisposedGeometricTolerance::*)(const opencascade::handle<TCollection_HAsciiString> &, const opencascade::handle<TCollection_HAsciiString> &, const opencascade::handle<StepBasic_MeasureWithUnit> &, const StepDimTol_GeometricToleranceTarget &, const opencascade::handle<StepBasic_LengthMeasureWithUnit> &)) &StepDimTol_UnequallyDisposedGeometricTolerance::Init, "Initialize all fields (own and inherited)", py::arg("theName"), py::arg("theDescription"), py::arg("theMagnitude"), py::arg("theTolerancedShapeAspect"), py::arg("theDisplacement"));
cls_StepDimTol_UnequallyDisposedGeometricTolerance.def("Displacement", (opencascade::handle<StepBasic_LengthMeasureWithUnit> (StepDimTol_UnequallyDisposedGeometricTolerance::*)() const) &StepDimTol_UnequallyDisposedGeometricTolerance::Displacement, "Returns field Displacement");
cls_StepDimTol_UnequallyDisposedGeometricTolerance.def("SetDisplacement", (void (StepDimTol_UnequallyDisposedGeometricTolerance::*)(const opencascade::handle<StepBasic_LengthMeasureWithUnit> &)) &StepDimTol_UnequallyDisposedGeometricTolerance::SetDisplacement, "Set field Displacement", py::arg("theDisplacement"));
cls_StepDimTol_UnequallyDisposedGeometricTolerance.def_static("get_type_name_", (const char * (*)()) &StepDimTol_UnequallyDisposedGeometricTolerance::get_type_name, "None");
cls_StepDimTol_UnequallyDisposedGeometricTolerance.def_static("get_type_descriptor_", (const opencascade::handle<Standard_Type> & (*)()) &StepDimTol_UnequallyDisposedGeometricTolerance::get_type_descriptor, "None");
cls_StepDimTol_UnequallyDisposedGeometricTolerance.def("DynamicType", (const opencascade::handle<Standard_Type> & (StepDimTol_UnequallyDisposedGeometricTolerance::*)() const) &StepDimTol_UnequallyDisposedGeometricTolerance::DynamicType, "None");

// Enums

}