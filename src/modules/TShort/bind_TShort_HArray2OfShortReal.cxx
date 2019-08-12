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
#include <TShort_Array2OfShortReal.hxx>
#include <Standard_Transient.hxx>
#include <Standard.hxx>
#include <Standard_Handle.hxx>
#include <NCollection_BaseAllocator.hxx>
#include <Standard_TypeDef.hxx>
#include <NCollection_Array2.hxx>
#include <TShort_HArray2OfShortReal.hxx>
#include <Standard_Type.hxx>

void bind_TShort_HArray2OfShortReal(py::module &mod){

py::class_<TShort_HArray2OfShortReal, opencascade::handle<TShort_HArray2OfShortReal>, Standard_Transient> cls_TShort_HArray2OfShortReal(mod, "TShort_HArray2OfShortReal", "None", py::multiple_inheritance());

// Constructors
cls_TShort_HArray2OfShortReal.def(py::init<const Standard_Integer, const Standard_Integer, const Standard_Integer, const Standard_Integer>(), py::arg("theRowLow"), py::arg("theRowUpp"), py::arg("theColLow"), py::arg("theColUpp"));
cls_TShort_HArray2OfShortReal.def(py::init<const Standard_Integer, const Standard_Integer, const Standard_Integer, const Standard_Integer, const TShort_Array2OfShortReal::value_type &>(), py::arg("theRowLow"), py::arg("theRowUpp"), py::arg("theColLow"), py::arg("theColUpp"), py::arg("theValue"));
cls_TShort_HArray2OfShortReal.def(py::init<const TShort_Array2OfShortReal &>(), py::arg("theOther"));

// Fields

// Methods
// cls_TShort_HArray2OfShortReal.def_static("operator new_", (void * (*)(size_t)) &TShort_HArray2OfShortReal::operator new, "None", py::arg("theSize"));
// cls_TShort_HArray2OfShortReal.def_static("operator delete_", (void (*)(void *)) &TShort_HArray2OfShortReal::operator delete, "None", py::arg("theAddress"));
// cls_TShort_HArray2OfShortReal.def_static("operator new[]_", (void * (*)(size_t)) &TShort_HArray2OfShortReal::operator new[], "None", py::arg("theSize"));
// cls_TShort_HArray2OfShortReal.def_static("operator delete[]_", (void (*)(void *)) &TShort_HArray2OfShortReal::operator delete[], "None", py::arg("theAddress"));
// cls_TShort_HArray2OfShortReal.def_static("operator new_", (void * (*)(size_t, void *)) &TShort_HArray2OfShortReal::operator new, "None", py::arg(""), py::arg("theAddress"));
// cls_TShort_HArray2OfShortReal.def_static("operator delete_", (void (*)(void *, void *)) &TShort_HArray2OfShortReal::operator delete, "None", py::arg(""), py::arg(""));
// cls_TShort_HArray2OfShortReal.def_static("operator new_", (void * (*)(size_t, const opencascade::handle<NCollection_BaseAllocator> &)) &TShort_HArray2OfShortReal::operator new, "None", py::arg("theSize"), py::arg("theAllocator"));
// cls_TShort_HArray2OfShortReal.def_static("operator delete_", (void (*)(void *, const opencascade::handle<NCollection_BaseAllocator> &)) &TShort_HArray2OfShortReal::operator delete, "None", py::arg("theAddress"), py::arg("theAllocator"));
cls_TShort_HArray2OfShortReal.def("Array2", (const TShort_Array2OfShortReal & (TShort_HArray2OfShortReal::*)() const) &TShort_HArray2OfShortReal::Array2, "None");
cls_TShort_HArray2OfShortReal.def("ChangeArray2", (TShort_Array2OfShortReal & (TShort_HArray2OfShortReal::*)()) &TShort_HArray2OfShortReal::ChangeArray2, "None");
cls_TShort_HArray2OfShortReal.def_static("get_type_name_", (const char * (*)()) &TShort_HArray2OfShortReal::get_type_name, "None");
cls_TShort_HArray2OfShortReal.def_static("get_type_descriptor_", (const opencascade::handle<Standard_Type> & (*)()) &TShort_HArray2OfShortReal::get_type_descriptor, "None");
cls_TShort_HArray2OfShortReal.def("DynamicType", (const opencascade::handle<Standard_Type> & (TShort_HArray2OfShortReal::*)() const) &TShort_HArray2OfShortReal::DynamicType, "None");

// Enums

}