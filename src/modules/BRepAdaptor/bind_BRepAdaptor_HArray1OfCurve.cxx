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
#include <BRepAdaptor_Array1OfCurve.hxx>
#include <Standard_Transient.hxx>
#include <Standard.hxx>
#include <Standard_Handle.hxx>
#include <NCollection_BaseAllocator.hxx>
#include <Standard_TypeDef.hxx>
#include <NCollection_Array1.hxx>
#include <BRepAdaptor_HArray1OfCurve.hxx>
#include <Standard_Type.hxx>

void bind_BRepAdaptor_HArray1OfCurve(py::module &mod){

py::class_<BRepAdaptor_HArray1OfCurve, opencascade::handle<BRepAdaptor_HArray1OfCurve>, Standard_Transient> cls_BRepAdaptor_HArray1OfCurve(mod, "BRepAdaptor_HArray1OfCurve", "None", py::multiple_inheritance());

// Constructors
cls_BRepAdaptor_HArray1OfCurve.def(py::init<const Standard_Integer, const Standard_Integer>(), py::arg("theLower"), py::arg("theUpper"));
cls_BRepAdaptor_HArray1OfCurve.def(py::init<const Standard_Integer, const Standard_Integer, const BRepAdaptor_Array1OfCurve::value_type &>(), py::arg("theLower"), py::arg("theUpper"), py::arg("theValue"));
cls_BRepAdaptor_HArray1OfCurve.def(py::init<const BRepAdaptor_Array1OfCurve &>(), py::arg("theOther"));

// Fields

// Methods
// cls_BRepAdaptor_HArray1OfCurve.def_static("operator new_", (void * (*)(size_t)) &BRepAdaptor_HArray1OfCurve::operator new, "None", py::arg("theSize"));
// cls_BRepAdaptor_HArray1OfCurve.def_static("operator delete_", (void (*)(void *)) &BRepAdaptor_HArray1OfCurve::operator delete, "None", py::arg("theAddress"));
// cls_BRepAdaptor_HArray1OfCurve.def_static("operator new[]_", (void * (*)(size_t)) &BRepAdaptor_HArray1OfCurve::operator new[], "None", py::arg("theSize"));
// cls_BRepAdaptor_HArray1OfCurve.def_static("operator delete[]_", (void (*)(void *)) &BRepAdaptor_HArray1OfCurve::operator delete[], "None", py::arg("theAddress"));
// cls_BRepAdaptor_HArray1OfCurve.def_static("operator new_", (void * (*)(size_t, void *)) &BRepAdaptor_HArray1OfCurve::operator new, "None", py::arg(""), py::arg("theAddress"));
// cls_BRepAdaptor_HArray1OfCurve.def_static("operator delete_", (void (*)(void *, void *)) &BRepAdaptor_HArray1OfCurve::operator delete, "None", py::arg(""), py::arg(""));
// cls_BRepAdaptor_HArray1OfCurve.def_static("operator new_", (void * (*)(size_t, const opencascade::handle<NCollection_BaseAllocator> &)) &BRepAdaptor_HArray1OfCurve::operator new, "None", py::arg("theSize"), py::arg("theAllocator"));
// cls_BRepAdaptor_HArray1OfCurve.def_static("operator delete_", (void (*)(void *, const opencascade::handle<NCollection_BaseAllocator> &)) &BRepAdaptor_HArray1OfCurve::operator delete, "None", py::arg("theAddress"), py::arg("theAllocator"));
cls_BRepAdaptor_HArray1OfCurve.def("Array1", (const BRepAdaptor_Array1OfCurve & (BRepAdaptor_HArray1OfCurve::*)() const) &BRepAdaptor_HArray1OfCurve::Array1, "None");
cls_BRepAdaptor_HArray1OfCurve.def("ChangeArray1", (BRepAdaptor_Array1OfCurve & (BRepAdaptor_HArray1OfCurve::*)()) &BRepAdaptor_HArray1OfCurve::ChangeArray1, "None");
cls_BRepAdaptor_HArray1OfCurve.def_static("get_type_name_", (const char * (*)()) &BRepAdaptor_HArray1OfCurve::get_type_name, "None");
cls_BRepAdaptor_HArray1OfCurve.def_static("get_type_descriptor_", (const opencascade::handle<Standard_Type> & (*)()) &BRepAdaptor_HArray1OfCurve::get_type_descriptor, "None");
cls_BRepAdaptor_HArray1OfCurve.def("DynamicType", (const opencascade::handle<Standard_Type> & (BRepAdaptor_HArray1OfCurve::*)() const) &BRepAdaptor_HArray1OfCurve::DynamicType, "None");

// Enums

}