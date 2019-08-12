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
#include <ShapeAnalysis_SequenceOfFreeBounds.hxx>
#include <Standard_Transient.hxx>
#include <Standard.hxx>
#include <Standard_Handle.hxx>
#include <NCollection_BaseAllocator.hxx>
#include <NCollection_Sequence.hxx>
#include <ShapeAnalysis_HSequenceOfFreeBounds.hxx>
#include <Standard_Type.hxx>

void bind_ShapeAnalysis_HSequenceOfFreeBounds(py::module &mod){

py::class_<ShapeAnalysis_HSequenceOfFreeBounds, opencascade::handle<ShapeAnalysis_HSequenceOfFreeBounds>, Standard_Transient> cls_ShapeAnalysis_HSequenceOfFreeBounds(mod, "ShapeAnalysis_HSequenceOfFreeBounds", "None", py::multiple_inheritance());

// Constructors
cls_ShapeAnalysis_HSequenceOfFreeBounds.def(py::init<>());
cls_ShapeAnalysis_HSequenceOfFreeBounds.def(py::init<const ShapeAnalysis_SequenceOfFreeBounds &>(), py::arg("theOther"));

// Fields

// Methods
// cls_ShapeAnalysis_HSequenceOfFreeBounds.def_static("operator new_", (void * (*)(size_t)) &ShapeAnalysis_HSequenceOfFreeBounds::operator new, "None", py::arg("theSize"));
// cls_ShapeAnalysis_HSequenceOfFreeBounds.def_static("operator delete_", (void (*)(void *)) &ShapeAnalysis_HSequenceOfFreeBounds::operator delete, "None", py::arg("theAddress"));
// cls_ShapeAnalysis_HSequenceOfFreeBounds.def_static("operator new[]_", (void * (*)(size_t)) &ShapeAnalysis_HSequenceOfFreeBounds::operator new[], "None", py::arg("theSize"));
// cls_ShapeAnalysis_HSequenceOfFreeBounds.def_static("operator delete[]_", (void (*)(void *)) &ShapeAnalysis_HSequenceOfFreeBounds::operator delete[], "None", py::arg("theAddress"));
// cls_ShapeAnalysis_HSequenceOfFreeBounds.def_static("operator new_", (void * (*)(size_t, void *)) &ShapeAnalysis_HSequenceOfFreeBounds::operator new, "None", py::arg(""), py::arg("theAddress"));
// cls_ShapeAnalysis_HSequenceOfFreeBounds.def_static("operator delete_", (void (*)(void *, void *)) &ShapeAnalysis_HSequenceOfFreeBounds::operator delete, "None", py::arg(""), py::arg(""));
// cls_ShapeAnalysis_HSequenceOfFreeBounds.def_static("operator new_", (void * (*)(size_t, const opencascade::handle<NCollection_BaseAllocator> &)) &ShapeAnalysis_HSequenceOfFreeBounds::operator new, "None", py::arg("theSize"), py::arg("theAllocator"));
// cls_ShapeAnalysis_HSequenceOfFreeBounds.def_static("operator delete_", (void (*)(void *, const opencascade::handle<NCollection_BaseAllocator> &)) &ShapeAnalysis_HSequenceOfFreeBounds::operator delete, "None", py::arg("theAddress"), py::arg("theAllocator"));
cls_ShapeAnalysis_HSequenceOfFreeBounds.def("Sequence", (const ShapeAnalysis_SequenceOfFreeBounds & (ShapeAnalysis_HSequenceOfFreeBounds::*)() const) &ShapeAnalysis_HSequenceOfFreeBounds::Sequence, "None");
cls_ShapeAnalysis_HSequenceOfFreeBounds.def("Append", (void (ShapeAnalysis_HSequenceOfFreeBounds::*)(const ShapeAnalysis_SequenceOfFreeBounds::value_type &)) &ShapeAnalysis_HSequenceOfFreeBounds::Append, "None", py::arg("theItem"));
cls_ShapeAnalysis_HSequenceOfFreeBounds.def("Append", (void (ShapeAnalysis_HSequenceOfFreeBounds::*)(ShapeAnalysis_SequenceOfFreeBounds &)) &ShapeAnalysis_HSequenceOfFreeBounds::Append, "None", py::arg("theSequence"));
cls_ShapeAnalysis_HSequenceOfFreeBounds.def("ChangeSequence", (ShapeAnalysis_SequenceOfFreeBounds & (ShapeAnalysis_HSequenceOfFreeBounds::*)()) &ShapeAnalysis_HSequenceOfFreeBounds::ChangeSequence, "None");
cls_ShapeAnalysis_HSequenceOfFreeBounds.def_static("get_type_name_", (const char * (*)()) &ShapeAnalysis_HSequenceOfFreeBounds::get_type_name, "None");
cls_ShapeAnalysis_HSequenceOfFreeBounds.def_static("get_type_descriptor_", (const opencascade::handle<Standard_Type> & (*)()) &ShapeAnalysis_HSequenceOfFreeBounds::get_type_descriptor, "None");
cls_ShapeAnalysis_HSequenceOfFreeBounds.def("DynamicType", (const opencascade::handle<Standard_Type> & (ShapeAnalysis_HSequenceOfFreeBounds::*)() const) &ShapeAnalysis_HSequenceOfFreeBounds::DynamicType, "None");

// Enums

}