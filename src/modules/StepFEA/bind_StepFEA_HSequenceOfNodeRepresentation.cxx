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
#include <StepFEA_SequenceOfNodeRepresentation.hxx>
#include <Standard_Transient.hxx>
#include <Standard.hxx>
#include <Standard_Handle.hxx>
#include <NCollection_BaseAllocator.hxx>
#include <NCollection_Sequence.hxx>
#include <StepFEA_HSequenceOfNodeRepresentation.hxx>
#include <Standard_Type.hxx>

void bind_StepFEA_HSequenceOfNodeRepresentation(py::module &mod){

py::class_<StepFEA_HSequenceOfNodeRepresentation, opencascade::handle<StepFEA_HSequenceOfNodeRepresentation>, Standard_Transient> cls_StepFEA_HSequenceOfNodeRepresentation(mod, "StepFEA_HSequenceOfNodeRepresentation", "None", py::multiple_inheritance());

// Constructors
cls_StepFEA_HSequenceOfNodeRepresentation.def(py::init<>());
cls_StepFEA_HSequenceOfNodeRepresentation.def(py::init<const StepFEA_SequenceOfNodeRepresentation &>(), py::arg("theOther"));

// Fields

// Methods
// cls_StepFEA_HSequenceOfNodeRepresentation.def_static("operator new_", (void * (*)(size_t)) &StepFEA_HSequenceOfNodeRepresentation::operator new, "None", py::arg("theSize"));
// cls_StepFEA_HSequenceOfNodeRepresentation.def_static("operator delete_", (void (*)(void *)) &StepFEA_HSequenceOfNodeRepresentation::operator delete, "None", py::arg("theAddress"));
// cls_StepFEA_HSequenceOfNodeRepresentation.def_static("operator new[]_", (void * (*)(size_t)) &StepFEA_HSequenceOfNodeRepresentation::operator new[], "None", py::arg("theSize"));
// cls_StepFEA_HSequenceOfNodeRepresentation.def_static("operator delete[]_", (void (*)(void *)) &StepFEA_HSequenceOfNodeRepresentation::operator delete[], "None", py::arg("theAddress"));
// cls_StepFEA_HSequenceOfNodeRepresentation.def_static("operator new_", (void * (*)(size_t, void *)) &StepFEA_HSequenceOfNodeRepresentation::operator new, "None", py::arg(""), py::arg("theAddress"));
// cls_StepFEA_HSequenceOfNodeRepresentation.def_static("operator delete_", (void (*)(void *, void *)) &StepFEA_HSequenceOfNodeRepresentation::operator delete, "None", py::arg(""), py::arg(""));
// cls_StepFEA_HSequenceOfNodeRepresentation.def_static("operator new_", (void * (*)(size_t, const opencascade::handle<NCollection_BaseAllocator> &)) &StepFEA_HSequenceOfNodeRepresentation::operator new, "None", py::arg("theSize"), py::arg("theAllocator"));
// cls_StepFEA_HSequenceOfNodeRepresentation.def_static("operator delete_", (void (*)(void *, const opencascade::handle<NCollection_BaseAllocator> &)) &StepFEA_HSequenceOfNodeRepresentation::operator delete, "None", py::arg("theAddress"), py::arg("theAllocator"));
cls_StepFEA_HSequenceOfNodeRepresentation.def("Sequence", (const StepFEA_SequenceOfNodeRepresentation & (StepFEA_HSequenceOfNodeRepresentation::*)() const) &StepFEA_HSequenceOfNodeRepresentation::Sequence, "None");
cls_StepFEA_HSequenceOfNodeRepresentation.def("Append", (void (StepFEA_HSequenceOfNodeRepresentation::*)(const StepFEA_SequenceOfNodeRepresentation::value_type &)) &StepFEA_HSequenceOfNodeRepresentation::Append, "None", py::arg("theItem"));
cls_StepFEA_HSequenceOfNodeRepresentation.def("Append", (void (StepFEA_HSequenceOfNodeRepresentation::*)(StepFEA_SequenceOfNodeRepresentation &)) &StepFEA_HSequenceOfNodeRepresentation::Append, "None", py::arg("theSequence"));
cls_StepFEA_HSequenceOfNodeRepresentation.def("ChangeSequence", (StepFEA_SequenceOfNodeRepresentation & (StepFEA_HSequenceOfNodeRepresentation::*)()) &StepFEA_HSequenceOfNodeRepresentation::ChangeSequence, "None");
cls_StepFEA_HSequenceOfNodeRepresentation.def_static("get_type_name_", (const char * (*)()) &StepFEA_HSequenceOfNodeRepresentation::get_type_name, "None");
cls_StepFEA_HSequenceOfNodeRepresentation.def_static("get_type_descriptor_", (const opencascade::handle<Standard_Type> & (*)()) &StepFEA_HSequenceOfNodeRepresentation::get_type_descriptor, "None");
cls_StepFEA_HSequenceOfNodeRepresentation.def("DynamicType", (const opencascade::handle<Standard_Type> & (StepFEA_HSequenceOfNodeRepresentation::*)() const) &StepFEA_HSequenceOfNodeRepresentation::DynamicType, "None");

// Enums

}