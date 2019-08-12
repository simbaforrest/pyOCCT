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
#include <Interface_FileReaderData.hxx>
#include <Standard_TypeDef.hxx>
#include <Interface_ParamType.hxx>
#include <TCollection_AsciiString.hxx>
#include <TColStd_SequenceOfAsciiString.hxx>
#include <Standard_Handle.hxx>
#include <Interface_Check.hxx>
#include <StepData_PDescr.hxx>
#include <Standard_Transient.hxx>
#include <StepData_SelectMember.hxx>
#include <StepData_StepReaderData.hxx>
#include <StepData_Field.hxx>
#include <StepData_ESDescr.hxx>
#include <StepData_FieldList.hxx>
#include <Standard_Type.hxx>
#include <StepData_SelectType.hxx>
#include <StepData_Logical.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepData_EnumTool.hxx>
#include <TColStd_Array1OfInteger.hxx>
#include <Interface_IndexedMapOfAsciiString.hxx>
#include <TColStd_DataMapOfIntegerInteger.hxx>

void bind_StepData_StepReaderData(py::module &mod){

py::class_<StepData_StepReaderData, opencascade::handle<StepData_StepReaderData>, Interface_FileReaderData> cls_StepData_StepReaderData(mod, "StepData_StepReaderData", "Specific FileReaderData for Step Contains litteral description of entities (for each one : type as a string, ident, parameter list) provides references evaluation, plus access to litteral data and specific access methods (Boolean, XY, XYZ)");

// Constructors
cls_StepData_StepReaderData.def(py::init<const Standard_Integer, const Standard_Integer, const Standard_Integer>(), py::arg("nbheader"), py::arg("nbtotal"), py::arg("nbpar"));

// Fields

// Methods
cls_StepData_StepReaderData.def("SetRecord", (void (StepData_StepReaderData::*)(const Standard_Integer, const Standard_CString, const Standard_CString, const Standard_Integer)) &StepData_StepReaderData::SetRecord, "Fills the fields of a record", py::arg("num"), py::arg("ident"), py::arg("type"), py::arg("nbpar"));
cls_StepData_StepReaderData.def("AddStepParam", [](StepData_StepReaderData &self, const Standard_Integer a0, const Standard_CString a1, const Interface_ParamType a2) -> void { return self.AddStepParam(a0, a1, a2); });
cls_StepData_StepReaderData.def("AddStepParam", (void (StepData_StepReaderData::*)(const Standard_Integer, const Standard_CString, const Interface_ParamType, const Standard_Integer)) &StepData_StepReaderData::AddStepParam, "Fills the fields of a parameter of a record. This is a variant of AddParam, Adapted to STEP (optimized for specific values)", py::arg("num"), py::arg("aval"), py::arg("atype"), py::arg("nument"));
cls_StepData_StepReaderData.def("RecordType", (const TCollection_AsciiString & (StepData_StepReaderData::*)(const Standard_Integer) const) &StepData_StepReaderData::RecordType, "Returns Record Type", py::arg("num"));
cls_StepData_StepReaderData.def("CType", (Standard_CString (StepData_StepReaderData::*)(const Standard_Integer) const) &StepData_StepReaderData::CType, "Returns Record Type as a CString was C++ : return const", py::arg("num"));
cls_StepData_StepReaderData.def("RecordIdent", (Standard_Integer (StepData_StepReaderData::*)(const Standard_Integer) const) &StepData_StepReaderData::RecordIdent, "Returns record identifier (Positive number) If returned ident is not positive : Sub-List or Scope mark", py::arg("num"));
cls_StepData_StepReaderData.def("SubListNumber", (Standard_Integer (StepData_StepReaderData::*)(const Standard_Integer, const Standard_Integer, const Standard_Boolean) const) &StepData_StepReaderData::SubListNumber, "Returns SubList numero designated by a parameter (nump) in a record (num), or zero if the parameter does not exist or is not a SubList address. Zero too If aslast is True and nump is not for the last parameter", py::arg("num"), py::arg("nump"), py::arg("aslast"));
cls_StepData_StepReaderData.def("IsComplex", (Standard_Boolean (StepData_StepReaderData::*)(const Standard_Integer) const) &StepData_StepReaderData::IsComplex, "Returns True if <num> corresponds to a Complex Type Entity (as can be defined by ANDOR Express clause)", py::arg("num"));
cls_StepData_StepReaderData.def("ComplexType", (void (StepData_StepReaderData::*)(const Standard_Integer, TColStd_SequenceOfAsciiString &) const) &StepData_StepReaderData::ComplexType, "Returns the List of Types which correspond to a Complex Type Entity. If not Complex, there is just one Type in it For a SubList or a Scope mark, <types> remains empty", py::arg("num"), py::arg("types"));
cls_StepData_StepReaderData.def("NextForComplex", (Standard_Integer (StepData_StepReaderData::*)(const Standard_Integer) const) &StepData_StepReaderData::NextForComplex, "Returns the Next 'Componant' for a Complex Type Entity, of which <num> is already a Componant (the first one or a next one) Returns 0 for a Simple Type or for the last Componant", py::arg("num"));
cls_StepData_StepReaderData.def("NamedForComplex", [](StepData_StepReaderData &self, const Standard_CString name, const Standard_Integer num0, Standard_Integer & num, opencascade::handle<Interface_Check> & ach){ Standard_Boolean rv = self.NamedForComplex(name, num0, num, ach); return std::tuple<Standard_Boolean, Standard_Integer &>(rv, num); }, "Determines the first component which brings a given name, for a Complex Type Entity <num0> is the very first record of this entity <num> is given the last NextNamedForComplex, starts at zero it is returned as the newly found number Hence, in the normal case, NextNamedForComplex starts by num0 if <num> is zero, else by NextForComplex(num) If the alphabetic order is not respected, it restarts from num0 and loops on NextForComplex until finding <name> In case of 'non-alphabetic order', <ach> is filled with a Warning for this name In case of 'not-found at all', <ach> is filled with a Fail, and <num> is returned as zero", py::arg("name"), py::arg("num0"), py::arg("num"), py::arg("ach"));
cls_StepData_StepReaderData.def("NamedForComplex", [](StepData_StepReaderData &self, const Standard_CString theName, const Standard_CString theShortName, const Standard_Integer num0, Standard_Integer & num, opencascade::handle<Interface_Check> & ach){ Standard_Boolean rv = self.NamedForComplex(theName, theShortName, num0, num, ach); return std::tuple<Standard_Boolean, Standard_Integer &>(rv, num); }, "Determines the first component which brings a given name, or short name for a Complex Type Entity <num0> is the very first record of this entity <num> is given the last NextNamedForComplex, starts at zero it is returned as the newly found number Hence, in the normal case, NextNamedForComplex starts by num0 if <num> is zero, else by NextForComplex(num) If the alphabetic order is not respected, it restarts from num0 and loops on NextForComplex until finding <name> In case of 'non-alphabetic order', <ach> is filled with a Warning for this name In case of 'not-found at all', <ach> is filled with a Fail, and <num> is returned as zero", py::arg("theName"), py::arg("theShortName"), py::arg("num0"), py::arg("num"), py::arg("ach"));
cls_StepData_StepReaderData.def("CheckNbParams", [](StepData_StepReaderData &self, const Standard_Integer a0, const Standard_Integer a1, opencascade::handle<Interface_Check> & a2) -> Standard_Boolean { return self.CheckNbParams(a0, a1, a2); });
cls_StepData_StepReaderData.def("CheckNbParams", (Standard_Boolean (StepData_StepReaderData::*)(const Standard_Integer, const Standard_Integer, opencascade::handle<Interface_Check> &, const Standard_CString) const) &StepData_StepReaderData::CheckNbParams, "Checks Count of Parameters of record <num> to equate <nbreq> If this Check is successful, returns True Else, fills <ach> with an Error Message then returns False <mess> is included in the Error message if given non empty", py::arg("num"), py::arg("nbreq"), py::arg("ach"), py::arg("mess"));
cls_StepData_StepReaderData.def("ReadSubList", [](StepData_StepReaderData &self, const Standard_Integer num, const Standard_Integer nump, const Standard_CString mess, opencascade::handle<Interface_Check> & ach, Standard_Integer & numsub, const Standard_Boolean optional, const Standard_Integer lenmin, const Standard_Integer lenmax){ Standard_Boolean rv = self.ReadSubList(num, nump, mess, ach, numsub, optional, lenmin, lenmax); return std::tuple<Standard_Boolean, Standard_Integer &>(rv, numsub); }, "reads parameter <nump> of record <num> as a sub-list (may be typed, see ReadTypedParameter in this case) Returns True if OK. Else (not a LIST), returns false and feeds Check with appropriate check If <optional> is True and Param is not defined, returns True with <ach> not filled and <numsub> returned as 0 Works with SubListNumber with <aslast> false (no specific case for last parameter)", py::arg("num"), py::arg("nump"), py::arg("mess"), py::arg("ach"), py::arg("numsub"), py::arg("optional"), py::arg("lenmin"), py::arg("lenmax"));
cls_StepData_StepReaderData.def("ReadSub", (Standard_Integer (StepData_StepReaderData::*)(const Standard_Integer, const Standard_CString, opencascade::handle<Interface_Check> &, const opencascade::handle<StepData_PDescr> &, opencascade::handle<Standard_Transient> &) const) &StepData_StepReaderData::ReadSub, "reads the content of a sub-list into a transient : SelectNamed, or HArray1 of Integer,Real,String,Transient ... recursive call if list of list ... If a sub-list has mixed types, an HArray1OfTransient is produced, it may contain SelectMember Intended to be called by ReadField The returned status is : negative if failed, 0 if empty. Else the kind to be recorded in the field", py::arg("numsub"), py::arg("mess"), py::arg("ach"), py::arg("descr"), py::arg("val"));
cls_StepData_StepReaderData.def("ReadMember", (Standard_Boolean (StepData_StepReaderData::*)(const Standard_Integer, const Standard_Integer, const Standard_CString, opencascade::handle<Interface_Check> &, opencascade::handle<StepData_SelectMember> &) const) &StepData_StepReaderData::ReadMember, "Reads parameter <nump> of record <num> into a SelectMember, self-sufficient (no Description needed) If <val> is already created, it will be filled, as possible And if reading does not match its own description, the result will be False If <val> is not it not yet created, it will be (SelectNamed) Usefull if a field is defined as a SelectMember, directly (SELECT with no Entity as member) But SelectType also manages SelectMember (for SELECT with some members as Entity, some other not)", py::arg("num"), py::arg("nump"), py::arg("mess"), py::arg("ach"), py::arg("val"));
cls_StepData_StepReaderData.def("ReadField", (Standard_Boolean (StepData_StepReaderData::*)(const Standard_Integer, const Standard_Integer, const Standard_CString, opencascade::handle<Interface_Check> &, const opencascade::handle<StepData_PDescr> &, StepData_Field &) const) &StepData_StepReaderData::ReadField, "reads parameter <nump> of record <num> into a Field, controlled by a Parameter Descriptor (PDescr), which controls its allowed type(s) and value <ach> is filled if the read parameter does not match its description (but the field is read anyway) If the description is not defined, no control is done Returns True when done", py::arg("num"), py::arg("nump"), py::arg("mess"), py::arg("ach"), py::arg("descr"), py::arg("fild"));
cls_StepData_StepReaderData.def("ReadList", (Standard_Boolean (StepData_StepReaderData::*)(const Standard_Integer, opencascade::handle<Interface_Check> &, const opencascade::handle<StepData_ESDescr> &, StepData_FieldList &) const) &StepData_StepReaderData::ReadList, "reads a list of fields controlled by an ESDescr", py::arg("num"), py::arg("ach"), py::arg("descr"), py::arg("list"));
cls_StepData_StepReaderData.def("ReadAny", (Standard_Boolean (StepData_StepReaderData::*)(const Standard_Integer, const Standard_Integer, const Standard_CString, opencascade::handle<Interface_Check> &, const opencascade::handle<StepData_PDescr> &, opencascade::handle<Standard_Transient> &) const) &StepData_StepReaderData::ReadAny, "Reads parameter <nump> of record <num> into a Transient Value according to the type of the parameter : Named for Integer,Boolean,Logical,Enum,Real : SelectNamed Immediate Integer,Boolean,Logical,Enum,Real : SelectInt/Real Text : HAsciiString Ident : the referenced Entity Sub-List not processed, see ReadSub This value is controlled by a Parameter Descriptor (PDescr), which controls its allowed type and value <ach> is filled if the read parameter does not match its description (the select is nevertheless created if possible)", py::arg("num"), py::arg("nump"), py::arg("mess"), py::arg("ach"), py::arg("descr"), py::arg("val"));
cls_StepData_StepReaderData.def("ReadXY", [](StepData_StepReaderData &self, const Standard_Integer num, const Standard_Integer nump, const Standard_CString mess, opencascade::handle<Interface_Check> & ach, Standard_Real & X, Standard_Real & Y){ Standard_Boolean rv = self.ReadXY(num, nump, mess, ach, X, Y); return std::tuple<Standard_Boolean, Standard_Real &, Standard_Real &>(rv, X, Y); }, "reads parameter <nump> of record <num> as a sub-list of two Reals X,Y. Returns True if OK. Else, returns false and feeds Check with appropriate Fails (parameter not a sub-list, not two Reals in the sub-list) composed with 'mess' which gives the name of the parameter", py::arg("num"), py::arg("nump"), py::arg("mess"), py::arg("ach"), py::arg("X"), py::arg("Y"));
cls_StepData_StepReaderData.def("ReadXYZ", [](StepData_StepReaderData &self, const Standard_Integer num, const Standard_Integer nump, const Standard_CString mess, opencascade::handle<Interface_Check> & ach, Standard_Real & X, Standard_Real & Y, Standard_Real & Z){ Standard_Boolean rv = self.ReadXYZ(num, nump, mess, ach, X, Y, Z); return std::tuple<Standard_Boolean, Standard_Real &, Standard_Real &, Standard_Real &>(rv, X, Y, Z); }, "reads parameter <nump> of record <num> as a sub-list of three Reals X,Y,Z. Return value and Check managed as by ReadXY (demands a sub-list of three Reals)", py::arg("num"), py::arg("nump"), py::arg("mess"), py::arg("ach"), py::arg("X"), py::arg("Y"), py::arg("Z"));
cls_StepData_StepReaderData.def("ReadReal", [](StepData_StepReaderData &self, const Standard_Integer num, const Standard_Integer nump, const Standard_CString mess, opencascade::handle<Interface_Check> & ach, Standard_Real & val){ Standard_Boolean rv = self.ReadReal(num, nump, mess, ach, val); return std::tuple<Standard_Boolean, Standard_Real &>(rv, val); }, "reads parameter <nump> of record <num> as a single Real value. Return value and Check managed as by ReadXY (demands a Real)", py::arg("num"), py::arg("nump"), py::arg("mess"), py::arg("ach"), py::arg("val"));
cls_StepData_StepReaderData.def("ReadEntity", (Standard_Boolean (StepData_StepReaderData::*)(const Standard_Integer, const Standard_Integer, const Standard_CString, opencascade::handle<Interface_Check> &, const opencascade::handle<Standard_Type> &, opencascade::handle<Standard_Transient> &) const) &StepData_StepReaderData::ReadEntity, "Reads parameter <nump> of record <num> as a single Entity. Return value and Check managed as by ReadReal (demands a reference to an Entity). In Addition, demands read Entity to be Kind of a required Type <atype>. Remark that returned status is False and <ent> is Null if parameter is not an Entity, <ent> remains Not Null is parameter is an Entity but is not Kind of required type", py::arg("num"), py::arg("nump"), py::arg("mess"), py::arg("ach"), py::arg("atype"), py::arg("ent"));
cls_StepData_StepReaderData.def("ReadEntity", (Standard_Boolean (StepData_StepReaderData::*)(const Standard_Integer, const Standard_Integer, const Standard_CString, opencascade::handle<Interface_Check> &, StepData_SelectType &) const) &StepData_StepReaderData::ReadEntity, "Same as above, but a SelectType checks Type Matching, and records the read Entity (see method Value from SelectType)", py::arg("num"), py::arg("nump"), py::arg("mess"), py::arg("ach"), py::arg("sel"));
cls_StepData_StepReaderData.def("ReadInteger", [](StepData_StepReaderData &self, const Standard_Integer num, const Standard_Integer nump, const Standard_CString mess, opencascade::handle<Interface_Check> & ach, Standard_Integer & val){ Standard_Boolean rv = self.ReadInteger(num, nump, mess, ach, val); return std::tuple<Standard_Boolean, Standard_Integer &>(rv, val); }, "reads parameter <nump> of record <num> as a single Integer. Return value & Check managed as by ReadXY (demands an Integer)", py::arg("num"), py::arg("nump"), py::arg("mess"), py::arg("ach"), py::arg("val"));
cls_StepData_StepReaderData.def("ReadBoolean", [](StepData_StepReaderData &self, const Standard_Integer num, const Standard_Integer nump, const Standard_CString mess, opencascade::handle<Interface_Check> & ach, Standard_Boolean & flag){ Standard_Boolean rv = self.ReadBoolean(num, nump, mess, ach, flag); return std::tuple<Standard_Boolean, Standard_Boolean &>(rv, flag); }, "reads parameter <nump> of record <num> as a Boolean Return value and Check managed as by ReadReal (demands a Boolean enum, i.e. text '.T.' for True or '.F.' for False)", py::arg("num"), py::arg("nump"), py::arg("mess"), py::arg("ach"), py::arg("flag"));
cls_StepData_StepReaderData.def("ReadLogical", (Standard_Boolean (StepData_StepReaderData::*)(const Standard_Integer, const Standard_Integer, const Standard_CString, opencascade::handle<Interface_Check> &, StepData_Logical &) const) &StepData_StepReaderData::ReadLogical, "reads parameter <nump> of record <num> as a Logical Return value and Check managed as by ReadBoolean (demands a Logical enum, i.e. text '.T.', '.F.', or '.U.')", py::arg("num"), py::arg("nump"), py::arg("mess"), py::arg("ach"), py::arg("flag"));
cls_StepData_StepReaderData.def("ReadString", (Standard_Boolean (StepData_StepReaderData::*)(const Standard_Integer, const Standard_Integer, const Standard_CString, opencascade::handle<Interface_Check> &, opencascade::handle<TCollection_HAsciiString> &) const) &StepData_StepReaderData::ReadString, "reads parameter <nump> of record <num> as a String (text between quotes, quotes are removed by the Read operation) Return value and Check managed as by ReadXY (demands a String)", py::arg("num"), py::arg("nump"), py::arg("mess"), py::arg("ach"), py::arg("val"));
// cls_StepData_StepReaderData.def("ReadEnumParam", [](StepData_StepReaderData &self, const Standard_Integer num, const Standard_Integer nump, const Standard_CString mess, opencascade::handle<Interface_Check> & ach, Standard_CString & text){ Standard_Boolean rv = self.ReadEnumParam(num, nump, mess, ach, text); return std::tuple<Standard_Boolean, Standard_CString &>(rv, text); }, "None", py::arg("num"), py::arg("nump"), py::arg("mess"), py::arg("ach"), py::arg("text"));
cls_StepData_StepReaderData.def("FailEnumValue", (void (StepData_StepReaderData::*)(const Standard_Integer, const Standard_Integer, const Standard_CString, opencascade::handle<Interface_Check> &) const) &StepData_StepReaderData::FailEnumValue, "Fills a check with a fail message if enumeration value does match parameter definition Just a help to centralize message definitions", py::arg("num"), py::arg("nump"), py::arg("mess"), py::arg("ach"));
cls_StepData_StepReaderData.def("ReadEnum", [](StepData_StepReaderData &self, const Standard_Integer num, const Standard_Integer nump, const Standard_CString mess, opencascade::handle<Interface_Check> & ach, const StepData_EnumTool & enumtool, Standard_Integer & val){ Standard_Boolean rv = self.ReadEnum(num, nump, mess, ach, enumtool, val); return std::tuple<Standard_Boolean, Standard_Integer &>(rv, val); }, "Reads parameter <nump> of record <num> as an Enumeration (text between dots) and converts it to an integer value, by an EnumTool. Returns True if OK, false if : this parameter is not enumeration, or is not recognized by the EnumTool (with fail)", py::arg("num"), py::arg("nump"), py::arg("mess"), py::arg("ach"), py::arg("enumtool"), py::arg("val"));
cls_StepData_StepReaderData.def("ReadTypedParam", [](StepData_StepReaderData &self, const Standard_Integer num, const Standard_Integer nump, const Standard_Boolean mustbetyped, const Standard_CString mess, opencascade::handle<Interface_Check> & ach, Standard_Integer & numr, Standard_Integer & numrp, TCollection_AsciiString & typ){ Standard_Boolean rv = self.ReadTypedParam(num, nump, mustbetyped, mess, ach, numr, numrp, typ); return std::tuple<Standard_Boolean, Standard_Integer &, Standard_Integer &>(rv, numr, numrp); }, "Resolves a parameter which can be enclosed in a type def., as TYPE(val). The parameter must then be read normally according its type. Parameter to be resolved is <nump> of record <num> <mustbetyped> True demands a typed parameter <mustbetyped> False accepts a non-typed parameter as option mess and ach as usual <numr>,<numrp> are the resolved record and parameter numbers = num,nump if no type, else numrp=1 <typ> returns the recorded type, or empty string Remark : a non-typed list is considered as 'non-typed'", py::arg("num"), py::arg("nump"), py::arg("mustbetyped"), py::arg("mess"), py::arg("ach"), py::arg("numr"), py::arg("numrp"), py::arg("typ"));
cls_StepData_StepReaderData.def("CheckDerived", [](StepData_StepReaderData &self, const Standard_Integer a0, const Standard_Integer a1, const Standard_CString a2, opencascade::handle<Interface_Check> & a3) -> Standard_Boolean { return self.CheckDerived(a0, a1, a2, a3); });
cls_StepData_StepReaderData.def("CheckDerived", (Standard_Boolean (StepData_StepReaderData::*)(const Standard_Integer, const Standard_Integer, const Standard_CString, opencascade::handle<Interface_Check> &, const Standard_Boolean) const) &StepData_StepReaderData::CheckDerived, "Checks if parameter <nump> of record <num> is given as Derived If this Check is successful (i.e. Param = '*'), returns True Else, fills <ach> with a Message which contains <mess> and returns False. According to <errstat>, this message is Warning if errstat is False (Default), Fail if errstat is True", py::arg("num"), py::arg("nump"), py::arg("mess"), py::arg("ach"), py::arg("errstat"));
cls_StepData_StepReaderData.def("NbEntities", (Standard_Integer (StepData_StepReaderData::*)() const) &StepData_StepReaderData::NbEntities, "Returns total count of Entities (including Header)");
cls_StepData_StepReaderData.def("FindNextRecord", (Standard_Integer (StepData_StepReaderData::*)(const Standard_Integer) const) &StepData_StepReaderData::FindNextRecord, "determines the first suitable record following a given one that is, skips SCOPE,ENDSCOPE and SUBLIST records Note : skips Header records, which are accessed separately", py::arg("num"));
cls_StepData_StepReaderData.def("SetEntityNumbers", [](StepData_StepReaderData &self) -> void { return self.SetEntityNumbers(); });
cls_StepData_StepReaderData.def("SetEntityNumbers", (void (StepData_StepReaderData::*)(const Standard_Boolean)) &StepData_StepReaderData::SetEntityNumbers, "determines reference numbers in EntityNumber fields called by Prepare from StepReaderTool to prepare later using by a StepModel. This method is attached to StepReaderData because it needs a massive amount of data accesses to work", py::arg("withmap"));
cls_StepData_StepReaderData.def("FindNextHeaderRecord", (Standard_Integer (StepData_StepReaderData::*)(const Standard_Integer) const) &StepData_StepReaderData::FindNextHeaderRecord, "determine first suitable record of Header works as FindNextRecord, but treats only Header records", py::arg("num"));
cls_StepData_StepReaderData.def("PrepareHeader", (void (StepData_StepReaderData::*)()) &StepData_StepReaderData::PrepareHeader, "Works as SetEntityNumbers but for Header : more simple because there are no Reference, only Sub-Lists");
cls_StepData_StepReaderData.def("GlobalCheck", (const opencascade::handle<Interface_Check> (StepData_StepReaderData::*)() const) &StepData_StepReaderData::GlobalCheck, "Returns the Global Check. It can record Fail messages about Undefined References (detected by SetEntityNumbers)");
cls_StepData_StepReaderData.def_static("get_type_name_", (const char * (*)()) &StepData_StepReaderData::get_type_name, "None");
cls_StepData_StepReaderData.def_static("get_type_descriptor_", (const opencascade::handle<Standard_Type> & (*)()) &StepData_StepReaderData::get_type_descriptor, "None");
cls_StepData_StepReaderData.def("DynamicType", (const opencascade::handle<Standard_Type> & (StepData_StepReaderData::*)() const) &StepData_StepReaderData::DynamicType, "None");

// Enums

}