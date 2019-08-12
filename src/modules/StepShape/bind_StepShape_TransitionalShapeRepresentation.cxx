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
#include <StepShape_ShapeRepresentation.hxx>
#include <Standard_Handle.hxx>
#include <StepShape_TransitionalShapeRepresentation.hxx>
#include <Standard_Type.hxx>

void bind_StepShape_TransitionalShapeRepresentation(py::module &mod){

py::class_<StepShape_TransitionalShapeRepresentation, opencascade::handle<StepShape_TransitionalShapeRepresentation>, StepShape_ShapeRepresentation> cls_StepShape_TransitionalShapeRepresentation(mod, "StepShape_TransitionalShapeRepresentation", "None");

// Constructors
cls_StepShape_TransitionalShapeRepresentation.def(py::init<>());

// Fields

// Methods
cls_StepShape_TransitionalShapeRepresentation.def_static("get_type_name_", (const char * (*)()) &StepShape_TransitionalShapeRepresentation::get_type_name, "None");
cls_StepShape_TransitionalShapeRepresentation.def_static("get_type_descriptor_", (const opencascade::handle<Standard_Type> & (*)()) &StepShape_TransitionalShapeRepresentation::get_type_descriptor, "None");
cls_StepShape_TransitionalShapeRepresentation.def("DynamicType", (const opencascade::handle<Standard_Type> & (StepShape_TransitionalShapeRepresentation::*)() const) &StepShape_TransitionalShapeRepresentation::DynamicType, "None");

// Enums

}