// copyright (c) 2007 magnus auvinen, see licence.txt for more info
#ifndef GAME_VARIABLES_H
#define GAME_VARIABLES_H
#undef GAME_VARIABLES_H // this file will be included several times


// client
MACRO_CONFIG_INT(ClPredict, cl_predict, 1, 0, 1, CFGFLAG_CLIENT|CFGFLAG_SAVE, "Predict client movements")
MACRO_CONFIG_INT(ClNameplates, cl_nameplates, 0, 0, 1, CFGFLAG_CLIENT|CFGFLAG_SAVE, "Show nameplates")
MACRO_CONFIG_INT(ClNameplatesAlways, cl_nameplates_always, 0, 0, 1, CFGFLAG_CLIENT|CFGFLAG_SAVE, "Always show nameplats disregarding of distance")
MACRO_CONFIG_INT(ClAutoswitchWeapons, cl_autoswitch_weapons, 1, 0, 1, CFGFLAG_CLIENT|CFGFLAG_SAVE, "Auto switch weapon on pickup")

MACRO_CONFIG_INT(ClShowfps, cl_showfps, 0, 0, 1, CFGFLAG_CLIENT|CFGFLAG_SAVE, "Show ingame FPS counter")

MACRO_CONFIG_INT(ClAirjumpindicator, cl_airjumpindicator, 1, 0, 1, CFGFLAG_CLIENT|CFGFLAG_SAVE, "")
MACRO_CONFIG_INT(ClThreadsoundloading, cl_threadsoundloading, 0, 0, 1, CFGFLAG_CLIENT|CFGFLAG_SAVE, "")

MACRO_CONFIG_INT(ClWarningTeambalance, cl_warning_teambalance, 1, 0, 1, CFGFLAG_CLIENT|CFGFLAG_SAVE, "Warn about team balance")

MACRO_CONFIG_INT(ClMouseDeadzone, cl_mouse_deadzone, 300, 0, 0, CFGFLAG_CLIENT|CFGFLAG_SAVE, "")
MACRO_CONFIG_INT(ClMouseFollowfactor, cl_mouse_followfactor, 60, 0, 200, CFGFLAG_CLIENT|CFGFLAG_SAVE, "")
MACRO_CONFIG_INT(ClMouseMaxDistance, cl_mouse_max_distance, 800, 0, 0, CFGFLAG_CLIENT|CFGFLAG_SAVE, "")

MACRO_CONFIG_INT(EdShowkeys, ed_showkeys, 0, 0, 1, CFGFLAG_CLIENT|CFGFLAG_SAVE, "")

MACRO_CONFIG_INT(ClFlow, cl_flow, 0, 0, 1, CFGFLAG_CLIENT|CFGFLAG_SAVE, "")

MACRO_CONFIG_INT(ClShowWelcome, cl_show_welcome, 1, 0, 1, CFGFLAG_CLIENT|CFGFLAG_SAVE, "")
MACRO_CONFIG_INT(ClMotdTime, cl_motd_time, 10, 0, 100, CFGFLAG_CLIENT|CFGFLAG_SAVE, "How long to show the server message of the day")

MACRO_CONFIG_STR(ClVersionServer, cl_version_server, 100, "version.teeworlds.com", CFGFLAG_CLIENT|CFGFLAG_SAVE, "Server to use to check for new versions")

MACRO_CONFIG_STR(ClLanguagefile, cl_languagefile, 255, "", CFGFLAG_CLIENT|CFGFLAG_SAVE, "What language file to use")

MACRO_CONFIG_INT(PlayerUseCustomColor, player_use_custom_color, 0, 0, 1, CFGFLAG_CLIENT|CFGFLAG_SAVE, "Toggles usage of custom colors")
MACRO_CONFIG_INT(PlayerColorBody, player_color_body, 65408, 0, 0xFFFFFF, CFGFLAG_CLIENT|CFGFLAG_SAVE, "Player body color")
MACRO_CONFIG_INT(PlayerColorFeet, player_color_feet, 65408, 0, 0xFFFFFF, CFGFLAG_CLIENT|CFGFLAG_SAVE, "Player feet color")
MACRO_CONFIG_STR(PlayerSkin, player_skin, 64, "default", CFGFLAG_CLIENT|CFGFLAG_SAVE, "Player skin")

MACRO_CONFIG_INT(UiPage, ui_page, 5, 0, 9, CFGFLAG_CLIENT|CFGFLAG_SAVE, "Interface page")
MACRO_CONFIG_INT(UiToolboxPage, ui_toolbox_page, 0, 0, 1, CFGFLAG_CLIENT|CFGFLAG_SAVE, "Toolbox page")
MACRO_CONFIG_STR(UiServerAddress, ui_server_address, 25, "localhost:8303", CFGFLAG_CLIENT|CFGFLAG_SAVE, "Interface server address")
MACRO_CONFIG_INT(UiScale, ui_scale, 100, 1, 100000, CFGFLAG_CLIENT|CFGFLAG_SAVE, "Interface scale")

MACRO_CONFIG_INT(UiColorHue, ui_color_hue, 160, 0, 255, CFGFLAG_CLIENT|CFGFLAG_SAVE, "Interface color hue")
MACRO_CONFIG_INT(UiColorSat, ui_color_sat, 70, 0, 255, CFGFLAG_CLIENT|CFGFLAG_SAVE, "Interface color saturation")
MACRO_CONFIG_INT(UiColorLht, ui_color_lht, 175, 0, 255, CFGFLAG_CLIENT|CFGFLAG_SAVE, "Interface color lightness")
MACRO_CONFIG_INT(UiColorAlpha, ui_color_alpha, 228, 0, 255, CFGFLAG_CLIENT|CFGFLAG_SAVE, "Interface alpha")

MACRO_CONFIG_INT(GfxNoclip, gfx_noclip, 0, 0, 1, CFGFLAG_CLIENT|CFGFLAG_SAVE, "Disable clipping")
// Added in ColTW //
// Antiping
MACRO_CONFIG_INT(AntiPing, cl_antiping, 0, 0, 2, CFGFLAG_CLIENT|CFGFLAG_SAVE, "Antiping")
MACRO_CONFIG_INT(AntiPingGrenade, cl_antiping_grenade, 0, 0, 1, CFGFLAG_CLIENT|CFGFLAG_SAVE, "Antiping")
// Hud
MACRO_CONFIG_INT(ClStandartHud, cl_standart_hud, 0, 0, 1, CFGFLAG_CLIENT|CFGFLAG_SAVE, "standart hud")
MACRO_CONFIG_INT(ClHudShowAmmo, cl_hud_show_ammo, 0, 0, 1, CFGFLAG_CLIENT|CFGFLAG_SAVE, "Show ammo")
MACRO_CONFIG_INT(ClHudShowWeapon, cl_hud_show_weapon, 1, 0, 1, CFGFLAG_CLIENT|CFGFLAG_SAVE, "Show weapon")
// Notificaions
MACRO_CONFIG_INT(ClNotificationWeapon, cl_notification_weapon, 0, 0, 1, CFGFLAG_CLIENT|CFGFLAG_SAVE, "Notify when weapon picked up")
// Chat
MACRO_CONFIG_INT(ClChatShowtime, cl_chat_showtime, 15, 5, 60, CFGFLAG_CLIENT|CFGFLAG_SAVE, "Time to show message")
MACRO_CONFIG_INT(ClChatHeightlimit, cl_chat_heightlimit, 80, 50, 300, CFGFLAG_CLIENT|CFGFLAG_SAVE, "Chat height limit")
// Effects
MACRO_CONFIG_INT(ClEffectsFlagtrail, cl_effects_flagtrail, 1, 0, 1, CFGFLAG_CLIENT|CFGFLAG_SAVE, "FlagTrail")
MACRO_CONFIG_INT(ClEffectsWeapontrail, cl_effects_weapontrail, 1, 0, 1, CFGFLAG_CLIENT|CFGFLAG_SAVE, "WeaponTrail")
// Map viewer
MACRO_CONFIG_INT(GfxFullClear, gfx_full_clear, 0, 0, 1, CFGFLAG_SAVE|CFGFLAG_CLIENT, "Only show game tile")
// Highlights
MACRO_CONFIG_INT(ClHighlightPlayer, cl_highlight_player, 1, 0, 1, CFGFLAG_SAVE|CFGFLAG_CLIENT, "Highlight for number of players")
MACRO_CONFIG_INT(ClHighlightPing, cl_highlight_ping, 1, 0, 1, CFGFLAG_SAVE|CFGFLAG_CLIENT, "Highlight for ping")
MACRO_CONFIG_INT(ClHighlightGametypes, cl_highlight_gametypes, 1, 0, 1, CFGFLAG_SAVE|CFGFLAG_CLIENT, "Highlight for gametypes")
MACRO_CONFIG_INT(ClHighlightWeaponBar, cl_highlight_weaponbar, 1, 0, 1, CFGFLAG_SAVE|CFGFLAG_CLIENT, "Highlight for weapons bar")
// Players
MACRO_CONFIG_INT(ClShowGhost, cl_ghost, 0, 0, 1, CFGFLAG_CLIENT|CFGFLAG_SAVE, "Show debug latency ghost")

// server
MACRO_CONFIG_INT(SvWarmup, sv_warmup, 0, 0, 0, CFGFLAG_SERVER, "Number of seconds to do warpup before round starts")
MACRO_CONFIG_STR(SvMotd, sv_motd, 900, "", CFGFLAG_SERVER, "Message of the day to display for the clients")
MACRO_CONFIG_INT(SvTeamdamage, sv_teamdamage, 0, 0, 1, CFGFLAG_SERVER, "Team damage")
MACRO_CONFIG_STR(SvMaprotation, sv_maprotation, 768, "", CFGFLAG_SERVER, "Maps to rotate between")
MACRO_CONFIG_INT(SvRoundsPerMap, sv_rounds_per_map, 1, 1, 100, CFGFLAG_SERVER, "Number of rounds on each map before rotating")
MACRO_CONFIG_INT(SvPowerups, sv_powerups, 1, 0, 1, CFGFLAG_SERVER, "Allow powerups like ninja")
MACRO_CONFIG_INT(SvScorelimit, sv_scorelimit, 20, 0, 1000, CFGFLAG_SERVER, "Score limit (0 disables)")
MACRO_CONFIG_INT(SvTimelimit, sv_timelimit, 0, 0, 1000, CFGFLAG_SERVER, "Time limit in minutes (0 disables)")
MACRO_CONFIG_STR(SvGametype, sv_gametype, 32, "dm", CFGFLAG_SERVER, "Game type (dm, tdm, ctf)")
MACRO_CONFIG_INT(SvTournamentMode, sv_tournament_mode, 0, 0, 1, CFGFLAG_SERVER, "Tournament mode. When enabled, players joins the server as spectator")
MACRO_CONFIG_INT(SvSpamprotection, sv_spamprotection, 1, 0, 1, CFGFLAG_SERVER, "Spam protection")

MACRO_CONFIG_INT(SvSpectatorSlots, sv_spectator_slots, 0, 0, MAX_CLIENTS, CFGFLAG_SERVER, "Number of slots to reserve for spectators")
MACRO_CONFIG_INT(SvTeambalanceTime, sv_teambalance_time, 1, 0, 1000, CFGFLAG_SERVER, "How many minutes to wait before autobalancing teams")

MACRO_CONFIG_INT(SvVoteKick, sv_vote_kick, 1, 0, 1, CFGFLAG_SERVER, "Allow voting to kick players")
MACRO_CONFIG_INT(SvVoteKickBantime, sv_vote_kick_bantime, 5, 0, 1440, CFGFLAG_SERVER, "The time to ban a player if kicked by vote. 0 makes it just use kick")
MACRO_CONFIG_INT(SvVoteScorelimit, sv_vote_scorelimit, 0, 0, 1, CFGFLAG_SERVER, "Allow voting to change score limit")
MACRO_CONFIG_INT(SvVoteTimelimit, sv_vote_timelimit, 0, 0, 1, CFGFLAG_SERVER, "Allow voting to change time limit")

// debug
#ifdef CONF_DEBUG // this one can crash the server if not used correctly
	MACRO_CONFIG_INT(DbgDummies, dbg_dummies, 0, 0, 15, CFGFLAG_SERVER, "")
#endif

MACRO_CONFIG_INT(DbgFocus, dbg_focus, 0, 0, 1, CFGFLAG_CLIENT, "")
MACRO_CONFIG_INT(DbgTuning, dbg_tuning, 0, 0, 1, CFGFLAG_CLIENT, "")
#endif
