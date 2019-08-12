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
#include <StepDimTol_GeometricToleranceWithDatumReference.hxx>
#include <Standard_Handle.hxx>
#include <StepDimTol_CircularRunoutTolerance.hxx>
#include <Standard_Type.hxx>

void bind_StepDimTol_CircularRunoutTolerance(py::module &mod){

py::class_<StepDimTol_CircularRunoutTolerance, opencascade::handle<StepDimTol_CircularRunoutTolerance>, StepDimTol_GeometricToleranceWithDatumReference> cls_StepDimTol_CircularRunoutTolerance(mod, "StepDimTol_CircularRunoutTolerance", "Representation of STEP entity CircularRunoutTolerance");

// Constructors
cls_StepDimTol_CircularRunoutTolerance.def(py::init<>());

// Fields

// Methods
cls_StepDimTol_CircularRunoutTolerance.def_static("get_type_name_", (const char * (*)()) &StepDimTol_CircularRunoutTolerance::get_type_name, "None");
cls_StepDimTol_CircularRunoutTolerance.def_static("get_type_descriptor_", (const opencascade::handle<Standard_Type> & (*)()) &StepDimTol_CircularRunoutTolerance::get_type_descriptor, "None");
cls_StepDimTol_CircularRunoutTolerance.def("DynamicType", (const opencascade::handle<Standard_Type> & (StepDimTol_CircularRunoutTolerance::*)() const) &StepDimTol_CircularRunoutTolerance::DynamicType, "None");

// Enums

}