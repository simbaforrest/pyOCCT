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
#include <gce_Root.hxx>
#include <Standard.hxx>
#include <gp_Ax2d.hxx>
#include <Standard_TypeDef.hxx>
#include <gp_Ax22d.hxx>
#include <gp_Circ2d.hxx>
#include <gp_Pnt2d.hxx>
#include <gce_MakeCirc2d.hxx>

void bind_gce_MakeCirc2d(py::module &mod){

py::class_<gce_MakeCirc2d, std::unique_ptr<gce_MakeCirc2d, Deleter<gce_MakeCirc2d>>, gce_Root> cls_gce_MakeCirc2d(mod, "gce_MakeCirc2d", "This class implements the following algorithms used to create Circ2d from gp.");

// Constructors
cls_gce_MakeCirc2d.def(py::init<const gp_Ax2d &, const Standard_Real>(), py::arg("XAxis"), py::arg("Radius"));
cls_gce_MakeCirc2d.def(py::init<const gp_Ax2d &, const Standard_Real, const Standard_Boolean>(), py::arg("XAxis"), py::arg("Radius"), py::arg("Sense"));
cls_gce_MakeCirc2d.def(py::init<const gp_Ax22d &, const Standard_Real>(), py::arg("Axis"), py::arg("Radius"));
cls_gce_MakeCirc2d.def(py::init<const gp_Circ2d &, const Standard_Real>(), py::arg("Circ"), py::arg("Dist"));
cls_gce_MakeCirc2d.def(py::init<const gp_Circ2d &, const gp_Pnt2d &>(), py::arg("Circ"), py::arg("Point"));
cls_gce_MakeCirc2d.def(py::init<const gp_Pnt2d &, const gp_Pnt2d &, const gp_Pnt2d &>(), py::arg("P1"), py::arg("P2"), py::arg("P3"));
cls_gce_MakeCirc2d.def(py::init<const gp_Pnt2d &, const Standard_Real>(), py::arg("Center"), py::arg("Radius"));
cls_gce_MakeCirc2d.def(py::init<const gp_Pnt2d &, const Standard_Real, const Standard_Boolean>(), py::arg("Center"), py::arg("Radius"), py::arg("Sense"));
cls_gce_MakeCirc2d.def(py::init<const gp_Pnt2d &, const gp_Pnt2d &>(), py::arg("Center"), py::arg("Point"));
cls_gce_MakeCirc2d.def(py::init<const gp_Pnt2d &, const gp_Pnt2d &, const Standard_Boolean>(), py::arg("Center"), py::arg("Point"), py::arg("Sense"));

// Fields

// Methods
// cls_gce_MakeCirc2d.def_static("operator new_", (void * (*)(size_t)) &gce_MakeCirc2d::operator new, "None", py::arg("theSize"));
// cls_gce_MakeCirc2d.def_static("operator delete_", (void (*)(void *)) &gce_MakeCirc2d::operator delete, "None", py::arg("theAddress"));
// cls_gce_MakeCirc2d.def_static("operator new[]_", (void * (*)(size_t)) &gce_MakeCirc2d::operator new[], "None", py::arg("theSize"));
// cls_gce_MakeCirc2d.def_static("operator delete[]_", (void (*)(void *)) &gce_MakeCirc2d::operator delete[], "None", py::arg("theAddress"));
// cls_gce_MakeCirc2d.def_static("operator new_", (void * (*)(size_t, void *)) &gce_MakeCirc2d::operator new, "None", py::arg(""), py::arg("theAddress"));
// cls_gce_MakeCirc2d.def_static("operator delete_", (void (*)(void *, void *)) &gce_MakeCirc2d::operator delete, "None", py::arg(""), py::arg(""));
cls_gce_MakeCirc2d.def("Value", (const gp_Circ2d & (gce_MakeCirc2d::*)() const) &gce_MakeCirc2d::Value, "Returns the constructed circle. Exceptions StdFail_NotDone if no circle is constructed.");
cls_gce_MakeCirc2d.def("Operator", (const gp_Circ2d & (gce_MakeCirc2d::*)() const) &gce_MakeCirc2d::Operator, "None");

// Enums

}