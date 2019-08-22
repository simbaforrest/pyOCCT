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
#include <Standard_TypeDef.hxx>
#include <TColgp_Array2OfPnt.hxx>
#include <TColStd_Array2OfReal.hxx>
#include <TColStd_Array1OfReal.hxx>
#include <TColStd_Array1OfInteger.hxx>
#include <gp_Pnt.hxx>
#include <gp_Vec.hxx>
#include <TColgp_Array1OfPnt.hxx>
#include <BSplSLib_EvaluatorFunction.hxx>
#include <BSplSLib.hxx>

void bind_BSplSLib(py::module &mod){

py::class_<BSplSLib> cls_BSplSLib(mod, "BSplSLib", "BSplSLib B-spline surface Library This package provides an implementation of geometric functions for rational and non rational, periodic and non periodic B-spline surface computation.");

// Constructors

// Fields

// Methods
// cls_BSplSLib.def_static("operator new_", (void * (*)(size_t)) &BSplSLib::operator new, "None", py::arg("theSize"));
// cls_BSplSLib.def_static("operator delete_", (void (*)(void *)) &BSplSLib::operator delete, "None", py::arg("theAddress"));
// cls_BSplSLib.def_static("operator new[]_", (void * (*)(size_t)) &BSplSLib::operator new[], "None", py::arg("theSize"));
// cls_BSplSLib.def_static("operator delete[]_", (void (*)(void *)) &BSplSLib::operator delete[], "None", py::arg("theAddress"));
// cls_BSplSLib.def_static("operator new_", (void * (*)(size_t, void *)) &BSplSLib::operator new, "None", py::arg(""), py::arg("theAddress"));
// cls_BSplSLib.def_static("operator delete_", (void (*)(void *, void *)) &BSplSLib::operator delete, "None", py::arg(""), py::arg(""));
cls_BSplSLib.def_static("RationalDerivative_", [](const Standard_Integer UDeg, const Standard_Integer VDeg, const Standard_Integer N, const Standard_Integer M, Standard_Real & Ders, Standard_Real & RDers, const Standard_Boolean All){ BSplSLib::RationalDerivative(UDeg, VDeg, N, M, Ders, RDers, All); return std::tuple<Standard_Real &, Standard_Real &>(Ders, RDers); }, "this is a one dimensional function typedef void (*EvaluatorFunction) ( Standard_Integer // Derivative Request Standard_Real * // StartEnd[2][2] // [0] = U // [1] = V // [0] = start // [1] = end Standard_Real // UParameter Standard_Real // VParamerer Standard_Real & // Result Standard_Integer &) ;// Error Code serves to multiply a given vectorial BSpline by a function Computes the derivatives of a ratio of two-variables functions x(u,v) / w(u,v) at orders <N,M>, x(u,v) is a vector in dimension <3>.", py::arg("UDeg"), py::arg("VDeg"), py::arg("N"), py::arg("M"), py::arg("Ders"), py::arg("RDers"), py::arg("All"));
cls_BSplSLib.def_static("D0_", (void (*)(const Standard_Real, const Standard_Real, const Standard_Integer, const Standard_Integer, const TColgp_Array2OfPnt &, const TColStd_Array2OfReal *, const TColStd_Array1OfReal &, const TColStd_Array1OfReal &, const TColStd_Array1OfInteger *, const TColStd_Array1OfInteger *, const Standard_Integer, const Standard_Integer, const Standard_Boolean, const Standard_Boolean, const Standard_Boolean, const Standard_Boolean, gp_Pnt &)) &BSplSLib::D0, "None", py::arg("U"), py::arg("V"), py::arg("UIndex"), py::arg("VIndex"), py::arg("Poles"), py::arg("Weights"), py::arg("UKnots"), py::arg("VKnots"), py::arg("UMults"), py::arg("VMults"), py::arg("UDegree"), py::arg("VDegree"), py::arg("URat"), py::arg("VRat"), py::arg("UPer"), py::arg("VPer"), py::arg("P"));
cls_BSplSLib.def_static("D1_", (void (*)(const Standard_Real, const Standard_Real, const Standard_Integer, const Standard_Integer, const TColgp_Array2OfPnt &, const TColStd_Array2OfReal *, const TColStd_Array1OfReal &, const TColStd_Array1OfReal &, const TColStd_Array1OfInteger *, const TColStd_Array1OfInteger *, const Standard_Integer, const Standard_Integer, const Standard_Boolean, const Standard_Boolean, const Standard_Boolean, const Standard_Boolean, gp_Pnt &, gp_Vec &, gp_Vec &)) &BSplSLib::D1, "None", py::arg("U"), py::arg("V"), py::arg("UIndex"), py::arg("VIndex"), py::arg("Poles"), py::arg("Weights"), py::arg("UKnots"), py::arg("VKnots"), py::arg("UMults"), py::arg("VMults"), py::arg("Degree"), py::arg("VDegree"), py::arg("URat"), py::arg("VRat"), py::arg("UPer"), py::arg("VPer"), py::arg("P"), py::arg("Vu"), py::arg("Vv"));
cls_BSplSLib.def_static("D2_", (void (*)(const Standard_Real, const Standard_Real, const Standard_Integer, const Standard_Integer, const TColgp_Array2OfPnt &, const TColStd_Array2OfReal *, const TColStd_Array1OfReal &, const TColStd_Array1OfReal &, const TColStd_Array1OfInteger *, const TColStd_Array1OfInteger *, const Standard_Integer, const Standard_Integer, const Standard_Boolean, const Standard_Boolean, const Standard_Boolean, const Standard_Boolean, gp_Pnt &, gp_Vec &, gp_Vec &, gp_Vec &, gp_Vec &, gp_Vec &)) &BSplSLib::D2, "None", py::arg("U"), py::arg("V"), py::arg("UIndex"), py::arg("VIndex"), py::arg("Poles"), py::arg("Weights"), py::arg("UKnots"), py::arg("VKnots"), py::arg("UMults"), py::arg("VMults"), py::arg("UDegree"), py::arg("VDegree"), py::arg("URat"), py::arg("VRat"), py::arg("UPer"), py::arg("VPer"), py::arg("P"), py::arg("Vu"), py::arg("Vv"), py::arg("Vuu"), py::arg("Vvv"), py::arg("Vuv"));
cls_BSplSLib.def_static("D3_", (void (*)(const Standard_Real, const Standard_Real, const Standard_Integer, const Standard_Integer, const TColgp_Array2OfPnt &, const TColStd_Array2OfReal *, const TColStd_Array1OfReal &, const TColStd_Array1OfReal &, const TColStd_Array1OfInteger *, const TColStd_Array1OfInteger *, const Standard_Integer, const Standard_Integer, const Standard_Boolean, const Standard_Boolean, const Standard_Boolean, const Standard_Boolean, gp_Pnt &, gp_Vec &, gp_Vec &, gp_Vec &, gp_Vec &, gp_Vec &, gp_Vec &, gp_Vec &, gp_Vec &, gp_Vec &)) &BSplSLib::D3, "None", py::arg("U"), py::arg("V"), py::arg("UIndex"), py::arg("VIndex"), py::arg("Poles"), py::arg("Weights"), py::arg("UKnots"), py::arg("VKnots"), py::arg("UMults"), py::arg("VMults"), py::arg("UDegree"), py::arg("VDegree"), py::arg("URat"), py::arg("VRat"), py::arg("UPer"), py::arg("VPer"), py::arg("P"), py::arg("Vu"), py::arg("Vv"), py::arg("Vuu"), py::arg("Vvv"), py::arg("Vuv"), py::arg("Vuuu"), py::arg("Vvvv"), py::arg("Vuuv"), py::arg("Vuvv"));
cls_BSplSLib.def_static("DN_", (void (*)(const Standard_Real, const Standard_Real, const Standard_Integer, const Standard_Integer, const Standard_Integer, const Standard_Integer, const TColgp_Array2OfPnt &, const TColStd_Array2OfReal *, const TColStd_Array1OfReal &, const TColStd_Array1OfReal &, const TColStd_Array1OfInteger *, const TColStd_Array1OfInteger *, const Standard_Integer, const Standard_Integer, const Standard_Boolean, const Standard_Boolean, const Standard_Boolean, const Standard_Boolean, gp_Vec &)) &BSplSLib::DN, "None", py::arg("U"), py::arg("V"), py::arg("Nu"), py::arg("Nv"), py::arg("UIndex"), py::arg("VIndex"), py::arg("Poles"), py::arg("Weights"), py::arg("UKnots"), py::arg("VKnots"), py::arg("UMults"), py::arg("VMults"), py::arg("UDegree"), py::arg("VDegree"), py::arg("URat"), py::arg("VRat"), py::arg("UPer"), py::arg("VPer"), py::arg("Vn"));
cls_BSplSLib.def_static("Iso_", (void (*)(const Standard_Real, const Standard_Boolean, const TColgp_Array2OfPnt &, const TColStd_Array2OfReal *, const TColStd_Array1OfReal &, const TColStd_Array1OfInteger *, const Standard_Integer, const Standard_Boolean, TColgp_Array1OfPnt &, TColStd_Array1OfReal *)) &BSplSLib::Iso, "Computes the poles and weights of an isoparametric curve at parameter <Param> (UIso if <IsU> is True, VIso else).", py::arg("Param"), py::arg("IsU"), py::arg("Poles"), py::arg("Weights"), py::arg("Knots"), py::arg("Mults"), py::arg("Degree"), py::arg("Periodic"), py::arg("CPoles"), py::arg("CWeights"));
cls_BSplSLib.def_static("Reverse_", (void (*)(TColgp_Array2OfPnt &, const Standard_Integer, const Standard_Boolean)) &BSplSLib::Reverse, "Reverses the array of poles. Last is the Index of the new first Row( Col) of Poles. On a non periodic surface Last is Poles.Upper(). On a periodic curve last is (number of flat knots - degree - 1) or (sum of multiplicities(but for the last) + degree - 1)", py::arg("Poles"), py::arg("Last"), py::arg("UDirection"));
cls_BSplSLib.def_static("HomogeneousD0_", [](const Standard_Real U, const Standard_Real V, const Standard_Integer UIndex, const Standard_Integer VIndex, const TColgp_Array2OfPnt & Poles, const TColStd_Array2OfReal * Weights, const TColStd_Array1OfReal & UKnots, const TColStd_Array1OfReal & VKnots, const TColStd_Array1OfInteger * UMults, const TColStd_Array1OfInteger * VMults, const Standard_Integer UDegree, const Standard_Integer VDegree, const Standard_Boolean URat, const Standard_Boolean VRat, const Standard_Boolean UPer, const Standard_Boolean VPer, Standard_Real & W, gp_Pnt & P){ BSplSLib::HomogeneousD0(U, V, UIndex, VIndex, Poles, Weights, UKnots, VKnots, UMults, VMults, UDegree, VDegree, URat, VRat, UPer, VPer, W, P); return W; }, "Makes an homogeneous evaluation of Poles and Weights any and returns in P the Numerator value and in W the Denominator value if Weights are present otherwise returns 1.0e0", py::arg("U"), py::arg("V"), py::arg("UIndex"), py::arg("VIndex"), py::arg("Poles"), py::arg("Weights"), py::arg("UKnots"), py::arg("VKnots"), py::arg("UMults"), py::arg("VMults"), py::arg("UDegree"), py::arg("VDegree"), py::arg("URat"), py::arg("VRat"), py::arg("UPer"), py::arg("VPer"), py::arg("W"), py::arg("P"));
cls_BSplSLib.def_static("HomogeneousD1_", [](const Standard_Real U, const Standard_Real V, const Standard_Integer UIndex, const Standard_Integer VIndex, const TColgp_Array2OfPnt & Poles, const TColStd_Array2OfReal * Weights, const TColStd_Array1OfReal & UKnots, const TColStd_Array1OfReal & VKnots, const TColStd_Array1OfInteger * UMults, const TColStd_Array1OfInteger * VMults, const Standard_Integer UDegree, const Standard_Integer VDegree, const Standard_Boolean URat, const Standard_Boolean VRat, const Standard_Boolean UPer, const Standard_Boolean VPer, gp_Pnt & N, gp_Vec & Nu, gp_Vec & Nv, Standard_Real & D, Standard_Real & Du, Standard_Real & Dv){ BSplSLib::HomogeneousD1(U, V, UIndex, VIndex, Poles, Weights, UKnots, VKnots, UMults, VMults, UDegree, VDegree, URat, VRat, UPer, VPer, N, Nu, Nv, D, Du, Dv); return std::tuple<Standard_Real &, Standard_Real &, Standard_Real &>(D, Du, Dv); }, "Makes an homogeneous evaluation of Poles and Weights any and returns in P the Numerator value and in W the Denominator value if Weights are present otherwise returns 1.0e0", py::arg("U"), py::arg("V"), py::arg("UIndex"), py::arg("VIndex"), py::arg("Poles"), py::arg("Weights"), py::arg("UKnots"), py::arg("VKnots"), py::arg("UMults"), py::arg("VMults"), py::arg("UDegree"), py::arg("VDegree"), py::arg("URat"), py::arg("VRat"), py::arg("UPer"), py::arg("VPer"), py::arg("N"), py::arg("Nu"), py::arg("Nv"), py::arg("D"), py::arg("Du"), py::arg("Dv"));
cls_BSplSLib.def_static("Reverse_", (void (*)(TColStd_Array2OfReal &, const Standard_Integer, const Standard_Boolean)) &BSplSLib::Reverse, "Reverses the array of weights.", py::arg("Weights"), py::arg("Last"), py::arg("UDirection"));
cls_BSplSLib.def_static("IsRational_", [](const TColStd_Array2OfReal & a0, const Standard_Integer a1, const Standard_Integer a2, const Standard_Integer a3, const Standard_Integer a4) -> Standard_Boolean { return BSplSLib::IsRational(a0, a1, a2, a3, a4); });
cls_BSplSLib.def_static("IsRational_", (Standard_Boolean (*)(const TColStd_Array2OfReal &, const Standard_Integer, const Standard_Integer, const Standard_Integer, const Standard_Integer, const Standard_Real)) &BSplSLib::IsRational, "Returns False if all the weights of the array <Weights> in the area [I1,I2] * [J1,J2] are identic. Epsilon is used for comparing weights. If Epsilon is 0. the Epsilon of the first weight is used.", py::arg("Weights"), py::arg("I1"), py::arg("I2"), py::arg("J1"), py::arg("J2"), py::arg("Epsilon"));
cls_BSplSLib.def_static("SetPoles_", (void (*)(const TColgp_Array2OfPnt &, TColStd_Array1OfReal &, const Standard_Boolean)) &BSplSLib::SetPoles, "Copy in FP the coordinates of the poles.", py::arg("Poles"), py::arg("FP"), py::arg("UDirection"));
cls_BSplSLib.def_static("SetPoles_", (void (*)(const TColgp_Array2OfPnt &, const TColStd_Array2OfReal &, TColStd_Array1OfReal &, const Standard_Boolean)) &BSplSLib::SetPoles, "Copy in FP the coordinates of the poles.", py::arg("Poles"), py::arg("Weights"), py::arg("FP"), py::arg("UDirection"));
cls_BSplSLib.def_static("GetPoles_", (void (*)(const TColStd_Array1OfReal &, TColgp_Array2OfPnt &, const Standard_Boolean)) &BSplSLib::GetPoles, "Get from FP the coordinates of the poles.", py::arg("FP"), py::arg("Poles"), py::arg("UDirection"));
cls_BSplSLib.def_static("GetPoles_", (void (*)(const TColStd_Array1OfReal &, TColgp_Array2OfPnt &, TColStd_Array2OfReal &, const Standard_Boolean)) &BSplSLib::GetPoles, "Get from FP the coordinates of the poles.", py::arg("FP"), py::arg("Poles"), py::arg("Weights"), py::arg("UDirection"));
cls_BSplSLib.def_static("MovePoint_", [](const Standard_Real U, const Standard_Real V, const gp_Vec & Displ, const Standard_Integer UIndex1, const Standard_Integer UIndex2, const Standard_Integer VIndex1, const Standard_Integer VIndex2, const Standard_Integer UDegree, const Standard_Integer VDegree, const Standard_Boolean Rational, const TColgp_Array2OfPnt & Poles, const TColStd_Array2OfReal & Weights, const TColStd_Array1OfReal & UFlatKnots, const TColStd_Array1OfReal & VFlatKnots, Standard_Integer & UFirstIndex, Standard_Integer & ULastIndex, Standard_Integer & VFirstIndex, Standard_Integer & VLastIndex, TColgp_Array2OfPnt & NewPoles){ BSplSLib::MovePoint(U, V, Displ, UIndex1, UIndex2, VIndex1, VIndex2, UDegree, VDegree, Rational, Poles, Weights, UFlatKnots, VFlatKnots, UFirstIndex, ULastIndex, VFirstIndex, VLastIndex, NewPoles); return std::tuple<Standard_Integer &, Standard_Integer &, Standard_Integer &, Standard_Integer &>(UFirstIndex, ULastIndex, VFirstIndex, VLastIndex); }, "Find the new poles which allows an old point (with a given u,v as parameters) to reach a new position UIndex1,UIndex2 indicate the range of poles we can move for U (1, UNbPoles-1) or (2, UNbPoles) -> no constraint for one side in U (2, UNbPoles-1) -> the ends are enforced for U don't enter (1,NbPoles) and (1,VNbPoles) -> error: rigid move if problem in BSplineBasis calculation, no change for the curve and UFirstIndex, VLastIndex = 0 VFirstIndex, VLastIndex = 0", py::arg("U"), py::arg("V"), py::arg("Displ"), py::arg("UIndex1"), py::arg("UIndex2"), py::arg("VIndex1"), py::arg("VIndex2"), py::arg("UDegree"), py::arg("VDegree"), py::arg("Rational"), py::arg("Poles"), py::arg("Weights"), py::arg("UFlatKnots"), py::arg("VFlatKnots"), py::arg("UFirstIndex"), py::arg("ULastIndex"), py::arg("VFirstIndex"), py::arg("VLastIndex"), py::arg("NewPoles"));
cls_BSplSLib.def_static("InsertKnots_", [](const Standard_Boolean a0, const Standard_Integer a1, const Standard_Boolean a2, const TColgp_Array2OfPnt & a3, const TColStd_Array2OfReal * a4, const TColStd_Array1OfReal & a5, const TColStd_Array1OfInteger & a6, const TColStd_Array1OfReal & a7, const TColStd_Array1OfInteger * a8, TColgp_Array2OfPnt & a9, TColStd_Array2OfReal * a10, TColStd_Array1OfReal & a11, TColStd_Array1OfInteger & a12, const Standard_Real a13) -> void { return BSplSLib::InsertKnots(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13); });
cls_BSplSLib.def_static("InsertKnots_", (void (*)(const Standard_Boolean, const Standard_Integer, const Standard_Boolean, const TColgp_Array2OfPnt &, const TColStd_Array2OfReal *, const TColStd_Array1OfReal &, const TColStd_Array1OfInteger &, const TColStd_Array1OfReal &, const TColStd_Array1OfInteger *, TColgp_Array2OfPnt &, TColStd_Array2OfReal *, TColStd_Array1OfReal &, TColStd_Array1OfInteger &, const Standard_Real, const Standard_Boolean)) &BSplSLib::InsertKnots, "None", py::arg("UDirection"), py::arg("Degree"), py::arg("Periodic"), py::arg("Poles"), py::arg("Weights"), py::arg("Knots"), py::arg("Mults"), py::arg("AddKnots"), py::arg("AddMults"), py::arg("NewPoles"), py::arg("NewWeights"), py::arg("NewKnots"), py::arg("NewMults"), py::arg("Epsilon"), py::arg("Add"));
cls_BSplSLib.def_static("RemoveKnot_", (Standard_Boolean (*)(const Standard_Boolean, const Standard_Integer, const Standard_Integer, const Standard_Integer, const Standard_Boolean, const TColgp_Array2OfPnt &, const TColStd_Array2OfReal *, const TColStd_Array1OfReal &, const TColStd_Array1OfInteger &, TColgp_Array2OfPnt &, TColStd_Array2OfReal *, TColStd_Array1OfReal &, TColStd_Array1OfInteger &, const Standard_Real)) &BSplSLib::RemoveKnot, "None", py::arg("UDirection"), py::arg("Index"), py::arg("Mult"), py::arg("Degree"), py::arg("Periodic"), py::arg("Poles"), py::arg("Weights"), py::arg("Knots"), py::arg("Mults"), py::arg("NewPoles"), py::arg("NewWeights"), py::arg("NewKnots"), py::arg("NewMults"), py::arg("Tolerance"));
cls_BSplSLib.def_static("IncreaseDegree_", (void (*)(const Standard_Boolean, const Standard_Integer, const Standard_Integer, const Standard_Boolean, const TColgp_Array2OfPnt &, const TColStd_Array2OfReal *, const TColStd_Array1OfReal &, const TColStd_Array1OfInteger &, TColgp_Array2OfPnt &, TColStd_Array2OfReal *, TColStd_Array1OfReal &, TColStd_Array1OfInteger &)) &BSplSLib::IncreaseDegree, "None", py::arg("UDirection"), py::arg("Degree"), py::arg("NewDegree"), py::arg("Periodic"), py::arg("Poles"), py::arg("Weights"), py::arg("Knots"), py::arg("Mults"), py::arg("NewPoles"), py::arg("NewWeights"), py::arg("NewKnots"), py::arg("NewMults"));
cls_BSplSLib.def_static("Unperiodize_", (void (*)(const Standard_Boolean, const Standard_Integer, const TColStd_Array1OfInteger &, const TColStd_Array1OfReal &, const TColgp_Array2OfPnt &, const TColStd_Array2OfReal *, TColStd_Array1OfInteger &, TColStd_Array1OfReal &, TColgp_Array2OfPnt &, TColStd_Array2OfReal *)) &BSplSLib::Unperiodize, "None", py::arg("UDirection"), py::arg("Degree"), py::arg("Mults"), py::arg("Knots"), py::arg("Poles"), py::arg("Weights"), py::arg("NewMults"), py::arg("NewKnots"), py::arg("NewPoles"), py::arg("NewWeights"));
cls_BSplSLib.def_static("NoWeights_", (TColStd_Array2OfReal * (*)()) &BSplSLib::NoWeights, "Used as argument for a non rational curve.");
cls_BSplSLib.def_static("BuildCache_", (void (*)(const Standard_Real, const Standard_Real, const Standard_Real, const Standard_Real, const Standard_Boolean, const Standard_Boolean, const Standard_Integer, const Standard_Integer, const Standard_Integer, const Standard_Integer, const TColStd_Array1OfReal &, const TColStd_Array1OfReal &, const TColgp_Array2OfPnt &, const TColStd_Array2OfReal *, TColgp_Array2OfPnt &, TColStd_Array2OfReal *)) &BSplSLib::BuildCache, "Perform the evaluation of the Taylor expansion of the Bspline normalized between 0 and 1. If rational computes the homogeneous Taylor expension for the numerator and stores it in CachePoles", py::arg("U"), py::arg("V"), py::arg("USpanDomain"), py::arg("VSpanDomain"), py::arg("UPeriodicFlag"), py::arg("VPeriodicFlag"), py::arg("UDegree"), py::arg("VDegree"), py::arg("UIndex"), py::arg("VIndex"), py::arg("UFlatKnots"), py::arg("VFlatKnots"), py::arg("Poles"), py::arg("Weights"), py::arg("CachePoles"), py::arg("CacheWeights"));
cls_BSplSLib.def_static("BuildCache_", (void (*)(const Standard_Real, const Standard_Real, const Standard_Real, const Standard_Real, const Standard_Boolean, const Standard_Boolean, const Standard_Integer, const Standard_Integer, const Standard_Integer, const Standard_Integer, const TColStd_Array1OfReal &, const TColStd_Array1OfReal &, const TColgp_Array2OfPnt &, const TColStd_Array2OfReal *, TColStd_Array2OfReal &)) &BSplSLib::BuildCache, "Perform the evaluation of the Taylor expansion of the Bspline normalized between 0 and 1. Structure of result optimized for BSplSLib_Cache.", py::arg("theU"), py::arg("theV"), py::arg("theUSpanDomain"), py::arg("theVSpanDomain"), py::arg("theUPeriodic"), py::arg("theVPeriodic"), py::arg("theUDegree"), py::arg("theVDegree"), py::arg("theUIndex"), py::arg("theVIndex"), py::arg("theUFlatKnots"), py::arg("theVFlatKnots"), py::arg("thePoles"), py::arg("theWeights"), py::arg("theCacheArray"));
cls_BSplSLib.def_static("CacheD0_", (void (*)(const Standard_Real, const Standard_Real, const Standard_Integer, const Standard_Integer, const Standard_Real, const Standard_Real, const Standard_Real, const Standard_Real, const TColgp_Array2OfPnt &, const TColStd_Array2OfReal *, gp_Pnt &)) &BSplSLib::CacheD0, "Perform the evaluation of the of the cache the parameter must be normalized between the 0 and 1 for the span. The Cache must be valid when calling this routine. Geom Package will insure that. and then multiplies by the weights this just evaluates the current point the CacheParameter is where the Cache was constructed the SpanLength is to normalize the polynomial in the cache to avoid bad conditioning effects", py::arg("U"), py::arg("V"), py::arg("UDegree"), py::arg("VDegree"), py::arg("UCacheParameter"), py::arg("VCacheParameter"), py::arg("USpanLenght"), py::arg("VSpanLength"), py::arg("Poles"), py::arg("Weights"), py::arg("Point"));
cls_BSplSLib.def_static("CoefsD0_", (void (*)(const Standard_Real, const Standard_Real, const TColgp_Array2OfPnt &, const TColStd_Array2OfReal *, gp_Pnt &)) &BSplSLib::CoefsD0, "Calls CacheD0 for Bezier Surfaces Arrays computed with the method PolesCoefficients. Warning: To be used for BezierSurfaces ONLY!!!", py::arg("U"), py::arg("V"), py::arg("Poles"), py::arg("Weights"), py::arg("Point"));
cls_BSplSLib.def_static("CacheD1_", (void (*)(const Standard_Real, const Standard_Real, const Standard_Integer, const Standard_Integer, const Standard_Real, const Standard_Real, const Standard_Real, const Standard_Real, const TColgp_Array2OfPnt &, const TColStd_Array2OfReal *, gp_Pnt &, gp_Vec &, gp_Vec &)) &BSplSLib::CacheD1, "Perform the evaluation of the of the cache the parameter must be normalized between the 0 and 1 for the span. The Cache must be valid when calling this routine. Geom Package will insure that. and then multiplies by the weights this just evaluates the current point the CacheParameter is where the Cache was constructed the SpanLength is to normalize the polynomial in the cache to avoid bad conditioning effects", py::arg("U"), py::arg("V"), py::arg("UDegree"), py::arg("VDegree"), py::arg("UCacheParameter"), py::arg("VCacheParameter"), py::arg("USpanLenght"), py::arg("VSpanLength"), py::arg("Poles"), py::arg("Weights"), py::arg("Point"), py::arg("VecU"), py::arg("VecV"));
cls_BSplSLib.def_static("CoefsD1_", (void (*)(const Standard_Real, const Standard_Real, const TColgp_Array2OfPnt &, const TColStd_Array2OfReal *, gp_Pnt &, gp_Vec &, gp_Vec &)) &BSplSLib::CoefsD1, "Calls CacheD0 for Bezier Surfaces Arrays computed with the method PolesCoefficients. Warning: To be used for BezierSurfaces ONLY!!!", py::arg("U"), py::arg("V"), py::arg("Poles"), py::arg("Weights"), py::arg("Point"), py::arg("VecU"), py::arg("VecV"));
cls_BSplSLib.def_static("CacheD2_", (void (*)(const Standard_Real, const Standard_Real, const Standard_Integer, const Standard_Integer, const Standard_Real, const Standard_Real, const Standard_Real, const Standard_Real, const TColgp_Array2OfPnt &, const TColStd_Array2OfReal *, gp_Pnt &, gp_Vec &, gp_Vec &, gp_Vec &, gp_Vec &, gp_Vec &)) &BSplSLib::CacheD2, "Perform the evaluation of the of the cache the parameter must be normalized between the 0 and 1 for the span. The Cache must be valid when calling this routine. Geom Package will insure that. and then multiplies by the weights this just evaluates the current point the CacheParameter is where the Cache was constructed the SpanLength is to normalize the polynomial in the cache to avoid bad conditioning effects", py::arg("U"), py::arg("V"), py::arg("UDegree"), py::arg("VDegree"), py::arg("UCacheParameter"), py::arg("VCacheParameter"), py::arg("USpanLenght"), py::arg("VSpanLength"), py::arg("Poles"), py::arg("Weights"), py::arg("Point"), py::arg("VecU"), py::arg("VecV"), py::arg("VecUU"), py::arg("VecUV"), py::arg("VecVV"));
cls_BSplSLib.def_static("CoefsD2_", (void (*)(const Standard_Real, const Standard_Real, const TColgp_Array2OfPnt &, const TColStd_Array2OfReal *, gp_Pnt &, gp_Vec &, gp_Vec &, gp_Vec &, gp_Vec &, gp_Vec &)) &BSplSLib::CoefsD2, "Calls CacheD0 for Bezier Surfaces Arrays computed with the method PolesCoefficients. Warning: To be used for BezierSurfaces ONLY!!!", py::arg("U"), py::arg("V"), py::arg("Poles"), py::arg("Weights"), py::arg("Point"), py::arg("VecU"), py::arg("VecV"), py::arg("VecUU"), py::arg("VecUV"), py::arg("VecVV"));
cls_BSplSLib.def_static("PolesCoefficients_", (void (*)(const TColgp_Array2OfPnt &, TColgp_Array2OfPnt &)) &BSplSLib::PolesCoefficients, "Warning! To be used for BezierSurfaces ONLY!!!", py::arg("Poles"), py::arg("CachePoles"));
cls_BSplSLib.def_static("PolesCoefficients_", (void (*)(const TColgp_Array2OfPnt &, const TColStd_Array2OfReal *, TColgp_Array2OfPnt &, TColStd_Array2OfReal *)) &BSplSLib::PolesCoefficients, "Encapsulation of BuildCache to perform the evaluation of the Taylor expansion for beziersurfaces at parameters 0.,0.; Warning: To be used for BezierSurfaces ONLY!!!", py::arg("Poles"), py::arg("Weights"), py::arg("CachePoles"), py::arg("CacheWeights"));
cls_BSplSLib.def_static("Resolution_", [](const TColgp_Array2OfPnt & Poles, const TColStd_Array2OfReal * Weights, const TColStd_Array1OfReal & UKnots, const TColStd_Array1OfReal & VKnots, const TColStd_Array1OfInteger & UMults, const TColStd_Array1OfInteger & VMults, const Standard_Integer UDegree, const Standard_Integer VDegree, const Standard_Boolean URat, const Standard_Boolean VRat, const Standard_Boolean UPer, const Standard_Boolean VPer, const Standard_Real Tolerance3D, Standard_Real & UTolerance, Standard_Real & VTolerance){ BSplSLib::Resolution(Poles, Weights, UKnots, VKnots, UMults, VMults, UDegree, VDegree, URat, VRat, UPer, VPer, Tolerance3D, UTolerance, VTolerance); return std::tuple<Standard_Real &, Standard_Real &>(UTolerance, VTolerance); }, "Given a tolerance in 3D space returns two tolerances, one in U one in V such that for all (u1,v1) and (u0,v0) in the domain of the surface f(u,v) we have : | u1 - u0 | < UTolerance and | v1 - v0 | < VTolerance we have |f (u1,v1) - f (u0,v0)| < Tolerance3D", py::arg("Poles"), py::arg("Weights"), py::arg("UKnots"), py::arg("VKnots"), py::arg("UMults"), py::arg("VMults"), py::arg("UDegree"), py::arg("VDegree"), py::arg("URat"), py::arg("VRat"), py::arg("UPer"), py::arg("VPer"), py::arg("Tolerance3D"), py::arg("UTolerance"), py::arg("VTolerance"));
cls_BSplSLib.def_static("Interpolate_", [](const Standard_Integer UDegree, const Standard_Integer VDegree, const TColStd_Array1OfReal & UFlatKnots, const TColStd_Array1OfReal & VFlatKnots, const TColStd_Array1OfReal & UParameters, const TColStd_Array1OfReal & VParameters, TColgp_Array2OfPnt & Poles, TColStd_Array2OfReal & Weights, Standard_Integer & InversionProblem){ BSplSLib::Interpolate(UDegree, VDegree, UFlatKnots, VFlatKnots, UParameters, VParameters, Poles, Weights, InversionProblem); return InversionProblem; }, "Performs the interpolation of the data points given in the Poles array in the form [1,...,RL][1,...,RC][1...PolesDimension] . The ColLength CL and the Length of UParameters must be the same. The length of VFlatKnots is VDegree + CL + 1.", py::arg("UDegree"), py::arg("VDegree"), py::arg("UFlatKnots"), py::arg("VFlatKnots"), py::arg("UParameters"), py::arg("VParameters"), py::arg("Poles"), py::arg("Weights"), py::arg("InversionProblem"));
cls_BSplSLib.def_static("Interpolate_", [](const Standard_Integer UDegree, const Standard_Integer VDegree, const TColStd_Array1OfReal & UFlatKnots, const TColStd_Array1OfReal & VFlatKnots, const TColStd_Array1OfReal & UParameters, const TColStd_Array1OfReal & VParameters, TColgp_Array2OfPnt & Poles, Standard_Integer & InversionProblem){ BSplSLib::Interpolate(UDegree, VDegree, UFlatKnots, VFlatKnots, UParameters, VParameters, Poles, InversionProblem); return InversionProblem; }, "Performs the interpolation of the data points given in the Poles array. The ColLength CL and the Length of UParameters must be the same. The length of VFlatKnots is VDegree + CL + 1.", py::arg("UDegree"), py::arg("VDegree"), py::arg("UFlatKnots"), py::arg("VFlatKnots"), py::arg("UParameters"), py::arg("VParameters"), py::arg("Poles"), py::arg("InversionProblem"));
cls_BSplSLib.def_static("FunctionMultiply_", [](const BSplSLib_EvaluatorFunction & Function, const Standard_Integer UBSplineDegree, const Standard_Integer VBSplineDegree, const TColStd_Array1OfReal & UBSplineKnots, const TColStd_Array1OfReal & VBSplineKnots, const TColStd_Array1OfInteger * UMults, const TColStd_Array1OfInteger * VMults, const TColgp_Array2OfPnt & Poles, const TColStd_Array2OfReal * Weights, const TColStd_Array1OfReal & UFlatKnots, const TColStd_Array1OfReal & VFlatKnots, const Standard_Integer UNewDegree, const Standard_Integer VNewDegree, TColgp_Array2OfPnt & NewNumerator, TColStd_Array2OfReal & NewDenominator, Standard_Integer & theStatus){ BSplSLib::FunctionMultiply(Function, UBSplineDegree, VBSplineDegree, UBSplineKnots, VBSplineKnots, UMults, VMults, Poles, Weights, UFlatKnots, VFlatKnots, UNewDegree, VNewDegree, NewNumerator, NewDenominator, theStatus); return theStatus; }, "this will multiply a given BSpline numerator N(u,v) and denominator D(u,v) defined by its U/VBSplineDegree and U/VBSplineKnots, and U/VMults. Its Poles and Weights are arrays which are coded as array2 of the form [1..UNumPoles][1..VNumPoles] by a function a(u,v) which is assumed to satisfy the following : 1. a(u,v) * N(u,v) and a(u,v) * D(u,v) is a polynomial BSpline that can be expressed exactly as a BSpline of degree U/VNewDegree on the knots U/VFlatKnots 2. the range of a(u,v) is the same as the range of N(u,v) or D(u,v) ---Warning: it is the caller's responsability to insure that conditions 1. and 2. above are satisfied : no check whatsoever is made in this method -- theStatus will return 0 if OK else it will return the pivot index -- of the matrix that was inverted to compute the multiplied -- BSpline : the method used is interpolation at Schoenenberg -- points of a(u,v)* N(u,v) and a(u,v) * D(u,v) theStatus will return 0 if OK else it will return the pivot index of the matrix that was inverted to compute the multiplied BSpline : the method used is interpolation at Schoenenberg points of a(u,v)*F(u,v) --", py::arg("Function"), py::arg("UBSplineDegree"), py::arg("VBSplineDegree"), py::arg("UBSplineKnots"), py::arg("VBSplineKnots"), py::arg("UMults"), py::arg("VMults"), py::arg("Poles"), py::arg("Weights"), py::arg("UFlatKnots"), py::arg("VFlatKnots"), py::arg("UNewDegree"), py::arg("VNewDegree"), py::arg("NewNumerator"), py::arg("NewDenominator"), py::arg("theStatus"));

// Enums

}