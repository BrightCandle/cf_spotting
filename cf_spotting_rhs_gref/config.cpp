#include "\x\cf_spotting\addons\main\values.hpp"

class CfgPatches
{
	class CF_Spotting_RHS_GREF
	{
		// Use meta information from specified addon. Used to avoid repeated declarations.
		addonRootClass = "CF_Spotting";
 
		requiredVersion = 1.84;
		requiredAddons[] = {"rhsgref_c_troops"};
		units[] = {};
		weapons[] = {};
	};
};

class CfgVehicles {
	
	class Land;	// External class reference
	
	class Man : Land {};
	
	class CAManBase : Man {};
	
	class SoldierGB : CAManBase {};
	
	class SoldierWB : CAManBase {};
	
	class rhsgref_cdf_ngd_base : SoldierGB {
		sensitivity = cf_spotting_sensivitiy;
		sensitivityEar = cf_spotting_sensitivityEar;
	};
	
	class rhsgref_cdf_ngd_rifleman : rhsgref_cdf_ngd_base {};
	
	class rhsgref_cdf_ngd_officer : rhsgref_cdf_ngd_rifleman {
		sensitivity = cf_spotting_sensivitiy;
		sensitivityEar = cf_spotting_sensitivityEar;
	};
	
	class rhsgref_cdf_ngd_squadleader : rhsgref_cdf_ngd_rifleman {
		sensitivity = cf_spotting_sensivitiy;
		sensitivityEar = cf_spotting_sensitivityEar;
	};
	
	class rhsgref_cdf_ngd_engineer : rhsgref_cdf_ngd_rifleman {
		sensitivity = cf_spotting_sensivitiy;
		sensitivityEar = cf_spotting_sensitivityEar;
	};
	
	class rhsgref_cdf_ngd_crew : rhsgref_cdf_ngd_rifleman {
		sensitivity = cf_spotting_sensivitiy;
		sensitivityEar = cf_spotting_sensitivityEar;
	};
	
	class rhsgref_cdf_reg_base : SoldierGB {
		sensitivity = cf_spotting_sensivitiy;
		sensitivityEar = cf_spotting_sensitivityEar;
	};
	
	class rhsgref_cdf_reg_rifleman : rhsgref_cdf_reg_base {
		sensitivity = cf_spotting_sensivitiy;
		sensitivityEar = cf_spotting_sensitivityEar;
	};
	
	class rhsgref_cdf_reg_marksman : rhsgref_cdf_reg_rifleman {
		sensitivity = cf_spotting_sensivitiy;
		sensitivityEar = cf_spotting_sensitivityEar;
	};
	
	class rhsgref_cdf_reg_general : rhsgref_cdf_reg_rifleman {
		sensitivity = cf_spotting_sensivitiy;
		sensitivityEar = cf_spotting_sensitivityEar;
	};
	
	class rhsgref_cdf_reg_officer : rhsgref_cdf_reg_rifleman {
		sensitivity = cf_spotting_sensivitiy;
		sensitivityEar = cf_spotting_sensitivityEar;
	};
	
	class rhsgref_cdf_reg_squadleader : rhsgref_cdf_reg_rifleman {
		sensitivity = cf_spotting_sensivitiy;
		sensitivityEar = cf_spotting_sensitivityEar;
	};
	
	class rhsgref_cdf_reg_engineer : rhsgref_cdf_reg_rifleman {
		sensitivity = cf_spotting_sensivitiy;
		sensitivityEar = cf_spotting_sensitivityEar;
	};
	
	class rhsgref_cdf_reg_crew : rhsgref_cdf_reg_rifleman {
		sensitivity = cf_spotting_sensivitiy;
		sensitivityEar = cf_spotting_sensitivityEar;
	};
	
	class rhsgref_cdf_reg_crew_commander : rhsgref_cdf_reg_crew {
		sensitivity = cf_spotting_sensivitiy;
		sensitivityEar = cf_spotting_sensitivityEar;
	};
	
	class rhsgref_cdf_air_pilot : rhsgref_cdf_reg_crew {
		sensitivity = cf_spotting_sensivitiy;
		sensitivityEar = cf_spotting_sensitivityEar;
	};
	
	class rhsgref_cdf_para_base : rhsgref_cdf_reg_base {
		sensitivity = cf_spotting_sensivitiy;
		sensitivityEar = cf_spotting_sensitivityEar;
	};
	
	class rhsgref_cdf_para_rifleman : rhsgref_cdf_para_base {};
	
	class rhsgref_cdf_para_marksman : rhsgref_cdf_para_rifleman {
		sensitivity = cf_spotting_sensivitiy;
		sensitivityEar = cf_spotting_sensitivityEar;
	};
	
	class rhsgref_cdf_para_officer : rhsgref_cdf_para_rifleman {
		sensitivity = cf_spotting_sensivitiy;
		sensitivityEar = cf_spotting_sensitivityEar;
	};
	
	class rhsgref_cdf_para_squadleader : rhsgref_cdf_para_rifleman {
		sensitivity = cf_spotting_sensivitiy;
		sensitivityEar = cf_spotting_sensitivityEar;
	};
	
	class rhsgref_cdf_para_engineer : rhsgref_cdf_para_rifleman {
		sensitivity = cf_spotting_sensivitiy;
		sensitivityEar = cf_spotting_sensitivityEar;
	};
	
	class rhsgref_cdf_para_crew : rhsgref_cdf_para_rifleman {
		sensitivity = cf_spotting_sensivitiy;
		sensitivityEar = cf_spotting_sensitivityEar;
	};		
	
	class rhsgref_nat_base : SoldierGB {
		sensitivity = cf_spotting_sensivitiy;
		sensitivityEar = cf_spotting_sensitivityEar;
	};		
	
	class rhsgref_nat_hunter : rhsgref_nat_base {
		sensitivity = cf_spotting_sensivitiy;
		sensitivityEar = cf_spotting_sensitivityEar;
	};
	
	class rhsgref_nat_saboteur : rhsgref_nat_base {
		sensitivity = cf_spotting_sensivitiy;
		sensitivityEar = cf_spotting_sensitivityEar;
	};
	
	class rhsgref_nat_crew : rhsgref_nat_base {
		sensitivity = cf_spotting_sensivitiy;
		sensitivityEar = cf_spotting_sensitivityEar;
	};
	
	class rhsgref_nat_pmil_rifleman : rhsgref_nat_base {
		sensitivity = cf_spotting_sensivitiy;
		sensitivityEar = cf_spotting_sensitivityEar;
	};
	
	class rhsgref_nat_pmil_hunter : rhsgref_nat_pmil_rifleman {
		sensitivity = cf_spotting_sensivitiy;
		sensitivityEar = cf_spotting_sensitivityEar;
	};
	
	class rhsgref_nat_pmil_saboteur : rhsgref_nat_pmil_rifleman {
		sensitivity = cf_spotting_sensivitiy;
		sensitivityEar = cf_spotting_sensitivityEar;
	};
	
	class rhsgref_nat_pmil_crew : rhsgref_nat_pmil_rifleman {
		sensitivity = cf_spotting_sensivitiy;
		sensitivityEar = cf_spotting_sensitivityEar;
	};
	
	class rhsgref_ins_base : SoldierGB {
		sensitivity = cf_spotting_sensivitiy;
		sensitivityEar = cf_spotting_sensitivityEar;
	};
	
	class rhsgref_ins_uniform_gorka_y : rhsgref_ins_base {};
	
	class rhsgref_ins_uniform_gorka_g : rhsgref_ins_uniform_gorka_y {};
	
	class rhsgref_ins_engineer : rhsgref_ins_uniform_gorka_g {
		sensitivity = cf_spotting_sensivitiy;
		sensitivityEar = cf_spotting_sensitivityEar;
	};
	
	class rhsgref_ins_uniform_specter : rhsgref_ins_base {};
	
	class rhsgref_ins_saboteur : rhsgref_ins_uniform_specter {
		sensitivity = cf_spotting_sensivitiy;
		sensitivityEar = cf_spotting_sensitivityEar;
	};
	
	class rhsgref_ins_uniform_izlom : rhsgref_ins_base {};
	
	class rhsgref_ins_sniper : rhsgref_ins_uniform_izlom {
		sensitivity = cf_spotting_sensivitiy;
		sensitivityEar = cf_spotting_sensitivityEar;
	};
	
	class rhsgref_ins_spotter : rhsgref_ins_uniform_gorka_y {
		sensitivity = cf_spotting_sensivitiy;
		sensitivityEar = cf_spotting_sensitivityEar;
	};
	
	class rhsgref_ins_crew : rhsgref_ins_uniform_specter {
		sensitivity = cf_spotting_sensivitiy;
		sensitivityEar = cf_spotting_sensitivityEar;
	};
	
	class rhsgref_ins_pilot : rhsgref_ins_uniform_specter {
		sensitivity = cf_spotting_sensivitiy;
		sensitivityEar = cf_spotting_sensitivityEar;
	};
	
	class rhsgref_hidf_base : SoldierWB {
		sensitivity = cf_spotting_sensivitiy;
		sensitivityEar = cf_spotting_sensitivityEar;
	};
	
	class rhsgref_hidf_rifleman : rhsgref_hidf_base {};
	
	class rhsgref_hidf_marksman : rhsgref_hidf_rifleman {
		sensitivity = cf_spotting_sensivitiy;
		sensitivityEar = cf_spotting_sensitivityEar;
	};
		
	class rhsgref_hidf_squadleader : rhsgref_hidf_rifleman {
		sensitivity = cf_spotting_sensivitiy;
		sensitivityEar = cf_spotting_sensitivityEar;
	};
	
	class rhsgref_hidf_teamleader : rhsgref_hidf_rifleman {
		sensitivity = cf_spotting_sensivitiy;
		sensitivityEar = cf_spotting_sensitivityEar;
	};
	
	class rhsgref_hidf_sniper : rhsgref_hidf_marksman {
		sensitivity = cf_spotting_sensivitiy;
		sensitivityEar = cf_spotting_sensitivityEar;
	};
	
	class rhsgref_hidf_crewman : rhsgref_hidf_base {
		sensitivity = cf_spotting_sensivitiy;
		sensitivityEar = cf_spotting_sensitivityEar;
	};
	
// Vehicles - Cars, Trucks & MRAPs
	// All inherited from RHS AFRF classes

// Armoured Vehicles - TODO
	
};