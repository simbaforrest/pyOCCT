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
#include <TCollection_ExtendedString.hxx>
#include <TCollection_AsciiString.hxx>
#include <XCAFDoc_PartId.hxx>

void bind_XCAFDoc_PartId(py::module &mod){

py::class_<TCollection_AsciiString, std::unique_ptr<TCollection_AsciiString, Deleter<TCollection_AsciiString>>> cls_XCAFDoc_PartId(mod, "XCAFDoc_PartId", "Class defines a variable-length sequence of 8-bit characters. Despite class name (kept for historical reasons), it is intended to store UTF-8 string, not just ASCII characters. However, multi-byte nature of UTF-8 is not considered by the following methods: - Method ::Length() return the number of bytes, not the number of Unicode symbols. - Methods taking/returning symbol index work with 8-bit code units, not true Unicode symbols, including ::Remove(), ::SetValue(), ::Value(), ::Search(), ::Trunc() and others. If application needs to process multi-byte Unicode symbols explicitly, NCollection_Utf8Iter class can be used for iterating through Unicode string (UTF-32 code unit will be returned for each position).", py::module_local());

// Constructors
cls_XCAFDoc_PartId.def(py::init<>());
cls_XCAFDoc_PartId.def(py::init<const Standard_CString>(), py::arg("message"));
cls_XCAFDoc_PartId.def(py::init<const Standard_CString, const Standard_Integer>(), py::arg("message"), py::arg("aLen"));
cls_XCAFDoc_PartId.def(py::init<const Standard_Character>(), py::arg("aChar"));
cls_XCAFDoc_PartId.def(py::init<const Standard_Integer, const Standard_Character>(), py::arg("length"), py::arg("filler"));
cls_XCAFDoc_PartId.def(py::init<const Standard_Integer>(), py::arg("value"));
cls_XCAFDoc_PartId.def(py::init<const Standard_Real>(), py::arg("value"));
cls_XCAFDoc_PartId.def(py::init<const TCollection_AsciiString &>(), py::arg("astring"));
// cls_XCAFDoc_PartId.def(py::init<TCollection_AsciiString &&>(), py::arg("theOther"));
cls_XCAFDoc_PartId.def(py::init<const TCollection_AsciiString &, const Standard_Character>(), py::arg("astring"), py::arg("message"));
cls_XCAFDoc_PartId.def(py::init<const TCollection_AsciiString &, const Standard_CString>(), py::arg("astring"), py::arg("message"));
cls_XCAFDoc_PartId.def(py::init<const TCollection_AsciiString &, const TCollection_AsciiString &>(), py::arg("astring"), py::arg("message"));
cls_XCAFDoc_PartId.def(py::init<const TCollection_ExtendedString &>(), py::arg("astring"));
cls_XCAFDoc_PartId.def(py::init<const TCollection_ExtendedString &, const Standard_Character>(), py::arg("astring"), py::arg("replaceNonAscii"));
cls_XCAFDoc_PartId.def(py::init<const Standard_WideChar *>(), py::arg("theStringUtf"));

// Fields

// Methods
// cls_XCAFDoc_PartId.def_static("operator new_", (void * (*)(size_t)) &TCollection_AsciiString::operator new, "None", py::arg("theSize"));
// cls_XCAFDoc_PartId.def_static("operator delete_", (void (*)(void *)) &TCollection_AsciiString::operator delete, "None", py::arg("theAddress"));
// cls_XCAFDoc_PartId.def_static("operator new[]_", (void * (*)(size_t)) &TCollection_AsciiString::operator new[], "None", py::arg("theSize"));
// cls_XCAFDoc_PartId.def_static("operator delete[]_", (void (*)(void *)) &TCollection_AsciiString::operator delete[], "None", py::arg("theAddress"));
// cls_XCAFDoc_PartId.def_static("operator new_", (void * (*)(size_t, void *)) &TCollection_AsciiString::operator new, "None", py::arg(""), py::arg("theAddress"));
// cls_XCAFDoc_PartId.def_static("operator delete_", (void (*)(void *, void *)) &TCollection_AsciiString::operator delete, "None", py::arg(""), py::arg(""));
cls_XCAFDoc_PartId.def("AssignCat", (void (TCollection_AsciiString::*)(const Standard_Character)) &TCollection_AsciiString::AssignCat, "Appends <other> to me. This is an unary operator.", py::arg("other"));
cls_XCAFDoc_PartId.def("__iadd__", (void (TCollection_AsciiString::*)(const Standard_Character)) &TCollection_AsciiString::operator+=, py::is_operator(), "None", py::arg("other"));
cls_XCAFDoc_PartId.def("AssignCat", (void (TCollection_AsciiString::*)(const Standard_Integer)) &TCollection_AsciiString::AssignCat, "Appends <other> to me. This is an unary operator.", py::arg("other"));
cls_XCAFDoc_PartId.def("__iadd__", (void (TCollection_AsciiString::*)(const Standard_Integer)) &TCollection_AsciiString::operator+=, py::is_operator(), "None", py::arg("other"));
cls_XCAFDoc_PartId.def("AssignCat", (void (TCollection_AsciiString::*)(const Standard_Real)) &TCollection_AsciiString::AssignCat, "Appends <other> to me. This is an unary operator.", py::arg("other"));
cls_XCAFDoc_PartId.def("__iadd__", (void (TCollection_AsciiString::*)(const Standard_Real)) &TCollection_AsciiString::operator+=, py::is_operator(), "None", py::arg("other"));
cls_XCAFDoc_PartId.def("AssignCat", (void (TCollection_AsciiString::*)(const Standard_CString)) &TCollection_AsciiString::AssignCat, "Appends <other> to me. This is an unary operator. ex: aString += 'Dummy' To catenate more than one CString, you must put a AsciiString before. Example: aString += 'Hello ' + 'Dolly' IS NOT VALID ! But astring += anotherString + 'Hello ' + 'Dolly' is valid.", py::arg("other"));
cls_XCAFDoc_PartId.def("__iadd__", (void (TCollection_AsciiString::*)(const Standard_CString)) &TCollection_AsciiString::operator+=, py::is_operator(), "None", py::arg("other"));
cls_XCAFDoc_PartId.def("AssignCat", (void (TCollection_AsciiString::*)(const TCollection_AsciiString &)) &TCollection_AsciiString::AssignCat, "Appends <other> to me. This is an unary operator. Example: aString += anotherString", py::arg("other"));
cls_XCAFDoc_PartId.def("__iadd__", (void (TCollection_AsciiString::*)(const TCollection_AsciiString &)) &TCollection_AsciiString::operator+=, py::is_operator(), "None", py::arg("other"));
cls_XCAFDoc_PartId.def("Capitalize", (void (TCollection_AsciiString::*)()) &TCollection_AsciiString::Capitalize, "Converts the first character into its corresponding upper-case character and the other characters into lowercase Example: before me = 'hellO ' after me = 'Hello '");
cls_XCAFDoc_PartId.def("Cat", (TCollection_AsciiString (TCollection_AsciiString::*)(const Standard_Character) const) &TCollection_AsciiString::Cat, "Appends <other> to me. Syntax: aString = aString + 'Dummy' Example: aString contains 'I say ' aString = aString + 'Hello ' + 'Dolly' gives 'I say Hello Dolly' To catenate more than one CString, you must put a String before. So the following example is WRONG ! aString = 'Hello ' + 'Dolly' THIS IS NOT ALLOWED This rule is applicable to AssignCat (operator +=) too.", py::arg("other"));
cls_XCAFDoc_PartId.def("__add__", (TCollection_AsciiString (TCollection_AsciiString::*)(const Standard_Character) const) &TCollection_AsciiString::operator+, py::is_operator(), "None", py::arg("other"));
cls_XCAFDoc_PartId.def("Cat", (TCollection_AsciiString (TCollection_AsciiString::*)(const Standard_Integer) const) &TCollection_AsciiString::Cat, "Appends <other> to me. Syntax: aString = aString + 15; Example: aString contains 'I say ' gives 'I say 15' To catenate more than one CString, you must put a String before. So the following example is WRONG ! aString = 'Hello ' + 'Dolly' THIS IS NOT ALLOWED This rule is applicable to AssignCat (operator +=) too.", py::arg("other"));
cls_XCAFDoc_PartId.def("__add__", (TCollection_AsciiString (TCollection_AsciiString::*)(const Standard_Integer) const) &TCollection_AsciiString::operator+, py::is_operator(), "None", py::arg("other"));
cls_XCAFDoc_PartId.def("Cat", (TCollection_AsciiString (TCollection_AsciiString::*)(const Standard_Real) const) &TCollection_AsciiString::Cat, "Appends <other> to me. Syntax: aString = aString + 15.15; Example: aString contains 'I say ' gives 'I say 15.15' To catenate more than one CString, you must put a String before. So the following example is WRONG ! aString = 'Hello ' + 'Dolly' THIS IS NOT ALLOWED This rule is applicable to AssignCat (operator +=) too.", py::arg("other"));
cls_XCAFDoc_PartId.def("__add__", (TCollection_AsciiString (TCollection_AsciiString::*)(const Standard_Real) const) &TCollection_AsciiString::operator+, py::is_operator(), "None", py::arg("other"));
cls_XCAFDoc_PartId.def("Cat", (TCollection_AsciiString (TCollection_AsciiString::*)(const Standard_CString) const) &TCollection_AsciiString::Cat, "Appends <other> to me. Syntax: aString = aString + 'Dummy' Example: aString contains 'I say ' aString = aString + 'Hello ' + 'Dolly' gives 'I say Hello Dolly' To catenate more than one CString, you must put a String before. So the following example is WRONG ! aString = 'Hello ' + 'Dolly' THIS IS NOT ALLOWED This rule is applicable to AssignCat (operator +=) too.", py::arg("other"));
cls_XCAFDoc_PartId.def("__add__", (TCollection_AsciiString (TCollection_AsciiString::*)(const Standard_CString) const) &TCollection_AsciiString::operator+, py::is_operator(), "None", py::arg("other"));
cls_XCAFDoc_PartId.def("Cat", (TCollection_AsciiString (TCollection_AsciiString::*)(const TCollection_AsciiString &) const) &TCollection_AsciiString::Cat, "Appends <other> to me. Example: aString = aString + anotherString", py::arg("other"));
cls_XCAFDoc_PartId.def("__add__", (TCollection_AsciiString (TCollection_AsciiString::*)(const TCollection_AsciiString &) const) &TCollection_AsciiString::operator+, py::is_operator(), "None", py::arg("other"));
cls_XCAFDoc_PartId.def("Center", (void (TCollection_AsciiString::*)(const Standard_Integer, const Standard_Character)) &TCollection_AsciiString::Center, "Modifies this ASCII string so that its length becomes equal to Width and the new characters are equal to Filler. New characters are added both at the beginning and at the end of this string. If Width is less than the length of this ASCII string, nothing happens. Example TCollection_AsciiString myAlphabet('abcdef'); myAlphabet.Center(9,' '); assert ( myAlphabet == ' abcdef ' );", py::arg("Width"), py::arg("Filler"));
cls_XCAFDoc_PartId.def("ChangeAll", [](TCollection_AsciiString &self, const Standard_Character a0, const Standard_Character a1) -> void { return self.ChangeAll(a0, a1); });
cls_XCAFDoc_PartId.def("ChangeAll", (void (TCollection_AsciiString::*)(const Standard_Character, const Standard_Character, const Standard_Boolean)) &TCollection_AsciiString::ChangeAll, "Substitutes all the characters equal to aChar by NewChar in the AsciiString <me>. The substitution can be case sensitive. If you don't use default case sensitive, no matter wether aChar is uppercase or not. Example: me = 'Histake' -> ChangeAll('H','M',Standard_True) gives me = 'Mistake'", py::arg("aChar"), py::arg("NewChar"), py::arg("CaseSensitive"));
cls_XCAFDoc_PartId.def("Clear", (void (TCollection_AsciiString::*)()) &TCollection_AsciiString::Clear, "Removes all characters contained in <me>. This produces an empty AsciiString.");
cls_XCAFDoc_PartId.def("Copy", (void (TCollection_AsciiString::*)(const Standard_CString)) &TCollection_AsciiString::Copy, "Copy <fromwhere> to <me>. Used as operator = Example: aString = anotherCString;", py::arg("fromwhere"));
// cls_XCAFDoc_PartId.def("operator=", (void (TCollection_AsciiString::*)(const Standard_CString)) &TCollection_AsciiString::operator=, "None", py::arg("fromwhere"));
cls_XCAFDoc_PartId.def("Copy", (void (TCollection_AsciiString::*)(const TCollection_AsciiString &)) &TCollection_AsciiString::Copy, "Copy <fromwhere> to <me>. Used as operator = Example: aString = anotherString;", py::arg("fromwhere"));
// cls_XCAFDoc_PartId.def("operator=", (void (TCollection_AsciiString::*)(const TCollection_AsciiString &)) &TCollection_AsciiString::operator=, "None", py::arg("fromwhere"));
cls_XCAFDoc_PartId.def("Swap", (void (TCollection_AsciiString::*)(TCollection_AsciiString &)) &TCollection_AsciiString::Swap, "Exchange the data of two strings (without reallocating memory).", py::arg("theOther"));
// cls_XCAFDoc_PartId.def("operator=", (TCollection_AsciiString & (TCollection_AsciiString::*)(TCollection_AsciiString &&)) &TCollection_AsciiString::operator=, "Move assignment operator", py::arg("theOther"));
cls_XCAFDoc_PartId.def("FirstLocationInSet", (Standard_Integer (TCollection_AsciiString::*)(const TCollection_AsciiString &, const Standard_Integer, const Standard_Integer) const) &TCollection_AsciiString::FirstLocationInSet, "Returns the index of the first character of <me> that is present in <Set>. The search begins to the index FromIndex and ends to the the index ToIndex. Returns zero if failure. Raises an exception if FromIndex or ToIndex is out of range. Example: before me = 'aabAcAa', S = 'Aa', FromIndex = 1, Toindex = 7 after me = 'aabAcAa' returns 1", py::arg("Set"), py::arg("FromIndex"), py::arg("ToIndex"));
cls_XCAFDoc_PartId.def("FirstLocationNotInSet", (Standard_Integer (TCollection_AsciiString::*)(const TCollection_AsciiString &, const Standard_Integer, const Standard_Integer) const) &TCollection_AsciiString::FirstLocationNotInSet, "Returns the index of the first character of <me> that is not present in the set <Set>. The search begins to the index FromIndex and ends to the the index ToIndex in <me>. Returns zero if failure. Raises an exception if FromIndex or ToIndex is out of range. Example: before me = 'aabAcAa', S = 'Aa', FromIndex = 1, Toindex = 7 after me = 'aabAcAa' returns 3", py::arg("Set"), py::arg("FromIndex"), py::arg("ToIndex"));
cls_XCAFDoc_PartId.def("Insert", (void (TCollection_AsciiString::*)(const Standard_Integer, const Standard_Character)) &TCollection_AsciiString::Insert, "Inserts a Character at position <where>. Example: aString contains 'hy not ?' aString.Insert(1,'W'); gives 'Why not ?' aString contains 'Wh' aString.Insert(3,'y'); gives 'Why' aString contains 'Way' aString.Insert(2,'h'); gives 'Why'", py::arg("where"), py::arg("what"));
cls_XCAFDoc_PartId.def("Insert", (void (TCollection_AsciiString::*)(const Standard_Integer, const Standard_CString)) &TCollection_AsciiString::Insert, "Inserts a CString at position <where>. Example: aString contains 'O more' aString.Insert(2,'nce'); gives 'Once more'", py::arg("where"), py::arg("what"));
cls_XCAFDoc_PartId.def("Insert", (void (TCollection_AsciiString::*)(const Standard_Integer, const TCollection_AsciiString &)) &TCollection_AsciiString::Insert, "Inserts a AsciiString at position <where>.", py::arg("where"), py::arg("what"));
cls_XCAFDoc_PartId.def("InsertAfter", (void (TCollection_AsciiString::*)(const Standard_Integer, const TCollection_AsciiString &)) &TCollection_AsciiString::InsertAfter, "Pushing a string after a specific index in the string <me>. Raises an exception if Index is out of bounds. - less than 0 (InsertAfter), or less than 1 (InsertBefore), or - greater than the number of characters in this ASCII string. Example: before me = 'cde' , Index = 0 , other = 'ab' after me = 'abcde' , other = 'ab'", py::arg("Index"), py::arg("other"));
cls_XCAFDoc_PartId.def("InsertBefore", (void (TCollection_AsciiString::*)(const Standard_Integer, const TCollection_AsciiString &)) &TCollection_AsciiString::InsertBefore, "Pushing a string before a specific index in the string <me>. Raises an exception if Index is out of bounds. - less than 0 (InsertAfter), or less than 1 (InsertBefore), or - greater than the number of characters in this ASCII string. Example: before me = 'cde' , Index = 1 , other = 'ab' after me = 'abcde' , other = 'ab'", py::arg("Index"), py::arg("other"));
cls_XCAFDoc_PartId.def("IsEmpty", (Standard_Boolean (TCollection_AsciiString::*)() const) &TCollection_AsciiString::IsEmpty, "Returns True if the string <me> contains zero character.");
cls_XCAFDoc_PartId.def("IsEqual", (Standard_Boolean (TCollection_AsciiString::*)(const Standard_CString) const) &TCollection_AsciiString::IsEqual, "Returns true if the characters in this ASCII string are identical to the characters in ASCII string other. Note that this method is an alias of operator ==.", py::arg("other"));
cls_XCAFDoc_PartId.def("__eq__", (Standard_Boolean (TCollection_AsciiString::*)(const Standard_CString) const) &TCollection_AsciiString::operator==, py::is_operator(), "None", py::arg("other"));
cls_XCAFDoc_PartId.def("IsEqual", (Standard_Boolean (TCollection_AsciiString::*)(const TCollection_AsciiString &) const) &TCollection_AsciiString::IsEqual, "Returns true if the characters in this ASCII string are identical to the characters in ASCII string other. Note that this method is an alias of operator ==.", py::arg("other"));
cls_XCAFDoc_PartId.def("__eq__", (Standard_Boolean (TCollection_AsciiString::*)(const TCollection_AsciiString &) const) &TCollection_AsciiString::operator==, py::is_operator(), "None", py::arg("other"));
cls_XCAFDoc_PartId.def("IsDifferent", (Standard_Boolean (TCollection_AsciiString::*)(const Standard_CString) const) &TCollection_AsciiString::IsDifferent, "Returns true if there are differences between the characters in this ASCII string and ASCII string other. Note that this method is an alias of operator !=", py::arg("other"));
cls_XCAFDoc_PartId.def("__ne__", (Standard_Boolean (TCollection_AsciiString::*)(const Standard_CString) const) &TCollection_AsciiString::operator!=, py::is_operator(), "None", py::arg("other"));
cls_XCAFDoc_PartId.def("IsDifferent", (Standard_Boolean (TCollection_AsciiString::*)(const TCollection_AsciiString &) const) &TCollection_AsciiString::IsDifferent, "Returns true if there are differences between the characters in this ASCII string and ASCII string other. Note that this method is an alias of operator !=", py::arg("other"));
cls_XCAFDoc_PartId.def("__ne__", (Standard_Boolean (TCollection_AsciiString::*)(const TCollection_AsciiString &) const) &TCollection_AsciiString::operator!=, py::is_operator(), "None", py::arg("other"));
cls_XCAFDoc_PartId.def("IsLess", (Standard_Boolean (TCollection_AsciiString::*)(const Standard_CString) const) &TCollection_AsciiString::IsLess, "Returns TRUE if <me> is 'ASCII' less than <other>.", py::arg("other"));
cls_XCAFDoc_PartId.def("__lt__", (Standard_Boolean (TCollection_AsciiString::*)(const Standard_CString) const) &TCollection_AsciiString::operator<, py::is_operator(), "None", py::arg("other"));
cls_XCAFDoc_PartId.def("IsLess", (Standard_Boolean (TCollection_AsciiString::*)(const TCollection_AsciiString &) const) &TCollection_AsciiString::IsLess, "Returns TRUE if <me> is 'ASCII' less than <other>.", py::arg("other"));
cls_XCAFDoc_PartId.def("__lt__", (Standard_Boolean (TCollection_AsciiString::*)(const TCollection_AsciiString &) const) &TCollection_AsciiString::operator<, py::is_operator(), "None", py::arg("other"));
cls_XCAFDoc_PartId.def("IsGreater", (Standard_Boolean (TCollection_AsciiString::*)(const Standard_CString) const) &TCollection_AsciiString::IsGreater, "Returns TRUE if <me> is 'ASCII' greater than <other>.", py::arg("other"));
cls_XCAFDoc_PartId.def("__gt__", (Standard_Boolean (TCollection_AsciiString::*)(const Standard_CString) const) &TCollection_AsciiString::operator>, py::is_operator(), "None", py::arg("other"));
cls_XCAFDoc_PartId.def("IsGreater", (Standard_Boolean (TCollection_AsciiString::*)(const TCollection_AsciiString &) const) &TCollection_AsciiString::IsGreater, "Returns TRUE if <me> is 'ASCII' greater than <other>.", py::arg("other"));
cls_XCAFDoc_PartId.def("__gt__", (Standard_Boolean (TCollection_AsciiString::*)(const TCollection_AsciiString &) const) &TCollection_AsciiString::operator>, py::is_operator(), "None", py::arg("other"));
cls_XCAFDoc_PartId.def("StartsWith", (Standard_Boolean (TCollection_AsciiString::*)(const TCollection_AsciiString &) const) &TCollection_AsciiString::StartsWith, "Determines whether the beginning of this string instance matches the specified string.", py::arg("theStartString"));
cls_XCAFDoc_PartId.def("EndsWith", (Standard_Boolean (TCollection_AsciiString::*)(const TCollection_AsciiString &) const) &TCollection_AsciiString::EndsWith, "Determines whether the end of this string instance matches the specified string.", py::arg("theEndString"));
cls_XCAFDoc_PartId.def("IntegerValue", (Standard_Integer (TCollection_AsciiString::*)() const) &TCollection_AsciiString::IntegerValue, "Converts a AsciiString containing a numeric expression to an Integer. Example: '215' returns 215.");
cls_XCAFDoc_PartId.def("IsIntegerValue", (Standard_Boolean (TCollection_AsciiString::*)() const) &TCollection_AsciiString::IsIntegerValue, "Returns True if the AsciiString contains an integer value. Note: an integer value is considered to be a real value as well.");
cls_XCAFDoc_PartId.def("IsRealValue", (Standard_Boolean (TCollection_AsciiString::*)() const) &TCollection_AsciiString::IsRealValue, "Returns True if the AsciiString contains a real value. Note: an integer value is considered to be a real value as well.");
cls_XCAFDoc_PartId.def("IsAscii", (Standard_Boolean (TCollection_AsciiString::*)() const) &TCollection_AsciiString::IsAscii, "Returns True if the AsciiString contains only ASCII characters between ' ' and '~'. This means no control character and no extended ASCII code.");
cls_XCAFDoc_PartId.def("LeftAdjust", (void (TCollection_AsciiString::*)()) &TCollection_AsciiString::LeftAdjust, "Removes all space characters in the begining of the string.");
cls_XCAFDoc_PartId.def("LeftJustify", (void (TCollection_AsciiString::*)(const Standard_Integer, const Standard_Character)) &TCollection_AsciiString::LeftJustify, "left justify Length becomes equal to Width and the new characters are equal to Filler. If Width < Length nothing happens. Raises an exception if Width is less than zero. Example: before me = 'abcdef' , Width = 9 , Filler = ' ' after me = 'abcdef '", py::arg("Width"), py::arg("Filler"));
cls_XCAFDoc_PartId.def("Length", (Standard_Integer (TCollection_AsciiString::*)() const) &TCollection_AsciiString::Length, "Returns number of characters in <me>. This is the same functionality as 'strlen' in C. Example TCollection_AsciiString myAlphabet('abcdef'); assert ( myAlphabet.Length() == 6 ); - 1 is the position of the first character in this string. - The length of this string gives the position of its last character. - Positions less than or equal to zero, or greater than the length of this string are invalid in functions which identify a character of this string by its position.");
cls_XCAFDoc_PartId.def("Location", (Standard_Integer (TCollection_AsciiString::*)(const TCollection_AsciiString &, const Standard_Integer, const Standard_Integer) const) &TCollection_AsciiString::Location, "Returns an index in the string <me> of the first occurence of the string S in the string <me> from the starting index FromIndex to the ending index ToIndex returns zero if failure Raises an exception if FromIndex or ToIndex is out of range. Example: before me = 'aabAaAa', S = 'Aa', FromIndex = 1, ToIndex = 7 after me = 'aabAaAa' returns 4", py::arg("other"), py::arg("FromIndex"), py::arg("ToIndex"));
cls_XCAFDoc_PartId.def("Location", (Standard_Integer (TCollection_AsciiString::*)(const Standard_Integer, const Standard_Character, const Standard_Integer, const Standard_Integer) const) &TCollection_AsciiString::Location, "Returns the index of the nth occurence of the character C in the string <me> from the starting index FromIndex to the ending index ToIndex. Returns zero if failure. Raises an exception if FromIndex or ToIndex is out of range. Example: before me = 'aabAa', N = 3, C = 'a', FromIndex = 1, ToIndex = 5 after me = 'aabAa' returns 5", py::arg("N"), py::arg("C"), py::arg("FromIndex"), py::arg("ToIndex"));
cls_XCAFDoc_PartId.def("LowerCase", (void (TCollection_AsciiString::*)()) &TCollection_AsciiString::LowerCase, "Converts <me> to its lower-case equivalent. Example TCollection_AsciiString myString('Hello Dolly'); myString.UpperCase(); assert ( myString == 'HELLO DOLLY' ); myString.LowerCase(); assert ( myString == 'hello dolly' );");
cls_XCAFDoc_PartId.def("Prepend", (void (TCollection_AsciiString::*)(const TCollection_AsciiString &)) &TCollection_AsciiString::Prepend, "Inserts the string other at the beginning of this ASCII string. Example TCollection_AsciiString myAlphabet('cde'); TCollection_AsciiString myBegin('ab'); myAlphabet.Prepend(myBegin); assert ( myAlphabet == 'abcde' );", py::arg("other"));
cls_XCAFDoc_PartId.def("Print", (void (TCollection_AsciiString::*)(Standard_OStream &) const) &TCollection_AsciiString::Print, "Displays <me> on a stream.", py::arg("astream"));
cls_XCAFDoc_PartId.def("Read", (void (TCollection_AsciiString::*)(Standard_IStream &)) &TCollection_AsciiString::Read, "Read <me> from a stream.", py::arg("astream"));
cls_XCAFDoc_PartId.def("RealValue", (Standard_Real (TCollection_AsciiString::*)() const) &TCollection_AsciiString::RealValue, "Converts an AsciiString containing a numeric expression. to a Real. Example: ex: '215' returns 215.0. ex: '3.14159267' returns 3.14159267.");
cls_XCAFDoc_PartId.def("RemoveAll", (void (TCollection_AsciiString::*)(const Standard_Character, const Standard_Boolean)) &TCollection_AsciiString::RemoveAll, "Remove all the occurences of the character C in the string. Example: before me = 'HellLLo', C = 'L' , CaseSensitive = True after me = 'Hello'", py::arg("C"), py::arg("CaseSensitive"));
cls_XCAFDoc_PartId.def("RemoveAll", (void (TCollection_AsciiString::*)(const Standard_Character)) &TCollection_AsciiString::RemoveAll, "Removes every <what> characters from <me>.", py::arg("what"));
cls_XCAFDoc_PartId.def("Remove", [](TCollection_AsciiString &self, const Standard_Integer a0) -> void { return self.Remove(a0); });
cls_XCAFDoc_PartId.def("Remove", (void (TCollection_AsciiString::*)(const Standard_Integer, const Standard_Integer)) &TCollection_AsciiString::Remove, "Erases <ahowmany> characters from position <where>, <where> included. Example: aString contains 'Hello' aString.Remove(2,2) erases 2 characters from position 2 This gives 'Hlo'.", py::arg("where"), py::arg("ahowmany"));
cls_XCAFDoc_PartId.def("RightAdjust", (void (TCollection_AsciiString::*)()) &TCollection_AsciiString::RightAdjust, "Removes all space characters at the end of the string.");
cls_XCAFDoc_PartId.def("RightJustify", (void (TCollection_AsciiString::*)(const Standard_Integer, const Standard_Character)) &TCollection_AsciiString::RightJustify, "Right justify. Length becomes equal to Width and the new characters are equal to Filler. if Width < Length nothing happens. Raises an exception if Width is less than zero. Example: before me = 'abcdef' , Width = 9 , Filler = ' ' after me = ' abcdef'", py::arg("Width"), py::arg("Filler"));
cls_XCAFDoc_PartId.def("Search", (Standard_Integer (TCollection_AsciiString::*)(const Standard_CString) const) &TCollection_AsciiString::Search, "Searches a CString in <me> from the beginning and returns position of first item <what> matching. it returns -1 if not found. Example: aString contains 'Sample single test' aString.Search('le') returns 5", py::arg("what"));
cls_XCAFDoc_PartId.def("Search", (Standard_Integer (TCollection_AsciiString::*)(const TCollection_AsciiString &) const) &TCollection_AsciiString::Search, "Searches an AsciiString in <me> from the beginning and returns position of first item <what> matching. It returns -1 if not found.", py::arg("what"));
cls_XCAFDoc_PartId.def("SearchFromEnd", (Standard_Integer (TCollection_AsciiString::*)(const Standard_CString) const) &TCollection_AsciiString::SearchFromEnd, "Searches a CString in a AsciiString from the end and returns position of first item <what> matching. It returns -1 if not found. Example: aString contains 'Sample single test' aString.SearchFromEnd('le') returns 12", py::arg("what"));
cls_XCAFDoc_PartId.def("SearchFromEnd", (Standard_Integer (TCollection_AsciiString::*)(const TCollection_AsciiString &) const) &TCollection_AsciiString::SearchFromEnd, "Searches a AsciiString in another AsciiString from the end and returns position of first item <what> matching. It returns -1 if not found.", py::arg("what"));
cls_XCAFDoc_PartId.def("SetValue", (void (TCollection_AsciiString::*)(const Standard_Integer, const Standard_Character)) &TCollection_AsciiString::SetValue, "Replaces one character in the AsciiString at position <where>. If <where> is less than zero or greater than the length of <me> an exception is raised. Example: aString contains 'Garbake' astring.Replace(6,'g') gives <me> = 'Garbage'", py::arg("where"), py::arg("what"));
cls_XCAFDoc_PartId.def("SetValue", (void (TCollection_AsciiString::*)(const Standard_Integer, const Standard_CString)) &TCollection_AsciiString::SetValue, "Replaces a part of <me> by a CString. If <where> is less than zero or greater than the length of <me> an exception is raised. Example: aString contains 'abcde' aString.SetValue(4,'1234567') gives <me> = 'abc1234567'", py::arg("where"), py::arg("what"));
cls_XCAFDoc_PartId.def("SetValue", (void (TCollection_AsciiString::*)(const Standard_Integer, const TCollection_AsciiString &)) &TCollection_AsciiString::SetValue, "Replaces a part of <me> by another AsciiString.", py::arg("where"), py::arg("what"));
cls_XCAFDoc_PartId.def("Split", (TCollection_AsciiString (TCollection_AsciiString::*)(const Standard_Integer)) &TCollection_AsciiString::Split, "Splits a AsciiString into two sub-strings. Example: aString contains 'abcdefg' aString.Split(3) gives <me> = 'abc' and returns 'defg'", py::arg("where"));
cls_XCAFDoc_PartId.def("SubString", (TCollection_AsciiString (TCollection_AsciiString::*)(const Standard_Integer, const Standard_Integer) const) &TCollection_AsciiString::SubString, "Creation of a sub-string of the string <me>. The sub-string starts to the index Fromindex and ends to the index ToIndex. Raises an exception if ToIndex or FromIndex is out of bounds Example: before me = 'abcdefg', ToIndex=3, FromIndex=6 after me = 'abcdefg' returns 'cdef'", py::arg("FromIndex"), py::arg("ToIndex"));
cls_XCAFDoc_PartId.def("ToCString", (Standard_CString (TCollection_AsciiString::*)() const) &TCollection_AsciiString::ToCString, "Returns pointer to AsciiString (char *). This is useful for some casual manipulations. Warning: Because this 'char *' is 'const', you can't modify its contents.");
cls_XCAFDoc_PartId.def("Token", [](TCollection_AsciiString &self) -> TCollection_AsciiString { return self.Token(); });
cls_XCAFDoc_PartId.def("Token", [](TCollection_AsciiString &self, const Standard_CString a0) -> TCollection_AsciiString { return self.Token(a0); });
cls_XCAFDoc_PartId.def("Token", (TCollection_AsciiString (TCollection_AsciiString::*)(const Standard_CString, const Standard_Integer) const) &TCollection_AsciiString::Token, "Extracts <whichone> token from <me>. By default, the <separators> is set to space and tabulation. By default, the token extracted is the first one (whichone = 1). <separators> contains all separators you need. If no token indexed by <whichone> is found, it returns empty AsciiString. Example: aString contains 'This is a message' aString.Token() returns 'This' aString.Token(' ',4) returns 'message' aString.Token(' ',2) returns 'is' aString.Token(' ',9) returns '' Other separators than space character and tabulation are allowed : aString contains '1234; test:message , value' aString.Token('; :,',4) returns 'value' aString.Token('; :,',2) returns 'test'", py::arg("separators"), py::arg("whichone"));
cls_XCAFDoc_PartId.def("Trunc", (void (TCollection_AsciiString::*)(const Standard_Integer)) &TCollection_AsciiString::Trunc, "Truncates <me> to <ahowmany> characters. Example: me = 'Hello Dolly' -> Trunc(3) -> me = 'Hel'", py::arg("ahowmany"));
cls_XCAFDoc_PartId.def("UpperCase", (void (TCollection_AsciiString::*)()) &TCollection_AsciiString::UpperCase, "Converts <me> to its upper-case equivalent.");
cls_XCAFDoc_PartId.def("UsefullLength", (Standard_Integer (TCollection_AsciiString::*)() const) &TCollection_AsciiString::UsefullLength, "Length of the string ignoring all spaces (' ') and the control character at the end.");
cls_XCAFDoc_PartId.def("Value", (Standard_Character (TCollection_AsciiString::*)(const Standard_Integer) const) &TCollection_AsciiString::Value, "Returns character at position <where> in <me>. If <where> is less than zero or greater than the lenght of <me>, an exception is raised. Example: aString contains 'Hello' aString.Value(2) returns 'e'", py::arg("where"));
cls_XCAFDoc_PartId.def_static("HashCode_", (Standard_Integer (*)(const TCollection_AsciiString &, const Standard_Integer)) &TCollection_AsciiString::HashCode, "Hash function for AsciiString (returns the same Integer value that the hash function for ExtendedString)", py::arg("astring"), py::arg("Upper"));
cls_XCAFDoc_PartId.def_static("IsEqual_", (Standard_Boolean (*)(const TCollection_AsciiString &, const TCollection_AsciiString &)) &TCollection_AsciiString::IsEqual, "Returns True when the two strings are the same. (Just for HashCode for AsciiString)", py::arg("string1"), py::arg("string2"));
cls_XCAFDoc_PartId.def_static("IsEqual_", (Standard_Boolean (*)(const TCollection_AsciiString &, const Standard_CString)) &TCollection_AsciiString::IsEqual, "Returns True when the two strings are the same. (Just for HashCode for AsciiString)", py::arg("string1"), py::arg("string2"));
cls_XCAFDoc_PartId.def_static("IsSameString_", (Standard_Boolean (*)(const TCollection_AsciiString &, const TCollection_AsciiString &, const Standard_Boolean)) &TCollection_AsciiString::IsSameString, "Returns True if the strings contain same characters.", py::arg("theString1"), py::arg("theString2"), py::arg("theIsCaseSensitive"));

// Enums

}