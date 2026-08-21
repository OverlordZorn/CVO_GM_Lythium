private _structuredString1 = "
<font size='11' face='EtelkaMonospacePro'>
<br/>Personal notebook - recovered
<br/>Author: unknown (assumed workshop owner)
<br/></font>
<br/><font size='12' face='EraserRegular'>
<br/>Day 14. Moved half the stock to the Zarath site after the patrol came within sight of the main road last night. Too close.
<br/>Karim says the Zarath location is clean, no one has been near it in months. Old compound, far to the west. isolated, no one will bother coming here.
<br/>Still need the triggers. Rasheed was supposed to bring them from the north but he is three days late. If he does not show by Thursday I will have to go myself.
<br/>Told the others - nothing here, nothing at Zarath, gets written down. Meet in person only.
";

private _structuredString2 = "
<font size='11' face='EtelkaMonospacePro'>
<br/>Message history:
<br/>From: Karim
<br/>To: Workshop Lead
<br/>
<br/>Brother, the old hideout in Zarath is ready. Swept it myself, no visitors on it since the uprising ended.
<br/>I moved three crates there last night under the tarps like you said. The rest will follow once you confirm the new place is secure.
<br/>One of the old workers came by asking questions, told him we were storing fertilizer in barrels for the next season. He seemed to believe it but keep an eye out when you are there.
<br/>Do not use the phone for this again, meet me at the usual place instead.
";

private _structuredString3 = "
<font size='11' face='EtelkaMonospacePro'>
<br/>Handwritten notebook page - torn, stained</font>
<br/></font>
<br/><font size='12' face='EraserRegular'>
<br/>Zarath site - compound west of Zarath
<br/>Contact: K. (see notebook)
<br/>Status: active, stock relocated
<br/>
<br/>Main site - status: compromised, relocate remaining equipment within the next few days, leave suprise
<br/>Do not return here after Friday
";

[
    intel_documents,                // Object
    "Bomb Makers Journal",        // Intel Title
    _structuredString1,          // Intel Content (Structured Text as STRING)
    "First Site",               // Intel Group, nil for Default Group (Optional, nil for Default Group: "General")
    true                        // Remove Object once Picked up - (Optional - Default: true)
] call MUM_intel_fnc_createIntel;

[
    intel_phone,        // Object
    "Bomb Makers Phone",        // Intel Title
    _structuredString2,          // Intel Content (Structured Text as STRING)
    "First Site",               // Intel Group, nil for Default Group (Optional, nil for Default Group: "General")
    true                        // Remove Object once Picked up - (Optional - Default: true)
] call MUM_intel_fnc_createIntel;
[
    intel_notes,         // Object
    "Bomb Makers Notes",        // Intel Title
    _structuredString3,          // Intel Content (Structured Text as STRING)
    "First Site",               // Intel Group, nil for Default Group (Optional, nil for Default Group: "General")
    true                        // Remove Object once Picked up - (Optional - Default: true)
] call MUM_intel_fnc_createIntel;

private _deaddrop = "
<font size='11' face='EtelkaMonospacePro'>
<br/>Torn scrap of paper - found at the dead drop
<br/>It's a child's drawing - not what you expected.
<br/>You nearly ignored it, but something felt off, so you turned it over.
<br/>A small note is written on the back:
<br/></font>
<br/><font size='12' face='EraserRegular'>
<br/>141-161
<br/>
<br/>They are watching.
<br/>
";
[
    deaddrop_note,         // Object
    "Note from the Dead drop",        // Intel Title
    _deaddrop,          // Intel Content (Structured Text as STRING)
    "Deaddrop",               // Intel Group, nil for Default Group (Optional, nil for Default Group: "General")
    true                        // Remove Object once Picked up - (Optional - Default: true)
] call MUM_intel_fnc_createIntel;


if (isServer) then { setTimeMultiplier 0.01; };
