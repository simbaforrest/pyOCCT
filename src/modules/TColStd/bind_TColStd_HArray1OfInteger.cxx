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
#include <TColStd_Array1OfInteger.hxx>
#include <Standard_Transient.hxx>
#include <Standard.hxx>
#include <Standard_Handle.hxx>
#include <NCollection_BaseAllocator.hxx>
#include <Standard_TypeDef.hxx>
#include <NCollection_Array1.hxx>
#include <TColStd_HArray1OfInteger.hxx>
#include <Standard_Type.hxx>

void bind_TColStd_HArray1OfInteger(py::module &mod){

py::class_<TColStd_HArray1OfInteger, opencascade::handle<TColStd_HArray1OfInteger>, Standard_Transient> cls_TColStd_HArray1OfInteger(mod, "TColStd_HArray1OfInteger", "None", py::multiple_inheritance());

// Constructors
cls_TColStd_HArray1OfInteger.def(py::init<const Standard_Integer, const Standard_Integer>(), py::arg("theLower"), py::arg("theUpper"));
cls_TColStd_HArray1OfInteger.def(py::init<const Standard_Integer, const Standard_Integer, const TColStd_Array1OfInteger::value_type &>(), py::arg("theLower"), py::arg("theUpper"), py::arg("theValue"));
cls_TColStd_HArray1OfInteger.def(py::init<const TColStd_Array1OfInteger &>(), py::arg("theOther"));

// Fields

// Methods
// cls_TColStd_HArray1OfInteger.def_static("operator new_", (void * (*)(size_t)) &TColStd_HArray1OfInteger::operator new, "None", py::arg("theSize"));
// cls_TColStd_HArray1OfInteger.def_static("operator delete_", (void (*)(void *)) &TColStd_HArray1OfInteger::operator delete, "None", py::arg("theAddress"));
// cls_TColStd_HArray1OfInteger.def_static("operator new[]_", (void * (*)(size_t)) &TColStd_HArray1OfInteger::operator new[], "None", py::arg("theSize"));
// cls_TColStd_HArray1OfInteger.def_static("operator delete[]_", (void (*)(void *)) &TColStd_HArray1OfInteger::operator delete[], "None", py::arg("theAddress"));
// cls_TColStd_HArray1OfInteger.def_static("operator new_", (void * (*)(size_t, void *)) &TColStd_HArray1OfInteger::operator new, "None", py::arg(""), py::arg("theAddress"));
// cls_TColStd_HArray1OfInteger.def_static("operator delete_", (void (*)(void *, void *)) &TColStd_HArray1OfInteger::operator delete, "None", py::arg(""), py::arg(""));
// cls_TColStd_HArray1OfInteger.def_static("operator new_", (void * (*)(size_t, const opencascade::handle<NCollection_BaseAllocator> &)) &TColStd_HArray1OfInteger::operator new, "None", py::arg("theSize"), py::arg("theAllocator"));
// cls_TColStd_HArray1OfInteger.def_static("operator delete_", (void (*)(void *, const opencascade::handle<NCollection_BaseAllocator> &)) &TColStd_HArray1OfInteger::operator delete, "None", py::arg("theAddress"), py::arg("theAllocator"));
cls_TColStd_HArray1OfInteger.def("Array1", (const TColStd_Array1OfInteger & (TColStd_HArray1OfInteger::*)() const) &TColStd_HArray1OfInteger::Array1, "None");
cls_TColStd_HArray1OfInteger.def("ChangeArray1", (TColStd_Array1OfInteger & (TColStd_HArray1OfInteger::*)()) &TColStd_HArray1OfInteger::ChangeArray1, "None");
cls_TColStd_HArray1OfInteger.def_static("get_type_name_", (const char * (*)()) &TColStd_HArray1OfInteger::get_type_name, "None");
cls_TColStd_HArray1OfInteger.def_static("get_type_descriptor_", (const opencascade::handle<Standard_Type> & (*)()) &TColStd_HArray1OfInteger::get_type_descriptor, "None");
cls_TColStd_HArray1OfInteger.def("DynamicType", (const opencascade::handle<Standard_Type> & (TColStd_HArray1OfInteger::*)() const) &TColStd_HArray1OfInteger::DynamicType, "None");

// Enums

}