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
#include <GeomFill_Array1OfSectionLaw.hxx>
#include <Standard_Transient.hxx>
#include <Standard.hxx>
#include <Standard_Handle.hxx>
#include <NCollection_BaseAllocator.hxx>
#include <Standard_TypeDef.hxx>
#include <NCollection_Array1.hxx>
#include <GeomFill_HArray1OfSectionLaw.hxx>
#include <Standard_Type.hxx>

void bind_GeomFill_HArray1OfSectionLaw(py::module &mod){

py::class_<GeomFill_HArray1OfSectionLaw, opencascade::handle<GeomFill_HArray1OfSectionLaw>, Standard_Transient> cls_GeomFill_HArray1OfSectionLaw(mod, "GeomFill_HArray1OfSectionLaw", "None", py::multiple_inheritance());

// Constructors
cls_GeomFill_HArray1OfSectionLaw.def(py::init<const Standard_Integer, const Standard_Integer>(), py::arg("theLower"), py::arg("theUpper"));
cls_GeomFill_HArray1OfSectionLaw.def(py::init<const Standard_Integer, const Standard_Integer, const GeomFill_Array1OfSectionLaw::value_type &>(), py::arg("theLower"), py::arg("theUpper"), py::arg("theValue"));
cls_GeomFill_HArray1OfSectionLaw.def(py::init<const GeomFill_Array1OfSectionLaw &>(), py::arg("theOther"));

// Fields

// Methods
// cls_GeomFill_HArray1OfSectionLaw.def_static("operator new_", (void * (*)(size_t)) &GeomFill_HArray1OfSectionLaw::operator new, "None", py::arg("theSize"));
// cls_GeomFill_HArray1OfSectionLaw.def_static("operator delete_", (void (*)(void *)) &GeomFill_HArray1OfSectionLaw::operator delete, "None", py::arg("theAddress"));
// cls_GeomFill_HArray1OfSectionLaw.def_static("operator new[]_", (void * (*)(size_t)) &GeomFill_HArray1OfSectionLaw::operator new[], "None", py::arg("theSize"));
// cls_GeomFill_HArray1OfSectionLaw.def_static("operator delete[]_", (void (*)(void *)) &GeomFill_HArray1OfSectionLaw::operator delete[], "None", py::arg("theAddress"));
// cls_GeomFill_HArray1OfSectionLaw.def_static("operator new_", (void * (*)(size_t, void *)) &GeomFill_HArray1OfSectionLaw::operator new, "None", py::arg(""), py::arg("theAddress"));
// cls_GeomFill_HArray1OfSectionLaw.def_static("operator delete_", (void (*)(void *, void *)) &GeomFill_HArray1OfSectionLaw::operator delete, "None", py::arg(""), py::arg(""));
// cls_GeomFill_HArray1OfSectionLaw.def_static("operator new_", (void * (*)(size_t, const opencascade::handle<NCollection_BaseAllocator> &)) &GeomFill_HArray1OfSectionLaw::operator new, "None", py::arg("theSize"), py::arg("theAllocator"));
// cls_GeomFill_HArray1OfSectionLaw.def_static("operator delete_", (void (*)(void *, const opencascade::handle<NCollection_BaseAllocator> &)) &GeomFill_HArray1OfSectionLaw::operator delete, "None", py::arg("theAddress"), py::arg("theAllocator"));
cls_GeomFill_HArray1OfSectionLaw.def("Array1", (const GeomFill_Array1OfSectionLaw & (GeomFill_HArray1OfSectionLaw::*)() const) &GeomFill_HArray1OfSectionLaw::Array1, "None");
cls_GeomFill_HArray1OfSectionLaw.def("ChangeArray1", (GeomFill_Array1OfSectionLaw & (GeomFill_HArray1OfSectionLaw::*)()) &GeomFill_HArray1OfSectionLaw::ChangeArray1, "None");
cls_GeomFill_HArray1OfSectionLaw.def_static("get_type_name_", (const char * (*)()) &GeomFill_HArray1OfSectionLaw::get_type_name, "None");
cls_GeomFill_HArray1OfSectionLaw.def_static("get_type_descriptor_", (const opencascade::handle<Standard_Type> & (*)()) &GeomFill_HArray1OfSectionLaw::get_type_descriptor, "None");
cls_GeomFill_HArray1OfSectionLaw.def("DynamicType", (const opencascade::handle<Standard_Type> & (GeomFill_HArray1OfSectionLaw::*)() const) &GeomFill_HArray1OfSectionLaw::DynamicType, "None");

// Enums

}