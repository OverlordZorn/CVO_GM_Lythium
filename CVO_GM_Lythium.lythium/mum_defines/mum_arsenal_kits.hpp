/*
*   MUM Arsenal Define File
*   Example File:  https://github.com/CVO-Org/Zorns-Mission-Utility-Mod/blob/main/.hemtt/missions/arsenal.VR/mum_arsenal.hpp (this file)
*   Documentation: https://github.com/CVO-Org/Zorns-Mission-Utility-Mod/blob/main/addons/arsenal/readme.md
*/

class mum_arsenal_kits
{
    editor_layer_name = "";
    object_variable_names[] = {""};

    // Imports Base from configFile
    import baseKit from mum_arsenal_kits;

    #include "mum_arsenal_kits_wearable.hpp"

    #include "mum_arsenal_kits_weapons.hpp"
    #include "mum_arsenal_kits_items.hpp"
    
    #include "mum_arsenal_kits_roleKits.hpp"
    #include "mum_arsenal_kits_personalKits.hpp"
};
