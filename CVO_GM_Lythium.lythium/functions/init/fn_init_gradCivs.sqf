/*
* Author: Zorn
* Function to initalize the GRAD CIV Default Classes (Vehicles and Units)
*
* Arguments:
*
* Return Value:
* None
*
* Example:
* ['something', player] call prefix_component_fnc_functionname
*
* Public: No
*/
private _vehicles = [
    "UK3CB_TKC_C_Ikarus",
    "UK3CB_TKC_C_Datsun_Civ_Closed",
    "UK3CB_TKC_C_Datsun_Civ_Open",
    "UK3CB_TKC_C_Hatchback",
    "UK3CB_TKC_C_Hilux_Civ_Closed",
    "UK3CB_TKC_C_Hilux_Civ_Open",
    "UK3CB_TKC_C_Kamaz_Covered",
    "UK3CB_TKC_C_Kamaz_Fuel",
    "UK3CB_TKC_C_Kamaz_Open",
    "UK3CB_TKC_C_Kamaz_Repair",
    "UK3CB_TKC_C_Lada",
    "UK3CB_TKC_C_Lada_Taxi",
    "UK3CB_TKC_C_Old_Bike",
    "UK3CB_TKC_C_Pickup",
    "UK3CB_TKC_C_V3S_Reammo",
    "UK3CB_TKC_C_V3S_Refuel",
    "UK3CB_TKC_C_V3S_Recovery",
    "UK3CB_TKC_C_V3S_Repair",
    "UK3CB_TKC_C_V3S_Closed",
    "UK3CB_TKC_C_V3S_Open",
    "UK3CB_TKC_C_Sedan",
    "UK3CB_TKC_C_Skoda",
    "UK3CB_TKC_C_S1203",
    "UK3CB_TKC_C_S1203_Amb",
    "UK3CB_TKC_C_Tractor",
    "UK3CB_TKC_C_Tractor_Old",
    "UK3CB_TKC_C_TT650",
    "UK3CB_TKC_C_UAZ_Closed",
    "UK3CB_TKC_C_UAZ_Open",
    "UK3CB_TKC_C_Ural",
    "UK3CB_TKC_C_Ural_Fuel",
    "UK3CB_TKC_C_Ural_Open",
    "UK3CB_TKC_C_Ural_Ammo",
    "UK3CB_TKC_C_Ural_Empty",
    "UK3CB_TKC_C_Ural_Recovery",
    "UK3CB_TKC_C_Ural_Repair",
    "UK3CB_TKC_C_Gaz24",
    "UK3CB_TKC_C_Golf",
    "UK3CB_TKC_C_YAVA"
];

private _civClasses = [
    "UK3CB_TKC_C_CIV",
    "UK3CB_TKC_C_PILOT",
    "UK3CB_TKC_C_DOC",
    "UK3CB_TKC_C_SPOT",
    "UK3CB_TKC_C_WORKER",
    "UK3CB_MEC_C_WORKER",
    "UK3CB_MEC_C_SPOT",
    "UK3CB_MEC_C_CIV",
    "UK3CB_MEC_C_LABOURER"
];

[_civClasses] call grad_civs_lifecycle_fnc_setCivilians;
[_vehicles] call grad_civs_cars_fnc_setVehicles;