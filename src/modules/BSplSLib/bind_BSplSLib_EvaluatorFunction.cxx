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
#include <Standard_TypeDef.hxx>
#include <BSplSLib_EvaluatorFunction.hxx>

void bind_BSplSLib_EvaluatorFunction(py::module &mod){

py::class_<BSplSLib_EvaluatorFunction, std::unique_ptr<BSplSLib_EvaluatorFunction, Deleter<BSplSLib_EvaluatorFunction>>> cls_BSplSLib_EvaluatorFunction(mod, "BSplSLib_EvaluatorFunction", "None");

// Fields

// Methods
cls_BSplSLib_EvaluatorFunction.def("Evaluate", [](BSplSLib_EvaluatorFunction &self, const Standard_Integer theDerivativeRequest, const Standard_Real theUParameter, const Standard_Real theVParameter, Standard_Real & theResult, Standard_Integer & theErrorCode){ self.Evaluate(theDerivativeRequest, theUParameter, theVParameter, theResult, theErrorCode); return std::tuple<Standard_Real &, Standard_Integer &>(theResult, theErrorCode); }, "Function evaluation method to be defined by descendant", py::arg("theDerivativeRequest"), py::arg("theUParameter"), py::arg("theVParameter"), py::arg("theResult"), py::arg("theErrorCode"));
cls_BSplSLib_EvaluatorFunction.def("__call__", [](BSplSLib_EvaluatorFunction &self, const Standard_Integer theDerivativeRequest, const Standard_Real theUParameter, const Standard_Real theVParameter, Standard_Real & theResult, Standard_Integer & theErrorCode){ self.operator()(theDerivativeRequest, theUParameter, theVParameter, theResult, theErrorCode); return std::tuple<Standard_Real &, Standard_Integer &>(theResult, theErrorCode); }, "Shortcut for function-call style usage", py::arg("theDerivativeRequest"), py::arg("theUParameter"), py::arg("theVParameter"), py::arg("theResult"), py::arg("theErrorCode"));

// Enums

}