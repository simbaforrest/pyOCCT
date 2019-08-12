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
#include <IGESSolid_Array1OfLoop.hxx>
#include <Standard_Transient.hxx>
#include <Standard.hxx>
#include <Standard_Handle.hxx>
#include <NCollection_BaseAllocator.hxx>
#include <Standard_TypeDef.hxx>
#include <NCollection_Array1.hxx>
#include <IGESSolid_HArray1OfLoop.hxx>
#include <Standard_Type.hxx>

void bind_IGESSolid_HArray1OfLoop(py::module &mod){

py::class_<IGESSolid_HArray1OfLoop, opencascade::handle<IGESSolid_HArray1OfLoop>, Standard_Transient> cls_IGESSolid_HArray1OfLoop(mod, "IGESSolid_HArray1OfLoop", "None", py::multiple_inheritance());

// Constructors
cls_IGESSolid_HArray1OfLoop.def(py::init<const Standard_Integer, const Standard_Integer>(), py::arg("theLower"), py::arg("theUpper"));
cls_IGESSolid_HArray1OfLoop.def(py::init<const Standard_Integer, const Standard_Integer, const IGESSolid_Array1OfLoop::value_type &>(), py::arg("theLower"), py::arg("theUpper"), py::arg("theValue"));
cls_IGESSolid_HArray1OfLoop.def(py::init<const IGESSolid_Array1OfLoop &>(), py::arg("theOther"));

// Fields

// Methods
// cls_IGESSolid_HArray1OfLoop.def_static("operator new_", (void * (*)(size_t)) &IGESSolid_HArray1OfLoop::operator new, "None", py::arg("theSize"));
// cls_IGESSolid_HArray1OfLoop.def_static("operator delete_", (void (*)(void *)) &IGESSolid_HArray1OfLoop::operator delete, "None", py::arg("theAddress"));
// cls_IGESSolid_HArray1OfLoop.def_static("operator new[]_", (void * (*)(size_t)) &IGESSolid_HArray1OfLoop::operator new[], "None", py::arg("theSize"));
// cls_IGESSolid_HArray1OfLoop.def_static("operator delete[]_", (void (*)(void *)) &IGESSolid_HArray1OfLoop::operator delete[], "None", py::arg("theAddress"));
// cls_IGESSolid_HArray1OfLoop.def_static("operator new_", (void * (*)(size_t, void *)) &IGESSolid_HArray1OfLoop::operator new, "None", py::arg(""), py::arg("theAddress"));
// cls_IGESSolid_HArray1OfLoop.def_static("operator delete_", (void (*)(void *, void *)) &IGESSolid_HArray1OfLoop::operator delete, "None", py::arg(""), py::arg(""));
// cls_IGESSolid_HArray1OfLoop.def_static("operator new_", (void * (*)(size_t, const opencascade::handle<NCollection_BaseAllocator> &)) &IGESSolid_HArray1OfLoop::operator new, "None", py::arg("theSize"), py::arg("theAllocator"));
// cls_IGESSolid_HArray1OfLoop.def_static("operator delete_", (void (*)(void *, const opencascade::handle<NCollection_BaseAllocator> &)) &IGESSolid_HArray1OfLoop::operator delete, "None", py::arg("theAddress"), py::arg("theAllocator"));
cls_IGESSolid_HArray1OfLoop.def("Array1", (const IGESSolid_Array1OfLoop & (IGESSolid_HArray1OfLoop::*)() const) &IGESSolid_HArray1OfLoop::Array1, "None");
cls_IGESSolid_HArray1OfLoop.def("ChangeArray1", (IGESSolid_Array1OfLoop & (IGESSolid_HArray1OfLoop::*)()) &IGESSolid_HArray1OfLoop::ChangeArray1, "None");
cls_IGESSolid_HArray1OfLoop.def_static("get_type_name_", (const char * (*)()) &IGESSolid_HArray1OfLoop::get_type_name, "None");
cls_IGESSolid_HArray1OfLoop.def_static("get_type_descriptor_", (const opencascade::handle<Standard_Type> & (*)()) &IGESSolid_HArray1OfLoop::get_type_descriptor, "None");
cls_IGESSolid_HArray1OfLoop.def("DynamicType", (const opencascade::handle<Standard_Type> & (IGESSolid_HArray1OfLoop::*)() const) &IGESSolid_HArray1OfLoop::DynamicType, "None");

// Enums

}