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
#include <StepElement_SequenceOfCurveElementSectionDefinition.hxx>
#include <Standard_Transient.hxx>
#include <Standard.hxx>
#include <Standard_Handle.hxx>
#include <NCollection_BaseAllocator.hxx>
#include <NCollection_Sequence.hxx>
#include <StepElement_HSequenceOfCurveElementSectionDefinition.hxx>
#include <Standard_Type.hxx>

void bind_StepElement_HSequenceOfCurveElementSectionDefinition(py::module &mod){

py::class_<StepElement_HSequenceOfCurveElementSectionDefinition, opencascade::handle<StepElement_HSequenceOfCurveElementSectionDefinition>, Standard_Transient> cls_StepElement_HSequenceOfCurveElementSectionDefinition(mod, "StepElement_HSequenceOfCurveElementSectionDefinition", "None", py::multiple_inheritance());

// Constructors
cls_StepElement_HSequenceOfCurveElementSectionDefinition.def(py::init<>());
cls_StepElement_HSequenceOfCurveElementSectionDefinition.def(py::init<const StepElement_SequenceOfCurveElementSectionDefinition &>(), py::arg("theOther"));

// Fields

// Methods
// cls_StepElement_HSequenceOfCurveElementSectionDefinition.def_static("operator new_", (void * (*)(size_t)) &StepElement_HSequenceOfCurveElementSectionDefinition::operator new, "None", py::arg("theSize"));
// cls_StepElement_HSequenceOfCurveElementSectionDefinition.def_static("operator delete_", (void (*)(void *)) &StepElement_HSequenceOfCurveElementSectionDefinition::operator delete, "None", py::arg("theAddress"));
// cls_StepElement_HSequenceOfCurveElementSectionDefinition.def_static("operator new[]_", (void * (*)(size_t)) &StepElement_HSequenceOfCurveElementSectionDefinition::operator new[], "None", py::arg("theSize"));
// cls_StepElement_HSequenceOfCurveElementSectionDefinition.def_static("operator delete[]_", (void (*)(void *)) &StepElement_HSequenceOfCurveElementSectionDefinition::operator delete[], "None", py::arg("theAddress"));
// cls_StepElement_HSequenceOfCurveElementSectionDefinition.def_static("operator new_", (void * (*)(size_t, void *)) &StepElement_HSequenceOfCurveElementSectionDefinition::operator new, "None", py::arg(""), py::arg("theAddress"));
// cls_StepElement_HSequenceOfCurveElementSectionDefinition.def_static("operator delete_", (void (*)(void *, void *)) &StepElement_HSequenceOfCurveElementSectionDefinition::operator delete, "None", py::arg(""), py::arg(""));
// cls_StepElement_HSequenceOfCurveElementSectionDefinition.def_static("operator new_", (void * (*)(size_t, const opencascade::handle<NCollection_BaseAllocator> &)) &StepElement_HSequenceOfCurveElementSectionDefinition::operator new, "None", py::arg("theSize"), py::arg("theAllocator"));
// cls_StepElement_HSequenceOfCurveElementSectionDefinition.def_static("operator delete_", (void (*)(void *, const opencascade::handle<NCollection_BaseAllocator> &)) &StepElement_HSequenceOfCurveElementSectionDefinition::operator delete, "None", py::arg("theAddress"), py::arg("theAllocator"));
cls_StepElement_HSequenceOfCurveElementSectionDefinition.def("Sequence", (const StepElement_SequenceOfCurveElementSectionDefinition & (StepElement_HSequenceOfCurveElementSectionDefinition::*)() const) &StepElement_HSequenceOfCurveElementSectionDefinition::Sequence, "None");
cls_StepElement_HSequenceOfCurveElementSectionDefinition.def("Append", (void (StepElement_HSequenceOfCurveElementSectionDefinition::*)(const StepElement_SequenceOfCurveElementSectionDefinition::value_type &)) &StepElement_HSequenceOfCurveElementSectionDefinition::Append, "None", py::arg("theItem"));
cls_StepElement_HSequenceOfCurveElementSectionDefinition.def("Append", (void (StepElement_HSequenceOfCurveElementSectionDefinition::*)(StepElement_SequenceOfCurveElementSectionDefinition &)) &StepElement_HSequenceOfCurveElementSectionDefinition::Append, "None", py::arg("theSequence"));
cls_StepElement_HSequenceOfCurveElementSectionDefinition.def("ChangeSequence", (StepElement_SequenceOfCurveElementSectionDefinition & (StepElement_HSequenceOfCurveElementSectionDefinition::*)()) &StepElement_HSequenceOfCurveElementSectionDefinition::ChangeSequence, "None");
cls_StepElement_HSequenceOfCurveElementSectionDefinition.def_static("get_type_name_", (const char * (*)()) &StepElement_HSequenceOfCurveElementSectionDefinition::get_type_name, "None");
cls_StepElement_HSequenceOfCurveElementSectionDefinition.def_static("get_type_descriptor_", (const opencascade::handle<Standard_Type> & (*)()) &StepElement_HSequenceOfCurveElementSectionDefinition::get_type_descriptor, "None");
cls_StepElement_HSequenceOfCurveElementSectionDefinition.def("DynamicType", (const opencascade::handle<Standard_Type> & (StepElement_HSequenceOfCurveElementSectionDefinition::*)() const) &StepElement_HSequenceOfCurveElementSectionDefinition::DynamicType, "None");

// Enums

}