#include "\x\cf_spotting\addons\main\values.hpp"

class CfgPatches
{
	class CF_Spotting_PO
	{
		// Use meta information from specified addon. Used to avoid repeated declarations.
		addonRootClass = "CF_Spotting";
 
		requiredVersion = 1.84;
		requiredAddons[] = {"po_factions_afr", "po_factions_eu", "po_factions_fic", "po_factions_me", "po_vehicles"};
		units[] = {};
		weapons[] = {};
	};
};

class CfgVehicles {
	
	class rhs_infantry_msv_base; // External class reference
	
	class rhs_msv_rifleman; // External class reference
	
	class Land;	// External class reference
	
	class Man : Land {};
	
	class CAManBase : Man {};
	
	class SoldierGB : CAManBase {};
	
	class Civilian : CAManBase {};
	
	class Civilian_F : Civilian {};
	
// Factions - AFR

	class LOP_AFR_Base_IND : Civilian_F {
		sensitivity = cf_spotting_sensivitiy;
		sensitivityEar = cf_spotting_sensitivityEar;
	};

	class LOP_AFR_Infantry_TL : LOP_AFR_Base_IND {
		sensitivity = cf_spotting_sensivitiy;
		sensitivityEar = cf_spotting_sensitivityEar;
	};
	
	class LOP_AFR_Infantry_SL : LOP_AFR_Base_IND {
		sensitivity = cf_spotting_sensivitiy;
		sensitivityEar = cf_spotting_sensitivityEar;
	};
	
	class LOP_AFR_Infantry_Marksman : LOP_AFR_Base_IND {
		sensitivity = cf_spotting_sensivitiy;
		sensitivityEar = cf_spotting_sensitivityEar;
	};
	
	class LOP_AFR_Infantry_IED : LOP_AFR_Base_IND {
		sensitivity = cf_spotting_sensivitiy;
		sensitivityEar = cf_spotting_sensitivityEar;
	};
	
	class LOP_AFR_Civ_Base : Civilian_F {};
	
	class PO_AFR_Civ_Soldier_Base : LOP_AFR_Civ_Base {
		sensitivity = cf_spotting_sensivitiy;
		sensitivityEar = cf_spotting_sensitivityEar;
	};
		
	class LOP_AFRCiv_Soldier_TL : PO_AFR_Civ_Soldier_Base {
		sensitivity = cf_spotting_sensivitiy;
		sensitivityEar = cf_spotting_sensitivityEar;
	};
	
	class LOP_AFRCiv_Soldier_SL : PO_AFR_Civ_Soldier_Base {
		sensitivity = cf_spotting_sensivitiy;
		sensitivityEar = cf_spotting_sensitivityEar;
	};
	
	class LOP_AFRCiv_Soldier_Marksman : PO_AFR_Civ_Soldier_Base {
		sensitivity = cf_spotting_sensivitiy;
		sensitivityEar = cf_spotting_sensitivityEar;
	};
	
	class LOP_AFRCiv_Soldier_IED : PO_AFR_Civ_Soldier_Base {
		sensitivity = cf_spotting_sensivitiy;
		sensitivityEar = cf_spotting_sensitivityEar;
	};
	
// Factions - EU

	class LOP_UKR_Infantry_Base : rhs_infantry_msv_base {
		sensitivity = cf_spotting_sensivitiy;
		sensitivityEar = cf_spotting_sensitivityEar;
	};
	
	class LOP_UKR_Infantry_Rifleman : LOP_UKR_Infantry_Base {
		sensitivity = cf_spotting_sensivitiy;
		sensitivityEar = cf_spotting_sensitivityEar;
	};

	class LOP_UKR_Infantry_Marksman : LOP_UKR_Infantry_Rifleman {
		sensitivity = cf_spotting_sensivitiy;
		sensitivityEar = cf_spotting_sensitivityEar;
	};
	
	class LOP_UKR_Infantry_sergeant : LOP_UKR_Infantry_Rifleman {
		sensitivity = cf_spotting_sensivitiy;
		sensitivityEar = cf_spotting_sensitivityEar;
	};
	
	class LOP_UKR_Infantry_junior_sergeant : LOP_UKR_Infantry_sergeant {
		sensitivity = cf_spotting_sensivitiy;
		sensitivityEar = cf_spotting_sensitivityEar;
	};
	
	class LOP_UKR_Infantry_officer_armored : LOP_UKR_Infantry_Rifleman {
		sensitivity = cf_spotting_sensivitiy;
		sensitivityEar = cf_spotting_sensitivityEar;
	};
	
	class LOP_UKR_Infantry_engineer : LOP_UKR_Infantry_Rifleman {
		sensitivity = cf_spotting_sensivitiy;
		sensitivityEar = cf_spotting_sensitivityEar;
	};
	
	class LOP_UKR_Infantry_crew : LOP_UKR_Infantry_Rifleman {
		sensitivity = cf_spotting_sensivitiy;
		sensitivityEar = cf_spotting_sensitivityEar;
	};
	
	class LOP_US_Infantry_Base : rhs_msv_rifleman {
		sensitivity = cf_spotting_sensivitiy;
		sensitivityEar = cf_spotting_sensitivityEar;
	};
	
	class LOP_US_Infantry_TL : LOP_US_Infantry_Base {
		sensitivity = cf_spotting_sensivitiy;
		sensitivityEar = cf_spotting_sensitivityEar;
	};
	
	class LOP_US_Infantry_SL : LOP_US_Infantry_Base {
		sensitivity = cf_spotting_sensivitiy;
		sensitivityEar = cf_spotting_sensitivityEar;
	};
	
	class LOP_US_Infantry_Officer : LOP_US_Infantry_Base {
		sensitivity = cf_spotting_sensivitiy;
		sensitivityEar = cf_spotting_sensitivityEar;
	};
	
	class LOP_US_Infantry_Marksman : LOP_US_Infantry_Base {
		sensitivity = cf_spotting_sensivitiy;
		sensitivityEar = cf_spotting_sensitivityEar;
	};
	
	class LOP_US_Infantry_Crewman : LOP_US_Infantry_Base {
		sensitivity = cf_spotting_sensivitiy;
		sensitivityEar = cf_spotting_sensitivityEar;
	};
	
	class LOP_US_Infantry_Engineer : LOP_US_Infantry_Base {
		sensitivity = cf_spotting_sensivitiy;
		sensitivityEar = cf_spotting_sensitivityEar;
	};
	
// Factions - FIC
// Appears to all be inherited, check that their sensitivity is OK

// Factions - ME

	class I_Soldier_base_F : SoldierGB {};

	class PO_AA_Infantry_Base : I_Soldier_base_F {
		sensitivity = cf_spotting_sensivitiy;
		sensitivityEar = cf_spotting_sensitivityEar;
	};
	
	class LOP_AA_Infantry_TL : PO_AA_Infantry_Base {
		sensitivity = cf_spotting_sensivitiy;
		sensitivityEar = cf_spotting_sensitivityEar;
	};
	
	class LOP_AA_Infantry_SL : PO_AA_Infantry_Base {
		sensitivity = cf_spotting_sensivitiy;
		sensitivityEar = cf_spotting_sensitivityEar;
	};
	
	class LOP_AA_Infantry_Engineer : PO_AA_Infantry_Base {
		sensitivity = cf_spotting_sensivitiy;
		sensitivityEar = cf_spotting_sensitivityEar;
	};
	
	class LOP_AA_Infantry_Marksman : PO_AA_Infantry_Base {
		sensitivity = cf_spotting_sensivitiy;
		sensitivityEar = cf_spotting_sensitivityEar;
	};
	
	class LOP_AA_Infantry_Crewman : PO_AA_Infantry_Base {
		sensitivity = cf_spotting_sensivitiy;
		sensitivityEar = cf_spotting_sensitivityEar;
	};
	
	class PO_AA_Police_Base : PO_AA_Infantry_Base {
		sensitivity = cf_spotting_sensivitiy;
		sensitivityEar = cf_spotting_sensitivityEar;
	};
	
	class LOP_AA_Police_TL : PO_AA_Police_Base {
		sensitivity = cf_spotting_sensivitiy;
		sensitivityEar = cf_spotting_sensitivityEar;
	};
	
	class LOP_AA_Police_SL : PO_AA_Police_Base {
		sensitivity = cf_spotting_sensivitiy;
		sensitivityEar = cf_spotting_sensitivityEar;
	};
	
	class PO_IA_Infantry_D_Base : I_Soldier_base_F {
		sensitivity = cf_spotting_sensivitiy;
		sensitivityEar = cf_spotting_sensitivityEar;
	};
	
	class LOP_IA_Infantry_TL : PO_IA_Infantry_D_Base {
		sensitivity = cf_spotting_sensivitiy;
		sensitivityEar = cf_spotting_sensitivityEar;
	};
	
	class LOP_IA_Infantry_SL : PO_IA_Infantry_D_Base {
		sensitivity = cf_spotting_sensivitiy;
		sensitivityEar = cf_spotting_sensitivityEar;
	};
	
	class LOP_IA_Infantry_Engineer : PO_IA_Infantry_D_Base {
		sensitivity = cf_spotting_sensivitiy;
		sensitivityEar = cf_spotting_sensitivityEar;
	};
	
	class LOP_IA_Infantry_Marksman : PO_IA_Infantry_D_Base {
		sensitivity = cf_spotting_sensivitiy;
		sensitivityEar = cf_spotting_sensitivityEar;
	};
	
	class LOP_IA_Infantry_Crewman : PO_IA_Infantry_D_Base {
		sensitivity = cf_spotting_sensivitiy;
		sensitivityEar = cf_spotting_sensitivityEar;
	};
	
	class PO_IA_Infantry_W_Base : PO_IA_Infantry_D_Base {
		sensitivity = cf_spotting_sensivitiy;
		sensitivityEar = cf_spotting_sensitivityEar;
	};
	
	class LOP_IA_Infantry_W_TL : PO_IA_Infantry_W_Base {
		sensitivity = cf_spotting_sensivitiy;
		sensitivityEar = cf_spotting_sensitivityEar;
	};
		
	class LOP_IA_Infantry_W_SL : PO_IA_Infantry_W_Base {
		sensitivity = cf_spotting_sensivitiy;
		sensitivityEar = cf_spotting_sensitivityEar;
	};
	
	class LOP_IA_Infantry_W_Engineer : PO_IA_Infantry_W_Base {
		sensitivity = cf_spotting_sensivitiy;
		sensitivityEar = cf_spotting_sensitivityEar;
	};
	
	class LOP_IA_Infantry_W_Marksman : PO_IA_Infantry_W_Base {
		sensitivity = cf_spotting_sensivitiy;
		sensitivityEar = cf_spotting_sensitivityEar;
	};
	
	class LOP_IA_Infantry_W_Crewman : PO_IA_Infantry_W_Base {
		sensitivity = cf_spotting_sensivitiy;
		sensitivityEar = cf_spotting_sensitivityEar;
	};
	
	class PO_IA_Infantry_SF_Base : PO_IA_Infantry_D_Base {
		sensitivity = cf_spotting_sensivitiy;
		sensitivityEar = cf_spotting_sensitivityEar;
	};
	
	class PO_IA_Infantry_SF_TL : PO_IA_Infantry_SF_Base {
		sensitivity = cf_spotting_sensivitiy;
		sensitivityEar = cf_spotting_sensitivityEar;
	};
	
	class PO_IA_Infantry_SF_SL : PO_IA_Infantry_SF_Base {
		sensitivity = cf_spotting_sensivitiy;
		sensitivityEar = cf_spotting_sensitivityEar;
	};
	
	class PO_IA_Infantry_SF_Mechanic : PO_IA_Infantry_SF_Base {
		sensitivity = cf_spotting_sensivitiy;
		sensitivityEar = cf_spotting_sensitivityEar;
	};
	
	class PO_IA_Infantry_SF_Marksman : PO_IA_Infantry_SF_Base {
		sensitivity = cf_spotting_sensivitiy;
		sensitivityEar = cf_spotting_sensitivityEar;
	};
	
	class PO_PESH_Infantry_Base : I_Soldier_base_F {
		sensitivity = cf_spotting_sensivitiy;
		sensitivityEar = cf_spotting_sensitivityEar;
	};
	
	class LOP_PESH_Infantry_TL : PO_PESH_Infantry_Base {
		sensitivity = cf_spotting_sensivitiy;
		sensitivityEar = cf_spotting_sensitivityEar;
	};
	
	class LOP_PESH_Infantry_SL : PO_PESH_Infantry_Base {
		sensitivity = cf_spotting_sensivitiy;
		sensitivityEar = cf_spotting_sensitivityEar;
	};
	
	class LOP_PESH_Infantry_Engineer : PO_PESH_Infantry_Base {
		sensitivity = cf_spotting_sensivitiy;
		sensitivityEar = cf_spotting_sensitivityEar;
	};
	
	class LOP_PESH_Infantry_Marksman : PO_PESH_Infantry_Base {
		sensitivity = cf_spotting_sensivitiy;
		sensitivityEar = cf_spotting_sensitivityEar;
	};
	
	class LOP_PESH_Infantry_Sniper : PO_PESH_Infantry_Base {
		sensitivity = cf_spotting_sensivitiy;
		sensitivityEar = cf_spotting_sensitivityEar;
	};
	
	class PO_PMC_Infantry_Base : I_Soldier_base_F {
		sensitivity = cf_spotting_sensivitiy;
		sensitivityEar = cf_spotting_sensitivityEar;
	};
	
	class LOP_PMC_Infantry_TL : PO_PMC_Infantry_Base {
		sensitivity = cf_spotting_sensivitiy;
		sensitivityEar = cf_spotting_sensitivityEar;
	};
	
	class LOP_PMC_Infantry_SL : PO_PMC_Infantry_Base {
		sensitivity = cf_spotting_sensivitiy;
		sensitivityEar = cf_spotting_sensitivityEar;
	};
	
	class LOP_PMC_Infantry_Engineer : PO_PMC_Infantry_Base {
		sensitivity = cf_spotting_sensivitiy;
		sensitivityEar = cf_spotting_sensitivityEar;
	};
	
	class LOP_PMC_Infantry_Marksman : PO_PMC_Infantry_Base {
		sensitivity = cf_spotting_sensivitiy;
		sensitivityEar = cf_spotting_sensitivityEar;
	};
	
	class LOP_PMC_Infantry_Crewman : PO_PMC_Infantry_Base {
		sensitivity = cf_spotting_sensivitiy;
		sensitivityEar = cf_spotting_sensitivityEar;
	};
	
	class PO_AM_Infantry_Base_IND : I_Soldier_base_F {
		sensitivity = cf_spotting_sensivitiy;
		sensitivityEar = cf_spotting_sensitivityEar;
	};
	
	class LOP_AM_Infantry_TL : PO_AM_Infantry_Base_IND {
		sensitivity = cf_spotting_sensivitiy;
		sensitivityEar = cf_spotting_sensitivityEar;
	};
	
	class LOP_AM_Infantry_SL : PO_AM_Infantry_Base_IND {
		sensitivity = cf_spotting_sensivitiy;
		sensitivityEar = cf_spotting_sensitivityEar;
	};
	
	class LOP_AM_Infantry_Marksman : PO_AM_Infantry_Base_IND {
		sensitivity = cf_spotting_sensivitiy;
		sensitivityEar = cf_spotting_sensitivityEar;
	};
	
	class LOP_AM_Infantry_Engineer : PO_AM_Infantry_Base_IND {
		sensitivity = cf_spotting_sensivitiy;
		sensitivityEar = cf_spotting_sensitivityEar;
	};
	
	class PO_AM_Infantry_Base_OPF : PO_AM_Infantry_Base_IND {
		sensitivity = cf_spotting_sensivitiy;
		sensitivityEar = cf_spotting_sensitivityEar;
	};
	
	class LOP_AM_OPF_Infantry_TL : PO_AM_Infantry_Base_OPF {
		sensitivity = cf_spotting_sensivitiy;
		sensitivityEar = cf_spotting_sensitivityEar;
	};
	
	class LOP_AM_OPF_Infantry_SL : PO_AM_Infantry_Base_OPF {
		sensitivity = cf_spotting_sensivitiy;
		sensitivityEar = cf_spotting_sensitivityEar;
	};
	
	class LOP_AM_OPF_Infantry_Marksman : PO_AM_Infantry_Base_OPF {
		sensitivity = cf_spotting_sensivitiy;
		sensitivityEar = cf_spotting_sensitivityEar;
	};
	
	class LOP_AM_OPF_Infantry_Engineer : PO_AM_Infantry_Base_OPF {
		sensitivity = cf_spotting_sensivitiy;
		sensitivityEar = cf_spotting_sensitivityEar;
	};
	
	class PO_ISIS_Infantry_Base_IND : I_Soldier_base_F {
		sensitivity = cf_spotting_sensivitiy;
		sensitivityEar = cf_spotting_sensitivityEar;
	};
	
	class LOP_ISTS_Infantry_TL : PO_ISIS_Infantry_Base_IND {
		sensitivity = cf_spotting_sensivitiy;
		sensitivityEar = cf_spotting_sensitivityEar;
	};
	
	class LOP_ISTS_Infantry_SL : PO_ISIS_Infantry_Base_IND {
		sensitivity = cf_spotting_sensivitiy;
		sensitivityEar = cf_spotting_sensitivityEar;
	};
	
	class LOP_ISTS_Infantry_Marksman : PO_ISIS_Infantry_Base_IND {
		sensitivity = cf_spotting_sensivitiy;
		sensitivityEar = cf_spotting_sensitivityEar;
	};
	
	class LOP_ISTS_Infantry_Engineer : PO_ISIS_Infantry_Base_IND {
		sensitivity = cf_spotting_sensivitiy;
		sensitivityEar = cf_spotting_sensitivityEar;
	};
	
	class PO_ISTS_Infantry_B_Base_IND : PO_ISIS_Infantry_Base_IND {
		sensitivity = cf_spotting_sensivitiy;
		sensitivityEar = cf_spotting_sensitivityEar;
	};
	
	class LOP_ISTS_Infantry_B_TL : PO_ISTS_Infantry_B_Base_IND {
		sensitivity = cf_spotting_sensivitiy;
		sensitivityEar = cf_spotting_sensitivityEar;
	};
	
	class LOP_ISTS_Infantry_B_SL : PO_ISTS_Infantry_B_Base_IND {
		sensitivity = cf_spotting_sensivitiy;
		sensitivityEar = cf_spotting_sensitivityEar;
	};
	
	class LOP_ISTS_Infantry_B_Marksman : PO_ISTS_Infantry_B_Base_IND {
		sensitivity = cf_spotting_sensivitiy;
		sensitivityEar = cf_spotting_sensitivityEar;
	};
	
	class LOP_ISTS_Infantry_B_Engineer : PO_ISTS_Infantry_B_Base_IND {
		sensitivity = cf_spotting_sensivitiy;
		sensitivityEar = cf_spotting_sensitivityEar;
	};
	
	class LOP_IRAN_Infantry_Base : rhs_infantry_msv_base {
		sensitivity = cf_spotting_sensivitiy;
		sensitivityEar = cf_spotting_sensitivityEar;
	};
	
	class LOP_IRAN_Infantry_Rifleman : LOP_IRAN_Infantry_Base {
		sensitivity = cf_spotting_sensivitiy;
		sensitivityEar = cf_spotting_sensitivityEar;
	};
	
	class LOP_IRAN_Infantry_Marksman : LOP_IRAN_Infantry_Rifleman {
		sensitivity = cf_spotting_sensivitiy;
		sensitivityEar = cf_spotting_sensitivityEar;
	};
	
	class LOP_IRAN_Infantry_sergeant : LOP_IRAN_Infantry_Rifleman {
		sensitivity = cf_spotting_sensivitiy;
		sensitivityEar = cf_spotting_sensitivityEar;
	};
	
	class LOP_IRAN_Infantry_junior_sergeant : LOP_IRAN_Infantry_sergeant {
		sensitivity = cf_spotting_sensivitiy;
		sensitivityEar = cf_spotting_sensitivityEar;
	};
	
	class LOP_IRAN_Infantry_officer_armored : LOP_IRAN_Infantry_Rifleman {
		sensitivity = cf_spotting_sensivitiy;
		sensitivityEar = cf_spotting_sensitivityEar;
	};
	
	class LOP_IRAN_Infantry_engineer : LOP_IRAN_Infantry_Rifleman {
		sensitivity = cf_spotting_sensivitiy;
		sensitivityEar = cf_spotting_sensitivityEar;
	};
	
	class LOP_IRAN_Infantry_crew : LOP_IRAN_Infantry_Rifleman {
		sensitivity = cf_spotting_sensivitiy;
		sensitivityEar = cf_spotting_sensitivityEar;
	};
	
	class LOP_IRAN_Infantry_SF_Base : LOP_IRAN_Infantry_Base {
		sensitivity = cf_spotting_sensivitiy;
		sensitivityEar = cf_spotting_sensitivityEar;
	};
	
	class LOP_IRAN_Infantry_SF_Rifleman : LOP_IRAN_Infantry_SF_Base {
		sensitivity = cf_spotting_sensivitiy;
		sensitivityEar = cf_spotting_sensitivityEar;
	};
	
	class LOP_IRAN_Infantry_SF_Marksman : LOP_IRAN_Infantry_SF_Rifleman {
		sensitivity = cf_spotting_sensivitiy;
		sensitivityEar = cf_spotting_sensitivityEar;
	};
	
	class LOP_IRAN_Infantry_SF_sergeant : LOP_IRAN_Infantry_SF_Rifleman {
		sensitivity = cf_spotting_sensivitiy;
		sensitivityEar = cf_spotting_sensitivityEar;
	};
	
	class LOP_IRAN_Infantry_SF_junior_sergeant : LOP_IRAN_Infantry_SF_sergeant {
		sensitivity = cf_spotting_sensivitiy;
		sensitivityEar = cf_spotting_sensitivityEar;
	};
	
	class LOP_IRAN_Infantry_SF_engineer : LOP_IRAN_Infantry_SF_Rifleman {
		sensitivity = cf_spotting_sensivitiy;
		sensitivityEar = cf_spotting_sensitivityEar;
	};
	
// Vehicles - Cars, Trucks & MRAPs

	class LandVehicle;	// External class reference
	
	class Car : LandVehicle {};
	
	class Car_F : Car {};

	class PO_LandRover_base : Car_F {
		sensitivity = cf_spotting_sensivitiy;
		sensitivityEar = cf_spotting_sensitivityEar;
	};
	
	class PO_Pickup_PK_base : Car_F {
		sensitivity = cf_spotting_sensivitiy;
		sensitivityEar = cf_spotting_sensitivityEar;
	};
// Armoured Vehicles - TODO
};