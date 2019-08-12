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
#include <Standard_Transient.hxx>
#include <Standard_TypeDef.hxx>
#include <Standard_Handle.hxx>
#include <Transfer_Finder.hxx>
#include <Transfer_Binder.hxx>
#include <Transfer_ProcessForFinder.hxx>
#include <Transfer_SimpleBinderOfTransient.hxx>
#include <Transfer_ActorOfProcessForFinder.hxx>
#include <Standard_Type.hxx>

void bind_Transfer_ActorOfProcessForFinder(py::module &mod){

py::class_<Transfer_ActorOfProcessForFinder, opencascade::handle<Transfer_ActorOfProcessForFinder>, Standard_Transient> cls_Transfer_ActorOfProcessForFinder(mod, "Transfer_ActorOfProcessForFinder", "None");

// Constructors
cls_Transfer_ActorOfProcessForFinder.def(py::init<>());

// Fields

// Methods
cls_Transfer_ActorOfProcessForFinder.def("Recognize", (Standard_Boolean (Transfer_ActorOfProcessForFinder::*)(const opencascade::handle<Transfer_Finder> &)) &Transfer_ActorOfProcessForFinder::Recognize, "Prerequesite for Transfer : the method Transfer is called on a starting object only if Recognize has returned True on it This allows to define a list of Actors, each one processing a definite kind of data TransferProcess calls Recognize on each one before calling Transfer. But even if Recognize has returned True, Transfer can reject by returning a Null Binder (afterwards rejection), the next actor is then invoked", py::arg("start"));
cls_Transfer_ActorOfProcessForFinder.def("Transferring", (opencascade::handle<Transfer_Binder> (Transfer_ActorOfProcessForFinder::*)(const opencascade::handle<Transfer_Finder> &, const opencascade::handle<Transfer_ProcessForFinder> &)) &Transfer_ActorOfProcessForFinder::Transferring, "Specific action of Transfer. The Result is stored in the returned Binder, or a Null Handle for 'No result' (Default defined as doing nothing; should be deffered) 'mutable' allows the Actor to record intermediate information, in addition to those of TransferProcess", py::arg("start"), py::arg("TP"));
cls_Transfer_ActorOfProcessForFinder.def("TransientResult", (opencascade::handle<Transfer_SimpleBinderOfTransient> (Transfer_ActorOfProcessForFinder::*)(const opencascade::handle<Standard_Transient> &) const) &Transfer_ActorOfProcessForFinder::TransientResult, "Prepares and Returns a Binder for a Transient Result Returns a Null Handle if <res> is itself Null", py::arg("res"));
cls_Transfer_ActorOfProcessForFinder.def("NullResult", (opencascade::handle<Transfer_Binder> (Transfer_ActorOfProcessForFinder::*)() const) &Transfer_ActorOfProcessForFinder::NullResult, "Returns a Binder for No Result, i.e. a Null Handle");
cls_Transfer_ActorOfProcessForFinder.def("SetLast", [](Transfer_ActorOfProcessForFinder &self) -> void { return self.SetLast(); });
cls_Transfer_ActorOfProcessForFinder.def("SetLast", (void (Transfer_ActorOfProcessForFinder::*)(const Standard_Boolean)) &Transfer_ActorOfProcessForFinder::SetLast, "If <mode> is True, commands an Actor to be set at the end of the list of Actors (see SetNext) If it is False (creation default), each add Actor is set at the beginning of the list This allows to define default Actors (which are Last)", py::arg("mode"));
cls_Transfer_ActorOfProcessForFinder.def("IsLast", (Standard_Boolean (Transfer_ActorOfProcessForFinder::*)() const) &Transfer_ActorOfProcessForFinder::IsLast, "Returns the Last status (see SetLast).");
cls_Transfer_ActorOfProcessForFinder.def("SetNext", (void (Transfer_ActorOfProcessForFinder::*)(const opencascade::handle<Transfer_ActorOfProcessForFinder> &)) &Transfer_ActorOfProcessForFinder::SetNext, "Defines a Next Actor : it can then be asked to work if <me> produces no result for a given type of Object. If Next is already set and is not 'Last', calls SetNext on it. If Next defined and 'Last', the new actor is added before it in the list", py::arg("next"));
cls_Transfer_ActorOfProcessForFinder.def("Next", (opencascade::handle<Transfer_ActorOfProcessForFinder> (Transfer_ActorOfProcessForFinder::*)() const) &Transfer_ActorOfProcessForFinder::Next, "Returns the Actor defined as Next, or a Null Handle");
cls_Transfer_ActorOfProcessForFinder.def_static("get_type_name_", (const char * (*)()) &Transfer_ActorOfProcessForFinder::get_type_name, "None");
cls_Transfer_ActorOfProcessForFinder.def_static("get_type_descriptor_", (const opencascade::handle<Standard_Type> & (*)()) &Transfer_ActorOfProcessForFinder::get_type_descriptor, "None");
cls_Transfer_ActorOfProcessForFinder.def("DynamicType", (const opencascade::handle<Standard_Type> & (Transfer_ActorOfProcessForFinder::*)() const) &Transfer_ActorOfProcessForFinder::DynamicType, "None");

// Enums

}