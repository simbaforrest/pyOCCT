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
#include <StepFEA_Array1OfDegreeOfFreedom.hxx>
#include <Standard_Transient.hxx>
#include <Standard.hxx>
#include <Standard_Handle.hxx>
#include <NCollection_BaseAllocator.hxx>
#include <Standard_TypeDef.hxx>
#include <NCollection_Array1.hxx>
#include <StepFEA_HArray1OfDegreeOfFreedom.hxx>
#include <Standard_Type.hxx>

void bind_StepFEA_HArray1OfDegreeOfFreedom(py::module &mod){

py::class_<StepFEA_HArray1OfDegreeOfFreedom, opencascade::handle<StepFEA_HArray1OfDegreeOfFreedom>, Standard_Transient> cls_StepFEA_HArray1OfDegreeOfFreedom(mod, "StepFEA_HArray1OfDegreeOfFreedom", "None", py::multiple_inheritance());

// Constructors
cls_StepFEA_HArray1OfDegreeOfFreedom.def(py::init<const Standard_Integer, const Standard_Integer>(), py::arg("theLower"), py::arg("theUpper"));
cls_StepFEA_HArray1OfDegreeOfFreedom.def(py::init<const Standard_Integer, const Standard_Integer, const StepFEA_Array1OfDegreeOfFreedom::value_type &>(), py::arg("theLower"), py::arg("theUpper"), py::arg("theValue"));
cls_StepFEA_HArray1OfDegreeOfFreedom.def(py::init<const StepFEA_Array1OfDegreeOfFreedom &>(), py::arg("theOther"));

// Fields

// Methods
// cls_StepFEA_HArray1OfDegreeOfFreedom.def_static("operator new_", (void * (*)(size_t)) &StepFEA_HArray1OfDegreeOfFreedom::operator new, "None", py::arg("theSize"));
// cls_StepFEA_HArray1OfDegreeOfFreedom.def_static("operator delete_", (void (*)(void *)) &StepFEA_HArray1OfDegreeOfFreedom::operator delete, "None", py::arg("theAddress"));
// cls_StepFEA_HArray1OfDegreeOfFreedom.def_static("operator new[]_", (void * (*)(size_t)) &StepFEA_HArray1OfDegreeOfFreedom::operator new[], "None", py::arg("theSize"));
// cls_StepFEA_HArray1OfDegreeOfFreedom.def_static("operator delete[]_", (void (*)(void *)) &StepFEA_HArray1OfDegreeOfFreedom::operator delete[], "None", py::arg("theAddress"));
// cls_StepFEA_HArray1OfDegreeOfFreedom.def_static("operator new_", (void * (*)(size_t, void *)) &StepFEA_HArray1OfDegreeOfFreedom::operator new, "None", py::arg(""), py::arg("theAddress"));
// cls_StepFEA_HArray1OfDegreeOfFreedom.def_static("operator delete_", (void (*)(void *, void *)) &StepFEA_HArray1OfDegreeOfFreedom::operator delete, "None", py::arg(""), py::arg(""));
// cls_StepFEA_HArray1OfDegreeOfFreedom.def_static("operator new_", (void * (*)(size_t, const opencascade::handle<NCollection_BaseAllocator> &)) &StepFEA_HArray1OfDegreeOfFreedom::operator new, "None", py::arg("theSize"), py::arg("theAllocator"));
// cls_StepFEA_HArray1OfDegreeOfFreedom.def_static("operator delete_", (void (*)(void *, const opencascade::handle<NCollection_BaseAllocator> &)) &StepFEA_HArray1OfDegreeOfFreedom::operator delete, "None", py::arg("theAddress"), py::arg("theAllocator"));
cls_StepFEA_HArray1OfDegreeOfFreedom.def("Array1", (const StepFEA_Array1OfDegreeOfFreedom & (StepFEA_HArray1OfDegreeOfFreedom::*)() const) &StepFEA_HArray1OfDegreeOfFreedom::Array1, "None");
cls_StepFEA_HArray1OfDegreeOfFreedom.def("ChangeArray1", (StepFEA_Array1OfDegreeOfFreedom & (StepFEA_HArray1OfDegreeOfFreedom::*)()) &StepFEA_HArray1OfDegreeOfFreedom::ChangeArray1, "None");
cls_StepFEA_HArray1OfDegreeOfFreedom.def_static("get_type_name_", (const char * (*)()) &StepFEA_HArray1OfDegreeOfFreedom::get_type_name, "None");
cls_StepFEA_HArray1OfDegreeOfFreedom.def_static("get_type_descriptor_", (const opencascade::handle<Standard_Type> & (*)()) &StepFEA_HArray1OfDegreeOfFreedom::get_type_descriptor, "None");
cls_StepFEA_HArray1OfDegreeOfFreedom.def("DynamicType", (const opencascade::handle<Standard_Type> & (StepFEA_HArray1OfDegreeOfFreedom::*)() const) &StepFEA_HArray1OfDegreeOfFreedom::DynamicType, "None");

// Enums

}