/*
* Author: Zorn
* Function to force CBA Settings inside a mission via FNC Call
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

[
    "CBA_SettingsInitialized",
    {

        // _setting  - Name of the setting <STRING>
        // _value    - Value of the setting <ANY>
        // _priority - New setting priority <NUMBER, BOOLEAN>
        // _source   - Can be "client", "mission" or "server" (optional, default: "client") <STRING>
        // _store    - Store changed setting in profile or mission (optional, default: false) <BOOLEAN>

        ["ace_arsenal_enableIdentityTabs", false, 3] call CBA_settings_fnc_set;
    }
] call CBA_fnc_addEventHandler;
