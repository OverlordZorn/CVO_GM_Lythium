class mum_csc {

    class crates {
        import base_crate from mum_csc;

        class medical: base_crate {

            displayName = "Medical Supplies";

            box_class = "ACE_medicalSupplyCrate_advanced";
            box_empty = "true";

            ace_medical_facility = "true";

            items[] = {
                { "ACE_salineIV_500",    5 },
                { "ACE_salineIV",        5 },
                { "ACE_painkillers",     2 },
                { "ACE_epinephrine",     5 },
                { "ACE_morphine",        5 },
                { "ACE_fieldDressing",  40 },
                { "ACE_elasticBandage", 40 },
                { "ACE_packingBandage", 20 },
                { "ACE_quikclot",       20 },
                { "ACE_tourniquet",      5 },
                { "ACE_splint",          5 },
                { "ACE_bodyBag",         5 },
                { "ACE_surgicalKit",     1 }
            };
        };

        class eod: base_crate {
            displayName = "EOD/EX Supplies";

            box_class = "iedd_equipment_Box";
            box_empty = "true";

            items[] = {
                { "iedd_item_notebook", 1 },

                { "ACE_DefusalKit", 2 },
                { "ACE_EntrenchingTool", 2 },
                { "ACE_wirecutter", 2 },

                { "ACE_EarPlugs", 5},

                { "ACE_SpraypaintRed", 2  },
                { "ace_marker_flags_red", 10 },
                { "rhs_mag_an_m8hc", 5 },   // Smoke
                { "JCA_HandFlare_Red", 2 }, 

                { "DemoCharge_Remote_Mag", 5 },
                { "rhs_mag_an_m14_th3", 2 }, // Incendiary

                { "ACE_Flashlight_XL50", 2 },

                { "ACE_Sandbag_empty", 20 },

                { "cigs_cigars_cigarbox_5", 1 }
            };
        };

        class HAT_crate: base_crate {
            displayName = "HAT Kit";
            box_class = "Box_Syndicate_WpsLaunch_F";
            box_empty = "true";

            items[] = {
                { "RHS_Metis_Tripod_Bag", 1 },
                { "RHS_Metis_Gun_Bag", 1 },
                { "ace_compat_rhs_afrf3_mag_9M131M", 2 },
                { "ace_compat_rhs_afrf3_mag_9M131F", 3 }
            };
        };






        class combat_supplies: base_crate {
            displayName = "Combat Supplies";

            box_class = "Box_Syndicate_Ammo_F";
            box_empty = "true";

            items[] = {

                { "rhs_30Rnd_545x39_AK_plum_green", 10 }, // tracers
                { "rhs_30Rnd_545x39_7N10_plum_AK", 20 },

                { "greenmag_beltlinked_762x54_basic_200", 5 },
                { "greenmag_ammo_545x39_basic_60Rnd", 10 },
                { "greenmag_ammo_762x39_basic_60Rnd", 5 },
                { "greenmag_ammo_762x54_basic_60Rnd", 3 },

                { "greenmag_item_speedloader", 1 }
              
            };
        };
        class patrol_package: base_crate {
            displayName = "Patrol Package";

            box_class = "Box_Syndicate_Ammo_F";
            box_empty = "true";

            items[] = {

                { "greenmag_item_speedloader", 1 },
                { "greenmag_ammo_545x39_basic_60Rnd", 5 },
                { "Old_Camera_Color_HUD", 1},
                { "ACE_Chemlight_Shield", 3 },
                { "Chemlight_red", 5 } ,

                { "ACE_WaterBottle", 10 },
                { "ACE_Humanitarian_Ration", 20 },
                { "ACE_wirecutter", 1 },
                { "ACE_EntrenchingTool", 1 },

                { "ACE_bodyBag", 10 },

                { "cigs_kosmos_cigpack", 1 },
                { "cigs_apollo_cigpack", 1 },
                { "cigs_voron_cigpack", 1 },
                { "cigs_matches", 3 },

                { "tsp_flashbang_cts2", 2 }, // flashbang
                { "ACE_CableTie", 10 },

                { "ACE_EarPlugs", 5 },
                { "ACE_SpraypaintRed", 1 },

                { "ACRE_VHF30108", 1}
            };
        };


    };
};


