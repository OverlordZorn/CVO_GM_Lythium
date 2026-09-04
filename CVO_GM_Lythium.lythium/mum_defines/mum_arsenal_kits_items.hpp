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
