class Rations: baseKit {
    condition = "missionNamespace getVariable ['ace_field_rations_enabled', true]";
    class items {
        class ACE_MRE_BeefStew {};
        class ACE_MRE_ChickenTikkaMasala {};
        class ACE_MRE_ChickenHerbDumplings {};
        class ACE_MRE_CreamChickenSoup {};
        class ACE_MRE_CreamTomatoSoup {};
        class ACE_MRE_LambCurry {};
        class ACE_MRE_MeatballsPasta {};
        class ACE_MRE_SteakVegetables {};
    };
};


class GreenMagStuff: baseKit {
    addon_dependency = "greenmag_main";
    class items {
        //class greenmag_ammo_556x45_basic_60Rnd {};
        //class greenmag_ammo_556x45_basic_30Rnd {};

        //class greenmag_ammo_762x51_basic_60Rnd {};
        //class greenmag_ammo_762x51_basic_30Rnd {};

        class greenmag_ammo_545x39_basic_60Rnd {};
        class greenmag_ammo_545x39_basic_30Rnd {};

        class greenmag_ammo_762x39_basic_60Rnd {};
        class greenmag_ammo_762x39_basic_30Rnd {};

        class greenmag_ammo_9x19_basic_30Rnd {};

        class greenmag_ammo_762x54_basic_60Rnd {};
        class greenmag_ammo_762x54_basic_30Rnd {};
        
        class greenmag_beltlinked_762x54_basic_50 {};
        class greenmag_beltlinked_762x54_basic_100 {};
        class greenmag_beltlinked_762x54_basic_150 {};
        class greenmag_beltlinked_762x54_basic_200 {};

        class greenmag_item_speedloader {};
    };
};


class Binoculars: baseKit {
    class items {
        class Binocular {};
        class Old_Camera_HUD {};
        class Old_Camera {};
        class Old_Camera_Color_HUD {};
        class Old_Camera_Color {};
        class rhs_tr8_periscope_pip {};
        class rhs_tr8_periscope {};
    };
};

class Immersion_Cigs: baseKit {
    addon_dependency = "cigs_core";
    class items {
        class cigs_Apollo_cigpack {};
        class cigs_black_devil_cigpack {};
        class cigs_cigars_cigarbox_5 {};
        class cigs_craven_cigpack {};
        class cigs_Kosmos_cigpack {};
        class cigs_pops_poppack {};
        class cigs_lucky_strike_cigpack {};
        class cigs_morley_cigpack {};
        //class cigs_crayons_crayonpack {};
    };
};

class base_items: baseKit {
    class items {
            class ACE_wirecutter {};
            class ACE_EntrenchingTool {};
    };
};


// RADIOS
class Radios_Base: baseKit {
    class items {
        class ACRE_PRC343 {};
    };
};

class Radios_Leadership: baseKit {
    role = "Leadership";
    class items {
        class ACRE_PRC148 {};
    };
};
