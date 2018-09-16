#include "\x\cf_spotting\addons\main\values.hpp"

class CfgPatches
{
	class CF_Spotting_RHS_USF
	{
		// Use meta information from specified addon. Used to avoid repeated declarations.
		addonRootClass = "CF_Spotting";
 
		requiredVersion = 1.84;
		requiredAddons[] = {"rhsusf_c_troops", "rhsusf_c_fmtv", "rhsusf_c_HEMTT_A4", "rhsusf_c_hmmwv", "rhsusf_c_mtvr", "rhsusf_c_rg33", "rhsusf_c_RG33L"};
		units[] = {};
		weapons[] = {};
	};
};

class CfgVehicles {
	
	class Land;	// External class reference
	
	class Man : Land {};
	
	class CAManBase : Man {};
	
	class SoldierWB : CAManBase {};
	
	class rhsusf_socom_uniform_base : SoldierWB {
		sensitivity = cf_spotting_sensivitiy;
		sensitivityEar = cf_spotting_sensitivityEar;
	};
	
	class rhsusf_infantry_army_base : SoldierWB {
		sensitivity = cf_spotting_sensivitiy;
		sensitivityEar = cf_spotting_sensitivityEar;
	};
	
	class rhsusf_army_ocp_rifleman : rhsusf_infantry_army_base {};
	
	class rhsusf_army_ocp_marksman : rhsusf_infantry_army_base {
		sensitivity = cf_spotting_sensivitiy;
		sensitivityEar = cf_spotting_sensitivityEar;
	};
	
	class rhsusf_army_ocp_officer : rhsusf_infantry_army_base {
		sensitivity = cf_spotting_sensivitiy;
		sensitivityEar = cf_spotting_sensitivityEar;
	};
	
	class rhsusf_army_ocp_squadleader : rhsusf_infantry_army_base {
		sensitivity = cf_spotting_sensivitiy;
		sensitivityEar = cf_spotting_sensitivityEar;
	};
	
	class rhsusf_army_ocp_teamleader : rhsusf_infantry_army_base {
		sensitivity = cf_spotting_sensivitiy;
		sensitivityEar = cf_spotting_sensitivityEar;
	};

	class rhsusf_army_ocp_jfo : rhsusf_infantry_army_base {
		sensitivity = cf_spotting_sensivitiy;
		sensitivityEar = cf_spotting_sensitivityEar;
	};
	
	class rhsusf_army_ocp_fso : rhsusf_army_ocp_jfo {
		sensitivity = cf_spotting_sensivitiy;
		sensitivityEar = cf_spotting_sensitivityEar;
	};
	
	class rhsusf_army_ocp_engineer : rhsusf_army_ocp_rifleman {
		sensitivity = cf_spotting_sensivitiy;
		sensitivityEar = cf_spotting_sensitivityEar;
	};
	
	class rhsusf_army_ocp_explosives : rhsusf_army_ocp_rifleman {
		sensitivity = cf_spotting_sensivitiy;
		sensitivityEar = cf_spotting_sensitivityEar;
	};
	
	class rhsusf_army_ocp_sniper : rhsusf_army_ocp_marksman {
		sensitivity = cf_spotting_sensivitiy;
		sensitivityEar = cf_spotting_sensitivityEar;
	};
	
	class rhsusf_army_ocp_crewman : rhsusf_infantry_army_base {
		sensitivity = cf_spotting_sensivitiy;
		sensitivityEar = cf_spotting_sensitivityEar;
	};
	
	class rhsusf_infantry_usmc_base : rhsusf_infantry_army_base {};
	
	class rhsusf_usmc_marpat_wd_rifleman : rhsusf_infantry_usmc_base {};
	
	class rhsusf_usmc_marpat_wd_officer : rhsusf_usmc_marpat_wd_rifleman {
		sensitivity = cf_spotting_sensivitiy;
		sensitivityEar = cf_spotting_sensitivityEar;
	};
	
	class rhsusf_usmc_marpat_wd_squadleader : rhsusf_usmc_marpat_wd_rifleman {
		sensitivity = cf_spotting_sensivitiy;
		sensitivityEar = cf_spotting_sensitivityEar;
	};
	
	class rhsusf_usmc_marpat_wd_teamleader : rhsusf_infantry_usmc_base {
		sensitivity = cf_spotting_sensivitiy;
		sensitivityEar = cf_spotting_sensitivityEar;
	};
	
	class rhsusf_usmc_marpat_wd_jfo : rhsusf_usmc_marpat_wd_rifleman {
		sensitivity = cf_spotting_sensivitiy;
		sensitivityEar = cf_spotting_sensitivityEar;
	};
	
	class rhsusf_usmc_marpat_wd_fso : rhsusf_usmc_marpat_wd_rifleman {
		sensitivity = cf_spotting_sensivitiy;
		sensitivityEar = cf_spotting_sensitivityEar;
	};
	
	class rhsusf_usmc_marpat_wd_engineer : rhsusf_usmc_marpat_wd_rifleman {
		sensitivity = cf_spotting_sensivitiy;
		sensitivityEar = cf_spotting_sensitivityEar;
	};
	
	class rhsusf_usmc_marpat_wd_explosives : rhsusf_usmc_marpat_wd_rifleman {
		sensitivity = cf_spotting_sensivitiy;
		sensitivityEar = cf_spotting_sensitivityEar;
	};
	
	class rhsusf_usmc_marpat_wd_marksman : rhsusf_usmc_marpat_wd_rifleman {
		sensitivity = cf_spotting_sensivitiy;
		sensitivityEar = cf_spotting_sensitivityEar;
	};
	
	class rhsusf_usmc_marpat_wd_spotter : rhsusf_usmc_marpat_wd_marksman {
		sensitivity = cf_spotting_sensivitiy;
		sensitivityEar = cf_spotting_sensitivityEar;
	};
	
	class rhsusf_usmc_marpat_wd_sniper : rhsusf_usmc_marpat_wd_marksman {
		sensitivity = cf_spotting_sensivitiy;
		sensitivityEar = cf_spotting_sensitivityEar;
	};
	
	class rhsusf_usmc_marpat_wd_crewman : rhsusf_infantry_usmc_base {
		sensitivity = cf_spotting_sensivitiy;
		sensitivityEar = cf_spotting_sensitivityEar;
	};
	
	class rhsusf_usmc_lar_marpat_wd_rifleman : rhsusf_usmc_marpat_wd_rifleman {};
	
	class rhsusf_usmc_lar_marpat_wd_squadleader : rhsusf_usmc_lar_marpat_wd_rifleman {
		sensitivity = cf_spotting_sensivitiy;
		sensitivityEar = cf_spotting_sensitivityEar;
	};
	
	class rhsusf_usmc_lar_marpat_wd_teamleader : rhsusf_infantry_usmc_base {
		sensitivity = cf_spotting_sensivitiy;
		sensitivityEar = cf_spotting_sensitivityEar;
	};
	
	class rhsusf_usmc_lar_marpat_wd_marksman : rhsusf_usmc_lar_marpat_wd_rifleman {
		sensitivity = cf_spotting_sensivitiy;
		sensitivityEar = cf_spotting_sensitivityEar;
	};
	
	class rhsusf_usmc_lar_marpat_wd_crewman : rhsusf_infantry_usmc_base {
		sensitivity = cf_spotting_sensivitiy;
		sensitivityEar = cf_spotting_sensitivityEar;
	};
	
	class rhsusf_infantry_usmc_recon_base : rhsusf_infantry_usmc_base {
		sensitivity = cf_spotting_sensivitiy;
		sensitivityEar = cf_spotting_sensitivityEar;
	};
	
	class rhsusf_usmc_recon_marpat_wd_marksman : rhsusf_infantry_usmc_recon_base {
		sensitivity = cf_spotting_sensivitiy;
		sensitivityEar = cf_spotting_sensitivityEar;
	};
	
	class rhsusf_usmc_recon_marpat_wd_officer : rhsusf_infantry_usmc_recon_base {
		sensitivity = cf_spotting_sensivitiy;
		sensitivityEar = cf_spotting_sensitivityEar;
	};
	
	class rhsusf_usmc_recon_marpat_wd_teamleader : rhsusf_infantry_usmc_recon_base {
		sensitivity = cf_spotting_sensivitiy;
		sensitivityEar = cf_spotting_sensitivityEar;
	};
	
	class rhsusf_socom_mc_uniform : rhsusf_socom_uniform_base {
		sensitivity = cf_spotting_sensivitiy;
		sensitivityEar = cf_spotting_sensitivityEar;
	};
	
	class rhsusf_infantry_socom_armysf_base : rhsusf_socom_mc_uniform {
		sensitivity = cf_spotting_sensivitiy;
		sensitivityEar = cf_spotting_sensitivityEar;
	};
	
	class rhsusf_socom_g3_m81_uniform : rhsusf_socom_uniform_base {
		sensitivity = cf_spotting_sensivitiy;
		sensitivityEar = cf_spotting_sensitivityEar;
	};
	
	class rhsusf_infantry_socom_marsoc_base : rhsusf_socom_g3_m81_uniform {
		sensitivity = cf_spotting_sensivitiy;
		sensitivityEar = cf_spotting_sensitivityEar;
	};
	
	class rhsusf_socom_marsoc_cso_cqb : rhsusf_infantry_socom_marsoc_base {
		sensitivity = cf_spotting_sensivitiy;
		sensitivityEar = cf_spotting_sensitivityEar;
	};
	
	class rhsusf_socom_marsoc_cso_light : rhsusf_socom_marsoc_cso_cqb {
		sensitivity = cf_spotting_sensivitiy;
		sensitivityEar = cf_spotting_sensitivityEar;
	};
	
	class rhsusf_socom_marsoc_teamleader : rhsusf_infantry_socom_marsoc_base {
		sensitivity = cf_spotting_sensivitiy;
		sensitivityEar = cf_spotting_sensitivityEar;
	};
	
	class rhsusf_socom_marsoc_teamchief : rhsusf_socom_marsoc_teamleader {
		sensitivity = cf_spotting_sensivitiy;
		sensitivityEar = cf_spotting_sensitivityEar;
	};
	
	class rhsusf_socom_marsoc_elementleader : rhsusf_socom_marsoc_cso_cqb {
		sensitivity = cf_spotting_sensivitiy;
		sensitivityEar = cf_spotting_sensitivityEar;
	};
	
	class rhsusf_socom_marsoc_jtac : rhsusf_infantry_socom_marsoc_base {
		sensitivity = cf_spotting_sensivitiy;
		sensitivityEar = cf_spotting_sensitivityEar;
	};
	
	class rhsusf_socom_marsoc_jfo : rhsusf_socom_marsoc_jtac {
		sensitivity = cf_spotting_sensivitiy;
		sensitivityEar = cf_spotting_sensitivityEar;
	};
	
	class rhsusf_socom_marsoc_cso_eod : rhsusf_infantry_socom_marsoc_base {
		sensitivity = cf_spotting_sensivitiy;
		sensitivityEar = cf_spotting_sensitivityEar;
	};
	
	class rhsusf_socom_marsoc_cso_mechanic : rhsusf_infantry_socom_marsoc_base {
		sensitivity = cf_spotting_sensivitiy;
		sensitivityEar = cf_spotting_sensitivityEar;
	};
	
	class rhsusf_socom_marsoc_spotter : rhsusf_infantry_socom_marsoc_base {
		sensitivity = cf_spotting_sensivitiy;
		sensitivityEar = cf_spotting_sensitivityEar;
	};
	
	class rhsusf_socom_marsoc_sniper : rhsusf_socom_marsoc_spotter {
		sensitivity = cf_spotting_sensivitiy;
		sensitivityEar = cf_spotting_sensitivityEar;
	};
	
	class rhsusf_socom_marsoc_sniper_m107 : rhsusf_socom_marsoc_sniper {
		sensitivity = cf_spotting_sensivitiy;
		sensitivityEar = cf_spotting_sensitivityEar;
	};
	
	class rhsusf_socom_swcc_crewman : rhsusf_infantry_socom_marsoc_base {
		sensitivity = cf_spotting_sensivitiy;
		sensitivityEar = cf_spotting_sensitivityEar;
	};		
	
	class rhsusf_socom_swcc_officer : rhsusf_socom_swcc_crewman {
		sensitivity = cf_spotting_sensivitiy;
		sensitivityEar = cf_spotting_sensitivityEar;
	};
	
// Vehicles - Cars, Trucks & MRAPs

	class LandVehicle;	// External class reference
	
	class Car : LandVehicle {};
	
	class Car_F : Car {};
	
	class MRAP_01_base_F : Car_F {};
	
	class Truck_F : Car_F {};

	class Truck_01_base_F : Truck_F {};

	class rhsusf_fmtv_base : Truck_01_base_F {
		sensitivity = cf_spotting_sensivitiy;
		sensitivityEar = cf_spotting_vehicleSensitivityEar;
	};
	
	class rhsusf_HEMTT_A4_base : Truck_01_base_F {
		sensitivity = cf_spotting_sensivitiy;
		sensitivityEar = cf_spotting_vehicleSensitivityEar;
	};
	
	class rhsusf_hmmwe_base : MRAP_01_base_F {
		sensitivity = cf_spotting_sensivitiy;
		sensitivityEar = cf_spotting_sensitivityEar;
	};
	
	class rhsusf_mtvr_base : Truck_01_base_F {
		sensitivity = cf_spotting_sensivitiy;
		sensitivityEar = cf_spotting_vehicleSensitivityEar;
	};
	
	class rhsusf_rg33_base : MRAP_01_base_F {
		sensitivity = cf_spotting_sensivitiy;
		sensitivityEar = cf_spotting_vehicleSensitivityEar;
	};
	
	class rhsusf_RG33L_base : MRAP_01_base_F {
		sensitivity = cf_spotting_sensivitiy;
		sensitivityEar = cf_spotting_vehicleSensitivityEar;
	};
	
// Armoured Vehicles - TODO

// Static Weapons

	class StaticWeapon : LandVehicle {};

	class StaticMGWeapon : StaticWeapon {};
	
	class StaticGrenadeLauncher : StaticWeapon {};
	
	class StaticATWeapon : StaticWeapon {};
	
	class StaticAAWeapon : StaticWeapon {};
	
	class StaticMortar : StaticWeapon {};
	
	class StaticCannon : StaticWeapon {};

	class rhs_m2staticmg_base : StaticMGWeapon {
		sensitivity = cf_spotting_sensivitiy;
		sensitivityEar = cf_spotting_sensitivityEar;
	};

	class RHS_MK19_TriPod_base : StaticGrenadeLauncher {
		sensitivity = cf_spotting_sensivitiy;
		sensitivityEar = cf_spotting_sensitivityEar;
	};
	
	class RHS_TOW_TriPod_base : StaticATWeapon {
		sensitivity = cf_spotting_sensivitiy;
		sensitivityEar = cf_spotting_sensitivityEar;
	};
	
	class RHS_Stinger_AA_pod_Base : StaticAAWeapon {
		sensitivity = cf_spotting_sensivitiy;
		sensitivityEar = cf_spotting_sensitivityEar;
	};
	
	class RHS_M252_Base : StaticMortar {
		sensitivity = cf_spotting_sensivitiy;
		sensitivityEar = cf_spotting_sensitivityEar;
	};
	
	class RHS_M119_base : StaticCannon {
		sensitivity = cf_spotting_sensivitiy;
		sensitivityEar = cf_spotting_sensitivityEar;
	};
};