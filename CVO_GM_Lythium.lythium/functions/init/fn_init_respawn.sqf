/*
* Author: Zorn, Inspired by BTC Hearts And Minds
* Creates local respawn marker on post init, so the will respawn where they were placed in the editor.
* 
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


if (false) exitWith {}; // set to true to disable

if (!hasInterface) exitWith {}; // only run on playerClients

private _markerName =  switch (str side player) do {
    case "WEST": { "respawn_west" };
    case "EAST": { "respawn_east" };
    case "GUER": { "respawn_guerrila" };
    case "CIV": { "respawn_civilian" };
    default { "respawn" };
};

if (_markerName in allMapMarkers) then {
    // move marker locally
    _markerName setMarkerPosLocal player;
} else {
    // Create Respawn Marker
    createMarkerLocal [_markerName, player];
};
