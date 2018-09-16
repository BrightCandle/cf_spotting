class CfgPatches
{
	class CF_Spotting_RHS_SAF
	{
		// Use meta information from specified addon. Used to avoid repeated declarations.
		addonRootClass = "CF_Spotting";
 
		requiredVersion = 1.84;
		requiredAddons[] = {"rhssaf_c_troops"};
		units[] = {};
		weapons[] = {};
	};
};

class CfgVehicles {
	
	class Land;	// External class reference
	
	class Man : Land {};
	
	class CAManBase : Man {};
	
	class SoldierGB : CAManBase {};
	
	class rhssaf_soldier_m10_base : SoldierGB {
		sensitivity = 45;
		sensitivityEar = 45;
	};
	
// Vehicles - Cars, Trucks & MRAPs
	// All inherited from RHS AFRF/USAF
	
// Armoured Vehicles
	// All inherited from RHS AFRF/USAF
	
// Static Weapons
	// All inherited from RHS AFRF/USAF

};