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
#include <Expr_PolyExpression.hxx>
#include <Expr_SequenceOfGeneralExpression.hxx>
#include <Standard_Handle.hxx>
#include <Expr_GeneralExpression.hxx>
#include <Standard_TypeDef.hxx>
#include <Expr_NamedUnknown.hxx>
#include <Expr_Array1OfNamedUnknown.hxx>
#include <TColStd_Array1OfReal.hxx>
#include <TCollection_AsciiString.hxx>
#include <Expr_Product.hxx>
#include <Standard_Type.hxx>

void bind_Expr_Product(py::module &mod){

py::class_<Expr_Product, opencascade::handle<Expr_Product>, Expr_PolyExpression> cls_Expr_Product(mod, "Expr_Product", "None");

// Constructors
cls_Expr_Product.def(py::init<const Expr_SequenceOfGeneralExpression &>(), py::arg("exps"));
cls_Expr_Product.def(py::init<const opencascade::handle<Expr_GeneralExpression> &, const opencascade::handle<Expr_GeneralExpression> &>(), py::arg("exp1"), py::arg("exp2"));

// Fields

// Methods
cls_Expr_Product.def("ShallowSimplified", (opencascade::handle<Expr_GeneralExpression> (Expr_Product::*)() const) &Expr_Product::ShallowSimplified, "Returns a GeneralExpression after a simplification of the arguments of <me>.");
cls_Expr_Product.def("Copy", (opencascade::handle<Expr_GeneralExpression> (Expr_Product::*)() const) &Expr_Product::Copy, "Returns a copy of <me> having the same unknowns and functions.");
cls_Expr_Product.def("IsIdentical", (Standard_Boolean (Expr_Product::*)(const opencascade::handle<Expr_GeneralExpression> &) const) &Expr_Product::IsIdentical, "Tests if <me> and <Other> define the same expression. This method does not include any simplification before testing.", py::arg("Other"));
cls_Expr_Product.def("IsLinear", (Standard_Boolean (Expr_Product::*)() const) &Expr_Product::IsLinear, "None");
cls_Expr_Product.def("Derivative", (opencascade::handle<Expr_GeneralExpression> (Expr_Product::*)(const opencascade::handle<Expr_NamedUnknown> &) const) &Expr_Product::Derivative, "Returns the derivative on <X> unknown of <me>", py::arg("X"));
cls_Expr_Product.def("Evaluate", (Standard_Real (Expr_Product::*)(const Expr_Array1OfNamedUnknown &, const TColStd_Array1OfReal &) const) &Expr_Product::Evaluate, "Returns the value of <me> (as a Real) by replacement of <vars> by <vals>. Raises NotEvaluable if <me> contains NamedUnknown not in <vars> or NumericError if result cannot be computed.", py::arg("vars"), py::arg("vals"));
cls_Expr_Product.def("String", (TCollection_AsciiString (Expr_Product::*)() const) &Expr_Product::String, "returns a string representing <me> in a readable way.");
cls_Expr_Product.def_static("get_type_name_", (const char * (*)()) &Expr_Product::get_type_name, "None");
cls_Expr_Product.def_static("get_type_descriptor_", (const opencascade::handle<Standard_Type> & (*)()) &Expr_Product::get_type_descriptor, "None");
cls_Expr_Product.def("DynamicType", (const opencascade::handle<Standard_Type> & (Expr_Product::*)() const) &Expr_Product::DynamicType, "None");

// Enums

}