#include "\x\cf_spotting\addons\main\values.hpp"

class CfgPatches
{
	class CF_Spotting_RHS_AFRF
	{
		// Use meta information from specified addon. Used to avoid repeated declarations.
		addonRootClass = "CF_Spotting";
 
		requiredVersion = 1.84;
		requiredAddons[] = {"rhs_c_troops", "rhs_cti_insurgents", "rhs_c_a2port_car", "rhs_c_cars", "rhs_c_heavyweapons"};
		units[] = {};
		weapons[] = {};
	};
};

class CfgVehicles {
	
	class Land;	// External class reference
	
	class Man : Land {};
	
	class CAManBase : Man {};
	
	class SoldierGB : CAManBase {};
	
	class rhs_infantry_msv_base : SoldierGB {
		sensitivity = cf_spotting_sensivitiy;
		sensitivityEar = cf_spotting_sensitivityEar;
	};
	
	class rhs_msv_rifleman : rhs_infantry_msv_base {
		sensitivity = cf_spotting_sensivitiy;
		sensitivityEar = cf_spotting_sensitivityEar;
	};
	
	class rhs_msv_marksman : rhs_msv_rifleman {
		sensitivity = cf_spotting_sensivitiy;
		sensitivityEar = cf_spotting_sensitivityEar;
	};
	
	class rhs_msv_efreitor : rhs_msv_rifleman {
		sensitivity = cf_spotting_sensivitiy;
		sensitivityEar = cf_spotting_sensitivityEar;
	};
	
	class rhs_msv_sergeant : rhs_msv_rifleman {
		sensitivity = cf_spotting_sensivitiy;
		sensitivityEar = cf_spotting_sensitivityEar;
	};
	
	class rhs_msv_junior_sergeant : rhs_msv_sergeant {
		sensitivity = cf_spotting_sensivitiy;
		sensitivityEar = cf_spotting_sensitivityEar;
	};
	
	class rhs_msv_officer_armored : rhs_msv_rifleman {
		sensitivity = cf_spotting_sensivitiy;
		sensitivityEar = cf_spotting_sensitivityEar;
	};
	
	class rhs_msv_engineer : rhs_msv_rifleman {
		sensitivity = cf_spotting_sensivitiy;
		sensitivityEar = cf_spotting_sensitivityEar;
	};
	
	class rhs_msv_crew : rhs_msv_rifleman {
		sensitivity = cf_spotting_sensivitiy;
		sensitivityEar = cf_spotting_sensitivityEar;
	};
	
	class rhs_msv_crew_commander : rhs_msv_crew {
		sensitivity = cf_spotting_sensivitiy;
		sensitivityEar = cf_spotting_sensitivityEar;
	};
	
	class rhs_msv_grenadier : rhs_msv_rifleman {};
	
	class rhs_msv_emr_grenadier : rhs_msv_grenadier {};
	
	class rhs_msv_emr_efreitor : rhs_msv_emr_grenadier {
		sensitivity = cf_spotting_sensivitiy;
		sensitivityEar = cf_spotting_sensitivityEar;
	};
	
	class rhs_mvd_izlom_rifleman : rhs_msv_rifleman {};
	
	class rhs_mvd_izlom_marksman : rhs_mvd_izlom_rifleman {
		sensitivity = cf_spotting_sensivitiy;
		sensitivityEar = cf_spotting_sensitivityEar;
	};
	
	class rhs_mvd_izlom_rifleman_LAT : rhs_mvd_izlom_rifleman {};
	
	class rhs_mvd_izlom_efreitor : rhs_mvd_izlom_rifleman_LAT {
		sensitivity = cf_spotting_sensivitiy;
		sensitivityEar = cf_spotting_sensitivityEar;
	};
	
	class rhs_mvd_izlom_sergeant : rhs_mvd_izlom_rifleman {
		sensitivity = cf_spotting_sensivitiy;
		sensitivityEar = cf_spotting_sensitivityEar;
	};
	
	class rhs_infantry_vdv_base : rhs_infantry_msv_base {
		sensitivity = cf_spotting_sensivitiy;
		sensitivityEar = cf_spotting_sensitivityEar;
	};
	
	class rhs_vdv_rifleman : rhs_infantry_vdv_base {};
	
	class rhs_vdv_marksman : rhs_vdv_rifleman {
		sensitivity = cf_spotting_sensivitiy;
		sensitivityEar = cf_spotting_sensitivityEar;
	};
	
	class rhs_vdv_LAT : rhs_vdv_rifleman {};
	
	class rhs_vdv_efreitor : rhs_vdv_LAT {
		sensitivity = cf_spotting_sensivitiy;
		sensitivityEar = cf_spotting_sensitivityEar;
	};
	
	class rhs_vdv_sergeant : rhs_vdv_LAT {
		sensitivity = cf_spotting_sensivitiy;
		sensitivityEar = cf_spotting_sensitivityEar;
	};
	
	class rhs_vdv_junior_sergeant : rhs_vdv_sergeant {
		sensitivity = cf_spotting_sensivitiy;
		sensitivityEar = cf_spotting_sensitivityEar;
	};
	
	class rhs_vdv_officer_armored : rhs_vdv_rifleman {
		sensitivity = cf_spotting_sensivitiy;
		sensitivityEar = cf_spotting_sensitivityEar;
	};
	
	class rhs_vdv_engineer : rhs_vdv_rifleman {
		sensitivity = cf_spotting_sensivitiy;
		sensitivityEar = cf_spotting_sensitivityEar;
	};
	
	class rhs_vdv_crew : rhs_vdv_rifleman {
		sensitivity = cf_spotting_sensivitiy;
		sensitivityEar = cf_spotting_sensitivityEar;
	};
	
	class rhs_vdv_crew_commander : rhs_vdv_crew {
		sensitivity = cf_spotting_sensivitiy;
		sensitivityEar = cf_spotting_sensitivityEar;
	};
	
	class rhs_infantry_vdv_des_base : rhs_infantry_vdv_base {
		sensitivity = cf_spotting_sensivitiy;
		sensitivityEar = cf_spotting_sensitivityEar;
	};
	
	class rhs_vdv_recon_rifleman : rhs_vdv_rifleman {
		sensitivity = cf_spotting_sensivitiy;
		sensitivityEar = cf_spotting_sensitivityEar;
	};
	
	class rhs_vdv_recon_rifleman_lat : rhs_vdv_recon_rifleman {
		sensitivity = cf_spotting_sensivitiy;
		sensitivityEar = cf_spotting_sensitivityEar;
	};
	
	class rhs_vdv_recon_efreitor : rhs_vdv_recon_rifleman_lat {
		sensitivity = cf_spotting_sensivitiy;
		sensitivityEar = cf_spotting_sensitivityEar;
	};
	
	class rhs_vdv_recon_officer_armored : rhs_vdv_recon_rifleman {
		sensitivity = cf_spotting_sensivitiy;
		sensitivityEar = cf_spotting_sensitivityEar;
	};
	
	class rhs_vdv_recon_marksman : rhs_vdv_recon_rifleman {
		sensitivity = cf_spotting_sensivitiy;
		sensitivityEar = cf_spotting_sensitivityEar;
	};
	
	class rhs_rva_crew : rhs_infantry_msv_base {
		sensitivity = cf_spotting_sensivitiy;
		sensitivityEar = cf_spotting_sensitivityEar;
	};
	
	class rhs_rva_crew_officer : rhs_rva_crew {
		sensitivity = cf_spotting_sensivitiy;
		sensitivityEar = cf_spotting_sensitivityEar;
	};
	
// Independent troops (different PBO)

	class I_G_Soldier_base_F;	// External class reference

	class I_G_Soldier_F : I_G_Soldier_base_F {};

	class rhs_ins_base : I_G_Soldier_F {
		sensitivity = cf_spotting_sensivitiy;
		sensitivityEar = cf_spotting_sensitivityEar;
	};
	
	class rhs_g_engineer_F : rhs_ins_base {
		sensitivity = cf_spotting_sensivitiy;
		sensitivityEar = cf_spotting_sensitivityEar;
	};
	
	class rhs_g_uniform1_base : SoldierGB {
		sensitivity = cf_spotting_sensivitiy;
		sensitivityEar = cf_spotting_sensitivityEar;
	};
	
// Vehicles - Cars, Trucks & MRAPs

	class LandVehicle;	// External class reference

	class Car : LandVehicle {};

	class Car_F : Car {};

	class Truck_F : Car_F {};
	
	class Offroad_01_base_F : Car_F {};
	
	class MRAP_02_base_F : Car_F {};

	class RHS_UAZ_Base : Offroad_01_base_F {
		sensitivity = cf_spotting_sensivitiy;
		sensitivityEar = cf_spotting_sensitivityEar;
	};
	
	class RHS_Ural_BaseTurret : Truck_F {
		sensitivity = cf_spotting_sensivitiy;
		sensitivityEar = cf_spotting_vehicleSensitivityEar;
	};
	
	class rhs_tigr_base : MRAP_02_base_F {
		sensitivity = cf_spotting_sensivitiy;
		sensitivityEar = cf_spotting_vehicleSensitivityEar;
	};
	
// Armoured Vehicles - TODO
	
// Static Weapons

	class StaticWeapon : LandVehicle {};

	class StaticMGWeapon : StaticWeapon {};
	
	class StaticATWeapon : StaticWeapon {};
	
	class StaticAAWeapon : StaticWeapon {};
	
	class StaticCannon : StaticWeapon {};
	
	class StaticGrenadeLauncher : StaticWeapon {};
	
	class StaticMortar : StaticWeapon {};
	
	class AT_01_base_F : StaticMGWeapon {};
	
	class RHS_ZU23_base : StaticCannon {
		sensitivity = cf_spotting_sensivitiy;
		sensitivityEar = cf_spotting_sensitivityEar;
	};
	
	class rhs_nsv_tripod_base : StaticMGWeapon {
		sensitivity = cf_spotting_sensivitiy;
		sensitivityEar = cf_spotting_sensitivityEar;
	};
	
	class RHS_KORD_Base : rhs_nsv_tripod_base {
		sensitivity = cf_spotting_sensivitiy;
		sensitivityEar = cf_spotting_sensitivityEar;
	};
	
	class rhs_DSHKM_base : StaticMGWeapon {
		sensitivity = cf_spotting_sensivitiy;
		sensitivityEar = cf_spotting_sensitivityEar;
	};
	
	class RHS_AGS30_TriPod_base : StaticGrenadeLauncher {
		sensitivity = cf_spotting_sensivitiy;
		sensitivityEar = cf_spotting_sensitivityEar;
	};
	
	class rhs_SPG9_base : AT_01_base_F {
		sensitivity = cf_spotting_sensivitiy;
		sensitivityEar = cf_spotting_sensitivityEar;
	};
	
	class rhs_Igla_AA_pod_Base : StaticAAWeapon {
		sensitivity = cf_spotting_sensivitiy;
		sensitivityEar = cf_spotting_sensitivityEar;
	};
	
	class rhs_2b14_82mm_Base : StaticMortar {
		sensitivity = cf_spotting_sensivitiy;
		sensitivityEar = cf_spotting_sensitivityEar;
	};
	
	class rhs_Metis_Base : AT_01_base_F {
		sensitivity = cf_spotting_sensivitiy;
		sensitivityEar = cf_spotting_sensitivityEar;
	};
	
	class rhs_D30_base : StaticCannon {
		sensitivity = cf_spotting_sensivitiy;
		sensitivityEar = cf_spotting_sensitivityEar;
	};
	
	class rhs_Kornet_Base : AT_01_base_F {
		sensitivity = cf_spotting_sensivitiy;
		sensitivityEar = cf_spotting_sensitivityEar;
	};
};