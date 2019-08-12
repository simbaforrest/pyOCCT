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
#include <StepShape_Array1OfValueQualifier.hxx>
#include <Standard_Transient.hxx>
#include <Standard.hxx>
#include <Standard_Handle.hxx>
#include <NCollection_BaseAllocator.hxx>
#include <Standard_TypeDef.hxx>
#include <NCollection_Array1.hxx>
#include <StepShape_HArray1OfValueQualifier.hxx>
#include <Standard_Type.hxx>

void bind_StepShape_HArray1OfValueQualifier(py::module &mod){

py::class_<StepShape_HArray1OfValueQualifier, opencascade::handle<StepShape_HArray1OfValueQualifier>, Standard_Transient> cls_StepShape_HArray1OfValueQualifier(mod, "StepShape_HArray1OfValueQualifier", "None", py::multiple_inheritance());

// Constructors
cls_StepShape_HArray1OfValueQualifier.def(py::init<const Standard_Integer, const Standard_Integer>(), py::arg("theLower"), py::arg("theUpper"));
cls_StepShape_HArray1OfValueQualifier.def(py::init<const Standard_Integer, const Standard_Integer, const StepShape_Array1OfValueQualifier::value_type &>(), py::arg("theLower"), py::arg("theUpper"), py::arg("theValue"));
cls_StepShape_HArray1OfValueQualifier.def(py::init<const StepShape_Array1OfValueQualifier &>(), py::arg("theOther"));

// Fields

// Methods
// cls_StepShape_HArray1OfValueQualifier.def_static("operator new_", (void * (*)(size_t)) &StepShape_HArray1OfValueQualifier::operator new, "None", py::arg("theSize"));
// cls_StepShape_HArray1OfValueQualifier.def_static("operator delete_", (void (*)(void *)) &StepShape_HArray1OfValueQualifier::operator delete, "None", py::arg("theAddress"));
// cls_StepShape_HArray1OfValueQualifier.def_static("operator new[]_", (void * (*)(size_t)) &StepShape_HArray1OfValueQualifier::operator new[], "None", py::arg("theSize"));
// cls_StepShape_HArray1OfValueQualifier.def_static("operator delete[]_", (void (*)(void *)) &StepShape_HArray1OfValueQualifier::operator delete[], "None", py::arg("theAddress"));
// cls_StepShape_HArray1OfValueQualifier.def_static("operator new_", (void * (*)(size_t, void *)) &StepShape_HArray1OfValueQualifier::operator new, "None", py::arg(""), py::arg("theAddress"));
// cls_StepShape_HArray1OfValueQualifier.def_static("operator delete_", (void (*)(void *, void *)) &StepShape_HArray1OfValueQualifier::operator delete, "None", py::arg(""), py::arg(""));
// cls_StepShape_HArray1OfValueQualifier.def_static("operator new_", (void * (*)(size_t, const opencascade::handle<NCollection_BaseAllocator> &)) &StepShape_HArray1OfValueQualifier::operator new, "None", py::arg("theSize"), py::arg("theAllocator"));
// cls_StepShape_HArray1OfValueQualifier.def_static("operator delete_", (void (*)(void *, const opencascade::handle<NCollection_BaseAllocator> &)) &StepShape_HArray1OfValueQualifier::operator delete, "None", py::arg("theAddress"), py::arg("theAllocator"));
cls_StepShape_HArray1OfValueQualifier.def("Array1", (const StepShape_Array1OfValueQualifier & (StepShape_HArray1OfValueQualifier::*)() const) &StepShape_HArray1OfValueQualifier::Array1, "None");
cls_StepShape_HArray1OfValueQualifier.def("ChangeArray1", (StepShape_Array1OfValueQualifier & (StepShape_HArray1OfValueQualifier::*)()) &StepShape_HArray1OfValueQualifier::ChangeArray1, "None");
cls_StepShape_HArray1OfValueQualifier.def_static("get_type_name_", (const char * (*)()) &StepShape_HArray1OfValueQualifier::get_type_name, "None");
cls_StepShape_HArray1OfValueQualifier.def_static("get_type_descriptor_", (const opencascade::handle<Standard_Type> & (*)()) &StepShape_HArray1OfValueQualifier::get_type_descriptor, "None");
cls_StepShape_HArray1OfValueQualifier.def("DynamicType", (const opencascade::handle<Standard_Type> & (StepShape_HArray1OfValueQualifier::*)() const) &StepShape_HArray1OfValueQualifier::DynamicType, "None");

// Enums

}