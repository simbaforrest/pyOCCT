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

void bind_StepBasic_SiPrefix(py::module &);
void bind_StepBasic_SiUnitName(py::module &);
void bind_StepBasic_AheadOrBehind(py::module &);
void bind_StepBasic_Source(py::module &);
void bind_StepBasic_ApprovalAssignment(py::module &);
void bind_StepBasic_CertificationAssignment(py::module &);
void bind_StepBasic_ContractAssignment(py::module &);
void bind_StepBasic_DateAndTimeAssignment(py::module &);
void bind_StepBasic_PersonAndOrganizationAssignment(py::module &);
void bind_StepBasic_SecurityClassificationAssignment(py::module &);
void bind_StepBasic_DocumentReference(py::module &);
void bind_StepBasic_ActionAssignment(py::module &);
void bind_StepBasic_ActionRequestAssignment(py::module &);
void bind_StepBasic_DateAssignment(py::module &);
void bind_StepBasic_IdentificationAssignment(py::module &);
void bind_StepBasic_ExternalIdentificationAssignment(py::module &);
void bind_StepBasic_GroupAssignment(py::module &);
void bind_StepBasic_OrganizationAssignment(py::module &);
void bind_StepBasic_Approval(py::module &);
void bind_StepBasic_Array1OfApproval(py::module &);
void bind_StepBasic_HArray1OfApproval(py::module &);
void bind_StepBasic_Group(py::module &);
void bind_StepBasic_GeneralProperty(py::module &);
void bind_StepBasic_Action(py::module &);
void bind_StepBasic_ActionMethod(py::module &);
void bind_StepBasic_ActionRequestSolution(py::module &);
void bind_StepBasic_Address(py::module &);
void bind_StepBasic_ApplicationContext(py::module &);
void bind_StepBasic_ApplicationContextElement(py::module &);
void bind_StepBasic_ApplicationProtocolDefinition(py::module &);
void bind_StepBasic_DateTimeSelect(py::module &);
void bind_StepBasic_ApprovalDateTime(py::module &);
void bind_StepBasic_PersonOrganizationSelect(py::module &);
void bind_StepBasic_ApprovalPersonOrganization(py::module &);
void bind_StepBasic_ApprovalRelationship(py::module &);
void bind_StepBasic_ApprovalRole(py::module &);
void bind_StepBasic_ApprovalStatus(py::module &);
void bind_StepBasic_NamedUnit(py::module &);
void bind_StepBasic_AreaUnit(py::module &);
void bind_StepBasic_DerivedUnitElement(py::module &);
void bind_StepBasic_Array1OfDerivedUnitElement(py::module &);
void bind_StepBasic_Document(py::module &);
void bind_StepBasic_Array1OfDocument(py::module &);
void bind_StepBasic_Array1OfNamedUnit(py::module &);
void bind_StepBasic_Organization(py::module &);
void bind_StepBasic_Array1OfOrganization(py::module &);
void bind_StepBasic_Person(py::module &);
void bind_StepBasic_Array1OfPerson(py::module &);
void bind_StepBasic_ProductContext(py::module &);
void bind_StepBasic_Array1OfProductContext(py::module &);
void bind_StepBasic_HArray1OfProductContext(py::module &);
void bind_StepBasic_Product(py::module &);
void bind_StepBasic_Array1OfProduct(py::module &);
void bind_StepBasic_ProductDefinition(py::module &);
void bind_StepBasic_Array1OfProductDefinition(py::module &);
void bind_StepBasic_Unit(py::module &);
void bind_StepBasic_MeasureWithUnit(py::module &);
void bind_StepBasic_UncertaintyMeasureWithUnit(py::module &);
void bind_StepBasic_Array1OfUncertaintyMeasureWithUnit(py::module &);
void bind_StepBasic_Date(py::module &);
void bind_StepBasic_CalendarDate(py::module &);
void bind_StepBasic_Certification(py::module &);
void bind_StepBasic_CertificationType(py::module &);
void bind_StepBasic_CharacterizedObject(py::module &);
void bind_StepBasic_Contract(py::module &);
void bind_StepBasic_ContractType(py::module &);
void bind_StepBasic_ConversionBasedUnit(py::module &);
void bind_StepBasic_ConversionBasedUnitAndAreaUnit(py::module &);
void bind_StepBasic_ConversionBasedUnitAndLengthUnit(py::module &);
void bind_StepBasic_ConversionBasedUnitAndMassUnit(py::module &);
void bind_StepBasic_ConversionBasedUnitAndPlaneAngleUnit(py::module &);
void bind_StepBasic_ConversionBasedUnitAndRatioUnit(py::module &);
void bind_StepBasic_ConversionBasedUnitAndSolidAngleUnit(py::module &);
void bind_StepBasic_ConversionBasedUnitAndTimeUnit(py::module &);
void bind_StepBasic_ConversionBasedUnitAndVolumeUnit(py::module &);
void bind_StepBasic_CoordinatedUniversalTimeOffset(py::module &);
void bind_StepBasic_DateAndTime(py::module &);
void bind_StepBasic_DateRole(py::module &);
void bind_StepBasic_DateTimeRole(py::module &);
void bind_StepBasic_HArray1OfDerivedUnitElement(py::module &);
void bind_StepBasic_DerivedUnit(py::module &);
void bind_StepBasic_ProductDefinitionContext(py::module &);
void bind_StepBasic_DesignContext(py::module &);
void bind_StepBasic_DigitalDocument(py::module &);
void bind_StepBasic_DimensionalExponents(py::module &);
void bind_StepBasic_DocumentFile(py::module &);
void bind_StepBasic_ProductOrFormationOrDefinition(py::module &);
void bind_StepBasic_DocumentProductAssociation(py::module &);
void bind_StepBasic_DocumentProductEquivalence(py::module &);
void bind_StepBasic_DocumentRelationship(py::module &);
void bind_StepBasic_DocumentRepresentationType(py::module &);
void bind_StepBasic_DocumentType(py::module &);
void bind_StepBasic_DocumentUsageConstraint(py::module &);
void bind_StepBasic_Effectivity(py::module &);
void bind_StepBasic_EffectivityAssignment(py::module &);
void bind_StepBasic_EulerAngles(py::module &);
void bind_StepBasic_SourceItem(py::module &);
void bind_StepBasic_ExternallyDefinedItem(py::module &);
void bind_StepBasic_ExternalSource(py::module &);
void bind_StepBasic_GroupRelationship(py::module &);
void bind_StepBasic_HArray1OfDocument(py::module &);
void bind_StepBasic_HArray1OfNamedUnit(py::module &);
void bind_StepBasic_HArray1OfOrganization(py::module &);
void bind_StepBasic_HArray1OfPerson(py::module &);
void bind_StepBasic_HArray1OfProduct(py::module &);
void bind_StepBasic_HArray1OfProductDefinition(py::module &);
void bind_StepBasic_HArray1OfUncertaintyMeasureWithUnit(py::module &);
void bind_StepBasic_IdentificationRole(py::module &);
void bind_StepBasic_LengthMeasureWithUnit(py::module &);
void bind_StepBasic_LengthUnit(py::module &);
void bind_StepBasic_LocalTime(py::module &);
void bind_StepBasic_MassMeasureWithUnit(py::module &);
void bind_StepBasic_MassUnit(py::module &);
void bind_StepBasic_MeasureValueMember(py::module &);
void bind_StepBasic_MechanicalContext(py::module &);
void bind_StepBasic_NameAssignment(py::module &);
void bind_StepBasic_ObjectRole(py::module &);
void bind_StepBasic_OrdinalDate(py::module &);
void bind_StepBasic_OrganizationalAddress(py::module &);
void bind_StepBasic_OrganizationRole(py::module &);
void bind_StepBasic_PersonalAddress(py::module &);
void bind_StepBasic_PersonAndOrganization(py::module &);
void bind_StepBasic_PersonAndOrganizationRole(py::module &);
void bind_StepBasic_PhysicallyModeledProductDefinition(py::module &);
void bind_StepBasic_PlaneAngleMeasureWithUnit(py::module &);
void bind_StepBasic_PlaneAngleUnit(py::module &);
void bind_StepBasic_ProductCategory(py::module &);
void bind_StepBasic_ProductCategoryRelationship(py::module &);
void bind_StepBasic_ProductConceptContext(py::module &);
void bind_StepBasic_ProductDefinitionEffectivity(py::module &);
void bind_StepBasic_ProductDefinitionFormation(py::module &);
void bind_StepBasic_ProductDefinitionFormationRelationship(py::module &);
void bind_StepBasic_ProductDefinitionFormationWithSpecifiedSource(py::module &);
void bind_StepBasic_ProductDefinitionOrReference(py::module &);
void bind_StepBasic_ProductDefinitionReference(py::module &);
void bind_StepBasic_ProductDefinitionReferenceWithLocalRepresentation(py::module &);
void bind_StepBasic_ProductDefinitionRelationship(py::module &);
void bind_StepBasic_ProductDefinitionWithAssociatedDocuments(py::module &);
void bind_StepBasic_ProductRelatedProductCategory(py::module &);
void bind_StepBasic_ProductType(py::module &);
void bind_StepBasic_RatioMeasureWithUnit(py::module &);
void bind_StepBasic_RatioUnit(py::module &);
void bind_StepBasic_RoleSelect(py::module &);
void bind_StepBasic_RoleAssociation(py::module &);
void bind_StepBasic_SecurityClassification(py::module &);
void bind_StepBasic_SecurityClassificationLevel(py::module &);
void bind_StepBasic_SiUnit(py::module &);
void bind_StepBasic_SiUnitAndAreaUnit(py::module &);
void bind_StepBasic_SiUnitAndLengthUnit(py::module &);
void bind_StepBasic_SiUnitAndMassUnit(py::module &);
void bind_StepBasic_SiUnitAndPlaneAngleUnit(py::module &);
void bind_StepBasic_SiUnitAndRatioUnit(py::module &);
void bind_StepBasic_SiUnitAndSolidAngleUnit(py::module &);
void bind_StepBasic_SiUnitAndThermodynamicTemperatureUnit(py::module &);
void bind_StepBasic_SiUnitAndTimeUnit(py::module &);
void bind_StepBasic_SiUnitAndVolumeUnit(py::module &);
void bind_StepBasic_SizeMember(py::module &);
void bind_StepBasic_SizeSelect(py::module &);
void bind_StepBasic_SolidAngleMeasureWithUnit(py::module &);
void bind_StepBasic_SolidAngleUnit(py::module &);
void bind_StepBasic_ThermodynamicTemperatureUnit(py::module &);
void bind_StepBasic_TimeMeasureWithUnit(py::module &);
void bind_StepBasic_TimeUnit(py::module &);
void bind_StepBasic_VersionedActionRequest(py::module &);
void bind_StepBasic_VolumeUnit(py::module &);
void bind_StepBasic_WeekOfYearAndDayDate(py::module &);

PYBIND11_MODULE(StepBasic, mod) {

py::module::import("OCCT.Standard");
py::module::import("OCCT.TCollection");
py::module::import("OCCT.NCollection");
py::module::import("OCCT.StepData");
py::module::import("OCCT.Interface");
py::module::import("OCCT.TColStd");

bind_StepBasic_SiPrefix(mod);
bind_StepBasic_SiUnitName(mod);
bind_StepBasic_AheadOrBehind(mod);
bind_StepBasic_Source(mod);
bind_StepBasic_ApprovalAssignment(mod);
bind_StepBasic_CertificationAssignment(mod);
bind_StepBasic_ContractAssignment(mod);
bind_StepBasic_DateAndTimeAssignment(mod);
bind_StepBasic_PersonAndOrganizationAssignment(mod);
bind_StepBasic_SecurityClassificationAssignment(mod);
bind_StepBasic_DocumentReference(mod);
bind_StepBasic_ActionAssignment(mod);
bind_StepBasic_ActionRequestAssignment(mod);
bind_StepBasic_DateAssignment(mod);
bind_StepBasic_IdentificationAssignment(mod);
bind_StepBasic_ExternalIdentificationAssignment(mod);
bind_StepBasic_GroupAssignment(mod);
bind_StepBasic_OrganizationAssignment(mod);
bind_StepBasic_Approval(mod);
bind_StepBasic_Array1OfApproval(mod);
bind_StepBasic_HArray1OfApproval(mod);
bind_StepBasic_Group(mod);
bind_StepBasic_GeneralProperty(mod);
bind_StepBasic_Action(mod);
bind_StepBasic_ActionMethod(mod);
bind_StepBasic_ActionRequestSolution(mod);
bind_StepBasic_Address(mod);
bind_StepBasic_ApplicationContext(mod);
bind_StepBasic_ApplicationContextElement(mod);
bind_StepBasic_ApplicationProtocolDefinition(mod);
bind_StepBasic_DateTimeSelect(mod);
bind_StepBasic_ApprovalDateTime(mod);
bind_StepBasic_PersonOrganizationSelect(mod);
bind_StepBasic_ApprovalPersonOrganization(mod);
bind_StepBasic_ApprovalRelationship(mod);
bind_StepBasic_ApprovalRole(mod);
bind_StepBasic_ApprovalStatus(mod);
bind_StepBasic_NamedUnit(mod);
bind_StepBasic_AreaUnit(mod);
bind_StepBasic_DerivedUnitElement(mod);
bind_StepBasic_Array1OfDerivedUnitElement(mod);
bind_StepBasic_Document(mod);
bind_StepBasic_Array1OfDocument(mod);
bind_StepBasic_Array1OfNamedUnit(mod);
bind_StepBasic_Organization(mod);
bind_StepBasic_Array1OfOrganization(mod);
bind_StepBasic_Person(mod);
bind_StepBasic_Array1OfPerson(mod);
bind_StepBasic_ProductContext(mod);
bind_StepBasic_Array1OfProductContext(mod);
bind_StepBasic_HArray1OfProductContext(mod);
bind_StepBasic_Product(mod);
bind_StepBasic_Array1OfProduct(mod);
bind_StepBasic_ProductDefinition(mod);
bind_StepBasic_Array1OfProductDefinition(mod);
bind_StepBasic_Unit(mod);
bind_StepBasic_MeasureWithUnit(mod);
bind_StepBasic_UncertaintyMeasureWithUnit(mod);
bind_StepBasic_Array1OfUncertaintyMeasureWithUnit(mod);
bind_StepBasic_Date(mod);
bind_StepBasic_CalendarDate(mod);
bind_StepBasic_Certification(mod);
bind_StepBasic_CertificationType(mod);
bind_StepBasic_CharacterizedObject(mod);
bind_StepBasic_Contract(mod);
bind_StepBasic_ContractType(mod);
bind_StepBasic_ConversionBasedUnit(mod);
bind_StepBasic_ConversionBasedUnitAndAreaUnit(mod);
bind_StepBasic_ConversionBasedUnitAndLengthUnit(mod);
bind_StepBasic_ConversionBasedUnitAndMassUnit(mod);
bind_StepBasic_ConversionBasedUnitAndPlaneAngleUnit(mod);
bind_StepBasic_ConversionBasedUnitAndRatioUnit(mod);
bind_StepBasic_ConversionBasedUnitAndSolidAngleUnit(mod);
bind_StepBasic_ConversionBasedUnitAndTimeUnit(mod);
bind_StepBasic_ConversionBasedUnitAndVolumeUnit(mod);
bind_StepBasic_CoordinatedUniversalTimeOffset(mod);
bind_StepBasic_DateAndTime(mod);
bind_StepBasic_DateRole(mod);
bind_StepBasic_DateTimeRole(mod);
bind_StepBasic_HArray1OfDerivedUnitElement(mod);
bind_StepBasic_DerivedUnit(mod);
bind_StepBasic_ProductDefinitionContext(mod);
bind_StepBasic_DesignContext(mod);
bind_StepBasic_DigitalDocument(mod);
bind_StepBasic_DimensionalExponents(mod);
bind_StepBasic_DocumentFile(mod);
bind_StepBasic_ProductOrFormationOrDefinition(mod);
bind_StepBasic_DocumentProductAssociation(mod);
bind_StepBasic_DocumentProductEquivalence(mod);
bind_StepBasic_DocumentRelationship(mod);
bind_StepBasic_DocumentRepresentationType(mod);
bind_StepBasic_DocumentType(mod);
bind_StepBasic_DocumentUsageConstraint(mod);
bind_StepBasic_Effectivity(mod);
bind_StepBasic_EffectivityAssignment(mod);
bind_StepBasic_EulerAngles(mod);
bind_StepBasic_SourceItem(mod);
bind_StepBasic_ExternallyDefinedItem(mod);
bind_StepBasic_ExternalSource(mod);
bind_StepBasic_GroupRelationship(mod);
bind_StepBasic_HArray1OfDocument(mod);
bind_StepBasic_HArray1OfNamedUnit(mod);
bind_StepBasic_HArray1OfOrganization(mod);
bind_StepBasic_HArray1OfPerson(mod);
bind_StepBasic_HArray1OfProduct(mod);
bind_StepBasic_HArray1OfProductDefinition(mod);
bind_StepBasic_HArray1OfUncertaintyMeasureWithUnit(mod);
bind_StepBasic_IdentificationRole(mod);
bind_StepBasic_LengthMeasureWithUnit(mod);
bind_StepBasic_LengthUnit(mod);
bind_StepBasic_LocalTime(mod);
bind_StepBasic_MassMeasureWithUnit(mod);
bind_StepBasic_MassUnit(mod);
bind_StepBasic_MeasureValueMember(mod);
bind_StepBasic_MechanicalContext(mod);
bind_StepBasic_NameAssignment(mod);
bind_StepBasic_ObjectRole(mod);
bind_StepBasic_OrdinalDate(mod);
bind_StepBasic_OrganizationalAddress(mod);
bind_StepBasic_OrganizationRole(mod);
bind_StepBasic_PersonalAddress(mod);
bind_StepBasic_PersonAndOrganization(mod);
bind_StepBasic_PersonAndOrganizationRole(mod);
bind_StepBasic_PhysicallyModeledProductDefinition(mod);
bind_StepBasic_PlaneAngleMeasureWithUnit(mod);
bind_StepBasic_PlaneAngleUnit(mod);
bind_StepBasic_ProductCategory(mod);
bind_StepBasic_ProductCategoryRelationship(mod);
bind_StepBasic_ProductConceptContext(mod);
bind_StepBasic_ProductDefinitionEffectivity(mod);
bind_StepBasic_ProductDefinitionFormation(mod);
bind_StepBasic_ProductDefinitionFormationRelationship(mod);
bind_StepBasic_ProductDefinitionFormationWithSpecifiedSource(mod);
bind_StepBasic_ProductDefinitionOrReference(mod);
bind_StepBasic_ProductDefinitionReference(mod);
bind_StepBasic_ProductDefinitionReferenceWithLocalRepresentation(mod);
bind_StepBasic_ProductDefinitionRelationship(mod);
bind_StepBasic_ProductDefinitionWithAssociatedDocuments(mod);
bind_StepBasic_ProductRelatedProductCategory(mod);
bind_StepBasic_ProductType(mod);
bind_StepBasic_RatioMeasureWithUnit(mod);
bind_StepBasic_RatioUnit(mod);
bind_StepBasic_RoleSelect(mod);
bind_StepBasic_RoleAssociation(mod);
bind_StepBasic_SecurityClassification(mod);
bind_StepBasic_SecurityClassificationLevel(mod);
bind_StepBasic_SiUnit(mod);
bind_StepBasic_SiUnitAndAreaUnit(mod);
bind_StepBasic_SiUnitAndLengthUnit(mod);
bind_StepBasic_SiUnitAndMassUnit(mod);
bind_StepBasic_SiUnitAndPlaneAngleUnit(mod);
bind_StepBasic_SiUnitAndRatioUnit(mod);
bind_StepBasic_SiUnitAndSolidAngleUnit(mod);
bind_StepBasic_SiUnitAndThermodynamicTemperatureUnit(mod);
bind_StepBasic_SiUnitAndTimeUnit(mod);
bind_StepBasic_SiUnitAndVolumeUnit(mod);
bind_StepBasic_SizeMember(mod);
bind_StepBasic_SizeSelect(mod);
bind_StepBasic_SolidAngleMeasureWithUnit(mod);
bind_StepBasic_SolidAngleUnit(mod);
bind_StepBasic_ThermodynamicTemperatureUnit(mod);
bind_StepBasic_TimeMeasureWithUnit(mod);
bind_StepBasic_TimeUnit(mod);
bind_StepBasic_VersionedActionRequest(mod);
bind_StepBasic_VolumeUnit(mod);
bind_StepBasic_WeekOfYearAndDayDate(mod);

}
