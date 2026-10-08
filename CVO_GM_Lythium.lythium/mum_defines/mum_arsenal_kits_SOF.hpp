class cvo_nightKit: baseKit {
    condition = "missionNamespace getVariable ['cvo_nightKit', false] || missionNamespace getVariable ['cvo_SOFKit', false]";
    class items {
        class rhs_1PN138 {}; // NVGs
        
        class rhs_acc_2dpZenit {};  // Light
        class rhs_acc_perst1ik {};  // Laser
    };
};

class cvo_SOFKit: baseKit {
    condition = "missionNamespace getVariable ['cvo_SOFKit', false]";
    class items {

        // NVGs
        class ACE_NVGoggles_OPFOR_WP {};
        class NVGoggles_OPFOR {};

        // Zenitco's
        class rhs_weap_ak74m_zenitco01 {};
        class rhs_weap_ak103_zenitco01 {};
        class rhs_weap_ak105_zenitco01 {};

        // IR Light + Laser
        class ACE_DBAL_A3_Green {};

        // Grip
        class rhs_acc_grip_rk2 {};
        class rhs_acc_grip_rk6 {};
        class rhs_acc_grip_ffg2 {};

        // Blackout Uniforms
        class UK3CB_MEE_O_U_07_B {};
        class UK3CB_MEE_O_U_07 {};
        class UK3CB_LSM_B_U_Crew_CombatSmock_02 {};
        class UK3CB_LSM_B_U_Crew_CombatSmock_01 {};

        
        class rhs_acc_tgpa {};       // Suppressor 545x39 
        class rhs_acc_dtk4short {};  // Suppressor 545x39 
        class rhs_acc_dtk4screws {}; // Suppressor 762x39 
        class rhs_acc_dtk4long {};   // Suppressor 762x39 
        class rhs_acc_pbs1 {};       // Suppressor 762x39
        class rhs_acc_tgpv {};       // Suppressor 762x54 / SVD 
    };
};

class cvo_SOFKit_marksman: baseKit {
    condition = "missionNamespace getVariable ['cvo_SOFKit', false]";
    role = "Marksman";
    class items {
        class rhs_acc_1pn34 {};
    };
};

class cvo_SOFKit_Machinegunner: baseKit {
    condition = "missionNamespace getVariable ['cvo_SOFKit', false]";
    role = "Machinegunner";
    class items {
        class rhs_weap_pkp {};
        class rhs_acc_1pn93_1 {};
    };
};
