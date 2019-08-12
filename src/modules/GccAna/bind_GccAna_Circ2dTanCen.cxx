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
#include <Standard.hxx>
#include <GccEnt_QualifiedCirc.hxx>
#include <gp_Pnt2d.hxx>
#include <Standard_TypeDef.hxx>
#include <gp_Lin2d.hxx>
#include <gp_Circ2d.hxx>
#include <GccEnt_Position.hxx>
#include <TColgp_Array1OfCirc2d.hxx>
#include <GccEnt_Array1OfPosition.hxx>
#include <TColStd_Array1OfInteger.hxx>
#include <TColgp_Array1OfPnt2d.hxx>
#include <TColStd_Array1OfReal.hxx>
#include <GccAna_Circ2dTanCen.hxx>

void bind_GccAna_Circ2dTanCen(py::module &mod){

py::class_<GccAna_Circ2dTanCen, std::unique_ptr<GccAna_Circ2dTanCen, Deleter<GccAna_Circ2dTanCen>>> cls_GccAna_Circ2dTanCen(mod, "GccAna_Circ2dTanCen", "This class implements the algorithms used to create 2d circles tangent to an entity and centered on a point. The arguments of all construction methods are : - The qualified element for the tangency constrains (QualifiedCirc, Line, Point). - The center point Pcenter. - A real Tolerance. Tolerance is only used in the limits cases. For example : We want to create a circle tangent to an EnclosedCirc C1 with a tolerance Tolerance. If we did not used Tolerance it is impossible to find a solution in the the following case : Pcenter is outside C1. With Tolerance we will give a solution if the distance between C1 and Pcenter is lower than or equal Tolerance.");

// Constructors
cls_GccAna_Circ2dTanCen.def(py::init<const GccEnt_QualifiedCirc &, const gp_Pnt2d &, const Standard_Real>(), py::arg("Qualified1"), py::arg("Pcenter"), py::arg("Tolerance"));
cls_GccAna_Circ2dTanCen.def(py::init<const gp_Lin2d &, const gp_Pnt2d &>(), py::arg("Linetan"), py::arg("Pcenter"));
cls_GccAna_Circ2dTanCen.def(py::init<const gp_Pnt2d &, const gp_Pnt2d &>(), py::arg("Point1"), py::arg("Pcenter"));

// Fields

// Methods
// cls_GccAna_Circ2dTanCen.def_static("operator new_", (void * (*)(size_t)) &GccAna_Circ2dTanCen::operator new, "None", py::arg("theSize"));
// cls_GccAna_Circ2dTanCen.def_static("operator delete_", (void (*)(void *)) &GccAna_Circ2dTanCen::operator delete, "None", py::arg("theAddress"));
// cls_GccAna_Circ2dTanCen.def_static("operator new[]_", (void * (*)(size_t)) &GccAna_Circ2dTanCen::operator new[], "None", py::arg("theSize"));
// cls_GccAna_Circ2dTanCen.def_static("operator delete[]_", (void (*)(void *)) &GccAna_Circ2dTanCen::operator delete[], "None", py::arg("theAddress"));
// cls_GccAna_Circ2dTanCen.def_static("operator new_", (void * (*)(size_t, void *)) &GccAna_Circ2dTanCen::operator new, "None", py::arg(""), py::arg("theAddress"));
// cls_GccAna_Circ2dTanCen.def_static("operator delete_", (void (*)(void *, void *)) &GccAna_Circ2dTanCen::operator delete, "None", py::arg(""), py::arg(""));
cls_GccAna_Circ2dTanCen.def("IsDone", (Standard_Boolean (GccAna_Circ2dTanCen::*)() const) &GccAna_Circ2dTanCen::IsDone, "This method returns True if the construction algorithm succeeded. Note: IsDone protects against a failure arising from a more internal intersection algorithm, which has reached its numeric limits.");
cls_GccAna_Circ2dTanCen.def("NbSolutions", (Standard_Integer (GccAna_Circ2dTanCen::*)() const) &GccAna_Circ2dTanCen::NbSolutions, "Returns the number of circles, representing solutions computed by this algorithm and raises NotDone exception if the algorithm didn't succeed.");
cls_GccAna_Circ2dTanCen.def("ThisSolution", (gp_Circ2d (GccAna_Circ2dTanCen::*)(const Standard_Integer) const) &GccAna_Circ2dTanCen::ThisSolution, "Returns the circle, representing the solution number Index and raises OutOfRange exception if Index is greater than the number of solutions. Be carefull: the Index is only a way to get all the solutions, but is not associated to theses outside the context of the algorithm-object. Raises NotDone if the construction algorithm didn't succeed. It raises OutOfRange if Index is greater than the number of solutions or less than zer", py::arg("Index"));
cls_GccAna_Circ2dTanCen.def("WhichQualifier", (void (GccAna_Circ2dTanCen::*)(const Standard_Integer, GccEnt_Position &) const) &GccAna_Circ2dTanCen::WhichQualifier, "Returns the qualifier Qualif1 of the tangency argument for the solution of index Index computed by this algorithm. The returned qualifier is: - that specified at the start of construction when the solutions are defined as enclosed, enclosing or It returns the real qualifiers (the qualifiers given to the constructor method in case of enclosed, enclosing and outside and the qualifiers computedin case of unqualified).", py::arg("Index"), py::arg("Qualif1"));
cls_GccAna_Circ2dTanCen.def("Tangency1", [](GccAna_Circ2dTanCen &self, const Standard_Integer Index, Standard_Real & ParSol, Standard_Real & ParArg, gp_Pnt2d & PntSol){ self.Tangency1(Index, ParSol, ParArg, PntSol); return std::tuple<Standard_Real &, Standard_Real &>(ParSol, ParArg); }, "Returns informations about the tangency point between the result number Index and the first argument. ParSol is the intrinsic parameter of the point PntSol on the solution curv. ParArg is the intrinsic parameter of the point PntArg on the argument curv. It raises NotDone if the construction algorithm didn't succeed. It raises OutOfRange if Index is greater than the number of solutions or less than zero.", py::arg("Index"), py::arg("ParSol"), py::arg("ParArg"), py::arg("PntSol"));
cls_GccAna_Circ2dTanCen.def("IsTheSame1", (Standard_Boolean (GccAna_Circ2dTanCen::*)(const Standard_Integer) const) &GccAna_Circ2dTanCen::IsTheSame1, "Returns True if the solution number Index is equal to the first argument. It raises NotDone if the construction algorithm didn't succeed. It raises OutOfRange if Index is greater than the number of solutions or less than zero.", py::arg("Index"));

// Enums

}