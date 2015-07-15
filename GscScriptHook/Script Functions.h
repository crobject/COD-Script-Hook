#include "script.h"
#if defined(GHOST)
static void AI_GetEnemyInfo(scr_entref_t entref, entity p0){PushValue(p0);callScriptFunction<void>(0x8234, entref);}
static void AgentCmd_AgentCanSeeSentient(scr_entref_t entref, entity p0){PushValue(p0);callScriptFunction<void>(0x8380, entref);}
static entity AgentCmd_CloneAgent(scr_entref_t entref, int p0){PushValue(p0);return callScriptFunction<entity>(0x837f, entref);}
static int AgentCmd_FinishAgentDamage(scr_entref_t entref, entity p0, entity p1, int p2, int p3, script_string_s p5, float* p6, float* p7, script_string_s p8, int p9, float p10){PushValue(p10);PushValue(p9);PushValue(p8);PushValue(p7);PushValue(p6);PushValue(p5);PushValue(p3);PushValue(p2);PushValue(p1);PushValue(p0);return callScriptFunction<int>(0x837d, entref);}
static void AgentCmd_SetAgentAttacker(scr_entref_t entref, entity p0){PushValue(p0);callScriptFunction<void>(0x837e, entref);}
static void AgentCmd_SpawnAgent(scr_entref_t entref, float* p0, float* p1, script_string_s p2, float p3, float p4, entity p5){PushValue(p5);PushValue(p4);PushValue(p3);PushValue(p2);PushValue(p1);PushValue(p0);callScriptFunction<void>(0x837c, entref);}
static void AnimStateCmd_EnableAnimState(scr_entref_t entref, int p0){PushValue(p0);callScriptFunction<void>(0x839e, entref);}
static void AnimStateCmd_GetAnimEntry(scr_entref_t entref ){callScriptFunction<void>(0x83a0, entref);}
static conststring AnimStateCmd_GetAnimEntryAlias(scr_entref_t entref ){return callScriptFunction<conststring>(0x83a2, entref);}
static int AnimStateCmd_GetAnimEntryCount(scr_entref_t entref, script_string_s p0){PushValue(p0);return callScriptFunction<int>(0x83a3, entref);}
static conststring AnimStateCmd_GetAnimEntryName(scr_entref_t entref ){return callScriptFunction<conststring>(0x83a1, entref);}
static void AnimStateCmd_SetAnimClass(scr_entref_t entref, script_string_s p0){PushValue(p0);callScriptFunction<void>(0x839d, entref);}
static int AnimStateCmd_SetAnimState(scr_entref_t entref, script_string_s p0, float p2){PushValue(p2);PushValue(p0);return callScriptFunction<int>(0x839f, entref);}
static int AnimStateCmd_SetAnimState(scr_entref_t entref, script_string_s p0, int p1, float p2){PushValue(p2);PushValue(p1);PushValue(p0);return callScriptFunction<int>(0x839f, entref);}
static int AnimStateCmd_SetAnimState(scr_entref_t entref, script_string_s p0, script_string_s p1, float p2){PushValue(p2);PushValue(p1);PushValue(p0);return callScriptFunction<int>(0x839f, entref);}
static void CMD_Heli_SetDamageStage(scr_entref_t entref, int p0){PushValue(p0);callScriptFunction<void>(0x8325, entref);}
static conststring GScrCmd_GetWeaponHudIconOverride(scr_entref_t entref, script_string_s p0){PushValue(p0);return callScriptFunction<conststring>(0x80ab, entref);}
static void GScrCmd_SetWaterSheeting(scr_entref_t entref, int p0, float p1){PushValue(p1);PushValue(p0);callScriptFunction<void>(0x80a7, entref);}
static void GScrCmd_SetWeaponHudIconOverride(scr_entref_t entref, script_string_s p0, script_string_s p1){PushValue(p1);PushValue(p0);callScriptFunction<void>(0x80aa, entref);}
static void GScr_AddAgent(scr_entref_t entref ){callScriptFunction<void>(0x10a, entref);}
static void GScr_AddBot(scr_entref_t entref, script_string_s p0, int p1, int p2, int p3){PushValue(p3);PushValue(p2);PushValue(p1);PushValue(p0);callScriptFunction<void>(0x256, entref);}
static void GScr_AddTestClient(scr_entref_t entref, int p0, int p1, int p2){PushValue(p2);PushValue(p1);PushValue(p0);callScriptFunction<void>(0x109, entref);}
static void GScr_AliensCheckIsItemPurchased(scr_entref_t entref, script_string_s p0){PushValue(p0);callScriptFunction<void>(0x842a, entref);}
static void GScr_AliensCheckIsRelicEnabled(scr_entref_t entref, script_string_s p0){PushValue(p0);callScriptFunction<void>(0x842d, entref);}
static void GScr_AliensCheckIsUpgradeEnabled(scr_entref_t entref, script_string_s p0){PushValue(p0);callScriptFunction<void>(0x842c, entref);}
static void GScr_AliensSetHasCraftedItem(scr_entref_t entref, script_string_s p0){PushValue(p0);callScriptFunction<void>(0x842b, entref);}
static void GScr_AllClientsPrint(scr_entref_t entref, script_string_s p0){PushValue(p0);callScriptFunction<void>(0x10c, entref);}
static float GScr_AngleClamp180(scr_entref_t entref, float p0){PushValue(p0);return callScriptFunction<float>(0x52, entref);}
static float GScr_AngleClamp360(scr_entref_t entref, float p0){PushValue(p0);return callScriptFunction<float>(0x51, entref);}
static void GScr_AnimHasNotetrack(scr_entref_t entref, script_string_s p1){PushValue(p1);callScriptFunction<void>(0x2b, entref);}
static void GScr_Announcement(scr_entref_t entref, script_string_s p0){PushValue(p0);callScriptFunction<void>(0xf5, entref);}
static float* GScr_AverageNormal(scr_entref_t entref ){return callScriptFunction<float*>(0xc4, entref);}
static float* GScr_AveragePoint(scr_entref_t entref ){return callScriptFunction<float*>(0xc3, entref);}
static void GScr_BlockTeamRadar(scr_entref_t entref, script_string_s p0){PushValue(p0);callScriptFunction<void>(0x118, entref);}
static float* GScr_CalcCSplineCorridor(scr_entref_t entref ){return callScriptFunction<float*>(0x239, entref);}
static float* GScr_CalcCSplinePosition(scr_entref_t entref ){return callScriptFunction<float*>(0x237, entref);}
static float* GScr_CalcCSplineTangent(scr_entref_t entref ){return callScriptFunction<float*>(0x238, entref);}
static void GScr_CameraLinkTo(scr_entref_t entref, entity p0, script_string_s p1){PushValue(p1);PushValue(p0);callScriptFunction<void>(0x808d, entref);}
static void GScr_CameraUnlink(scr_entref_t entref ){callScriptFunction<void>(0x808e, entref);}
static int GScr_CanSpawn(scr_entref_t entref, float* p0){PushValue(p0);return callScriptFunction<int>(0x101, entref);}
static void GScr_CanSpawnTestClient(scr_entref_t entref ){callScriptFunction<void>(0x83e7, entref);}
static void GScr_CanSpawnTurret(scr_entref_t entref ){callScriptFunction<void>(0xe, entref);}
static void GScr_CapsuleTracePassed(scr_entref_t entref, float* p0, float p1, float p2, entity p3, int p4, int p5){PushValue(p5);PushValue(p4);PushValue(p3);PushValue(p2);PushValue(p1);PushValue(p0);callScriptFunction<void>(0x25d, entref);}
static float GScr_CastFloat(scr_entref_t entref, script_string_s p0){PushValue(p0);return callScriptFunction<float>(0x46, entref);}
static float GScr_CastFloat(scr_entref_t entref ){return callScriptFunction<float>(0x46, entref);}
static float GScr_CastFloat(scr_entref_t entref, float p0){PushValue(p0);return callScriptFunction<float>(0x46, entref);}
static float GScr_CastFloat(scr_entref_t entref, int p0){PushValue(p0);return callScriptFunction<float>(0x46, entref);}
static int GScr_CastInt(scr_entref_t entref ){return callScriptFunction<int>(0x45, entref);}
static int GScr_CastInt(scr_entref_t entref, float p0){PushValue(p0);return callScriptFunction<int>(0x45, entref);}
static int GScr_CastInt(scr_entref_t entref, int p0){PushValue(p0);return callScriptFunction<int>(0x45, entref);}
static int GScr_CastInt(scr_entref_t entref, script_string_s p0){PushValue(p0);return callScriptFunction<int>(0x45, entref);}
static void GScr_ClearMatchData(scr_entref_t entref ){callScriptFunction<void>(0x123, entref);}
static void GScr_ClearTargetEntity(scr_entref_t entref ){callScriptFunction<void>(0x8052, entref);}
static void GScr_ClientAnnouncement(scr_entref_t entref, entity p0, script_string_s p1){PushValue(p1);PushValue(p0);callScriptFunction<void>(0xf6, entref);}
static void GScr_ClientClaimTrigger(scr_entref_t entref, entity p0){PushValue(p0);callScriptFunction<void>(0x8332, entref);}
static void GScr_ClientPrint(scr_entref_t entref, entity p0, script_string_s p1){PushValue(p1);PushValue(p0);callScriptFunction<void>(0x10d, entref);}
static void GScr_ClientReleaseTrigger(scr_entref_t entref, entity p0){PushValue(p0);callScriptFunction<void>(0x8333, entref);}
static void GScr_ConnectNode(scr_entref_t entref ){callScriptFunction<void>(0x82f1, entref);}
static void GScr_ConnectNodePair(scr_entref_t entref, int p2){PushValue(p2);callScriptFunction<void>(0x201, entref);}
static void GScr_ConnectPaths(scr_entref_t entref ){callScriptFunction<void>(0x82ef, entref);}
static void GScr_ControlsLinkTo(scr_entref_t entref, entity p0){PushValue(p0);callScriptFunction<void>(0x808f, entref);}
static void GScr_ControlsUnlink(scr_entref_t entref ){callScriptFunction<void>(0x8090, entref);}
static float GScr_DamageConeTrace(scr_entref_t entref, float* p0, entity p1){PushValue(p1);PushValue(p0);return callScriptFunction<float>(0x8082, entref);}
static void GScr_DeleteGlass(scr_entref_t entref, int p0){PushValue(p0);callScriptFunction<void>(0xca, entref);}
static void GScr_DestroyGlass(scr_entref_t entref, int p0, float* p1){PushValue(p1);PushValue(p0);callScriptFunction<void>(0xc9, entref);}
static void GScr_Detonate(scr_entref_t entref, entity p0){PushValue(p0);callScriptFunction<void>(0x8081, entref);}
static void GScr_DisableAimAssist(scr_entref_t entref ){callScriptFunction<void>(0x807f, entref);}
static void GScr_DisableForceThirdPersonWhenFollowing(scr_entref_t entref ){callScriptFunction<void>(0x8341, entref);}
static void GScr_DisableGrenadeTouchDamage(scr_entref_t entref ){callScriptFunction<void>(0x807d, entref);}
static void GScr_DisableMissileBoosting(scr_entref_t entref ){callScriptFunction<void>(0x83e5, entref);}
static void GScr_DisableMissileStick(scr_entref_t entref ){callScriptFunction<void>(0x8415, entref);}
static void GScr_DisconnectNode(scr_entref_t entref ){callScriptFunction<void>(0x82f0, entref);}
static void GScr_DisconnectNodePair(scr_entref_t entref, int p2){PushValue(p2);callScriptFunction<void>(0x200, entref);}
static void GScr_DisconnectPaths(scr_entref_t entref ){callScriptFunction<void>(0x82ee, entref);}
static void GScr_DriveVehicleAndControlTurret(scr_entref_t entref, entity p0){PushValue(p0);callScriptFunction<void>(0x809a, entref);}
static void GScr_DriveVehicleAndControlTurretOff(scr_entref_t entref, entity p0){PushValue(p0);callScriptFunction<void>(0x809b, entref);}
static void GScr_Earthquake(scr_entref_t entref, float p0, float p1, float* p2, float p3){PushValue(p3);PushValue(p2);PushValue(p1);PushValue(p0);callScriptFunction<void>(0x8f, entref);}
static void GScr_EmissiveBlend(scr_entref_t entref, float p0, float p1){PushValue(p1);PushValue(p0);callScriptFunction<void>(0x83d6, entref);}
static void GScr_EnableAimAssist(scr_entref_t entref ){callScriptFunction<void>(0x807e, entref);}
static void GScr_EnableGrenadeTouchDamage(scr_entref_t entref ){callScriptFunction<void>(0x807c, entref);}
static void GScr_EnableMissileBoosting(scr_entref_t entref ){callScriptFunction<void>(0x83e6, entref);}
static void GScr_EnableMissileStick(scr_entref_t entref ){callScriptFunction<void>(0x8416, entref);}
static void GScr_EntityRadiusDamage(scr_entref_t entref ){callScriptFunction<void>(0x8080, entref);}
static void GScr_ExitLevel(scr_entref_t entref, int p0){PushValue(p0);callScriptFunction<void>(0x108, entref);}
static void GScr_FadeOutShellShock(scr_entref_t entref ){callScriptFunction<void>(0x8072, entref);}
static void GScr_ForceThirdPersonWhenFollowing(scr_entref_t entref ){callScriptFunction<void>(0x8340, entref);}
static int GScr_GetAmmoCount(scr_entref_t entref, script_string_s p0){PushValue(p0);return callScriptFunction<int>(0x806c, entref);}
static float GScr_GetAngleDelta(scr_entref_t entref, float p1, float p2){PushValue(p2);PushValue(p1);return callScriptFunction<float>(0x37, entref);}
static float* GScr_GetAngleDelta3D(scr_entref_t entref, float p1, float p2){PushValue(p2);PushValue(p1);return callScriptFunction<float*>(0x211, entref);}
static float GScr_GetAnimLength(scr_entref_t entref ){return callScriptFunction<float>(0x2a, entref);}
static void GScr_GetintKeys(scr_entref_t entref, object p0){PushValue(p0);callScriptFunction<void>(0xb6, entref);}
static float GScr_GetBarrelSpinRate(scr_entref_t entref ){return callScriptFunction<float>(0x8048, entref);}
static int GScr_GetBuildNumber(scr_entref_t entref ){return callScriptFunction<int>(0x12c, entref);}
static void GScr_GetBuildVersion(scr_entref_t entref ){callScriptFunction<void>(0x12b, entref);}
static int GScr_GetCSplineCount(scr_entref_t entref ){return callScriptFunction<int>(0x22d, entref);}
static float GScr_GetCSplineLength(scr_entref_t entref ){return callScriptFunction<float>(0x22f, entref);}
static float* GScr_GetCSplinePointCorridorDims(scr_entref_t entref ){return callScriptFunction<float*>(0x2703, entref);}
static int GScr_GetCSplinePointCount(scr_entref_t entref ){return callScriptFunction<int>(0x22e, entref);}
static float GScr_GetCSplinePointDistToNextPoint(scr_entref_t entref ){return callScriptFunction<float>(0x236, entref);}
static int GScr_GetCSplinePointId(scr_entref_t entref ){return callScriptFunction<int>(0x230, entref);}
static script_string_s GScr_GetCSplinePointLabel(scr_entref_t entref ){return callScriptFunction<script_string_s>(0x231, entref);}
static float* GScr_GetCSplinePointPosition(scr_entref_t entref ){return callScriptFunction<float*>(0x233, entref);}
static float* GScr_GetCSplinePointTangent(scr_entref_t entref ){return callScriptFunction<float*>(0x235, entref);}
static float GScr_GetCSplinePointTension(scr_entref_t entref ){return callScriptFunction<float>(0x232, entref);}
static int GScr_GetCaCPlayerData(scr_entref_t entref, script_string_s p0, int p1){PushValue(p1);PushValue(p0);return callScriptFunction<int>(0x80b9, entref);}
static float GScr_GetClanWarsBonusForCurrentPlaylist(scr_entref_t entref ){return callScriptFunction<float>(0x841e, entref);}
static void GScr_GetClientMatchData(scr_entref_t entref ){callScriptFunction<void>(0x128, entref);}
static void GScr_GetCommonPlayerData(scr_entref_t entref ){callScriptFunction<void>(0x80b3, entref);}
static void GScr_GetCommonPlayerDataReservedInt(scr_entref_t entref, script_string_s p0){PushValue(p0);callScriptFunction<void>(0x8425, entref);}
static void GScr_GetCoopPlayerData(scr_entref_t entref ){callScriptFunction<void>(0x80b2, entref);}
static void GScr_GetCoopPlayerDataReservedInt(scr_entref_t entref, script_string_s p0){PushValue(p0);callScriptFunction<void>(0x8426, entref);}
static anim GScr_GetCorpseAnim(scr_entref_t entref ){return callScriptFunction<anim>(0x8339, entref);}
static void GScr_GetCorpseEntity(scr_entref_t entref ){callScriptFunction<void>(0x83f9, entref);}
static script_string_s GScr_GetCounterTotal(scr_entref_t entref, script_string_s p0){PushValue(p0);return callScriptFunction<script_string_s>(0x13e, entref);}
static script_string_s GScr_GetDvar(scr_entref_t entref, script_string_s p0, script_string_s p1){PushValue(p1);PushValue(p0);return callScriptFunction<script_string_s>(0x1c, entref);}
static float GScr_GetDvarFloat(scr_entref_t entref, script_string_s p0, script_string_s p1){PushValue(p1);PushValue(p0);return callScriptFunction<float>(0x1e, entref);}
static int GScr_GetDvarInt(scr_entref_t entref, script_string_s p0, script_string_s p1){PushValue(p1);PushValue(p0);return callScriptFunction<int>(0x1d, entref);}
static float* GScr_GetDvarVector(scr_entref_t entref, script_string_s p0, script_string_s p1){PushValue(p1);PushValue(p0);return callScriptFunction<float*>(0x1f, entref);}
static void GScr_GetEnemySquadData(scr_entref_t entref ){callScriptFunction<void>(0x21f, entref);}
static int GScr_GetEnemySquadDogType(scr_entref_t entref ){return callScriptFunction<int>(0x25c, entref);}
static script_string_s GScr_GetEntChannelName(scr_entref_t entref, int p0){PushValue(p0);return callScriptFunction<script_string_s>(0xcc, entref);}
static int GScr_GetEntityNumber(scr_entref_t entref ){return callScriptFunction<int>(0x807a, entref);}
static float* GScr_GetEntityVelocity(scr_entref_t entref ){return callScriptFunction<float*>(0x807b, entref);}
static void GScr_GetFirstintKey(scr_entref_t entref, object p0){PushValue(p0);callScriptFunction<void>(0xb7, entref);}
static int GScr_GetGlass(scr_entref_t entref, script_string_s p0){PushValue(p0);return callScriptFunction<int>(0xc5, entref);}
static int GScr_GetGlassint(scr_entref_t entref, script_string_s p0){PushValue(p0);return callScriptFunction<int>(0xc6, entref);}
static float* GScr_GetGlassOrigin(scr_entref_t entref, int p0){PushValue(p0);return callScriptFunction<float*>(0xc7, entref);}
static int GScr_GetIndexForLuiNCString(scr_entref_t entref, script_string_s p0){PushValue(p0);return callScriptFunction<int>(0x162, entref);}
static float GScr_GetLightIntensity(scr_entref_t entref ){return callScriptFunction<float>(0x8089, entref);}
static script_string_s GScr_GetMapCustomField(scr_entref_t entref, script_string_s p0){PushValue(p0);return callScriptFunction<script_string_s>(0x13b, entref);}
static void GScr_GetMatchData(scr_entref_t entref ){callScriptFunction<void>(0x121, entref);}
static void GScr_GetMatchRulesData(scr_entref_t entref ){callScriptFunction<void>(0x12e, entref);}
static void GScr_GetMissileOwner(scr_entref_t entref, entity p0){PushValue(p0);callScriptFunction<void>(0xc0, entref);}
static conststring GScr_GetMode(scr_entref_t entref ){return callScriptFunction<conststring>(0x82fd, entref);}
static float* GScr_GetMoveDelta(scr_entref_t entref, float p1, float p2){PushValue(p2);PushValue(p1);return callScriptFunction<float*>(0x36, entref);}
static void GScr_GetNextintKey(scr_entref_t entref, object p0){PushValue(p0);callScriptFunction<void>(0xb8, entref);}
static float GScr_GetNorthYaw(scr_entref_t entref ){return callScriptFunction<float>(0x38, entref);}
static void GScr_GetNotetrackTimes(scr_entref_t entref, script_string_s p1){PushValue(p1);callScriptFunction<void>(0x2c, entref);}
static int GScr_GetNumParts(scr_entref_t entref, script_string_s p0){PushValue(p0);return callScriptFunction<int>(0x90, entref);}
static int GScr_GetOmnvar(scr_entref_t entref, script_string_s p0){PushValue(p0);return callScriptFunction<int>(0x16, entref);}
static conststring GScr_GetPartName(scr_entref_t entref, script_string_s p0, int p1){PushValue(p1);PushValue(p0);return callScriptFunction<conststring>(0x91, entref);}
static void GScr_GetPlayerData(scr_entref_t entref ){callScriptFunction<void>(0x80af, entref);}
static script_string_s GScr_GetPlayerSetting(scr_entref_t entref, script_string_s p0){PushValue(p0);return callScriptFunction<script_string_s>(0x809c, entref);}
static void GScr_GetPrivatePlayerData(scr_entref_t entref ){callScriptFunction<void>(0x80b1, entref);}
static void GScr_GetRankedPlayerData(scr_entref_t entref ){callScriptFunction<void>(0x80b0, entref);}
static void GScr_GetRankedPlayerDataReservedInt(scr_entref_t entref, script_string_s p0){PushValue(p0);callScriptFunction<void>(0x841f, entref);}
static int GScr_GetRestedTime(scr_entref_t entref ){return callScriptFunction<int>(0x8336, entref);}
static int GScr_GetScriptableint(scr_entref_t entref, script_string_s p0, script_string_s p1){PushValue(p1);PushValue(p0);return callScriptFunction<int>(0x5d03, entref);}
static int GScr_GetSquadAssaultELO(scr_entref_t entref ){return callScriptFunction<int>(0x24d, entref);}
static int GScr_GetSquadAssaultSquadIndex(scr_entref_t entref, int p0){PushValue(p0);return callScriptFunction<int>(0x254, entref);}
static float* GScr_GetStartAngles(scr_entref_t entref, float* p0, float* p1){PushValue(p1);PushValue(p0);return callScriptFunction<float*>(0x191, entref);}
static float* GScr_GetStartOrigin(scr_entref_t entref, float* p0, float* p1){PushValue(p1);PushValue(p0);return callScriptFunction<float*>(0x190, entref);}
static int GScr_GetSystemTime(scr_entref_t entref ){return callScriptFunction<int>(0x12d, entref);}
static float* GScr_GetTagAngles(scr_entref_t entref, script_string_s p0){PushValue(p0);return callScriptFunction<float*>(0x806e, entref);}
static float* GScr_GetTagOrigin(scr_entref_t entref, script_string_s p0){PushValue(p0);return callScriptFunction<float*>(0x806d, entref);}
static int GScr_GetTeamPlayersAlive(scr_entref_t entref, script_string_s p0){PushValue(p0);return callScriptFunction<int>(0xfc, entref);}
static int GScr_GetTeamRadar(scr_entref_t entref, script_string_s p0){PushValue(p0);return callScriptFunction<int>(0x114, entref);}
static int GScr_GetTeamRadarStrength(scr_entref_t entref, script_string_s p0){PushValue(p0);return callScriptFunction<int>(0x116, entref);}
static int GScr_GetTeamScore(scr_entref_t entref, script_string_s p0){PushValue(p0);return callScriptFunction<int>(0xf8, entref);}
static void GScr_GetTime(scr_entref_t entref ){callScriptFunction<void>(0x20, entref);}
static void GScr_GetTurretOwner(scr_entref_t entref ){callScriptFunction<void>(0x804c, entref);}
static void GScr_GetTurretTarget(scr_entref_t entref, int p0){PushValue(p0);callScriptFunction<void>(0x8053, entref);}
static void GScr_GetUAVStrengthLevelShowEnemyFastSweep(scr_entref_t entref ){callScriptFunction<void>(0x11a, entref);}
static void GScr_GetUAVStrengthMax(scr_entref_t entref ){callScriptFunction<void>(0x118, entref);}
static void GScr_GetUAVStrengthMin(scr_entref_t entref ){callScriptFunction<void>(0x117, entref);}
static void GScr_GlassRadiusDamage(scr_entref_t entref, float* p0, float p1, float p2, float p3){PushValue(p3);PushValue(p2);PushValue(p1);PushValue(p0);callScriptFunction<void>(0x8e, entref);}
static void GScr_IncrementCounter(scr_entref_t entref, script_string_s p0, int p1){PushValue(p1);PushValue(p0);callScriptFunction<void>(0x13d, entref);}
static int GScr_IsAI(scr_entref_t entref, entity p0){PushValue(p0);return callScriptFunction<int>(0x161, entref);}
static int GScr_IsAlive(scr_entref_t entref, entity p0){PushValue(p0);return callScriptFunction<int>(0xe6, entref);}
static int GScr_Isint(scr_entref_t entref ){return callScriptFunction<int>(0x160, entref);}
static int GScr_IsDefined(scr_entref_t entref ){return callScriptFunction<int>(0x12, entref);}
static void GScr_IsExplosiveDamageMOD(scr_entref_t entref, script_string_s p0){PushValue(p0);callScriptFunction<void>(0x8b, entref);}
static void GScr_IsFiringTurret(scr_entref_t entref ){callScriptFunction<void>(0x8045, entref);}
static void GScr_IsFiringVehicleTurret(scr_entref_t entref ){callScriptFunction<void>(0x8097, entref);}
static void GScr_IsGlassDestroyed(scr_entref_t entref, int p0){PushValue(p0);callScriptFunction<void>(0xc8, entref);}
static int GScr_IsHairRunning(scr_entref_t entref ){return callScriptFunction<int>(0xcb, entref);}
static int GScr_IsItemUnlocked(scr_entref_t entref, script_string_s p0){PushValue(p0);return callScriptFunction<int>(0x80ae, entref);}
static void GScr_IsOnLadder(scr_entref_t entref ){callScriptFunction<void>(0x8338, entref);}
static int GScr_IsPlayer(scr_entref_t entref, entity p0){PushValue(p0);return callScriptFunction<int>(0xf2, entref);}
static int GScr_IsPlayerNumber(scr_entref_t entref, int p0){PushValue(p0);return callScriptFunction<int>(0xf3, entref);}
static int GScr_IsPointInVolume(scr_entref_t entref, float* p0, entity p1){PushValue(p1);PushValue(p0);return callScriptFunction<int>(0x21a, entref);}
static int GScr_IsRagdoll(scr_entref_t entref ){return callScriptFunction<int>(0x808b, entref);}
static int GScr_IsSentient(scr_entref_t entref, entity p0){PushValue(p0);return callScriptFunction<int>(0x163, entref);}
static int GScr_IsSpawner(scr_entref_t entref, entity p0){PushValue(p0);return callScriptFunction<int>(0xe7, entref);}
static int GScr_IsString(scr_entref_t entref ){return callScriptFunction<int>(0x14, entref);}
static int GScr_IsTeamRadarBlocked(scr_entref_t entref, script_string_s p0){PushValue(p0);return callScriptFunction<int>(0x11e, entref);}
static void GScr_IsUsingMatchRulesData(scr_entref_t entref ){callScriptFunction<void>(0x12f, entref);}
static void GScr_IsUsingOnlineDataOffline(scr_entref_t entref ){callScriptFunction<void>(0x8335, entref);}
static int GScr_IsValidGameType(scr_entref_t entref, script_string_s p0){PushValue(p0);return callScriptFunction<int>(0x10f, entref);}
static int GScr_IsValidMissile(scr_entref_t entref, entity p0){PushValue(p0);return callScriptFunction<int>(0x13, entref);}
static void GScr_IsWeaponClipOnly(scr_entref_t entref, script_string_s p0){PushValue(p0);callScriptFunction<void>(0x9f, entref);}
static void GScr_IsWeaponDetonationTimed(scr_entref_t entref, script_string_s p0){PushValue(p0);callScriptFunction<void>(0xa0, entref);}
static void GScr_KickPlayer(scr_entref_t entref, int p0, script_string_s p1){PushValue(p1);PushValue(p0);callScriptFunction<void>(0x130, entref);}
static void GScr_LoadLuiFile(scr_entref_t entref, script_string_s p0){PushValue(p0);callScriptFunction<void>(0x24e, entref);}
static float* GScr_LocalToWorldCoords(scr_entref_t entref, float* p0){PushValue(p0);return callScriptFunction<float*>(0x8079, entref);}
static void GScr_LogMatchDataDeath(scr_entref_t entref, int p0, int p1, entity p2, int p3, script_string_s p4, script_string_s p5, int p6, int p7){PushValue(p7);PushValue(p6);PushValue(p5);PushValue(p4);PushValue(p3);PushValue(p2);PushValue(p1);PushValue(p0);callScriptFunction<void>(0x83fc, entref);}
static int GScr_LogMatchDataLife(scr_entref_t entref, int p0, float* p1, int p2, int p3, script_string_s p4, script_string_s p5, script_string_s p6, script_string_s p7, script_string_s p8, script_string_s p9, script_string_s p10, script_string_s p11){PushValue(p11);PushValue(p10);PushValue(p9);PushValue(p8);PushValue(p7);PushValue(p6);PushValue(p5);PushValue(p4);PushValue(p3);PushValue(p2);PushValue(p1);PushValue(p0);return callScriptFunction<int>(0x83fb, entref);}
static void GScr_MakeTurretInoperable(scr_entref_t entref ){callScriptFunction<void>(0x805c, entref);}
static void GScr_MakeTurretOperable(scr_entref_t entref ){callScriptFunction<void>(0x805b, entref);}
static void GScr_MakeTurretSolid(scr_entref_t entref ){callScriptFunction<void>(0x805a, entref);}
static void GScr_MakeVehicleNotCollideWithPlayers(scr_entref_t entref, int p0){PushValue(p0);callScriptFunction<void>(0x83c0, entref);}
static void GScr_MakeVehicleSolidCapsule(scr_entref_t entref, float p0, float p1, float p2){PushValue(p2);PushValue(p1);PushValue(p0);callScriptFunction<void>(0x8091, entref);}
static void GScr_MakeVehicleSolidSphere(scr_entref_t entref, float p0, float p1){PushValue(p1);PushValue(p0);callScriptFunction<void>(0x8093, entref);}
static int GScr_MapExists(scr_entref_t entref ){return callScriptFunction<int>(0x10e, entref);}
static void GScr_MapRestart(scr_entref_t entref, int p0){PushValue(p0);callScriptFunction<void>(0x107, entref);}
static void GScr_MissileClearTarget(scr_entref_t entref ){callScriptFunction<void>(0x8086, entref);}
static void GScr_MissileSetFlightmodeDirect(scr_entref_t entref ){callScriptFunction<void>(0x8087, entref);}
static void GScr_MissileSetFlightmodeTop(scr_entref_t entref ){callScriptFunction<void>(0x8088, entref);}
static void GScr_MissileSetTargetEnt(scr_entref_t entref, entity p0, float* p1){PushValue(p1);PushValue(p0);callScriptFunction<void>(0x8084, entref);}
static void GScr_MissileSetTargetPos(scr_entref_t entref, float* p0){PushValue(p0);callScriptFunction<void>(0x8085, entref);}
static void GScr_NewClientHudElem(scr_entref_t entref, entity p0){PushValue(p0);callScriptFunction<void>(0xef, entref);}
static void GScr_NewHudElem(scr_entref_t entref ){callScriptFunction<void>(0xee, entref);}
static void GScr_NewTeamHudElem(scr_entref_t entref, script_string_s p0){PushValue(p0);callScriptFunction<void>(0xf0, entref);}
static void GScr_Obituary(scr_entref_t entref, entity p0, entity p1, script_string_s p2){PushValue(p2);PushValue(p1);PushValue(p0);callScriptFunction<void>(0xff, entref);}
static void GScr_Objective_Player(scr_entref_t entref, int p0, int p1){PushValue(p1);PushValue(p0);callScriptFunction<void>(0xd6, entref);}
static void GScr_Objective_PlayerEnemyTeam(scr_entref_t entref, int p0, int p1){PushValue(p1);PushValue(p0);callScriptFunction<void>(0xd8, entref);}
static void GScr_Objective_PlayerMask_HideFrom(scr_entref_t entref, int p0, int p1){PushValue(p1);PushValue(p0);callScriptFunction<void>(0xda, entref);}
static void GScr_Objective_PlayerMask_HideFromAll(scr_entref_t entref, int p0){PushValue(p0);callScriptFunction<void>(0xd9, entref);}
static void GScr_Objective_PlayerMask_ShowTo(scr_entref_t entref, int p0, int p1){PushValue(p1);PushValue(p0);callScriptFunction<void>(0xdc, entref);}
static void GScr_Objective_PlayerMask_ShowToAll(scr_entref_t entref, int p0){PushValue(p0);callScriptFunction<void>(0xdb, entref);}
static void GScr_Objective_PlayerTeam(scr_entref_t entref, int p0, int p1){PushValue(p1);PushValue(p0);callScriptFunction<void>(0xd7, entref);}
static void GScr_Objective_Team(scr_entref_t entref, int p0, script_string_s p1){PushValue(p1);PushValue(p0);callScriptFunction<void>(0xd5, entref);}
static void GScr_PlayCinematicForAll(scr_entref_t entref, script_string_s p0){PushValue(p0);callScriptFunction<void>(0x259, entref);}
static void GScr_PlayerChoke(scr_entref_t entref ){callScriptFunction<void>(0x842e, entref);}
static float* GScr_PointOnSegmentNearestToPoint(scr_entref_t entref, float* p0, float* p1, float* p2){PushValue(p2);PushValue(p1);PushValue(p0);return callScriptFunction<float*>(0x54, entref);}
static void GScr_PrecacheHeadIcon(scr_entref_t entref, script_string_s p0){PushValue(p0);callScriptFunction<void>(0x104, entref);}
static void GScr_PrecacheLocationSelector(scr_entref_t entref, script_string_s p0){PushValue(p0);callScriptFunction<void>(0x7b, entref);}
static void GScr_PrecacheMenu(scr_entref_t entref, script_string_s p0){PushValue(p0);callScriptFunction<void>(0x79, entref);}
static void GScr_PrecacheMiniMapIcon(scr_entref_t entref, script_string_s p0){PushValue(p0);callScriptFunction<void>(0x105, entref);}
static void GScr_PrecacheMpAnim(scr_entref_t entref, script_string_s p0){PushValue(p0);callScriptFunction<void>(0x106, entref);}
static void GScr_PrecacheStatusIcon(scr_entref_t entref, script_string_s p0){PushValue(p0);callScriptFunction<void>(0x103, entref);}
static void GScr_PrecacheTurret(scr_entref_t entref, script_string_s p0){PushValue(p0);callScriptFunction<void>(0xb, entref);}
static void GScr_PreloadCinematicForAll(scr_entref_t entref, script_string_s p0){PushValue(p0);callScriptFunction<void>(0x25a, entref);}
static void GScr_RadiusDamage(scr_entref_t entref ){callScriptFunction<void>(0x8c, entref);}
static void GScr_ReleaseClaimedTrigger(scr_entref_t entref ){callScriptFunction<void>(0x8334, entref);}
static void GScr_RemoteCameraSoundscapeOff(scr_entref_t entref ){callScriptFunction<void>(0x80a0, entref);}
static void GScr_RemoteCameraSoundscapeOn(scr_entref_t entref ){callScriptFunction<void>(0x809f, entref);}
static void GScr_RemoteControlTurret(scr_entref_t entref, entity p0){PushValue(p0);callScriptFunction<void>(0x8049, entref);}
static void GScr_RemoteControlTurretOff(scr_entref_t entref, entity p0){PushValue(p0);callScriptFunction<void>(0x804a, entref);}
static void GScr_RemoteControlVehicle(scr_entref_t entref, entity p0){PushValue(p0);callScriptFunction<void>(0x8095, entref);}
static void GScr_RemoteControlVehicleOff(scr_entref_t entref ){callScriptFunction<void>(0x8096, entref);}
static void GScr_RemoteControlVehicleTarget(scr_entref_t entref, entity p0){PushValue(p0);callScriptFunction<void>(0x8098, entref);}
static void GScr_RemoteControlVehicleTargetOff(scr_entref_t entref ){callScriptFunction<void>(0x8099, entref);}
static void GScr_RestoreDefaultDropPitch(scr_entref_t entref ){callScriptFunction<void>(0x8064, entref);}
static void GScr_RideVehicle(scr_entref_t entref, entity p0, float p1, float p2, float p3, float p4, int p5){PushValue(p5);PushValue(p4);PushValue(p3);PushValue(p2);PushValue(p1);PushValue(p0);callScriptFunction<void>(0x8411, entref);}
static void GScr_SendClientMatchData(scr_entref_t entref ){callScriptFunction<void>(0x12a, entref);}
static void GScr_SendMatchData(scr_entref_t entref ){callScriptFunction<void>(0x122, entref);}
static void GScr_SetAC130Ambience(scr_entref_t entref, script_string_s p0, float p1){PushValue(p1);PushValue(p0);callScriptFunction<void>(0x13a, entref);}
static void GScr_SetAISightLineVisible(scr_entref_t entref, int p0){PushValue(p0);callScriptFunction<void>(0x8376, entref);}
static void GScr_SetAutoRotationDelay(scr_entref_t entref, float p0){PushValue(p0);callScriptFunction<void>(0x8062, entref);}
static void GScr_SetBottomArc(scr_entref_t entref, float p0){PushValue(p0);callScriptFunction<void>(0x8061, entref);}
static void GScr_SetClientMatchData(scr_entref_t entref ){callScriptFunction<void>(0x127, entref);}
static void GScr_SetClientMatchDataDef(scr_entref_t entref, script_string_s p0){PushValue(p0);callScriptFunction<void>(0x129, entref);}
static void GScr_SetClientNameMode(scr_entref_t entref, script_string_s p0){PushValue(p0);callScriptFunction<void>(0xfa, entref);}
static void GScr_SetCommonPlayerData(scr_entref_t entref ){callScriptFunction<void>(0x80b8, entref);}
static void GScr_SetCommonPlayerDataReservedInt(scr_entref_t entref, script_string_s p0, int p1){PushValue(p1);PushValue(p0);callScriptFunction<void>(0x841d, entref);}
static void GScr_SetConvergenceHeightPercent(scr_entref_t entref, float p0){PushValue(p0);callScriptFunction<void>(0x8058, entref);}
static void GScr_SetConvergenceTime(scr_entref_t entref, float p0, script_string_s p1){PushValue(p1);PushValue(p0);callScriptFunction<void>(0x8057, entref);}
static void GScr_SetCoopPlayerData(scr_entref_t entref ){callScriptFunction<void>(0x80b7, entref);}
static void GScr_SetCoopPlayerDataReservedInt(scr_entref_t entref, script_string_s p0, int p1){PushValue(p1);PushValue(p0);callScriptFunction<void>(0x8427, entref);}
static void GScr_SetCorpseFalling(scr_entref_t entref, int p0){PushValue(p0);callScriptFunction<void>(0x83b0, entref);}
static void GScr_SetCursorHint(scr_entref_t entref, script_string_s p0){PushValue(p0);callScriptFunction<void>(0x803c, entref);}
static void GScr_SetDefaultDropPitch(scr_entref_t entref, float p0){PushValue(p0);callScriptFunction<void>(0x8063, entref);}
static void GScr_SetDepthOfField(scr_entref_t entref, float p0, float p1, float p2, float p3, float p4, float p5){PushValue(p5);PushValue(p4);PushValue(p3);PushValue(p2);PushValue(p1);PushValue(p0);callScriptFunction<void>(0x8073, entref);}
static void GScr_SetDvar(scr_entref_t entref, script_string_s p0, script_string_s p1){PushValue(p1);PushValue(p0);callScriptFunction<void>(0x17, entref);}
static void GScr_SetDvarIfUninitialized(scr_entref_t entref, script_string_s p0, script_string_s p1){PushValue(p1);PushValue(p0);callScriptFunction<void>(0x19, entref);}
static void GScr_SetDynamicDvar(scr_entref_t entref, script_string_s p0, script_string_s p1){PushValue(p1);PushValue(p0);callScriptFunction<void>(0x18, entref);}
static void GScr_SetEMPJammed(scr_entref_t entref, int p0){PushValue(p0);callScriptFunction<void>(0x80ac, entref);}
static void GScr_SetGameEndTime(scr_entref_t entref, int p0){PushValue(p0);callScriptFunction<void>(0x133, entref);}
static void GScr_SetHintString(scr_entref_t entref, script_string_s p0){PushValue(p0);callScriptFunction<void>(0x803d, entref);}
static void GScr_SetLeftArc(scr_entref_t entref, float p0){PushValue(p0);callScriptFunction<void>(0x805f, entref);}
static void GScr_SetLightIntensity(scr_entref_t entref, float p0){PushValue(p0);callScriptFunction<void>(0x808a, entref);}
static void GScr_SetMapCenter(scr_entref_t entref, float* p0){PushValue(p0);callScriptFunction<void>(0x132, entref);}
static void GScr_SetMatchClientIP(scr_entref_t entref, entity p0, int p1){PushValue(p1);PushValue(p0);callScriptFunction<void>(0x125, entref);}
static void GScr_SetMatchData(scr_entref_t entref ){callScriptFunction<void>(0x120, entref);}
static void GScr_SetMatchDataDef(scr_entref_t entref, script_string_s p0){PushValue(p0);callScriptFunction<void>(0x124, entref);}
static void GScr_SetMatchDataID(scr_entref_t entref ){callScriptFunction<void>(0x126, entref);}
static void GScr_SetMiniMap(scr_entref_t entref, script_string_s p0, float p1, float p2, float p3, float p4){PushValue(p4);PushValue(p3);PushValue(p2);PushValue(p1);PushValue(p0);callScriptFunction<void>(0xb4, entref);}
static void GScr_SetMissileMinimapVisible(scr_entref_t entref, int p0){PushValue(p0);callScriptFunction<void>(0x8417, entref);}
static void GScr_SetMode(scr_entref_t entref, script_string_s p0){PushValue(p0);callScriptFunction<void>(0x82fc, entref);}
static void GScr_SetNoJIPScore(scr_entref_t entref, int p0){PushValue(p0);callScriptFunction<void>(0x23a, entref);}
static void GScr_SetNoJIPTime(scr_entref_t entref, int p0){PushValue(p0);callScriptFunction<void>(0x23b, entref);}
static void GScr_SetNorthYaw(scr_entref_t entref, float p0){PushValue(p0);callScriptFunction<void>(0x39, entref);}
static void GScr_SetOmnvar(scr_entref_t entref, script_string_s p0){PushValue(p0);callScriptFunction<void>(0x15, entref);}
static void GScr_SetOmnvar(scr_entref_t entref, script_string_s p0, script_string_s p1){PushValue(p1);PushValue(p0);callScriptFunction<void>(0x15, entref);}
static void GScr_SetOmnvar(scr_entref_t entref, script_string_s p0, float p1){PushValue(p1);PushValue(p0);callScriptFunction<void>(0x15, entref);}
static void GScr_SetOmnvar(scr_entref_t entref, script_string_s p0, int p1){PushValue(p1);PushValue(p0);callScriptFunction<void>(0x15, entref);}
static void GScr_SetPlaneSplineId(scr_entref_t entref, entity p0, int p1){PushValue(p1);PushValue(p0);callScriptFunction<void>(0x83ec, entref);}
static void GScr_SetPlayerData(scr_entref_t entref ){callScriptFunction<void>(0x80b4, entref);}
static void GScr_SetPlayerIgnoreRadiusDamage(scr_entref_t entref, int p0){PushValue(p0);callScriptFunction<void>(0x8d, entref);}
static void GScr_SetPlayerSpread(scr_entref_t entref, float p0){PushValue(p0);callScriptFunction<void>(0x8054, entref);}
static void GScr_SetPlayerTeamRank(scr_entref_t entref, entity p0, int p1, int p2){PushValue(p2);PushValue(p1);PushValue(p0);callScriptFunction<void>(0x111, entref);}
static void GScr_SetPrivatePlayerData(scr_entref_t entref ){callScriptFunction<void>(0x80b6, entref);}
static void GScr_SetRankedPlayerData(scr_entref_t entref ){callScriptFunction<void>(0x80b5, entref);}
static void GScr_SetRankedPlayerDataReservedInt(scr_entref_t entref, script_string_s p0, int p1){PushValue(p1);PushValue(p0);callScriptFunction<void>(0x8420, entref);}
static void GScr_SetRightArc(scr_entref_t entref, float p0){PushValue(p0);callScriptFunction<void>(0x805e, entref);}
static void GScr_SetSentryCarrier(scr_entref_t entref, entity p0){PushValue(p0);callScriptFunction<void>(0x804e, entref);}
static void GScr_SetSentryOwner(scr_entref_t entref, entity p0){PushValue(p0);callScriptFunction<void>(0x804d, entref);}
static void GScr_SetTargetEntity(scr_entref_t entref, entity p0, float* p1){PushValue(p1);PushValue(p0);callScriptFunction<void>(0x8050, entref);}
static void GScr_SetTeamForTrigger(scr_entref_t entref, script_string_s p0){PushValue(p0);callScriptFunction<void>(0x8331, entref);}
static void GScr_SetTeamMode(scr_entref_t entref, script_string_s p0){PushValue(p0);callScriptFunction<void>(0xf7, entref);}
static void GScr_SetTeamRadar(scr_entref_t entref, script_string_s p0, int p1){PushValue(p1);PushValue(p0);callScriptFunction<void>(0x113, entref);}
static void GScr_SetTeamRadarStrength(scr_entref_t entref, script_string_s p0, int p1){PushValue(p1);PushValue(p0);callScriptFunction<void>(0x115, entref);}
static void GScr_SetTeamScore(scr_entref_t entref, script_string_s p0, int p1){PushValue(p1);PushValue(p0);callScriptFunction<void>(0xf9, entref);}
static void GScr_SetThermalBodyMaterial(scr_entref_t entref, script_string_s p0){PushValue(p0);callScriptFunction<void>(0xb5, entref);}
static void GScr_SetTopArc(scr_entref_t entref, float p0){PushValue(p0);callScriptFunction<void>(0x8060, entref);}
static void GScr_SetTurretMinimapVisible(scr_entref_t entref, int p0, script_string_s p1){PushValue(p1);PushValue(p0);callScriptFunction<void>(0x804f, entref);}
static void GScr_SetTurretModeChangeWait(scr_entref_t entref, int p0){PushValue(p0);callScriptFunction<void>(0x8067, entref);}
static void GScr_SetTurretTeam(scr_entref_t entref, script_string_s p0){PushValue(p0);callScriptFunction<void>(0x8059, entref);}
static void GScr_SetViewModelDepthOfField(scr_entref_t entref, float p0, float p1){PushValue(p1);PushValue(p0);callScriptFunction<void>(0x8074, entref);}
static void GScr_SetWinningTeam(scr_entref_t entref, script_string_s p0){PushValue(p0);callScriptFunction<void>(0xf4, entref);}
static void GScr_ShellShock(scr_entref_t entref, script_string_s p0, float p1, int p2){PushValue(p2);PushValue(p1);PushValue(p0);callScriptFunction<void>(0x806f, entref);}
static void GScr_ShootTurret(scr_entref_t entref ){callScriptFunction<void>(0x804b, entref);}
static void GScr_SightConeTrace(scr_entref_t entref ){callScriptFunction<void>(0x8083, entref);}
static void GScr_SnapToTargetEntity(scr_entref_t entref, entity p0, float* p1){PushValue(p1);PushValue(p0);callScriptFunction<void>(0x8051, entref);}
static object GScr_SortByDistance(scr_entref_t entref, object p0, float* p1){PushValue(p1);PushValue(p0);return callScriptFunction<object>(0xb9, entref);}
static void GScr_Spawn(scr_entref_t entref, script_string_s p0, float* p1, int p2, int p3){PushValue(p3);PushValue(p2);PushValue(p1);PushValue(p0);callScriptFunction<void>(0x2d, entref);}
static void GScr_SpawnHelicopter(scr_entref_t entref, entity p0, float* p1, float* p2, script_string_s p3, script_string_s p4){PushValue(p4);PushValue(p3);PushValue(p2);PushValue(p1);PushValue(p0);callScriptFunction<void>(0xe5, entref);}
static void GScr_SpawnPlane(scr_entref_t entref, entity p0, script_string_s p1, float* p2, script_string_s p3, script_string_s p4, int p5){PushValue(p5);PushValue(p4);PushValue(p3);PushValue(p2);PushValue(p1);PushValue(p0);callScriptFunction<void>(0xe3, entref);}
static float GScr_SpawnSightTrace(scr_entref_t entref, float* p1, float* p2){PushValue(p2);PushValue(p1);return callScriptFunction<float>(0x13c, entref);}
static void GScr_SpawnTestClient(scr_entref_t entref ){callScriptFunction<void>(0x83e8, entref);}
static void GScr_SpawnTurret(scr_entref_t entref, script_string_s p0, float* p1, script_string_s p2, int p3){PushValue(p3);PushValue(p2);PushValue(p1);PushValue(p0);callScriptFunction<void>(0xd, entref);}
static void GScr_StartAC130(scr_entref_t entref ){callScriptFunction<void>(0x833b, entref);}
//static void GScr_StartAC130(scr_entref_t entref ){callScriptFunction<void>(0x833c, entref);}
static void GScr_StartBarrelSpin(scr_entref_t entref ){callScriptFunction<void>(0x8046, entref);}
static void GScr_StartFiring(scr_entref_t entref ){callScriptFunction<void>(0x8043, entref);}
static void GScr_StartRagdoll(scr_entref_t entref ){callScriptFunction<void>(0x831b, entref);}
static void GScr_StopBarrelSpin(scr_entref_t entref ){callScriptFunction<void>(0x8047, entref);}
static void GScr_StopCinematicForAll(scr_entref_t entref ){callScriptFunction<void>(0x25b, entref);}
static void GScr_StopFiring(scr_entref_t entref ){callScriptFunction<void>(0x8044, entref);}
static void GScr_StopRidingVehicle(scr_entref_t entref ){callScriptFunction<void>(0x8412, entref);}
static void GScr_StopShellShock(scr_entref_t entref ){callScriptFunction<void>(0x8071, entref);}
static void GScr_StopSliding(scr_entref_t entref ){callScriptFunction<void>(0x83c4, entref);}
static void GScr_StunPlayer(scr_entref_t entref, float p0){PushValue(p0);callScriptFunction<void>(0x8070, entref);}
static void GScr_TurretFireDisable(scr_entref_t entref ){callScriptFunction<void>(0x8065, entref);}
static void GScr_TurretFireEnable(scr_entref_t entref ){callScriptFunction<void>(0x8066, entref);}
static void GScr_TurretSetBarrelSpinEnabled(scr_entref_t entref, int p0){PushValue(p0);callScriptFunction<void>(0x83f1, entref);}
static void GScr_UnblockTeamRadar(scr_entref_t entref, script_string_s p0){PushValue(p0);callScriptFunction<void>(0x11d, entref);}
static void GScr_UpdateClientNames(scr_entref_t entref ){callScriptFunction<void>(0xfb, entref);}
static void GScr_UseTriggerRequireLookAt(scr_entref_t entref ){callScriptFunction<void>(0x8068, entref);}
static float* GScr_VectorFromLineToPoint(scr_entref_t entref, float* p0, float* p1, float* p2){PushValue(p2);PushValue(p1);PushValue(p0);return callScriptFunction<float*>(0x53, entref);}
static void GScr_ViewKick(scr_entref_t entref, int p0, float* p1){PushValue(p1);PushValue(p0);callScriptFunction<void>(0x8078, entref);}
static conststring GScr_WeaponAltWeaponName(scr_entref_t entref, script_string_s p0){PushValue(p0);return callScriptFunction<conststring>(0x9e, entref);}
static int GScr_WeaponBurstCount(scr_entref_t entref, script_string_s p0){PushValue(p0);return callScriptFunction<int>(0x98, entref);}
static script_string_s GScr_WeaponClass(scr_entref_t entref, script_string_s p0){PushValue(p0);return callScriptFunction<script_string_s>(0x9a, entref);}
static int GScr_WeaponClipSize(scr_entref_t entref, script_string_s p0){PushValue(p0);return callScriptFunction<int>(0x93, entref);}
static float GScr_WeaponFireTime(scr_entref_t entref, script_string_s p0){PushValue(p0);return callScriptFunction<float>(0x92, entref);}
static int GScr_WeaponHasThermalScope(scr_entref_t entref, script_string_s p0){PushValue(p0);return callScriptFunction<int>(0xa1, entref);}
static int GScr_WeaponInheritsPerks(scr_entref_t entref, script_string_s p0){PushValue(p0);return callScriptFunction<int>(0x97, entref);}
static script_string_s GScr_WeaponInventoryType(scr_entref_t entref, script_string_s p0){PushValue(p0);return callScriptFunction<script_string_s>(0x9b, entref);}
static int GScr_WeaponIsAuto(scr_entref_t entref, script_string_s p0){PushValue(p0);return callScriptFunction<int>(0x94, entref);}
static int GScr_WeaponIsBoltAction(scr_entref_t entref, script_string_s p0){PushValue(p0);return callScriptFunction<int>(0x96, entref);}
static int GScr_WeaponIsSemiAuto(scr_entref_t entref, script_string_s p0){PushValue(p0);return callScriptFunction<int>(0x95, entref);}
static int GScr_WeaponMaxAmmo(scr_entref_t entref, script_string_s p0){PushValue(p0);return callScriptFunction<int>(0x9d, entref);}
static int GScr_WeaponStartAmmo(scr_entref_t entref, script_string_s p0){PushValue(p0);return callScriptFunction<int>(0x9c, entref);}
static script_string_s GScr_WeaponType(scr_entref_t entref, script_string_s p0){PushValue(p0);return callScriptFunction<script_string_s>(0x99, entref);}
static void GScr_WorldEntNumber(scr_entref_t entref ){callScriptFunction<void>(0xfe, entref);}
static float GScr_abs(scr_entref_t entref, float p0){PushValue(p0);return callScriptFunction<float>(0x47, entref);}
static float GScr_acos(scr_entref_t entref, float p0){PushValue(p0);return callScriptFunction<float>(0x43, entref);}
static float GScr_asin(scr_entref_t entref, float p0){PushValue(p0);return callScriptFunction<float>(0x42, entref);}
static float GScr_atan(scr_entref_t entref, float p0){PushValue(p0);return callScriptFunction<float>(0x44, entref);}
static float GScr_ceil(scr_entref_t entref, float p0){PushValue(p0);return callScriptFunction<float>(0x4b, entref);}
static float GScr_clamp(scr_entref_t entref, float p0, float p1, float p2){PushValue(p2);PushValue(p1);PushValue(p0);return callScriptFunction<float>(0x50, entref);}
static float GScr_cos(scr_entref_t entref, float p0){PushValue(p0);return callScriptFunction<float>(0x40, entref);}
static float GScr_exp(scr_entref_t entref, float p0){PushValue(p0);return callScriptFunction<float>(0x4c, entref);}
static float GScr_floor(scr_entref_t entref, float p0){PushValue(p0);return callScriptFunction<float>(0x4a, entref);}
static void GScr_getStartTime(scr_entref_t entref ){callScriptFunction<void>(0x102, entref);}
static float GScr_log(scr_entref_t entref, float p0){PushValue(p0);return callScriptFunction<float>(0x4d, entref);}
static float GScr_max(scr_entref_t entref, float p0, float p1){PushValue(p1);PushValue(p0);return callScriptFunction<float>(0x49, entref);}
static float GScr_min(scr_entref_t entref, float p0, float p1){PushValue(p1);PushValue(p0);return callScriptFunction<float>(0x48, entref);}
static void GScr_notifyOnPlayerCommand(scr_entref_t entref, script_string_s p0, script_string_s p1){PushValue(p1);PushValue(p0);callScriptFunction<void>(0x8150, entref);}
static int GScr_positionWouldTelefrag(scr_entref_t entref, float* p0){PushValue(p0);return callScriptFunction<int>(0x100, entref);}
static float GScr_pow(scr_entref_t entref, float p0, float p1){PushValue(p1);PushValue(p0);return callScriptFunction<float>(0x1de, entref);}
static float GScr_sin(scr_entref_t entref, float p0){PushValue(p0);return callScriptFunction<float>(0x3f, entref);}
static float GScr_sqrt(scr_entref_t entref, float p0){PushValue(p0);return callScriptFunction<float>(0x4e, entref);}
static float GScr_squared(scr_entref_t entref, float p0){PushValue(p0);return callScriptFunction<float>(0x4f, entref);}
static float GScr_tan(scr_entref_t entref, float p0){PushValue(p0);return callScriptFunction<float>(0x41, entref);}
static void HECmd_ChangeFontScaleOverTime(scr_entref_t entref, float p0){PushValue(p0);callScriptFunction<void>(0x82c5, entref);}
static void HECmd_ClearTargetEnt(scr_entref_t entref ){callScriptFunction<void>(0x82b0, entref);}
static void HECmd_Destroy(scr_entref_t entref ){callScriptFunction<void>(0x82c2, entref);}
static void HECmd_FadeOverTime(scr_entref_t entref, float p0){PushValue(p0);callScriptFunction<void>(0x82be, entref);}
static void HECmd_LinkWaypointToTargetWithOffset(scr_entref_t entref, entity p0, float* p1){PushValue(p1);PushValue(p0);callScriptFunction<void>(0x83b8, entref);}
static void HECmd_MoveOverTime(scr_entref_t entref, float p0){PushValue(p0);callScriptFunction<void>(0x82c0, entref);}
static void HECmd_Reset(scr_entref_t entref ){callScriptFunction<void>(0x82c1, entref);}
static void HECmd_ScaleOverTime(scr_entref_t entref, float p0, int p1, int p2){PushValue(p2);PushValue(p1);PushValue(p0);callScriptFunction<void>(0x82bf, entref);}
static void HECmd_SetClock(scr_entref_t entref, float p0, float p1, script_string_s p2, int p3, int p4){PushValue(p4);PushValue(p3);PushValue(p2);PushValue(p1);PushValue(p0);callScriptFunction<void>(0x82b7, entref);}
static void HECmd_SetClockUp(scr_entref_t entref ){callScriptFunction<void>(0x82b8, entref);}
static void HECmd_SetMaterial(scr_entref_t entref, script_string_s p0, int p1, int p2){PushValue(p2);PushValue(p1);PushValue(p0);callScriptFunction<void>(0x82ae, entref);}
static void HECmd_SetPlayerNameString(scr_entref_t entref, entity p0){PushValue(p0);callScriptFunction<void>(0x82c4, entref);}
static void HECmd_SetPulseFX(scr_entref_t entref, int p0, int p1, int p2){PushValue(p2);PushValue(p1);PushValue(p0);callScriptFunction<void>(0x82c3, entref);}
static void HECmd_SetTargetEnt(scr_entref_t entref, entity p0){PushValue(p0);callScriptFunction<void>(0x82af, entref);}
static void HECmd_SetTenthsTimer(scr_entref_t entref ){callScriptFunction<void>(0x82b4, entref);}
static void HECmd_SetTenthsTimerStatic(scr_entref_t entref, float p0){PushValue(p0);callScriptFunction<void>(0x82b6, entref);}
static void HECmd_SetTenthsTimerUp(scr_entref_t entref, float p0){PushValue(p0);callScriptFunction<void>(0x82b5, entref);}
static void HECmd_SetText(scr_entref_t entref, script_string_s p0){PushValue(p0);callScriptFunction<void>(0x82ac, entref);}
static void HECmd_SetTimer(scr_entref_t entref, float p0){PushValue(p0);callScriptFunction<void>(0x82b1, entref);}
static void HECmd_SetTimerStatic(scr_entref_t entref ){callScriptFunction<void>(0x82b3, entref);}
static void HECmd_SetValue(scr_entref_t entref, float p0){PushValue(p0);callScriptFunction<void>(0x82b9, entref);}
static void HECmd_SetWaypoint(scr_entref_t entref, int p0, int p1, int p2, int p3){PushValue(p3);PushValue(p2);PushValue(p1);PushValue(p0);callScriptFunction<void>(0x82ba, entref);}
static void HECmd_SetWaypointEdgeStyle_RotatingIcon(scr_entref_t entref ){callScriptFunction<void>(0x82bb, entref);}
static void HECmd_SetWaypointEdgeStyle_SecondArrow(scr_entref_t entref ){callScriptFunction<void>(0x82bc, entref);}
static void HECmd_SetWaypointIconOffscreenOnly(scr_entref_t entref ){callScriptFunction<void>(0x82bd, entref);}
static void HECmd_TimerUp(scr_entref_t entref ){callScriptFunction<void>(0x82b2, entref);}
static void PlayerCmd_AllowADS(scr_entref_t entref, int p0){PushValue(p0);callScriptFunction<void>(0x8136, entref);}
static void PlayerCmd_AllowJump(scr_entref_t entref, int p0){PushValue(p0);callScriptFunction<void>(0x8137, entref);}
static void PlayerCmd_AllowSpectateTeam(scr_entref_t entref, script_string_s p0, int p1){PushValue(p1);PushValue(p0);callScriptFunction<void>(0x80cb, entref);}
static void PlayerCmd_AllowSprint(scr_entref_t entref, int p0){PushValue(p0);callScriptFunction<void>(0x8138, entref);}
static int PlayerCmd_AnyAmmoForWeaponModes(scr_entref_t entref, script_string_s p0){PushValue(p0);return callScriptFunction<int>(0x8130, entref);}
static void PlayerCmd_BeginLocationSelection(scr_entref_t entref, script_string_s p0, int p1, float p2){PushValue(p2);PushValue(p1);PushValue(p0);callScriptFunction<void>(0x8111, entref);}
static void PlayerCmd_BotCanSeeEntity(scr_entref_t entref, entity p0){PushValue(p0);callScriptFunction<void>(0x8360, entref);}
static void PlayerCmd_BotClearButton(scr_entref_t entref, script_string_s p0){PushValue(p0);callScriptFunction<void>(0x8370, entref);}
static void PlayerCmd_BotClearScriptEnemy(scr_entref_t entref ){callScriptFunction<void>(0x8349, entref);}
static void PlayerCmd_BotClearScriptGoal(scr_entref_t entref ){callScriptFunction<void>(0x8347, entref);}
static entitynum PlayerCmd_BotFindNodeRandom(scr_entref_t entref ){return callScriptFunction<entitynum>(0x8352, entref);}
static script_string_s PlayerCmd_BotFirstAvailableGrenade(scr_entref_t entref, script_string_s p0){PushValue(p0);return callScriptFunction<script_string_s>(0x83d0, entref);}
static script_string_s PlayerCmd_BotGetDifficulty(scr_entref_t entref ){return callScriptFunction<script_string_s>(0x835c, entref);}
static float PlayerCmd_BotGetDifficultySetting(scr_entref_t entref, script_string_s p0){PushValue(p0);return callScriptFunction<float>(0x836c, entref);}
static float PlayerCmd_BotGetFovDot(scr_entref_t entref ){return callScriptFunction<float>(0x8364, entref);}
static void PlayerCmd_BotGetImperfectEnemyInfo(scr_entref_t entref, entity p0, float* p1){PushValue(p1);PushValue(p0);callScriptFunction<void>(0x8368, entref);}
static int PlayerCmd_BotGetNodesOnPath(scr_entref_t entref ){return callScriptFunction<int>(0x8361, entref);}
static float PlayerCmd_BotGetPathDist(scr_entref_t entref ){return callScriptFunction<float>(0x836d, entref);}
static script_string_s PlayerCmd_BotGetPersonality(scr_entref_t entref ){return callScriptFunction<script_string_s>(0x8357, entref);}
static float* PlayerCmd_BotGetScriptGoal(scr_entref_t entref ){return callScriptFunction<float*>(0x834b, entref);}
static void PlayerCmd_BotGetScriptGoalNode(scr_entref_t entref ){callScriptFunction<void>(0x8367, entref);}
static float PlayerCmd_BotGetScriptGoalRadius(scr_entref_t entref ){return callScriptFunction<float>(0x834c, entref);}
static script_string_s PlayerCmd_BotGetScriptGoalType(scr_entref_t entref ){return callScriptFunction<script_string_s>(0x834e, entref);}
static float PlayerCmd_BotGetScriptGoalYaw(scr_entref_t entref ){return callScriptFunction<float>(0x834d, entref);}
static float* PlayerCmd_BotGetWorldClosestEdge(scr_entref_t entref, float* p0){PushValue(p0);return callScriptFunction<float*>(0x835d, entref);}
static float* PlayerCmd_BotGetWorldSize(scr_entref_t entref ){return callScriptFunction<float*>(0x8350, entref);}
static void PlayerCmd_BotHasScriptGoal(scr_entref_t entref ){callScriptFunction<void>(0x8356, entref);}
static void PlayerCmd_BotIsRandomized(scr_entref_t entref ){callScriptFunction<void>(0x836e, entref);}
static void PlayerCmd_BotLookAtPoint(scr_entref_t entref, float* p0, float p1, script_string_s p2){PushValue(p2);PushValue(p1);PushValue(p0);callScriptFunction<void>(0x835e, entref);}
static void PlayerCmd_BotMemoryEvent(scr_entref_t entref, script_string_s p0, script_string_s p1, float* p2, float* p3, entity p4){PushValue(p4);PushValue(p3);PushValue(p2);PushValue(p1);PushValue(p0);callScriptFunction<void>(0x8353, entref);}
static void PlayerCmd_BotNodeAvailable(scr_entref_t entref ){callScriptFunction<void>(0x8351, entref);}
static void PlayerCmd_BotNodePick(scr_entref_t entref ){callScriptFunction<void>(0x8355, entref);}
static int PlayerCmd_BotNodePickMultiple(scr_entref_t entref, int p2){PushValue(p2);return callScriptFunction<int>(0x8362, entref);}
static int PlayerCmd_BotNodeScoreMultiple(scr_entref_t entref ){return callScriptFunction<int>(0x8371, entref);}
static float* PlayerCmd_BotPredictEnemyCampSpots(scr_entref_t entref, int p0){PushValue(p0);return callScriptFunction<float*>(0x8404, entref);}
static float* PlayerCmd_BotPredictSeePoint(scr_entref_t entref, float* p0){PushValue(p0);return callScriptFunction<float*>(0x835f, entref);}
static void PlayerCmd_BotPressButton(scr_entref_t entref, script_string_s p0, float p1){PushValue(p1);PushValue(p0);callScriptFunction<void>(0x836f, entref);}
static void PlayerCmd_BotPursuingScriptGoal(scr_entref_t entref ){callScriptFunction<void>(0x8366, entref);}
static void PlayerCmd_BotSetAttacker(scr_entref_t entref, entity p0){PushValue(p0);callScriptFunction<void>(0x834a, entref);}
static void PlayerCmd_BotSetAwareness(scr_entref_t entref, float p0){PushValue(p0);callScriptFunction<void>(0x8365, entref);}
static void PlayerCmd_BotSetDifficulty(scr_entref_t entref, script_string_s p0){PushValue(p0);callScriptFunction<void>(0x835b, entref);}
static void PlayerCmd_BotSetDifficultySetting(scr_entref_t entref, script_string_s p0, float p1){PushValue(p1);PushValue(p0);callScriptFunction<void>(0x836b, entref);}
static void PlayerCmd_BotSetFlag(scr_entref_t entref, script_string_s p0, int p1){PushValue(p1);PushValue(p0);callScriptFunction<void>(0x8342, entref);}
static void PlayerCmd_BotSetPathingStyle(scr_entref_t entref, script_string_s p0){PushValue(p0);callScriptFunction<void>(0x836a, entref);}
static void PlayerCmd_BotSetPersonality(scr_entref_t entref, script_string_s p0){PushValue(p0);callScriptFunction<void>(0x835a, entref);}
static void PlayerCmd_BotSetScriptEnemy(scr_entref_t entref, entity p0){PushValue(p0);callScriptFunction<void>(0x8348, entref);}
static void PlayerCmd_BotSetScriptGoal(scr_entref_t entref, script_string_s p0, float p1, float p3, float p4){PushValue(p4);PushValue(p3);PushValue(p1);PushValue(p0);callScriptFunction<void>(0x8345, entref);}
static void PlayerCmd_BotSetScriptGoal(scr_entref_t entref, float p1, float p3, float p4){PushValue(p4);PushValue(p3);PushValue(p1);callScriptFunction<void>(0x8345, entref);}
static void PlayerCmd_BotSetScriptGoal(scr_entref_t entref, float* p0, float p1, float p3, float p4){PushValue(p4);PushValue(p3);PushValue(p1);PushValue(p0);callScriptFunction<void>(0x8345, entref);}
static void PlayerCmd_BotSetScriptGoalNode(scr_entref_t entref, script_string_s p1, float p2, float p3){PushValue(p3);PushValue(p2);PushValue(p1);callScriptFunction<void>(0x8346, entref);}
static void PlayerCmd_BotSetScriptMove(scr_entref_t entref, float p0, float p1, float p2, int p3, int p4){PushValue(p4);PushValue(p3);PushValue(p2);PushValue(p1);PushValue(p0);callScriptFunction<void>(0x8344, entref);}
static void PlayerCmd_BotSetStance(scr_entref_t entref, script_string_s p0){PushValue(p0);callScriptFunction<void>(0x8343, entref);}
static void PlayerCmd_BotThrowGrenade(scr_entref_t entref, float* p0, script_string_s p1){PushValue(p1);PushValue(p0);callScriptFunction<void>(0x8358, entref);}
static void PlayerCmd_CanMantle(scr_entref_t entref ){callScriptFunction<void>(0x8151, entref);}
static float* PlayerCmd_CanPlayerPlaceSentry(scr_entref_t entref, int p0, float p1){PushValue(p1);PushValue(p0);return callScriptFunction<float*>(0x8145, entref);}
static float* PlayerCmd_CanPlayerPlaceTank(scr_entref_t entref, float p0, float p1, float p2, float p3, float p4, float p5){PushValue(p5);PushValue(p4);PushValue(p3);PushValue(p2);PushValue(p1);PushValue(p0);return callScriptFunction<float*>(0x8146, entref);}
static void PlayerCmd_CancelMantle(scr_entref_t entref ){callScriptFunction<void>(0x8406, entref);}
static void PlayerCmd_ClearPerks(scr_entref_t entref ){callScriptFunction<void>(0x8160, entref);}
static float PlayerCmd_ClientSpawnSightTracePassed(scr_entref_t entref, int p0){PushValue(p0);return callScriptFunction<float>(0x8135, entref);}
static entity PlayerCmd_ClonePlayer(scr_entref_t entref, int p0){PushValue(p0);return callScriptFunction<entity>(0x80c9, entref);}
static void PlayerCmd_CloseInGameMenu(scr_entref_t entref ){callScriptFunction<void>(0x80c4, entref);}
static int PlayerCmd_CloseMenu(scr_entref_t entref, script_string_s p0){PushValue(p0);return callScriptFunction<int>(0x811d, entref);}
static void PlayerCmd_ClosePopupMenu(scr_entref_t entref ){callScriptFunction<void>(0x811b, entref);}
static void PlayerCmd_DeactivateChannelVolumes(scr_entref_t entref, script_string_s p0, float p1){PushValue(p1);PushValue(p0);callScriptFunction<void>(0x8129, entref);}
static void PlayerCmd_DisableAutoReload(scr_entref_t entref ){callScriptFunction<void>(0x8400, entref);}
static void PlayerCmd_DisableOffhandWeapons(scr_entref_t entref ){callScriptFunction<void>(0x8115, entref);}
static void PlayerCmd_DisableUsability(scr_entref_t entref ){callScriptFunction<void>(0x8120, entref);}
static void PlayerCmd_DisableWeaponPickup(scr_entref_t entref ){callScriptFunction<void>(0x80e0, entref);}
static void PlayerCmd_DisableWeaponSwitch(scr_entref_t entref ){callScriptFunction<void>(0x8117, entref);}
static void PlayerCmd_DisableWeapons(scr_entref_t entref ){callScriptFunction<void>(0x8113, entref);}
static entity PlayerCmd_DropScavengerBag(scr_entref_t entref, script_string_s p0){PushValue(p0);return callScriptFunction<entity>(0x80c1, entref);}
static void PlayerCmd_EnableAutoReload(scr_entref_t entref ){callScriptFunction<void>(0x8401, entref);}
static void PlayerCmd_EnableMouseSteer(scr_entref_t entref ){callScriptFunction<void>(0x8055, entref);}
static void PlayerCmd_EnableOffhandWeapons(scr_entref_t entref ){callScriptFunction<void>(0x8116, entref);}
static void PlayerCmd_EnableUsability(scr_entref_t entref ){callScriptFunction<void>(0x8121, entref);}
static void PlayerCmd_EnableWeaponPickup(scr_entref_t entref ){callScriptFunction<void>(0x80e1, entref);}
static void PlayerCmd_EnableWeaponSwitch(scr_entref_t entref ){callScriptFunction<void>(0x8118, entref);}
static void PlayerCmd_EnableWeapons(scr_entref_t entref ){callScriptFunction<void>(0x8114, entref);}
static void PlayerCmd_EndLocationSelection(scr_entref_t entref ){callScriptFunction<void>(0x8112, entref);}
static void PlayerCmd_ForceMantle(scr_entref_t entref ){callScriptFunction<void>(0x8152, entref);}
static void PlayerCmd_FreezeControls(scr_entref_t entref, int p0){PushValue(p0);callScriptFunction<void>(0x811f, entref);}
static int PlayerCmd_GetClanIdHigh(scr_entref_t entref ){return callScriptFunction<int>(0x80d0, entref);}
static int PlayerCmd_GetClanIdLow(scr_entref_t entref ){return callScriptFunction<int>(0x80d1, entref);}
static script_string_s PlayerCmd_GetCustomizationBody(scr_entref_t entref ){return callScriptFunction<script_string_s>(0x83d9, entref);}
static void PlayerCmd_GetCustomizationHead(scr_entref_t entref ){callScriptFunction<void>(0x83da, entref);}
static void PlayerCmd_GetCustomizationViewmodel(scr_entref_t entref ){callScriptFunction<void>(0x83db, entref);}
static entitynum PlayerCmd_GetFireteamMembers(scr_entref_t entref ){return callScriptFunction<entitynum>(0x8163, entref);}
static script_string_s PlayerCmd_GetGuid(scr_entref_t entref ){return callScriptFunction<script_string_s>(0x80cc, entref);}
static int PlayerCmd_GetHybridScopeState(scr_entref_t entref, script_string_s p0){PushValue(p0);return callScriptFunction<int>(0x840d, entref);}
static int PlayerCmd_GetJoinType(scr_entref_t entref ){return callScriptFunction<int>(0x8428, entref);}
static void PlayerCmd_GetMLGSpectatorTeam(scr_entref_t entref ){callScriptFunction<void>(0x8424, entref);}
static void PlayerCmd_GetNearestNode(scr_entref_t entref ){callScriptFunction<void>(0x8379, entref);}
static int PlayerCmd_GetPlayersSightingMe(scr_entref_t entref ){return callScriptFunction<int>(0x80e7, entref);}
static int PlayerCmd_GetSightedPlayers(scr_entref_t entref ){return callScriptFunction<int>(0x80e6, entref);}
static entitynum PlayerCmd_GetSpectatingPlayer(scr_entref_t entref ){return callScriptFunction<entitynum>(0x80d3, entref);}
static float PlayerCmd_GetThirdPersonCrosshairOffset(scr_entref_t entref ){return callScriptFunction<float>(0x80df, entref);}
static void PlayerCmd_GetUcdIdHigh(scr_entref_t entref ){callScriptFunction<void>(0x80cf, entref);}
static void PlayerCmd_GetUcdIdLow(scr_entref_t entref ){callScriptFunction<void>(0x80ce, entref);}
static float* PlayerCmd_GetVelocity(scr_entref_t entref ){return callScriptFunction<float*>(0x8102, entref);}
static float PlayerCmd_GetViewKickScale(scr_entref_t entref ){return callScriptFunction<float>(0x813e, entref);}
static conststring PlayerCmd_GetViewmodel(scr_entref_t entref ){return callScriptFunction<conststring>(0x80e8, entref);}
static int PlayerCmd_GetWeaponAmmoClip(scr_entref_t entref, script_string_s p0){PushValue(p0);return callScriptFunction<int>(0x812e, entref);}
static int PlayerCmd_GetWeaponAmmoStock(scr_entref_t entref, script_string_s p0){PushValue(p0);return callScriptFunction<int>(0x812f, entref);}
static script_string_s PlayerCmd_GetWeaponsList(scr_entref_t entref, script_string_s p0){PushValue(p0);return callScriptFunction<script_string_s>(0x8144, entref);}
static script_string_s PlayerCmd_GetWeaponsListAll(scr_entref_t entref ){return callScriptFunction<script_string_s>(0x813f, entref);}
static void PlayerCmd_GetWeaponsListExclusives(scr_entref_t entref ){callScriptFunction<void>(0x8143, entref);}
static void PlayerCmd_GetWeaponsListItems(scr_entref_t entref ){callScriptFunction<void>(0x8142, entref);}
static void PlayerCmd_GetWeaponsListOffhands(scr_entref_t entref ){callScriptFunction<void>(0x8141, entref);}
static void PlayerCmd_GetWeaponsListPrimaries(scr_entref_t entref ){callScriptFunction<void>(0x8140, entref);}
static script_string_s PlayerCmd_GetXuid(scr_entref_t entref ){return callScriptFunction<script_string_s>(0x80cd, entref);}
static void PlayerCmd_HasFemaleCustomizationModel(scr_entref_t entref ){callScriptFunction<void>(0x8407, entref);}
static void PlayerCmd_HasLoadedCustomizationPlayerView(scr_entref_t entref, entity p0){PushValue(p0);callScriptFunction<void>(0x83f2, entref);}
static void PlayerCmd_HasPerk(scr_entref_t entref, script_string_s p0, int p1){PushValue(p1);PushValue(p0);callScriptFunction<void>(0x815f, entref);}
static int PlayerCmd_IsHost(scr_entref_t entref ){return callScriptFunction<int>(0x80d2, entref);}
static int PlayerCmd_IsLeaning(scr_entref_t entref ){return callScriptFunction<int>(0x8419, entref);}
static void PlayerCmd_IsMLGSpectator(scr_entref_t entref ){callScriptFunction<void>(0x83ff, entref);}
static void PlayerCmd_IsMantling(scr_entref_t entref ){callScriptFunction<void>(0x8153, entref);}
static void PlayerCmd_IsMeleeing(scr_entref_t entref ){callScriptFunction<void>(0x8289, entref);}
static void PlayerCmd_IsSighted(scr_entref_t entref ){callScriptFunction<void>(0x80e5, entref);}
static int PlayerCmd_IsSplitscreenPlayer(scr_entref_t entref ){return callScriptFunction<int>(0x80e2, entref);}
static int PlayerCmd_IsSplitscreenPlayerPrimary(scr_entref_t entref ){return callScriptFunction<int>(0x80e3, entref);}
static int PlayerCmd_IsSprinting(scr_entref_t entref ){return callScriptFunction<int>(0x83a5, entref);}
static int PlayerCmd_IsTalking(scr_entref_t entref ){return callScriptFunction<int>(0x80ca, entref);}
static void PlayerCmd_IsThrowingGrenade(scr_entref_t entref ){callScriptFunction<void>(0x8287, entref);}
static void PlayerCmd_KC_RegWeaponForFXRemoval(scr_entref_t entref, script_string_s p0){PushValue(p0);callScriptFunction<void>(0x80dc, entref);}
static void PlayerCmd_LastStandRevive(scr_entref_t entref ){callScriptFunction<void>(0x80dd, entref);}
static void PlayerCmd_LoadCustomizationPlayerView(scr_entref_t entref, entity p0){PushValue(p0);callScriptFunction<void>(0x83e9, entref);}
static void PlayerCmd_MarkForEyesOn(scr_entref_t entref, int p0){PushValue(p0);callScriptFunction<void>(0x80e4, entref);}
static int PlayerCmd_OpenMenu(scr_entref_t entref, script_string_s p0){PushValue(p0);return callScriptFunction<int>(0x811c, entref);}
static int PlayerCmd_OpenPopupMenu(scr_entref_t entref, script_string_s p0){PushValue(p0);return callScriptFunction<int>(0x8119, entref);}
static int PlayerCmd_OpenPopupMenuNoMouse(scr_entref_t entref, script_string_s p0){PushValue(p0);return callScriptFunction<int>(0x811a, entref);}
static void PlayerCmd_PlayFX(scr_entref_t entref, int p0, float* p1, float* p2, float* p3){PushValue(p3);PushValue(p2);PushValue(p1);PushValue(p0);callScriptFunction<void>(0x8154, entref);}
static void PlayerCmd_PlayerRecoilScaleOff(scr_entref_t entref ){callScriptFunction<void>(0x8156, entref);}
static void PlayerCmd_PlayerRecoilScaleOn(scr_entref_t entref, int p0){PushValue(p0);callScriptFunction<void>(0x8155, entref);}
static void PlayerCmd_PredictStreamPos(scr_entref_t entref, float* p0){PushValue(p0);callScriptFunction<void>(0x80d4, entref);}
static void PlayerCmd_RegisterParty(scr_entref_t entref, int p0){PushValue(p0);callScriptFunction<void>(0x8162, entref);}
static void PlayerCmd_ResetSpreadOverride(scr_entref_t entref ){callScriptFunction<void>(0x813a, entref);}
static void PlayerCmd_SayAll(scr_entref_t entref ){callScriptFunction<void>(0x80bd, entref);}
static void PlayerCmd_SayTeam(scr_entref_t entref ){callScriptFunction<void>(0x80be, entref);}
static void PlayerCmd_SetActionSlot(scr_entref_t entref, int p0, script_string_s p1, script_string_s p2){PushValue(p2);PushValue(p1);PushValue(p0);callScriptFunction<void>(0x813c, entref);}
static void PlayerCmd_SetAimSpreadMovementScale(scr_entref_t entref, float p0){PushValue(p0);callScriptFunction<void>(0x813b, entref);}
static void PlayerCmd_SetCardDisplaySlot(scr_entref_t entref, entity p0, int p1){PushValue(p1);PushValue(p0);callScriptFunction<void>(0x80db, entref);}
static void PlayerCmd_SetChannelVolume(scr_entref_t entref, script_string_s p0, float p1, float p2){PushValue(p2);PushValue(p1);PushValue(p0);callScriptFunction<void>(0x8127, entref);}
static void PlayerCmd_SetChannelVolumes(scr_entref_t entref, script_string_s p0, script_string_s p1, float p2){PushValue(p2);PushValue(p1);PushValue(p0);callScriptFunction<void>(0x8128, entref);}
static void PlayerCmd_SetClientDvar(scr_entref_t entref, script_string_s p0, script_string_s p1){PushValue(p1);PushValue(p0);callScriptFunction<void>(0x8132, entref);}
static void PlayerCmd_SetClientDvars(scr_entref_t entref, script_string_s p0){PushValue(p0);callScriptFunction<void>(0x8133, entref);}
static void PlayerCmd_SetClientOmnvar(scr_entref_t entref, script_string_s p0){PushValue(p0);callScriptFunction<void>(0x8131, entref);}
static void PlayerCmd_SetClientOmnvar(scr_entref_t entref, script_string_s p0, int p1){PushValue(p1);PushValue(p0);callScriptFunction<void>(0x8131, entref);}
static void PlayerCmd_SetClientOmnvar(scr_entref_t entref, script_string_s p0, float p1){PushValue(p1);PushValue(p0);callScriptFunction<void>(0x8131, entref);}
static void PlayerCmd_SetClientOmnvar(scr_entref_t entref, script_string_s p0, script_string_s p1){PushValue(p1);PushValue(p0);callScriptFunction<void>(0x8131, entref);}
static void PlayerCmd_SetClientSpawnSightTraces(scr_entref_t entref, script_string_s p0){PushValue(p0);callScriptFunction<void>(0x8134, entref);}
static void PlayerCmd_SetHybridScopeState(scr_entref_t entref, script_string_s p0, int p1){PushValue(p1);PushValue(p0);callScriptFunction<void>(0x840e, entref);}
static void PlayerCmd_SetMLGCameraDefaults(scr_entref_t entref, int p0, float* p1, float* p2){PushValue(p2);PushValue(p1);PushValue(p0);callScriptFunction<void>(0x83fe, entref);}
static void PlayerCmd_SetMLGSpectator(scr_entref_t entref, int p0){PushValue(p0);callScriptFunction<void>(0x8423, entref);}
static void PlayerCmd_SetNameplateMaterial(scr_entref_t entref, script_string_s p0, script_string_s p1){PushValue(p1);PushValue(p0);callScriptFunction<void>(0x83bb, entref);}
static void PlayerCmd_SetPerk(scr_entref_t entref, script_string_s p0, int p1, int p2){PushValue(p2);PushValue(p1);PushValue(p0);callScriptFunction<void>(0x815e, entref);}
static void PlayerCmd_SetRank(scr_entref_t entref, int p0, int p1){PushValue(p1);PushValue(p0);callScriptFunction<void>(0x80d7, entref);}
static void PlayerCmd_SetSpectateDefaults(scr_entref_t entref, float* p0, float* p1){PushValue(p1);PushValue(p0);callScriptFunction<void>(0x80de, entref);}
static void PlayerCmd_SetSpreadOverride(scr_entref_t entref, int p0){PushValue(p0);callScriptFunction<void>(0x8139, entref);}
static void PlayerCmd_SetVelocity(scr_entref_t entref, float* p0){PushValue(p0);callScriptFunction<void>(0x80ec, entref);}
static void PlayerCmd_SetViewKickScale(scr_entref_t entref, float p0){PushValue(p0);callScriptFunction<void>(0x813d, entref);}
static void PlayerCmd_SetViewmodel(scr_entref_t entref, script_string_s p0){PushValue(p0);callScriptFunction<void>(0x810c, entref);}
static void PlayerCmd_SetVolMod(scr_entref_t entref, script_string_s p0, float p1, float p2){PushValue(p2);PushValue(p1);PushValue(p0);callScriptFunction<void>(0x8126, entref);}
static void PlayerCmd_SetWeaponAmmoClip(scr_entref_t entref, script_string_s p0, int p1){PushValue(p1);PushValue(p0);callScriptFunction<void>(0x812c, entref);}
static void PlayerCmd_SetWeaponAmmoStock(scr_entref_t entref, script_string_s p0, int p1){PushValue(p1);PushValue(p0);callScriptFunction<void>(0x812d, entref);}
static void PlayerCmd_SetWhizbyRadii(scr_entref_t entref, float p0, float p1, float p2){PushValue(p2);PushValue(p1);PushValue(p0);callScriptFunction<void>(0x8123, entref);}
static void PlayerCmd_SetWhizbySpreads(scr_entref_t entref, float p0, float p1, float p2){PushValue(p2);PushValue(p1);PushValue(p0);callScriptFunction<void>(0x8122, entref);}
static void PlayerCmd_ShowHudSplash(scr_entref_t entref, script_string_s p0, int p1, int p2){PushValue(p2);PushValue(p1);PushValue(p0);callScriptFunction<void>(0x815d, entref);}
static void PlayerCmd_Suicide(scr_entref_t entref ){callScriptFunction<void>(0x80c3, entref);}
static void PlayerCmd_UnsetPerk(scr_entref_t entref, script_string_s p0, int p1){PushValue(p1);PushValue(p0);callScriptFunction<void>(0x8161, entref);}
static void PlayerCmd_WeaponLockFinalize(scr_entref_t entref, float* p0, float* p1, int p2){PushValue(p2);PushValue(p1);PushValue(p0);callScriptFunction<void>(0x8158, entref);}
static void PlayerCmd_WeaponLockFinalize(scr_entref_t entref, entity p0, float* p1, int p2){PushValue(p2);PushValue(p1);PushValue(p0);callScriptFunction<void>(0x8158, entref);}
static void PlayerCmd_WeaponLockFinalize(scr_entref_t entref, float* p1, int p2){PushValue(p2);PushValue(p1);callScriptFunction<void>(0x8158, entref);}
static void PlayerCmd_WeaponLockFree(scr_entref_t entref ){callScriptFunction<void>(0x8159, entref);}
static void PlayerCmd_WeaponLockNoClearance(scr_entref_t entref, int p0){PushValue(p0);callScriptFunction<void>(0x815b, entref);}
static void PlayerCmd_WeaponLockStart(scr_entref_t entref ){callScriptFunction<void>(0x8157, entref);}
static void PlayerCmd_WeaponLockStart(scr_entref_t entref, float* p0){PushValue(p0);callScriptFunction<void>(0x8157, entref);}
static void PlayerCmd_WeaponLockStart(scr_entref_t entref, entity p0){PushValue(p0);callScriptFunction<void>(0x8157, entref);}
static void PlayerCmd_WeaponLockTargetTooClose(scr_entref_t entref, int p0){PushValue(p0);callScriptFunction<void>(0x815a, entref);}
static int PlayerCmd_adsButtonPressed(scr_entref_t entref ){return callScriptFunction<int>(0x8107, entref);}
static int PlayerCmd_attackButtonPressed(scr_entref_t entref ){return callScriptFunction<int>(0x8106, entref);}
static void PlayerCmd_buttonPressedDEVONLY(scr_entref_t entref ){callScriptFunction<void>(0x80bc, entref);}
static entity PlayerCmd_dropItem(scr_entref_t entref, script_string_s p0){PushValue(p0);return callScriptFunction<entity>(0x80c0, entref);}
static int PlayerCmd_finishPlayerDamage(scr_entref_t entref, entity p0, entity p1, int p2, int p3, script_string_s p5, float* p6, float* p7, script_string_s p8, int p9, float p10){PushValue(p10);PushValue(p9);PushValue(p8);PushValue(p7);PushValue(p6);PushValue(p5);PushValue(p3);PushValue(p2);PushValue(p1);PushValue(p0);return callScriptFunction<int>(0x80c2, entref);}
static int PlayerCmd_fragButtonPressed(scr_entref_t entref ){return callScriptFunction<int>(0x80e9, entref);}
static float* PlayerCmd_getAngles(scr_entref_t entref ){return callScriptFunction<float*>(0x8104, entref);}
static script_string_s PlayerCmd_getCurrentOffhand(scr_entref_t entref ){return callScriptFunction<script_string_s>(0x80f5, entref);}
static script_string_s PlayerCmd_getCurrentPrimaryWeapon(scr_entref_t entref ){return callScriptFunction<script_string_s>(0x80f4, entref);}
static script_string_s PlayerCmd_getCurrentWeapon(scr_entref_t entref ){return callScriptFunction<script_string_s>(0x80f3, entref);}
static int PlayerCmd_getCurrentWeaponClipAmmo(scr_entref_t entref ){return callScriptFunction<int>(0x80eb, entref);}
static float PlayerCmd_getFractionMaxAmmo(scr_entref_t entref, script_string_s p0){PushValue(p0);return callScriptFunction<float>(0x80fd, entref);}
static float PlayerCmd_getFractionStartAmmo(scr_entref_t entref, script_string_s p0){PushValue(p0);return callScriptFunction<float>(0x80fc, entref);}
static float* PlayerCmd_getNormalizedCameraMovement(scr_entref_t entref ){return callScriptFunction<float*>(0x80ef, entref);}
static float* PlayerCmd_getNormalizedMovement(scr_entref_t entref ){return callScriptFunction<float*>(0x80ee, entref);}
static conststring PlayerCmd_getOffhandPrimaryClass(scr_entref_t entref ){return callScriptFunction<conststring>(0x810e, entref);}
static conststring PlayerCmd_getOffhandSecondaryClass(scr_entref_t entref ){return callScriptFunction<conststring>(0x8110, entref);}
static float PlayerCmd_getViewHeight(scr_entref_t entref ){return callScriptFunction<float>(0x80ed, entref);}
static void PlayerCmd_giveMaxAmmo(scr_entref_t entref, script_string_s p0){PushValue(p0);callScriptFunction<void>(0x80fb, entref);}
static void PlayerCmd_giveStartAmmo(scr_entref_t entref, script_string_s p0){PushValue(p0);callScriptFunction<void>(0x80fa, entref);}
static void PlayerCmd_giveWeapon(scr_entref_t entref, script_string_s p0, int p1, int p2, int p3, int p4){PushValue(p4);PushValue(p3);PushValue(p2);PushValue(p1);PushValue(p0);callScriptFunction<void>(0x80f0, entref);}
static void PlayerCmd_hasWeapon(scr_entref_t entref, script_string_s p0){PushValue(p0);callScriptFunction<void>(0x80f6, entref);}
static int PlayerCmd_isDualWielding(scr_entref_t entref ){return callScriptFunction<int>(0x80fe, entref);}
static int PlayerCmd_isOffhandWeaponReadyToThrow(scr_entref_t entref ){return callScriptFunction<int>(0x8418, entref);}
static int PlayerCmd_isOnGround(scr_entref_t entref ){return callScriptFunction<int>(0x810a, entref);}
static int PlayerCmd_isReloading(scr_entref_t entref ){return callScriptFunction<int>(0x80ff, entref);}
static int PlayerCmd_isSwitchingWeapon(scr_entref_t entref ){return callScriptFunction<int>(0x8100, entref);}
static int PlayerCmd_isUsingTurret(scr_entref_t entref ){return callScriptFunction<int>(0x810b, entref);}
static int PlayerCmd_jumpButtonPressed(scr_entref_t entref ){return callScriptFunction<int>(0x83ab, entref);}
static int PlayerCmd_meleeButtonPressed(scr_entref_t entref ){return callScriptFunction<int>(0x8108, entref);}
static void PlayerCmd_pingPlayer(scr_entref_t entref ){callScriptFunction<void>(0x80bb, entref);}
static float PlayerCmd_playerADS(scr_entref_t entref ){return callScriptFunction<float>(0x8109, entref);}
static int PlayerCmd_secondaryOffhandButtonPressed(scr_entref_t entref ){return callScriptFunction<int>(0x80ea, entref);}
static void PlayerCmd_setAngles(scr_entref_t entref, float* p0){PushValue(p0);callScriptFunction<void>(0x8103, entref);}
static void PlayerCmd_setEnterTime(scr_entref_t entref, int p0){PushValue(p0);callScriptFunction<void>(0x80c8, entref);}
static void PlayerCmd_setOffhandPrimaryClass(scr_entref_t entref, script_string_s p0){PushValue(p0);callScriptFunction<void>(0x810d, entref);}
static void PlayerCmd_setOffhandSecondaryClass(scr_entref_t entref, script_string_s p0){PushValue(p0);callScriptFunction<void>(0x810f, entref);}
static void PlayerCmd_setOrigin(scr_entref_t entref ){callScriptFunction<void>(0x8101, entref);}
static void PlayerCmd_setOrigin(scr_entref_t entref, float* p1){PushValue(p1);callScriptFunction<void>(0x8101, entref);}
static void PlayerCmd_setOrigin(scr_entref_t entref, int p1){PushValue(p1);callScriptFunction<void>(0x8101, entref);}
static void PlayerCmd_setSpawnWeapon(scr_entref_t entref, script_string_s p0){PushValue(p0);callScriptFunction<void>(0x80bf, entref);}
static void PlayerCmd_setWeaponModelVariant(scr_entref_t entref, script_string_s p0, int p1){PushValue(p1);PushValue(p0);callScriptFunction<void>(0x8410, entref);}
static void PlayerCmd_spawn(scr_entref_t entref, float* p0, float* p1){PushValue(p1);PushValue(p0);callScriptFunction<void>(0x80c7, entref);}
static void PlayerCmd_switchToOffhand(scr_entref_t entref, script_string_s p0){PushValue(p0);callScriptFunction<void>(0x80f9, entref);}
static void PlayerCmd_switchToWeapon(scr_entref_t entref ){callScriptFunction<void>(0x80f7, entref);}
static void PlayerCmd_switchToWeaponImmediate(scr_entref_t entref ){callScriptFunction<void>(0x80f8, entref);}
static void PlayerCmd_takeAllWeapons(scr_entref_t entref ){callScriptFunction<void>(0x80f2, entref);}
static void PlayerCmd_takeWeapon(scr_entref_t entref, script_string_s p0){PushValue(p0);callScriptFunction<void>(0x80f1, entref);}
static int PlayerCmd_useButtonPressed(scr_entref_t entref ){return callScriptFunction<int>(0x8105, entref);}
static int PlayerCmd_usingGamepad(scr_entref_t entref ){return callScriptFunction<int>(0x833f, entref);}
static void ScrAgentCmd_BeginMelee(scr_entref_t entref, entity p0){PushValue(p0);callScriptFunction<void>(0x838e, entref);}
static void ScrAgentCmd_ClaimNode(scr_entref_t entref ){callScriptFunction<void>(0x8393, entref);}
static void ScrAgentCmd_DoAnimLerp(scr_entref_t entref, float* p0, float* p1, float p2){PushValue(p2);PushValue(p1);PushValue(p0);callScriptFunction<void>(0x8391, entref);}
static void ScrAgentCmd_DoAnimRelative(scr_entref_t entref, float* p1, float* p2){PushValue(p2);PushValue(p1);callScriptFunction<void>(0x83f5, entref);}
static float ScrAgentCmd_DoTrajectory(scr_entref_t entref, float* p0, float* p1, float p2){PushValue(p2);PushValue(p1);PushValue(p0);return callScriptFunction<float>(0x8390, entref);}
static float* ScrAgentCmd_GetGoalPos(scr_entref_t entref ){return callScriptFunction<float*>(0x8383, entref);}
static float* ScrAgentCmd_GetLookaheadDir(scr_entref_t entref ){return callScriptFunction<float*>(0x83ad, entref);}
static float ScrAgentCmd_GetMaxTurnSpeed(scr_entref_t entref ){return callScriptFunction<float>(0x838d, entref);}
static void ScrAgentCmd_GetNegotiationEndNode(scr_entref_t entref ){callScriptFunction<void>(0x821d, entref);}
static void ScrAgentCmd_GetNegotiationNextNode(scr_entref_t entref ){callScriptFunction<void>(0x821e, entref);}
static void ScrAgentCmd_GetNegotiationStartNode(scr_entref_t entref ){callScriptFunction<void>(0x821c, entref);}
static float* ScrAgentCmd_GetPathGoalPos(scr_entref_t entref ){return callScriptFunction<float*>(0x83ae, entref);}
static void ScrAgentCmd_RelinquishClaimedNode(scr_entref_t entref ){callScriptFunction<void>(0x8394, entref);}
static void ScrAgentCmd_SetAnimMode(scr_entref_t entref, script_string_s p0){PushValue(p0);callScriptFunction<void>(0x8389, entref);}
static void ScrAgentCmd_SetAnimScale(scr_entref_t entref, float p0, float p1){PushValue(p1);PushValue(p0);callScriptFunction<void>(0x8387, entref);}
static void ScrAgentCmd_SetClipMode(scr_entref_t entref, script_string_s p0){PushValue(p0);callScriptFunction<void>(0x838b, entref);}
static void ScrAgentCmd_SetGoalEntity(scr_entref_t entref, entity p0){PushValue(p0);callScriptFunction<void>(0x8385, entref);}
static void ScrAgentCmd_SetGoalNode(scr_entref_t entref ){callScriptFunction<void>(0x8384, entref);}
static void ScrAgentCmd_SetGoalPos(scr_entref_t entref, float* p0){PushValue(p0);callScriptFunction<void>(0x8382, entref);}
static void ScrAgentCmd_SetGoalRadius(scr_entref_t entref, float p0){PushValue(p0);callScriptFunction<void>(0x8386, entref);}
static void ScrAgentCmd_SetMaxTurnSpeed(scr_entref_t entref, float p0){PushValue(p0);callScriptFunction<void>(0x838c, entref);}
static void ScrAgentCmd_SetOrientMode(scr_entref_t entref, script_string_s p0, float* p1, float* p2){PushValue(p2);PushValue(p1);PushValue(p0);callScriptFunction<void>(0x8388, entref);}
static void ScrAgentCmd_SetPhysicsMode(scr_entref_t entref, script_string_s p0){PushValue(p0);callScriptFunction<void>(0x838a, entref);}
static void ScrAgentCmd_SetScripted(scr_entref_t entref, int p0){PushValue(p0);callScriptFunction<void>(0x838f, entref);}
static void ScrAgentCmd_SetViewHeight(scr_entref_t entref, int p0){PushValue(p0);callScriptFunction<void>(0x8392, entref);}
static void ScrAgentCmd_SetWallRunCost(scr_entref_t entref, float p0){PushValue(p0);callScriptFunction<void>(0x8429, entref);}
static void ScrAgentCmd_SetWaypoint(scr_entref_t entref, float* p0){PushValue(p0);callScriptFunction<void>(0x8381, entref);}
static void ScrAgentCmd_UseModelCollisionBounds(scr_entref_t entref ){callScriptFunction<void>(0x8422, entref);}
static void ScrCmd_AutoSpotOverlayOff(scr_entref_t entref ){callScriptFunction<void>(0x8037, entref);}
static void ScrCmd_AutoSpotOverlayOn(scr_entref_t entref ){callScriptFunction<void>(0x8036, entref);}
static void ScrCmd_AutoboltMissileEffects(scr_entref_t entref, int p0){PushValue(p0);callScriptFunction<void>(0x8414, entref);}
static void ScrCmd_ClearPortableRadar(scr_entref_t entref ){callScriptFunction<void>(0x832f, entref);}
static void ScrCmd_ClearScrambler(scr_entref_t entref ){callScriptFunction<void>(0x832e, entref);}
static void ScrCmd_Delete(scr_entref_t entref ){callScriptFunction<void>(0x802b, entref);}
static void ScrCmd_DisablePlayerUse(scr_entref_t entref, entity p0){PushValue(p0);callScriptFunction<void>(0x832b, entref);}
static void ScrCmd_DoDamage(scr_entref_t entref, float p0, float* p1){PushValue(p1);PushValue(p0);callScriptFunction<void>(0x82e6, entref);}
static void ScrCmd_DoesNodeAllowStance(scr_entref_t entref, script_string_s p0){PushValue(p0);callScriptFunction<void>(0x8304, entref);}
static void ScrCmd_DontInterpolate(scr_entref_t entref ){callScriptFunction<void>(0x82cc, entref);}
static void ScrCmd_EnableLinkTo(scr_entref_t entref ){callScriptFunction<void>(0x8013, entref);}
static void ScrCmd_EnablePlayerUse(scr_entref_t entref, entity p0){PushValue(p0);callScriptFunction<void>(0x3d03, entref);}
static void ScrCmd_EntityWillNeverChange(scr_entref_t entref ){callScriptFunction<void>(0x8042, entref);}
static void ScrCmd_ForceUseHintOff(scr_entref_t entref ){callScriptFunction<void>(0x803f, entref);}
static void ScrCmd_ForceUseHintOn(scr_entref_t entref, script_string_s p0){PushValue(p0);callScriptFunction<void>(0x803e, entref);}
static void ScrCmd_GetActiveClientCount(scr_entref_t entref ){callScriptFunction<void>(0x252, entref);}
static void ScrCmd_GetAttachIgnoreCollision(scr_entref_t entref, int p0){PushValue(p0);callScriptFunction<void>(0x8009, entref);}
static conststring ScrCmd_GetAttachModelName(scr_entref_t entref, int p0){PushValue(p0);return callScriptFunction<conststring>(0x8007, entref);}
static int ScrCmd_GetAttachSize(scr_entref_t entref ){return callScriptFunction<int>(0x8006, entref);}
static conststring ScrCmd_GetAttachTagName(scr_entref_t entref, int p0){PushValue(p0);return callScriptFunction<conststring>(0x8008, entref);}
static float* ScrCmd_GetEye(scr_entref_t entref ){return callScriptFunction<float*>(0x8023, entref);}
static conststring ScrCmd_GetHighestNodeStance(scr_entref_t entref ){return callScriptFunction<conststring>(0x8303, entref);}
static int ScrCmd_GetIsTouchingEntities(scr_entref_t entref, object p0){PushValue(p0);return callScriptFunction<int>(0x8025, entref);}
static void ScrCmd_GetLinkedChildren(scr_entref_t entref, int p0){PushValue(p0);callScriptFunction<void>(0x8403, entref);}
static void ScrCmd_GetLinkedParent(scr_entref_t entref ){callScriptFunction<void>(0x83b9, entref);}
static void ScrCmd_GetMovingPlatformParent(scr_entref_t entref ){callScriptFunction<void>(0x83ba, entref);}
static float ScrCmd_GetNormalHealth(scr_entref_t entref ){return callScriptFunction<float>(0x82e4, entref);}
static float* ScrCmd_GetOrigin(scr_entref_t entref ){return callScriptFunction<float*>(0x82cf, entref);}
static int ScrCmd_GetPlaylistID(scr_entref_t entref ){return callScriptFunction<int>(0x251, entref);}
static int ScrCmd_GetPlaylistVersion(scr_entref_t entref ){return callScriptFunction<int>(0x250, entref);}
static float* ScrCmd_GetPointInBounds(scr_entref_t entref, float p0, float p1, float p2){PushValue(p2);PushValue(p1);PushValue(p0);return callScriptFunction<float*>(0x80a5, entref);}
static conststring ScrCmd_GetStance(scr_entref_t entref ){return callScriptFunction<conststring>(0x8069, entref);}
static float* ScrCmd_GetViewOrigin(scr_entref_t entref ){return callScriptFunction<float*>(0x840f, entref);}
static void ScrCmd_Hide(scr_entref_t entref ){callScriptFunction<void>(0x82e9, entref);}
static void ScrCmd_HudOutlineDisable(scr_entref_t entref ){callScriptFunction<void>(0x83c8, entref);}
static void ScrCmd_HudOutlineDisableForClient(scr_entref_t entref, entity p0){PushValue(p0);callScriptFunction<void>(0x83ee, entref);}
static void ScrCmd_HudOutlineDisableForClients(scr_entref_t entref ){callScriptFunction<void>(0x83f0, entref);}
static void ScrCmd_HudOutlineEnable(scr_entref_t entref, int p0, int p1){PushValue(p1);PushValue(p0);callScriptFunction<void>(0x83c7, entref);}
static void ScrCmd_HudOutlineEnableForClient(scr_entref_t entref, entity p0, int p1, int p2){PushValue(p2);PushValue(p1);PushValue(p0);callScriptFunction<void>(0x83ed, entref);}
static void ScrCmd_HudOutlineEnableForClients(scr_entref_t entref, int p1, int p2){PushValue(p2);PushValue(p1);callScriptFunction<void>(0x83ef, entref);}
static void ScrCmd_IsDedicatedServer(scr_entref_t entref ){callScriptFunction<void>(0x24f, entref);}
static void ScrCmd_IsLinked(scr_entref_t entref ){callScriptFunction<void>(0x8012, entref);}
static int ScrCmd_IsTouching(scr_entref_t entref, entity p0){PushValue(p0);return callScriptFunction<int>(0x8024, entref);}
static void ScrCmd_ItemWeaponSetAmmo(scr_entref_t entref, int p0, int p1, int p2, int p3){PushValue(p3);PushValue(p2);PushValue(p1);PushValue(p0);callScriptFunction<void>(0x806b, entref);}
static void ScrCmd_LaserAltViewOff(scr_entref_t entref ){callScriptFunction<void>(0x8030, entref);}
static void ScrCmd_LaserAltViewOn(scr_entref_t entref ){callScriptFunction<void>(0x802f, entref);}
static void ScrCmd_LaserOff(scr_entref_t entref ){callScriptFunction<void>(0x802e, entref);}
static void ScrCmd_LaserOn(scr_entref_t entref ){callScriptFunction<void>(0x802d, entref);}
static void ScrCmd_LerpViewAngleClamp(scr_entref_t entref, float p0, float p1, float p2, float p3, float p4, float p5, float p6){PushValue(p6);PushValue(p5);PushValue(p4);PushValue(p3);PushValue(p2);PushValue(p1);PushValue(p0);callScriptFunction<void>(0x801d, entref);}
static void ScrCmd_LinkTo(scr_entref_t entref, entity p0, script_string_s p1, float* p2, float* p3){PushValue(p3);PushValue(p2);PushValue(p1);PushValue(p0);callScriptFunction<void>(0x800f, entref);}
static void ScrCmd_LinkToBlendToTag(scr_entref_t entref ){callScriptFunction<void>(0x8010, entref);}
static void ScrCmd_MakeCollideWithItemClip(scr_entref_t entref, int p0){PushValue(p0);callScriptFunction<void>(0x841a, entref);}
static void ScrCmd_MakeHard(scr_entref_t entref ){callScriptFunction<void>(0x8041, entref);}
static void ScrCmd_MakePortableRadar(scr_entref_t entref ){callScriptFunction<void>(0x832d, entref);}
static void ScrCmd_MakeScrambler(scr_entref_t entref, entity p0){PushValue(p0);callScriptFunction<void>(0x832c, entref);}
static void ScrCmd_MakeSoft(scr_entref_t entref ){callScriptFunction<void>(0x8040, entref);}
static void ScrCmd_MakeUnusable(scr_entref_t entref ){callScriptFunction<void>(0x803b, entref);}
static void ScrCmd_MakeUsable(scr_entref_t entref ){callScriptFunction<void>(0x803a, entref);}
static void ScrCmd_MotionBlurHQDisable(scr_entref_t entref ){callScriptFunction<void>(0x83ca, entref);}
static void ScrCmd_MotionBlurHQEnable(scr_entref_t entref ){callScriptFunction<void>(0x83c9, entref);}
static void ScrCmd_PlayLocalSound(scr_entref_t entref, script_string_s p0){PushValue(p0);callScriptFunction<void>(0x812a, entref);}
static void ScrCmd_PlayLoopSound(scr_entref_t entref, script_string_s p0){PushValue(p0);callScriptFunction<void>(0x2703, entref);}
static void ScrCmd_PlayRumbleLoopOnEntity(scr_entref_t entref ){callScriptFunction<void>(0x8029, entref);}
static void ScrCmd_PlayRumbleOnEntity(scr_entref_t entref, script_string_s p0){PushValue(p0);callScriptFunction<void>(0x8028, entref);}
static void ScrCmd_PlaySoundAsMaster(scr_entref_t entref, script_string_s p0){PushValue(p0);callScriptFunction<void>(0x82d4, entref);}
static void ScrCmd_PlaySoundAtPos(scr_entref_t entref, float* p0, script_string_s p1){PushValue(p1);PushValue(p0);callScriptFunction<void>(0xed, entref);}
static void ScrCmd_PlaySoundOnMovingEnt(scr_entref_t entref, script_string_s p0){PushValue(p0);callScriptFunction<void>(0x8405, entref);}
static void ScrCmd_PlaySoundToPlayer(scr_entref_t entref, script_string_s p0, entity p1){PushValue(p1);PushValue(p0);callScriptFunction<void>(0x8327, entref);}
static void ScrCmd_PlaySoundToTeam(scr_entref_t entref, script_string_s p0, script_string_s p1, entity p2){PushValue(p2);PushValue(p1);PushValue(p0);callScriptFunction<void>(0x8326, entref);}
static void ScrCmd_PlayerCommandBot(scr_entref_t entref, entity p0){PushValue(p0);callScriptFunction<void>(0x8375, entref);}
static int ScrCmd_PlayerForceDeathAnim(scr_entref_t entref, entity p0, script_string_s p2, float* p4){PushValue(p4);PushValue(p2);PushValue(p0);return callScriptFunction<int>(0x833a, entref);}
static void ScrCmd_PlayerHide(scr_entref_t entref ){callScriptFunction<void>(0x8328, entref);}
static void ScrCmd_PlayerLinkTo(scr_entref_t entref, entity p0, script_string_s p1, float p2, float p3, float p4, float p5, float p6, int p7){PushValue(p7);PushValue(p6);PushValue(p5);PushValue(p4);PushValue(p3);PushValue(p2);PushValue(p1);PushValue(p0);callScriptFunction<void>(0x8014, entref);}
static void ScrCmd_PlayerLinkToAbsolute(scr_entref_t entref, entity p0, script_string_s p1){PushValue(p1);PushValue(p0);callScriptFunction<void>(0x8017, entref);}
static void ScrCmd_PlayerLinkToBlend(scr_entref_t entref, entity p0, script_string_s p1, float p2, float p3, float p4){PushValue(p4);PushValue(p3);PushValue(p2);PushValue(p1);PushValue(p0);callScriptFunction<void>(0x8018, entref);}
static void ScrCmd_PlayerLinkToDelta(scr_entref_t entref ){callScriptFunction<void>(0x8015, entref);}
static void ScrCmd_PlayerLinkWeaponViewToDelta(scr_entref_t entref ){callScriptFunction<void>(0x8016, entref);}
static void ScrCmd_PlayerLinkedOffsetDisable(scr_entref_t entref ){callScriptFunction<void>(0x801a, entref);}
static void ScrCmd_PlayerLinkedOffsetEnable(scr_entref_t entref ){callScriptFunction<void>(0x8019, entref);}
static void ScrCmd_PlayerLinkedSetUseBaseAngleForViewClamp(scr_entref_t entref, int p0){PushValue(p0);callScriptFunction<void>(0x801c, entref);}
static void ScrCmd_PlayerLinkedSetViewZnear(scr_entref_t entref, int p0){PushValue(p0);callScriptFunction<void>(0x801b, entref);}
static void ScrCmd_PlayerSetGroundReferenceEnt(scr_entref_t entref, entity p0){PushValue(p0);callScriptFunction<void>(0x82cb, entref);}
static void ScrCmd_PrecacheSound(scr_entref_t entref, script_string_s p0){PushValue(p0);callScriptFunction<void>(0x207, entref);}
static void ScrCmd_QueueDialog(scr_entref_t entref, script_string_s p0, script_string_s p1, script_string_s p2, float p3, script_string_s p4, script_string_s p5, float* p7){PushValue(p7);PushValue(p5);PushValue(p4);PushValue(p3);PushValue(p2);PushValue(p1);PushValue(p0);callScriptFunction<void>(0x243, entref);}
static void ScrCmd_QueueDialogForPlayer(scr_entref_t entref, script_string_s p0, script_string_s p1, float p2, script_string_s p3, int p4, float* p5){PushValue(p5);PushValue(p4);PushValue(p3);PushValue(p2);PushValue(p1);PushValue(p0);callScriptFunction<void>(0x83fd, entref);}
static void ScrCmd_SetClientOwner(scr_entref_t entref, entity p0){PushValue(p0);callScriptFunction<void>(0x8373, entref);}
static void ScrCmd_SetClothType(scr_entref_t entref, script_string_s p0){PushValue(p0);callScriptFunction<void>(0x83a8, entref);}
static int ScrCmd_SetContents(scr_entref_t entref, int p0){PushValue(p0);return callScriptFunction<int>(0x8039, entref);}
static void ScrCmd_SetEntityOwner(scr_entref_t entref, entity p0){PushValue(p0);callScriptFunction<void>(0x8377, entref);}
static void ScrCmd_SetEyesOnUplinkEnabled(scr_entref_t entref, int p0){PushValue(p0);callScriptFunction<void>(0x8038, entref);}
static void ScrCmd_SetGrenadeCookScale(scr_entref_t entref, float p0){PushValue(p0);callScriptFunction<void>(0x83eb, entref);}
static void ScrCmd_SetGrenadeThrowScale(scr_entref_t entref, float p0, float p1){PushValue(p1);PushValue(p0);callScriptFunction<void>(0x83ea, entref);}
static void ScrCmd_SetModel(scr_entref_t entref, script_string_s p0){PushValue(p0);callScriptFunction<void>(0x802c, entref);}
static void ScrCmd_SetMoveSpeedScale(scr_entref_t entref, float p0){PushValue(p0);callScriptFunction<void>(0x808c, entref);}
static void ScrCmd_SetNormalHealth(scr_entref_t entref, float p0){PushValue(p0);callScriptFunction<void>(0x82e5, entref);}
static void ScrCmd_SetOtherEnt(scr_entref_t entref, entity p0){PushValue(p0);callScriptFunction<void>(0x8374, entref);}
static void ScrCmd_SetScriptMoverKillCam(scr_entref_t entref, script_string_s p0){PushValue(p0);callScriptFunction<void>(0x833e, entref);}
static void ScrCmd_SetScriptableDamageOwner(scr_entref_t entref, entity p0){PushValue(p0);callScriptFunction<void>(0x8408, entref);}
static void ScrCmd_SetScriptablePartState(scr_entref_t entref, script_string_s p0, script_string_s p1, int p2){PushValue(p2);PushValue(p1);PushValue(p0);callScriptFunction<void>(0x83c3, entref);}
static void ScrCmd_SetSlowMotion(scr_entref_t entref, float p1, float p2, float p1000){PushValue(p1000);PushValue(p2);PushValue(p1);callScriptFunction<void>(0x3a, entref);}
static void ScrCmd_SetStance(scr_entref_t entref, script_string_s p0){PushValue(p0);callScriptFunction<void>(0x806a, entref);}
static void ScrCmd_SetSurfaceType(scr_entref_t entref, script_string_s p0){PushValue(p0);callScriptFunction<void>(0x83b1, entref);}
static void ScrCmd_Show(scr_entref_t entref ){callScriptFunction<void>(0x82e8, entref);}
static void ScrCmd_ShowToPlayer(scr_entref_t entref, entity p0){PushValue(p0);callScriptFunction<void>(0x8329, entref);}
static void ScrCmd_SoundExists(scr_entref_t entref, script_string_s p0){PushValue(p0);callScriptFunction<void>(0xad, entref);}
static void ScrCmd_StopLocalSound(scr_entref_t entref, script_string_s p0){PushValue(p0);callScriptFunction<void>(0x812b, entref);}
static void ScrCmd_StopLoopSound(scr_entref_t entref ){callScriptFunction<void>(0x8026, entref);}
static void ScrCmd_StopRumble(scr_entref_t entref, script_string_s p0){PushValue(p0);callScriptFunction<void>(0x802a, entref);}
static void ScrCmd_StopSounds(scr_entref_t entref ){callScriptFunction<void>(0x8027, entref);}
static void ScrCmd_ThermalDrawDisable(scr_entref_t entref ){callScriptFunction<void>(0x8323, entref);}
static void ScrCmd_ThermalDrawEnable(scr_entref_t entref ){callScriptFunction<void>(0x8322, entref);}
static void ScrCmd_ThermalVisionFOFOverlayOff(scr_entref_t entref ){callScriptFunction<void>(0x8035, entref);}
static void ScrCmd_ThermalVisionFOFOverlayOn(scr_entref_t entref ){callScriptFunction<void>(0x8034, entref);}
static void ScrCmd_ThermalVisionOff(scr_entref_t entref ){callScriptFunction<void>(0x8033, entref);}
static void ScrCmd_ThermalVisionOn(scr_entref_t entref, int p0){PushValue(p0);callScriptFunction<void>(0x8031, entref);}
static void ScrCmd_ThermalVisionOnShadowOff(scr_entref_t entref ){callScriptFunction<void>(0x8032, entref);}
static void ScrCmd_TrackerUpdate(scr_entref_t entref, script_string_s p0, int p1){PushValue(p1);PushValue(p0);callScriptFunction<void>(0x80ba, entref);}
static void ScrCmd_TransferMarksToNewScriptModel(scr_entref_t entref, entity p0){PushValue(p0);callScriptFunction<void>(0x80a6, entref);}
static void ScrCmd_TriggerPortableRadarPing(scr_entref_t entref, float* p0, entity p1){PushValue(p1);PushValue(p0);callScriptFunction<void>(0x248, entref);}
static void ScrCmd_Unlink(scr_entref_t entref ){callScriptFunction<void>(0x8011, entref);}
static void ScrCmd_UseBy(scr_entref_t entref, entity p0){PushValue(p0);callScriptFunction<void>(0x82d3, entref);}
static void ScrCmd_WorldPointInReticle_Circle(scr_entref_t entref, float* p0, float p1, float p2){PushValue(p2);PushValue(p1);PushValue(p0);callScriptFunction<void>(0x80a3, entref);}
static void ScrCmd_WorldPointInReticle_Rect(scr_entref_t entref, float* p0, float p1, float p2, float p3){PushValue(p3);PushValue(p2);PushValue(p1);PushValue(p0);callScriptFunction<void>(0x80a4, entref);}
static float* ScrCmd_WorldPointToScreenPos(scr_entref_t entref, float* p0, float p1){PushValue(p1);PushValue(p0);return callScriptFunction<float*>(0x83cd, entref);}
static void ScrCmd_attach(scr_entref_t entref ){callScriptFunction<void>(0x8000, entref);}
static void ScrCmd_attachShieldModel(scr_entref_t entref ){callScriptFunction<void>(0x8001, entref);}
static void ScrCmd_detach(scr_entref_t entref ){callScriptFunction<void>(0x8002, entref);}
static void ScrCmd_detachAll(scr_entref_t entref ){callScriptFunction<void>(0x8005, entref);}
static void ScrCmd_detachShieldModel(scr_entref_t entref ){callScriptFunction<void>(0x8003, entref);}
static void ScrCmd_hideallparts(scr_entref_t entref ){callScriptFunction<void>(0x800c, entref);}
static void ScrCmd_hidepart(scr_entref_t entref, script_string_s p0, script_string_s p1){PushValue(p1);PushValue(p0);callScriptFunction<void>(0x800a, entref);}
static void ScrCmd_hidepartAllInstances(scr_entref_t entref, script_string_s p0, script_string_s p1){PushValue(p1);PushValue(p0);callScriptFunction<void>(0x800b, entref);}
static void ScrCmd_moveShieldModel(scr_entref_t entref, script_string_s p0, script_string_s p1, script_string_s p2){PushValue(p2);PushValue(p1);PushValue(p0);callScriptFunction<void>(0x8004, entref);}
static void ScrCmd_showallparts(scr_entref_t entref ){callScriptFunction<void>(0x800e, entref);}
static void ScrCmd_showpart(scr_entref_t entref, script_string_s p0, script_string_s p1){PushValue(p1);PushValue(p0);callScriptFunction<void>(0x800d, entref);}
static float* Scr_AIPhysicsTrace(scr_entref_t entref, float* p0, float* p1, float p2, float p3, int p4, int p5){PushValue(p5);PushValue(p4);PushValue(p3);PushValue(p2);PushValue(p1);PushValue(p0);return callScriptFunction<float*>(0x83b2, entref);}
static void Scr_AIPhysicsTracePassed(scr_entref_t entref, float* p0, float* p1, float p2, float p3, int p4){PushValue(p4);PushValue(p3);PushValue(p2);PushValue(p1);PushValue(p0);callScriptFunction<void>(0x83b3, entref);}
static void Scr_ActivateClientExploder(scr_entref_t entref, int p0, object p1, float p2){PushValue(p2);PushValue(p1);PushValue(p0);callScriptFunction<void>(0x212, entref);}
//static  Scr_AddStruct(scr_entref_t entref ){return callScriptFunction<>(0xe4, entref);}
static void Scr_AmbientStop(scr_entref_t entref, float p0, script_string_s p1){PushValue(p1);PushValue(p0);callScriptFunction<void>(0x73, entref);}
static float Scr_AnglesDelta(scr_entref_t entref, float* p0, float* p1){PushValue(p1);PushValue(p0);return callScriptFunction<float>(0x67, entref);}
static float* Scr_AnglesToAxis(scr_entref_t entref, float* p0){PushValue(p0);return callScriptFunction<float*>(0x225, entref);}
static float* Scr_AnglesToForward(scr_entref_t entref, float* p0){PushValue(p0);return callScriptFunction<float*>(0x66, entref);}
static float* Scr_AnglesToRight(scr_entref_t entref, float* p0){PushValue(p0);return callScriptFunction<float*>(0x65, entref);}
static float* Scr_AnglesToUp(scr_entref_t entref, float* p0){PushValue(p0);return callScriptFunction<float*>(0x64, entref);}
static float* Scr_AxisToAngles(scr_entref_t entref, float* p0, float* p1, float* p2){PushValue(p2);PushValue(p1);PushValue(p0);return callScriptFunction<float*>(0x63, entref);}
static void Scr_BadPlace_Arc(scr_entref_t entref, script_string_s p0, float p1, float* p2, float p3, float p4, float* p5, float p6, float p7){PushValue(p7);PushValue(p6);PushValue(p5);PushValue(p4);PushValue(p3);PushValue(p2);PushValue(p1);PushValue(p0);callScriptFunction<void>(0x1c9, entref);}
static void Scr_BadPlace_Brush(scr_entref_t entref, script_string_s p0, float p1, entity p2){PushValue(p2);PushValue(p1);PushValue(p0);callScriptFunction<void>(0x1ca, entref);}
static void Scr_BadPlace_Cylinder(scr_entref_t entref, script_string_s p0, float p1, float* p2, float p3, float p4){PushValue(p4);PushValue(p3);PushValue(p2);PushValue(p1);PushValue(p0);callScriptFunction<void>(0x1c8, entref);}
static void Scr_BadPlace_Delete(scr_entref_t entref, script_string_s p0){PushValue(p0);callScriptFunction<void>(0x1c7, entref);}
static void Scr_BadPlace_Global(scr_entref_t entref, script_string_s p0, float p1){PushValue(p1);PushValue(p0);callScriptFunction<void>(0x1fd, entref);}
static int Scr_BotAutoConnectEnabled(scr_entref_t entref ){return callScriptFunction<int>(0xd803, entref);}
static void Scr_BotFlagMemoryEvents(scr_entref_t entref, int p0, int p1, int p2, float* p3, float p4, script_string_s p5, int p6, entity p7){PushValue(p7);PushValue(p6);PushValue(p5);PushValue(p4);PushValue(p3);PushValue(p2);PushValue(p1);PushValue(p0);callScriptFunction<void>(0x1e5, entref);}
static float* Scr_BotGetClosestNavigablePoint(scr_entref_t entref, float* p0, float p1, entity p2){PushValue(p2);PushValue(p1);PushValue(p0);return callScriptFunction<float*>(0x1ec, entref);}
static float* Scr_BotGetMemoryEvents(scr_entref_t entref, int p0, int p1, int p2, script_string_s p3, int p4, entity p5){PushValue(p5);PushValue(p4);PushValue(p3);PushValue(p2);PushValue(p1);PushValue(p0);return callScriptFunction<float*>(0x1df, entref);}
static script_string_s Scr_BotGetTeamDifficulty(scr_entref_t entref, int p0){PushValue(p0);return callScriptFunction<script_string_s>(0x24c, entref);}
static int Scr_BotGetTeamLimit(scr_entref_t entref, int p0){PushValue(p0);return callScriptFunction<int>(0x24a, entref);}
static int Scr_BotMemoryFlags(scr_entref_t entref, script_string_s p0){PushValue(p0);return callScriptFunction<int>(0x1e4, entref);}
static void Scr_BotSentientSwap(scr_entref_t entref, entity p0, entity p1){PushValue(p1);PushValue(p0);callScriptFunction<void>(0x1e7, entref);}
static int Scr_BotZoneGetCount(scr_entref_t entref, int p0, script_string_s p1, script_string_s p2){PushValue(p2);PushValue(p1);PushValue(p0);return callScriptFunction<int>(0x1e1, entref);}
static float Scr_BotZoneGetIndoorPercent(scr_entref_t entref, int p0){PushValue(p0);return callScriptFunction<float>(0x1e6, entref);}
static int Scr_BotZoneNearestCount(scr_entref_t entref, int p0, script_string_s p1, int p2, script_string_s p3){PushValue(p3);PushValue(p2);PushValue(p1);PushValue(p0);return callScriptFunction<int>(0x1e3, entref);}
static int Scr_BotZoneNearestCount(scr_entref_t entref, int p0, script_string_s p1, int p2){PushValue(p2);PushValue(p1);PushValue(p0);return callScriptFunction<int>(0x1e3, entref);}
static int Scr_BotZoneNearestCount(scr_entref_t entref, int p0, script_string_s p1, int p2, int p3){PushValue(p3);PushValue(p2);PushValue(p1);PushValue(p0);return callScriptFunction<int>(0x1e3, entref);}
static void Scr_BotZoneSetTeam(scr_entref_t entref, int p0, script_string_s p1){PushValue(p1);PushValue(p0);callScriptFunction<void>(0x1e2, entref);}
static float Scr_BulletTrace(scr_entref_t entref, float* p0, float* p1, int p2, entity p3, int p4, int p5, int p6, int p7, int p8){PushValue(p8);PushValue(p7);PushValue(p6);PushValue(p5);PushValue(p4);PushValue(p3);PushValue(p2);PushValue(p1);PushValue(p0);return callScriptFunction<float>(0x30, entref);}
static void Scr_BulletTracePassed(scr_entref_t entref, float* p1, int p2, entity p3, float* p2047){PushValue(p2047);PushValue(p3);PushValue(p2);PushValue(p1);callScriptFunction<void>(0x31, entref);}
static float* Scr_CalculateStartOrientation(scr_entref_t entref, float* p0, float* p1, float* p2, float* p3){PushValue(p3);PushValue(p2);PushValue(p1);PushValue(p0);return callScriptFunction<float*>(0x22c, entref);}
static void Scr_ClearFog(scr_entref_t entref, float p0){PushValue(p0);callScriptFunction<void>(0x222, entref);}
static int Scr_Closer(scr_entref_t entref, float* p0, float* p1, float* p2){PushValue(p2);PushValue(p1);PushValue(p0);return callScriptFunction<int>(0x5c, entref);}
static float* Scr_CombineAngles(scr_entref_t entref, float* p0, float* p1){PushValue(p1);PushValue(p0);return callScriptFunction<float*>(0x68, entref);}
static float Scr_Distance(scr_entref_t entref, float* p0, float* p1){PushValue(p1);PushValue(p0);return callScriptFunction<float>(0x55, entref);}
static float Scr_Distance2D(scr_entref_t entref, float* p0, float* p1){PushValue(p1);PushValue(p0);return callScriptFunction<float>(0x56, entref);}
static float Scr_Distance2DSquared(scr_entref_t entref, float* p0, float* p1){PushValue(p1);PushValue(p0);return callScriptFunction<float>(0x210, entref);}
static float Scr_DistanceSquared(scr_entref_t entref, float* p0, float* p1){PushValue(p1);PushValue(p0);return callScriptFunction<float>(0x57, entref);}
static entitynum Scr_FindEntrances(scr_entref_t entref, float* p0){PushValue(p0);return callScriptFunction<entitynum>(0x1fc, entref);}
static entitynum Scr_GetAllNodes(scr_entref_t entref ){return callScriptFunction<entitynum>(0x157, entref);}
static entitynum Scr_GetClosestNodeInSight(scr_entref_t entref, float* p0){PushValue(p0);return callScriptFunction<entitynum>(0x15a, entref);}
static entitynum Scr_GetEnt(scr_entref_t entref, script_string_s p0, script_string_s p1){PushValue(p1);PushValue(p0);return callScriptFunction<entitynum>(0xe0, entref);}
static entitynum Scr_GetEntint(scr_entref_t entref, script_string_s p0, script_string_s p1){PushValue(p1);PushValue(p0);return callScriptFunction<entitynum>(0xe1, entref);}
static void Scr_GetEntByNum(scr_entref_t entref, int p0){PushValue(p0);callScriptFunction<void>(0x21, entref);}
static float* Scr_GetGroundPosition(scr_entref_t entref, float* p0, float p1, float p2, float p3){PushValue(p3);PushValue(p2);PushValue(p1);PushValue(p0);return callScriptFunction<float*>(0x35, entref);}
static entitynum Scr_GetLinkedNodes(scr_entref_t entref ){return callScriptFunction<entitynum>(0x1ff, entref);}
static int Scr_GetMaxAgents(scr_entref_t entref ){return callScriptFunction<int>(0x1ea, entref);}
static entitynum Scr_GetNode(scr_entref_t entref, script_string_s p0, script_string_s p1){PushValue(p1);PushValue(p0);return callScriptFunction<entitynum>(0x155, entref);}
static entitynum Scr_GetNodeint(scr_entref_t entref, script_string_s p0, script_string_s p1){PushValue(p1);PushValue(p0);return callScriptFunction<entitynum>(0x156, entref);}
static int Scr_GetNodeNumber(scr_entref_t entref ){return callScriptFunction<int>(0x8372, entref);}
static int Scr_GetNodeZone(scr_entref_t entref ){return callScriptFunction<int>(0x1f5, entref);}
static entitynum Scr_GetNodesInRadius(scr_entref_t entref, float* p0, float p1, float p2, float p3, script_string_s p4){PushValue(p4);PushValue(p3);PushValue(p2);PushValue(p1);PushValue(p0);return callScriptFunction<entitynum>(0x158, entref);}
static void Scr_GetNodesInRadiusSorted(scr_entref_t entref ){callScriptFunction<void>(0x159, entref);}
static entitynum Scr_GetNodesInTrigger(scr_entref_t entref, entity p0){PushValue(p0);return callScriptFunction<entitynum>(0x1ed, entref);}
static entitynum Scr_GetNodesOnPath(scr_entref_t entref, float* p0, float* p1){PushValue(p1);PushValue(p0);return callScriptFunction<entitynum>(0x1ef, entref);}
static float Scr_GetPathDist(scr_entref_t entref, float* p0, float* p1, float p2){PushValue(p2);PushValue(p1);PushValue(p0);return callScriptFunction<float>(0x1fe, entref);}
static void Scr_GetPlayerWeaponModel(scr_entref_t entref ){callScriptFunction<void>(0x814d, entref);}
static float* Scr_GetPredictedEntityPosition(scr_entref_t entref, entity p0, float p1){PushValue(p1);PushValue(p0);return callScriptFunction<float*>(0x23c, entref);}
static conststring Scr_GetSpawnint(scr_entref_t entref, script_string_s p0){PushValue(p0);return callScriptFunction<conststring>(0xe2, entref);}
static int Scr_GetSquadAssaultEnemyPrestige(scr_entref_t entref ){return callScriptFunction<int>(0x258, entref);}
static script_string_s Scr_GetSubStr(scr_entref_t entref, script_string_s p0, int p1, int p2){PushValue(p2);PushValue(p1);PushValue(p0);return callScriptFunction<script_string_s>(0x6e, entref);}
static int Scr_GetWeaponint(scr_entref_t entref ){return callScriptFunction<int>(0xc, entref);}
static script_string_s Scr_GetWeaponAttachmentDisplayNames(scr_entref_t entref, script_string_s p0){PushValue(p0);return callScriptFunction<script_string_s>(0x26, entref);}
static script_string_s Scr_GetWeaponAttachments(scr_entref_t entref, script_string_s p0){PushValue(p0);return callScriptFunction<script_string_s>(0x25, entref);}
static script_string_s Scr_GetWeaponBaseName(scr_entref_t entref, script_string_s p0){PushValue(p0);return callScriptFunction<script_string_s>(0x24, entref);}
static script_string_s Scr_GetWeaponCamoName(scr_entref_t entref, script_string_s p0){PushValue(p0);return callScriptFunction<script_string_s>(0x27, entref);}
static script_string_s Scr_GetWeaponDisplayName(scr_entref_t entref, script_string_s p0){PushValue(p0);return callScriptFunction<script_string_s>(0x23, entref);}
static int Scr_GetWeaponExplosionRadius(scr_entref_t entref, script_string_s p0){PushValue(p0);return callScriptFunction<int>(0x1f8, entref);}
static conststring Scr_GetWeaponFlashTagname(scr_entref_t entref, script_string_s p0){PushValue(p0);return callScriptFunction<conststring>(0x2703, entref);}
static conststring Scr_GetWeaponHideTags(scr_entref_t entref, script_string_s p0){PushValue(p0);return callScriptFunction<conststring>(0x29, entref);}
static script_string_s Scr_GetWeaponModel(scr_entref_t entref, script_string_s p0, int p1){PushValue(p1);PushValue(p0);return callScriptFunction<script_string_s>(0x22, entref);}
static script_string_s Scr_GetWeaponReticleName(scr_entref_t entref, script_string_s p0){PushValue(p0);return callScriptFunction<script_string_s>(0x28, entref);}
static void Scr_GetZoneCount(scr_entref_t entref ){callScriptFunction<void>(0x1f0, entref);}
static int Scr_GetZoneNearest(scr_entref_t entref, float* p0){PushValue(p0);return callScriptFunction<int>(0x1f1, entref);}
static entitynum Scr_GetZoneNodeForIndex(scr_entref_t entref, int p0){PushValue(p0);return callScriptFunction<entitynum>(0x1f7, entref);}
static entitynum Scr_GetZoneNodes(scr_entref_t entref, int p0, int p1){PushValue(p1);PushValue(p0);return callScriptFunction<entitynum>(0x1f2, entref);}
static entitynum Scr_GetZoneNodesByDist(scr_entref_t entref, int p0, float p1, int p2){PushValue(p2);PushValue(p1);PushValue(p0);return callScriptFunction<entitynum>(0x1f6, entref);}
static float* Scr_GetZoneOrigin(scr_entref_t entref, int p0){PushValue(p0);return callScriptFunction<float*>(0x1f4, entref);}
static int Scr_GetZonePath(scr_entref_t entref, int p0, int p1){PushValue(p1);PushValue(p0);return callScriptFunction<int>(0x1f3, entref);}
static float* Scr_InvertAngles(scr_entref_t entref, float* p0){PushValue(p0);return callScriptFunction<float*>(0x22a, entref);}
static int Scr_IsAgent(scr_entref_t entref, entity p0){PushValue(p0);return callScriptFunction<int>(0x1e9, entref);}
static int Scr_IsBot(scr_entref_t entref, entity p0){PushValue(p0);return callScriptFunction<int>(0x1e8, entref);}
static void Scr_IsEndStr(scr_entref_t entref, script_string_s p0, script_string_s p1){PushValue(p1);PushValue(p0);callScriptFunction<void>(0x6d, entref);}
static void Scr_IsSquadsMode(scr_entref_t entref ){callScriptFunction<void>(0x253, entref);}
static void Scr_IsSubStr(scr_entref_t entref, script_string_s p0, script_string_s p1){PushValue(p1);PushValue(p0);callScriptFunction<void>(0x6c, entref);}
static void Scr_KillFXOnTag(scr_entref_t entref, int p0, entity p1, script_string_s p2){PushValue(p2);PushValue(p1);PushValue(p0);callScriptFunction<void>(0x81, entref);}
static float Scr_Length(scr_entref_t entref, float* p0){PushValue(p0);return callScriptFunction<float>(0x58, entref);}
static float Scr_Length2D(scr_entref_t entref, float* p0){PushValue(p0);return callScriptFunction<float>(0x59, entref);}
static float Scr_Length2DSquared(scr_entref_t entref, float* p0){PushValue(p0);return callScriptFunction<float>(0x5b, entref);}
static float Scr_LengthSquared(scr_entref_t entref, float* p0){PushValue(p0);return callScriptFunction<float>(0x5a, entref);}
static int Scr_LoadFX(scr_entref_t entref, script_string_s p0){PushValue(p0);return callScriptFunction<int>(0x7d, entref);}
static int Scr_LookupSoundLength(scr_entref_t entref, script_string_s p0){PushValue(p0);return callScriptFunction<int>(0x220, entref);}
static void Scr_MagicBullet(scr_entref_t entref, script_string_s p0, float* p1, float* p2, entity p3){PushValue(p3);PushValue(p2);PushValue(p1);PushValue(p0);callScriptFunction<void>(0xc1, entref);}
static void Scr_MakeEntityNoMeleeTarget(scr_entref_t entref ){callScriptFunction<void>(0x837a, entref);}
static void Scr_MarkDangerousNodes(scr_entref_t entref, float* p0, float p1, int p2){PushValue(p2);PushValue(p1);PushValue(p0);callScriptFunction<void>(0x1f9, entref);}
static void Scr_MarkDangerousNodesInTrigger(scr_entref_t entref, entity p0, int p1){PushValue(p1);PushValue(p0);callScriptFunction<void>(0x1fa, entref);}
static int Scr_MissileCreateAttractorEnt(scr_entref_t entref, entity p0, float p1, float p2, entity p3){PushValue(p3);PushValue(p2);PushValue(p1);PushValue(p0);return callScriptFunction<int>(0x2704, entref);}
static int Scr_MissileCreateAttractorOrigin(scr_entref_t entref, float* p0, float p1, float p2, entity p3){PushValue(p3);PushValue(p2);PushValue(p1);PushValue(p0);return callScriptFunction<int>(0xe9, entref);}
static int Scr_MissileCreateRepulsorEnt(scr_entref_t entref, entity p0, float p1, float p2, entity p3){PushValue(p3);PushValue(p2);PushValue(p1);PushValue(p0);return callScriptFunction<int>(0xea, entref);}
static int Scr_MissileCreateRepulsorOrigin(scr_entref_t entref, float* p0, float p1, float p2, entity p3){PushValue(p3);PushValue(p2);PushValue(p1);PushValue(p0);return callScriptFunction<int>(0xeb, entref);}
static void Scr_MissileDeleteAttractor(scr_entref_t entref, int p0){PushValue(p0);callScriptFunction<void>(0xec, entref);}
static int Scr_NodeExposedToSky(scr_entref_t entref ){return callScriptFunction<int>(0x1fb, entref);}
static int Scr_NodeIsDisconnected(scr_entref_t entref ){return callScriptFunction<int>(0x8378, entref);}
static void Scr_NodesVisible(scr_entref_t entref, int p2){PushValue(p2);callScriptFunction<void>(0x1ee, entref);}
static void Scr_Objective_Add(scr_entref_t entref, int p0, script_string_s p1, float* p2){PushValue(p2);PushValue(p1);PushValue(p0);callScriptFunction<void>(0xcd, entref);}
static void Scr_Objective_Current(scr_entref_t entref, int p0){PushValue(p0);callScriptFunction<void>(0xd2, entref);}
static void Scr_Objective_Delete(scr_entref_t entref, int p0){PushValue(p0);callScriptFunction<void>(0xce, entref);}
static void Scr_Objective_Icon(scr_entref_t entref, int p0){PushValue(p0);callScriptFunction<void>(0xd0, entref);}
static void Scr_Objective_OnEntity(scr_entref_t entref, int p0, entity p1){PushValue(p1);PushValue(p0);callScriptFunction<void>(0xd3, entref);}
static void Scr_Objective_OnEntityWithRotation(scr_entref_t entref, int p0, entity p1){PushValue(p1);PushValue(p0);callScriptFunction<void>(0xd4, entref);}
static void Scr_Objective_Position(scr_entref_t entref, int p0, float* p1){PushValue(p1);PushValue(p0);callScriptFunction<void>(0xd1, entref);}
static void Scr_Objective_State(scr_entref_t entref, int p0, script_string_s p1){PushValue(p1);PushValue(p0);callScriptFunction<void>(0xcf, entref);}
static void Scr_PhysicsExplosionCylinder(scr_entref_t entref, float* p0, float p1, float p2, float p3){PushValue(p3);PushValue(p2);PushValue(p1);PushValue(p0);callScriptFunction<void>(0x87, entref);}
static void Scr_PhysicsExplosionSphere(scr_entref_t entref, float* p0, float p1, float p2, float p3){PushValue(p3);PushValue(p2);PushValue(p1);PushValue(p0);callScriptFunction<void>(0x86, entref);}
static void Scr_PhysicsRadiusJitter(scr_entref_t entref, float* p0, float p1, float p2, float p3, float p4){PushValue(p4);PushValue(p3);PushValue(p2);PushValue(p1);PushValue(p0);callScriptFunction<void>(0x89, entref);}
static void Scr_PhysicsRadiusJolt(scr_entref_t entref, float* p0, float p1, float p2, float* p3){PushValue(p3);PushValue(p2);PushValue(p1);PushValue(p0);callScriptFunction<void>(0x88, entref);}
static float* Scr_PhysicsTrace(scr_entref_t entref, float* p0, float* p1){PushValue(p1);PushValue(p0);return callScriptFunction<float*>(0x33, entref);}
static void Scr_PlayFX(scr_entref_t entref, int p0, float* p1, float* p2, float* p3){PushValue(p3);PushValue(p2);PushValue(p1);PushValue(p0);callScriptFunction<void>(0x7e, entref);}
static void Scr_PlayFXOnTag(scr_entref_t entref, int p0, entity p1, script_string_s p2){PushValue(p2);PushValue(p1);PushValue(p0);callScriptFunction<void>(0x7f, entref);}
static void Scr_PlayFXOnTagForClients(scr_entref_t entref, int p0, entity p1, script_string_s p2, entity p3){PushValue(p3);PushValue(p2);PushValue(p1);PushValue(p0);callScriptFunction<void>(0x85, entref);}
static void Scr_PlayLoopedFX(scr_entref_t entref, int p0, float p1, float* p2, float p3, float* p4, float* p5){PushValue(p5);PushValue(p4);PushValue(p3);PushValue(p2);PushValue(p1);PushValue(p0);callScriptFunction<void>(0x82, entref);}
static void Scr_PlayRumbleLoopOnPosition(scr_entref_t entref ){callScriptFunction<void>(0xab, entref);}
static void Scr_PlayRumbleOnPosition(scr_entref_t entref ){callScriptFunction<void>(0xaa, entref);}
static float* Scr_PlayerPhysicsTrace(scr_entref_t entref, float* p0, float* p1){PushValue(p1);PushValue(p0);return callScriptFunction<float*>(0x34, entref);}
static void Scr_PlayerSetExponentialFog(scr_entref_t entref ){callScriptFunction<void>(0x80ad, entref);}
static void Scr_PrecacheItem(scr_entref_t entref, script_string_s p0){PushValue(p0);callScriptFunction<void>(0x76, entref);}
static void Scr_PrecacheLeaderboards(scr_entref_t entref, script_string_s p0){PushValue(p0);callScriptFunction<void>(0x7c, entref);}
static void Scr_PrecacheMaterial(scr_entref_t entref, script_string_s p0){PushValue(p0);callScriptFunction<void>(0x77, entref);}
static void Scr_PrecacheModel(scr_entref_t entref, script_string_s p0){PushValue(p0);callScriptFunction<void>(0x74, entref);}
static void Scr_PrecacheRumble(scr_entref_t entref, script_string_s p0){PushValue(p0);callScriptFunction<void>(0x7a, entref);}
static void Scr_PrecacheShellShock(scr_entref_t entref, script_string_s p0){PushValue(p0);callScriptFunction<void>(0x75, entref);}
static void Scr_PrecacheString(scr_entref_t entref, script_string_s p0){PushValue(p0);callScriptFunction<void>(0x78, entref);}
static void Scr_Print(scr_entref_t entref ){callScriptFunction<void>(0xffff, entref);}
static void Scr_PrintLn(scr_entref_t entref ){callScriptFunction<void>(0xffff, entref);}
static float Scr_RandomFloat(scr_entref_t entref, float p0){PushValue(p0);return callScriptFunction<float>(0x3c, entref);}
static float Scr_RandomFloatRange(scr_entref_t entref, float p0, float p1){PushValue(p1);PushValue(p0);return callScriptFunction<float>(0x3e, entref);}
static int Scr_RandomInt(scr_entref_t entref, int p0){PushValue(p0);return callScriptFunction<int>(0x3b, entref);}
static int Scr_RandomIntRange(scr_entref_t entref, int p0, int p1){PushValue(p1);PushValue(p0);return callScriptFunction<int>(0x3d, entref);}
static void Scr_ResetSunLight(scr_entref_t entref ){callScriptFunction<void>(0x1ac, entref);}
static void Scr_ResetTimeout(scr_entref_t entref ){callScriptFunction<void>(0xf1, entref);}
static float* Scr_RotatePointAroundVector(scr_entref_t entref, float* p0, float* p1, float p2){PushValue(p2);PushValue(p1);PushValue(p0);return callScriptFunction<float*>(0x6b, entref);}
static float* Scr_RotateVector(scr_entref_t entref, float* p0, float* p1){PushValue(p1);PushValue(p0);return callScriptFunction<float*>(0x6a, entref);}
static float* Scr_RotateVectorInverted(scr_entref_t entref, float* p0, float* p1){PushValue(p1);PushValue(p0);return callScriptFunction<float*>(0x22b, entref);}
static void Scr_SetBlurForPlayer(scr_entref_t entref, float p0, float p1){PushValue(p1);PushValue(p0);callScriptFunction<void>(0x814c, entref);}
static void Scr_SetExponentialFog(scr_entref_t entref ){callScriptFunction<void>(0x8a, entref);}
static void Scr_SetFXKillDefOnDelete(scr_entref_t entref ){callScriptFunction<void>(0x8409, entref);}
static void Scr_SetLevelDopplerPreset(scr_entref_t entref, script_string_s p0){PushValue(p0);callScriptFunction<void>(0x223, entref);}
static void Scr_SetPathnodeField(scr_entref_t entref ){callScriptFunction<void>(0xffff, entref);}
static void Scr_SetSunLight(scr_entref_t entref, float p0, float p1, float p2){PushValue(p2);PushValue(p1);PushValue(p0);callScriptFunction<void>(0x1ab, entref);}
static void Scr_SightTracePassed(scr_entref_t entref, float* p1, int p2, entity p3, entity p4, float* p2047){PushValue(p2047);PushValue(p4);PushValue(p3);PushValue(p2);PushValue(p1);callScriptFunction<void>(0x32, entref);}
static void Scr_SpawnFX(scr_entref_t entref, int p0, float* p1, float* p2, float* p3){PushValue(p3);PushValue(p2);PushValue(p1);PushValue(p0);callScriptFunction<void>(0x83, entref);}
static void Scr_SpawnFXForClient(scr_entref_t entref, int p0, float* p1, entity p2, float* p3, float* p4){PushValue(p4);PushValue(p3);PushValue(p2);PushValue(p1);PushValue(p0);callScriptFunction<void>(0x24b, entref);}
static void Scr_StopAllRumbles(scr_entref_t entref ){callScriptFunction<void>(0xac, entref);}
static void Scr_StopFXOnTag(scr_entref_t entref, int p0, entity p1, script_string_s p2){PushValue(p2);PushValue(p1);PushValue(p0);callScriptFunction<void>(0x80, entref);}
static int Scr_StrICmp(scr_entref_t entref, script_string_s p0, script_string_s p1){PushValue(p1);PushValue(p0);return callScriptFunction<int>(0x71, entref);}
static script_string_s Scr_StrTok(scr_entref_t entref, script_string_s p0, script_string_s p1){PushValue(p1);PushValue(p0);return callScriptFunction<script_string_s>(0x70, entref);}
static void Scr_TableExists(scr_entref_t entref, script_string_s p0){PushValue(p0);callScriptFunction<void>(0xbf, entref);}
static script_string_s Scr_TableLookup(scr_entref_t entref, script_string_s p0, int p1, script_string_s p2, int p3){PushValue(p3);PushValue(p2);PushValue(p1);PushValue(p0);return callScriptFunction<script_string_s>(0xba, entref);}
static void Scr_TableLookupIString(scr_entref_t entref, script_string_s p0, int p1, script_string_s p2, int p3){PushValue(p3);PushValue(p2);PushValue(p1);PushValue(p0);callScriptFunction<void>(0xbc, entref);}
static script_string_s Scr_TableLookupIStringByRow(scr_entref_t entref, script_string_s p0, int p1, int p2){PushValue(p2);PushValue(p1);PushValue(p0);return callScriptFunction<script_string_s>(0xbb, entref);}
static int Scr_TableLookupRowNum(scr_entref_t entref, script_string_s p0, int p1, script_string_s p2){PushValue(p2);PushValue(p1);PushValue(p0);return callScriptFunction<int>(0xbe, entref);}
static script_string_s Scr_ToLower(scr_entref_t entref, script_string_s p0){PushValue(p0);return callScriptFunction<script_string_s>(0x6f, entref);}
static float Scr_TrajectoryCalculateExitAngle(scr_entref_t entref, float p0, float p1, float p2, float p3){PushValue(p3);PushValue(p2);PushValue(p1);PushValue(p0);return callScriptFunction<float>(0x215, entref);}
static float* Scr_TrajectoryCalculateInitialVelocity(scr_entref_t entref, float* p0, float* p1, float* p2, float p3){PushValue(p3);PushValue(p2);PushValue(p1);PushValue(p0);return callScriptFunction<float*>(0x213, entref);}
static float Scr_TrajectoryCalculateMinimumVelocity(scr_entref_t entref, float* p0, float* p1, float p2){PushValue(p2);PushValue(p1);PushValue(p0);return callScriptFunction<float>(0x214, entref);}
static void Scr_TrajectoryCanAttemptAccurateJump(scr_entref_t entref, float* p0, float* p1, float* p2, float* p3, float p4, float p5){PushValue(p5);PushValue(p4);PushValue(p3);PushValue(p2);PushValue(p1);PushValue(p0);callScriptFunction<void>(0x218, entref);}
static float Scr_TrajectoryComputeDeltaHeightAtTime(scr_entref_t entref, float p0, float p1, float p2){PushValue(p2);PushValue(p1);PushValue(p0);return callScriptFunction<float>(0x217, entref);}
static float Scr_TrajectoryEstimateDesiredInAirTime(scr_entref_t entref, float* p0, float* p1, float p2, float p3){PushValue(p3);PushValue(p2);PushValue(p1);PushValue(p0);return callScriptFunction<float>(0x216, entref);}
static float* Scr_TransformMove(scr_entref_t entref, float* p0, float* p1, float* p2, float* p3, float* p4, float* p5){PushValue(p5);PushValue(p4);PushValue(p3);PushValue(p2);PushValue(p1);PushValue(p0);return callScriptFunction<float*>(0x69, entref);}
static void Scr_TriggerFX(scr_entref_t entref, entity p0, float p1){PushValue(p1);PushValue(p0);callScriptFunction<void>(0x84, entref);}
static float* Scr_VectorCross(scr_entref_t entref, float* p0, float* p1){PushValue(p1);PushValue(p0);return callScriptFunction<float*>(0x5e, entref);}
static float Scr_VectorDot(scr_entref_t entref, float* p0, float* p1){PushValue(p1);PushValue(p0);return callScriptFunction<float>(0x5d, entref);}
static float* Scr_VectorLerp(scr_entref_t entref, float* p0, float* p1, float p2){PushValue(p2);PushValue(p1);PushValue(p0);return callScriptFunction<float*>(0x62, entref);}
static float* Scr_VectorNormalize(scr_entref_t entref, float* p0){PushValue(p0);return callScriptFunction<float*>(0x5f, entref);}
static float* Scr_VectorToAngles(scr_entref_t entref, float* p0){PushValue(p0);return callScriptFunction<float*>(0x60, entref);}
static float Scr_VectorToYaw(scr_entref_t entref, float* p0){PushValue(p0);return callScriptFunction<float>(0x61, entref);}
static void Scr_VisionSetMissileCamForPlayer(scr_entref_t entref ){callScriptFunction<void>(0x8149, entref);}
static void Scr_VisionSetMissilecam(scr_entref_t entref, script_string_s p0, float p1){PushValue(p1);PushValue(p0);callScriptFunction<void>(0x136, entref);}
static void Scr_VisionSetNaked(scr_entref_t entref, script_string_s p0, float p1){PushValue(p1);PushValue(p0);callScriptFunction<void>(0x134, entref);}
static void Scr_VisionSetNakedForPlayer(scr_entref_t entref, script_string_s p0, float p1){PushValue(p1);PushValue(p0);callScriptFunction<void>(0x8147, entref);}
static void Scr_VisionSetNight(scr_entref_t entref, script_string_s p0, float p1){PushValue(p1);PushValue(p0);callScriptFunction<void>(0x135, entref);}
static void Scr_VisionSetNightForPlayer(scr_entref_t entref ){callScriptFunction<void>(0x8148, entref);}
static void Scr_VisionSetPain(scr_entref_t entref, script_string_s p0, float p1){PushValue(p1);PushValue(p0);callScriptFunction<void>(0x138, entref);}
static void Scr_VisionSetPainForPlayer(scr_entref_t entref ){callScriptFunction<void>(0x814b, entref);}
static void Scr_VisionSetPostApply(scr_entref_t entref, script_string_s p0, float p1){PushValue(p1);PushValue(p0);callScriptFunction<void>(0x255, entref);}
static void Scr_VisionSetPostApplyForPlayer(scr_entref_t entref ){callScriptFunction<void>(0x841c, entref);}
static void Scr_VisionSetStage(scr_entref_t entref, int p0, float p1){PushValue(p1);PushValue(p0);callScriptFunction<void>(0x83b7, entref);}
static void Scr_VisionSetThermal(scr_entref_t entref, script_string_s p0, float p1){PushValue(p1);PushValue(p0);callScriptFunction<void>(0x137, entref);}
static void Scr_VisionSetThermalForPlayer(scr_entref_t entref ){callScriptFunction<void>(0x814a, entref);}
static void Scr_VisionSyncWithPlayer(scr_entref_t entref, entity p0){PushValue(p0);callScriptFunction<void>(0x815c, entref);}
static void ScriptEntCmd_AddPitch(scr_entref_t entref, float p0){PushValue(p0);callScriptFunction<void>(0x8171, entref);}
static void ScriptEntCmd_AddRoll(scr_entref_t entref ){callScriptFunction<void>(0x8173, entref);}
static void ScriptEntCmd_AddYaw(scr_entref_t entref ){callScriptFunction<void>(0x8172, entref);}
static void ScriptEntCmd_CloneBrushModelToScriptModel(scr_entref_t entref, entity p0){PushValue(p0);callScriptFunction<void>(0x817d, entref);}
static void ScriptEntCmd_GravityMove(scr_entref_t entref, float* p0, float p1){PushValue(p1);PushValue(p0);callScriptFunction<void>(0x816a, entref);}
static void ScriptEntCmd_MoveSlide(scr_entref_t entref, float* p0, float p1, float* p2){PushValue(p2);PushValue(p1);PushValue(p0);callScriptFunction<void>(0x816b, entref);}
static void ScriptEntCmd_MoveTo(scr_entref_t entref, float* p0){PushValue(p0);callScriptFunction<void>(0x8166, entref);}
static void ScriptEntCmd_MoveX(scr_entref_t entref, float p0){PushValue(p0);callScriptFunction<void>(0x8167, entref);}
static void ScriptEntCmd_MoveY(scr_entref_t entref ){callScriptFunction<void>(0x8168, entref);}
static void ScriptEntCmd_MoveZ(scr_entref_t entref ){callScriptFunction<void>(0x8169, entref);}
static void ScriptEntCmd_NotSolid(scr_entref_t entref ){callScriptFunction<void>(0x8177, entref);}
static float ScriptEntCmd_PhysicsGetAngSpeed(scr_entref_t entref ){return callScriptFunction<float>(0x83e4, entref);}
static float* ScriptEntCmd_PhysicsGetAngVel(scr_entref_t entref ){return callScriptFunction<float*>(0x83e3, entref);}
static float ScriptEntCmd_PhysicsGetLinSpeed(scr_entref_t entref ){return callScriptFunction<float>(0x83e2, entref);}
static float* ScriptEntCmd_PhysicsGetLinVel(scr_entref_t entref ){return callScriptFunction<float*>(0x83e1, entref);}
static void ScriptEntCmd_PhysicsLaunchClient(scr_entref_t entref, float* p0, float* p1){PushValue(p1);PushValue(p0);callScriptFunction<void>(0x817a, entref);}
static void ScriptEntCmd_PhysicsLaunchServer(scr_entref_t entref, float* p0, float* p1, float p2, float p3){PushValue(p3);PushValue(p2);PushValue(p1);PushValue(p0);callScriptFunction<void>(0x817b, entref);}
static void ScriptEntCmd_PhysicsLaunchServerItem(scr_entref_t entref, float* p0, float* p1){PushValue(p1);PushValue(p0);callScriptFunction<void>(0x817c, entref);}
static void ScriptEntCmd_PhysicsSetMaxAngVel(scr_entref_t entref, float p0){PushValue(p0);callScriptFunction<void>(0x83e0, entref);}
static void ScriptEntCmd_PhysicsSetMaxLinVel(scr_entref_t entref, float p0){PushValue(p0);callScriptFunction<void>(0x8168, entref);}
static void ScriptEntCmd_RotateBy(scr_entref_t entref ){callScriptFunction<void>(0x83ac, entref);}
static void ScriptEntCmd_RotatePitch(scr_entref_t entref, float p0){PushValue(p0);callScriptFunction<void>(0x816e, entref);}
static void ScriptEntCmd_RotateRoll(scr_entref_t entref ){callScriptFunction<void>(0x8170, entref);}
static void ScriptEntCmd_RotateTo(scr_entref_t entref ){callScriptFunction<void>(0x816d, entref);}
static void ScriptEntCmd_RotateVelocity(scr_entref_t entref, float* p0){PushValue(p0);callScriptFunction<void>(0x8175, entref);}
static void ScriptEntCmd_RotateYaw(scr_entref_t entref ){callScriptFunction<void>(0x816f, entref);}
static void ScriptEntCmd_ScriptModelClearAnim(scr_entref_t entref ){callScriptFunction<void>(0x817f, entref);}
static void ScriptEntCmd_ScriptModelPlayAnim(scr_entref_t entref ){callScriptFunction<void>(0x817e, entref);}
static void ScriptEntCmd_ScriptModelPlayAnimDeltaMotion(scr_entref_t entref, script_string_s p0){PushValue(p0);callScriptFunction<void>(0x8180, entref);}
static void ScriptEntCmd_SetCanDamage(scr_entref_t entref, int p0){PushValue(p0);callScriptFunction<void>(0x8178, entref);}
static void ScriptEntCmd_SetCanRadiusDamage(scr_entref_t entref, int p0){PushValue(p0);callScriptFunction<void>(0x8179, entref);}
static void ScriptEntCmd_Solid(scr_entref_t entref ){callScriptFunction<void>(0x8176, entref);}
static void ScriptEntCmd_StopMoveSlide(scr_entref_t entref ){callScriptFunction<void>(0x816c, entref);}
static void ScriptEntCmd_Vibrate(scr_entref_t entref, float* p0, float p1, float p2, float p3){PushValue(p3);PushValue(p2);PushValue(p1);PushValue(p0);callScriptFunction<void>(0x8174, entref);}
static void SentientCmd_CreateThreatBiasGroup(scr_entref_t entref, script_string_s p0){PushValue(p0);callScriptFunction<void>(0x145, entref);}
static void SentientCmd_FreeEntitySentient(scr_entref_t entref ){callScriptFunction<void>(0x824b, entref);}
static float SentientCmd_GetClosestEnemySqDist(scr_entref_t entref, float* p0, float p1){PushValue(p1);PushValue(p0);return callScriptFunction<float>(0x8247, entref);}
static void SentientCmd_GetEnemySqDist(scr_entref_t entref ){callScriptFunction<void>(0x8246, entref);}
static int SentientCmd_GetThreatBias(scr_entref_t entref, script_string_s p0, script_string_s p1){PushValue(p1);PushValue(p0);return callScriptFunction<int>(0x147, entref);}
static script_string_s SentientCmd_GetThreatBiasGroup(scr_entref_t entref ){return callScriptFunction<script_string_s>(0x8249, entref);}
static int SentientCmd_IsEnemyTeam(scr_entref_t entref, script_string_s p0, script_string_s p1){PushValue(p1);PushValue(p0);return callScriptFunction<int>(0x14b, entref);}
static int SentientCmd_LastKnownPos(scr_entref_t entref, entity p0){PushValue(p0);return callScriptFunction<int>(0x81f5, entref);}
static int SentientCmd_LastKnownTime(scr_entref_t entref, entity p0){PushValue(p0);return callScriptFunction<int>(0x81f4, entref);}
static void SentientCmd_MakeEntitySentient(scr_entref_t entref, script_string_s p0, int p1){PushValue(p1);PushValue(p0);callScriptFunction<void>(0x824a, entref);}
static void SentientCmd_SetIgnoreFoliageSightingMe(scr_entref_t entref, int p0){PushValue(p0);callScriptFunction<void>(0x8421, entref);}
static void SentientCmd_SetIgnoreMeGroup(scr_entref_t entref, script_string_s p0, script_string_s p1){PushValue(p1);PushValue(p0);callScriptFunction<void>(0x14a, entref);}
static void SentientCmd_SetThreatBias(scr_entref_t entref, script_string_s p0, script_string_s p1, int p2){PushValue(p2);PushValue(p1);PushValue(p0);callScriptFunction<void>(0x148, entref);}
static void SentientCmd_SetThreatBiasAgainstAll(scr_entref_t entref, script_string_s p0, int p1){PushValue(p1);PushValue(p0);callScriptFunction<void>(0x149, entref);}
static void SentientCmd_SetThreatBiasGroup(scr_entref_t entref, script_string_s p0){PushValue(p0);callScriptFunction<void>(0x8248, entref);}
static void SentientCmd_ThreatBiasGroupExists(scr_entref_t entref, script_string_s p0){PushValue(p0);callScriptFunction<void>(0x146, entref);}
static void VehCmd_AttachPath(scr_entref_t entref ){callScriptFunction<void>(0x8182, entref);}
static int VehCmd_CanTurretTargetPoint(scr_entref_t entref, float* p0, int p1, entity p2){PushValue(p2);PushValue(p1);PushValue(p0);return callScriptFunction<int>(0x81ae, entref);}
static void VehCmd_ClearGoalYaw(scr_entref_t entref ){callScriptFunction<void>(0x81a7, entref);}
static void VehCmd_ClearLookAtEnt(scr_entref_t entref ){callScriptFunction<void>(0x81b0, entref);}
static void VehCmd_ClearTargetYaw(scr_entref_t entref ){callScriptFunction<void>(0x81a9, entref);}
static void VehCmd_ClearTurretTargetEnt(scr_entref_t entref ){callScriptFunction<void>(0x81ad, entref);}
static void VehCmd_DoSpawn(scr_entref_t entref, script_string_s p0, entity p1){PushValue(p1);PushValue(p0);callScriptFunction<void>(0x81b7, entref);}
static void VehCmd_FinishDamage(scr_entref_t entref, entity p0, entity p1, int p2, int p3, script_string_s p5, float* p6, float* p7, script_string_s p8, int p9, int p10, script_string_s p11){PushValue(p11);PushValue(p10);PushValue(p9);PushValue(p8);PushValue(p7);PushValue(p6);PushValue(p5);PushValue(p3);PushValue(p2);PushValue(p1);PushValue(p0);callScriptFunction<void>(0x8187, entref);}
static script_string_s VehCmd_FireWeapon(scr_entref_t entref, entity p1, float* p2, float p3){PushValue(p3);PushValue(p2);PushValue(p1);return callScriptFunction<script_string_s>(0x81b2, entref);}
static void VehCmd_FreeVehicle(scr_entref_t entref ){callScriptFunction<void>(0x81bf, entref);}
static float* VehCmd_GetAttachPos(scr_entref_t entref ){return callScriptFunction<float*>(0x8183, entref);}
static float* VehCmd_GetBodyVelocity(scr_entref_t entref ){return callScriptFunction<float*>(0x818d, entref);}
static float VehCmd_GetGoalSpeedMPH(scr_entref_t entref ){return callScriptFunction<float>(0x8193, entref);}
static float VehCmd_GetSpeed(scr_entref_t entref ){return callScriptFunction<float>(0x818b, entref);}
static float VehCmd_GetSteering(scr_entref_t entref ){return callScriptFunction<float>(0x818e, entref);}
static float VehCmd_GetThrottle(scr_entref_t entref ){return callScriptFunction<float>(0x818f, entref);}
static void VehCmd_GetVehicleOwner(scr_entref_t entref ){callScriptFunction<void>(0x81a1, entref);}
static float* VehCmd_GetVelocity(scr_entref_t entref ){return callScriptFunction<float*>(0x818c, entref);}
static script_string_s VehCmd_GetWheelSurface(scr_entref_t entref, script_string_s p0){PushValue(p0);return callScriptFunction<script_string_s>(0x81a0, entref);}
static void VehCmd_HeliSetGoal(scr_entref_t entref, float* p0, float p1, float p2, float p3, int p4, float p6, float p7, int p8, int p9, int p10, int p11, int p12){PushValue(p12);PushValue(p11);PushValue(p10);PushValue(p9);PushValue(p8);PushValue(p7);PushValue(p6);PushValue(p4);PushValue(p3);PushValue(p2);PushValue(p1);PushValue(p0);callScriptFunction<void>(0x81aa, entref);}
static void VehCmd_IsPhysVeh(scr_entref_t entref ){callScriptFunction<void>(0x81b8, entref);}
static int VehCmd_IsTurretReady(scr_entref_t entref ){return callScriptFunction<int>(0x81b5, entref);}
static void VehCmd_JoltBody(scr_entref_t entref, float* p0, float p1, float p2, float p3){PushValue(p3);PushValue(p2);PushValue(p1);PushValue(p0);callScriptFunction<void>(0x819e, entref);}
static void VehCmd_NearGoalNotifyDist(scr_entref_t entref, float p0){PushValue(p0);callScriptFunction<void>(0x81a4, entref);}
static void VehCmd_ResumeSpeed(scr_entref_t entref, float p0){PushValue(p0);callScriptFunction<void>(0x8196, entref);}
static void VehCmd_RotateYaw(scr_entref_t entref, float p0, float p1){PushValue(p1);PushValue(p0);callScriptFunction<void>(0x818a, entref);}
static void VehCmd_SetAcceleration(scr_entref_t entref, float p0){PushValue(p0);callScriptFunction<void>(0x8194, entref);}
static void VehCmd_SetAirResitance(scr_entref_t entref, float p0){PushValue(p0);callScriptFunction<void>(0x819a, entref);}
static void VehCmd_SetDeceleration(scr_entref_t entref, float p0){PushValue(p0);callScriptFunction<void>(0x8195, entref);}
static void VehCmd_SetDroneGoalPos(scr_entref_t entref, entity p0, float* p1){PushValue(p1);PushValue(p0);callScriptFunction<void>(0x83c6, entref);}
static void VehCmd_SetGoalPos(scr_entref_t entref, float* p0, int p1){PushValue(p1);PushValue(p0);callScriptFunction<void>(0x81a5, entref);}
static void VehCmd_SetGoalYaw(scr_entref_t entref, float p0){PushValue(p0);callScriptFunction<void>(0x81a6, entref);}
static void VehCmd_SetHoverParams(scr_entref_t entref, float p0, float p1, float p2){PushValue(p2);PushValue(p1);PushValue(p0);callScriptFunction<void>(0x819d, entref);}
static void VehCmd_SetJitterParams(scr_entref_t entref, float* p0, float p1, float p2){PushValue(p2);PushValue(p1);PushValue(p0);callScriptFunction<void>(0x819c, entref);}
static void VehCmd_SetLookAtEnt(scr_entref_t entref, entity p0){PushValue(p0);callScriptFunction<void>(0x81af, entref);}
static void VehCmd_SetMaxPitchRoll(scr_entref_t entref, float p0, float p1){PushValue(p1);PushValue(p0);callScriptFunction<void>(0x8199, entref);}
static void VehCmd_SetSpeed(scr_entref_t entref ){callScriptFunction<void>(0x8188, entref);}
static void VehCmd_SetSpeedImmediate(scr_entref_t entref ){callScriptFunction<void>(0x8189, entref);}
static void VehCmd_SetSwitchNode(scr_entref_t entref ){callScriptFunction<void>(0x8185, entref);}
static void VehCmd_SetTargetYaw(scr_entref_t entref, float p0){PushValue(p0);callScriptFunction<void>(0x81a8, entref);}
static void VehCmd_SetTurningAbility(scr_entref_t entref, float p0){PushValue(p0);callScriptFunction<void>(0x819b, entref);}
static void VehCmd_SetTurretTargetEnt(scr_entref_t entref, entity p0, float* p1){PushValue(p1);PushValue(p0);callScriptFunction<void>(0x81ac, entref);}
static void VehCmd_SetTurretTargetVec(scr_entref_t entref, float* p0){PushValue(p0);callScriptFunction<void>(0x81ab, entref);}
static void VehCmd_SetVehicleLookatText(scr_entref_t entref, script_string_s p0){PushValue(p0);callScriptFunction<void>(0x81a2, entref);}
static void VehCmd_SetVehicleTeam(scr_entref_t entref, script_string_s p0){PushValue(p0);callScriptFunction<void>(0x81a3, entref);}
static void VehCmd_SetWaitSpeed(scr_entref_t entref, float p0){PushValue(p0);callScriptFunction<void>(0x8186, entref);}
static void VehCmd_SetWeapon(scr_entref_t entref, script_string_s p0){PushValue(p0);callScriptFunction<void>(0x81b1, entref);}
static void VehCmd_SetYawSpeed(scr_entref_t entref, float p0, float p1, float p2, float p3){PushValue(p3);PushValue(p2);PushValue(p1);PushValue(p0);callScriptFunction<void>(0x8197, entref);}
static void VehCmd_SetYawSpeedByName(scr_entref_t entref, script_string_s p0){PushValue(p0);callScriptFunction<void>(0x8198, entref);}
static void VehCmd_StartPath(scr_entref_t entref ){callScriptFunction<void>(0x8184, entref);}
static void VehCmd_Teleport(scr_entref_t entref, float* p0, float* p1){PushValue(p1);PushValue(p0);callScriptFunction<void>(0x8181, entref);}
static void VehCmd_TurnEngineOff(scr_entref_t entref ){callScriptFunction<void>(0x8190, entref);}
static void VehCmd_TurnEngineOn(scr_entref_t entref ){callScriptFunction<void>(0x8191, entref);}
static void VehCmd_VehicleDriveTo(scr_entref_t entref, float* p0, float p1){PushValue(p1);PushValue(p0);callScriptFunction<void>(0x81b6, entref);}
static void VehCmd_VehicleTurretControlOff(scr_entref_t entref, entity p0){PushValue(p0);callScriptFunction<void>(0x81b4, entref);}
static void VehCmd_VehicleTurretControlOn(scr_entref_t entref, entity p0){PushValue(p0);callScriptFunction<void>(0x81b3, entref);}
static entitynum VehPathCmd_GetAllNodes(scr_entref_t entref ){return callScriptFunction<entitynum>(0xa4, entref);}
static entitynum VehPathCmd_GetNode(scr_entref_t entref, script_string_s p0, script_string_s p1){PushValue(p1);PushValue(p0);return callScriptFunction<entitynum>(0xa2, entref);}
static entitynum VehPathCmd_GetNodeint(scr_entref_t entref, script_string_s p0, script_string_s p1){PushValue(p1);PushValue(p0);return callScriptFunction<entitynum>(0xa3, entref);}
static void VehPhysCmd_Crash(scr_entref_t entref, int p0){PushValue(p0);callScriptFunction<void>(0x81b9, entref);}
static void VehPhysCmd_DisableCrashing(scr_entref_t entref ){callScriptFunction<void>(0x81bb, entref);}
static void VehPhysCmd_EnableCrashing(scr_entref_t entref ){callScriptFunction<void>(0x81bc, entref);}
static void VehPhysCmd_Launch(scr_entref_t entref, float* p0, float p1, float* p2){PushValue(p2);PushValue(p1);PushValue(p0);callScriptFunction<void>(0x81ba, entref);}
static void VehPhysCmd_SetConveyorBelt(scr_entref_t entref, float p0, float p1){PushValue(p1);PushValue(p0);callScriptFunction<void>(0x81be, entref);}
static void VehPhysCmd_SetSpeed(scr_entref_t entref, float p0){PushValue(p0);callScriptFunction<void>(0x81bd, entref);}
static int VehicleScript_GetActiveCount(scr_entref_t entref ){return callScriptFunction<int>(0xa5, entref);}
static int VehicleScript_Getint(scr_entref_t entref ){return callScriptFunction<int>(0xa8, entref);}
static int VehicleScript_GetSpawnerint(scr_entref_t entref ){return callScriptFunction<int>(0xa9, entref);}
static void VehicleScript_Precache(scr_entref_t entref, script_string_s p0){PushValue(p0);callScriptFunction<void>(0xa6, entref);}
static void VehicleScript_Spawn(scr_entref_t entref, script_string_s p0, script_string_s p1, script_string_s p2, float* p3, float* p4, entity p5){PushValue(p5);PushValue(p4);PushValue(p3);PushValue(p2);PushValue(p1);PushValue(p0);callScriptFunction<void>(0xa7, entref);}
static void assertexCmd(scr_entref_t entref, int p0){PushValue(p0);callScriptFunction<void>(0x7, entref);}
//static void everyVisitCallback(scr_entref_t entref ){callScriptFunction<void>(0xffff, entref);}
//static void everyVisitCallback(scr_entref_t entref ){callScriptFunction<void>(0x801e, entref);}
//static void everyVisitCallback_0(scr_entref_t entref ){callScriptFunction<void>(0x831d, entref);}
static void iclientprintln(scr_entref_t entref, script_string_s p0){PushValue(p0);callScriptFunction<void>(0x80c5, entref);}
static void iclientprintlnbold(scr_entref_t entref, script_string_s p0){PushValue(p0);callScriptFunction<void>(0x80c6, entref);}
static void iprintln(scr_entref_t entref, script_string_s p0){PushValue(p0);callScriptFunction<void>(0xdd, entref);}
static void iprintlnbold(scr_entref_t entref, script_string_s p0){PushValue(p0);callScriptFunction<void>(0xde, entref);}
static void j_Scr_ErrorInternal_0(scr_entref_t entref ){callScriptFunction<void>(0x8056, entref);}
static void j_Scr_ErrorInternal_1(scr_entref_t entref ){callScriptFunction<void>(0x83af, entref);}
static void j_Scr_ErrorInternal_10(scr_entref_t entref ){callScriptFunction<void>(0x249, entref);}
static void j_Scr_ErrorInternal_2(scr_entref_t entref ){callScriptFunction<void>(0x83c5, entref);}
static void j_Scr_ErrorInternal_3(scr_entref_t entref ){callScriptFunction<void>(0x8075, entref);}
static void j_Scr_ErrorInternal_4(scr_entref_t entref ){callScriptFunction<void>(0x8076, entref);}
static void j_Scr_ErrorInternal_5(scr_entref_t entref ){callScriptFunction<void>(0x8077, entref);}
static void j_Scr_ErrorInternal_6(scr_entref_t entref ){callScriptFunction<void>(0x80a1, entref);}
static void j_Scr_ErrorInternal_7(scr_entref_t entref ){callScriptFunction<void>(0x80a2, entref);}
static void j_Scr_ErrorInternal_8(scr_entref_t entref ){callScriptFunction<void>(0x833d, entref);}
static void j_Scr_ErrorInternal_9(scr_entref_t entref ){callScriptFunction<void>(0x2f, entref);}
static void nullsub_105(scr_entref_t entref ){callScriptFunction<void>(0x805d, entref);}
static void nullsub_111(scr_entref_t entref ){callScriptFunction<void>(0x80d5, entref);}
static void nullsub_112(scr_entref_t entref ){callScriptFunction<void>(0x80d6, entref);}
static void nullsub_113(scr_entref_t entref ){callScriptFunction<void>(0x80d8, entref);}
static void nullsub_114(scr_entref_t entref ){callScriptFunction<void>(0x80d9, entref);}
static void nullsub_115(scr_entref_t entref ){callScriptFunction<void>(0x80da, entref);}
static void nullsub_116(scr_entref_t entref ){callScriptFunction<void>(0x8124, entref);}
static void nullsub_117(scr_entref_t entref ){callScriptFunction<void>(0x8125, entref);}
static void nullsub_118(scr_entref_t entref ){callScriptFunction<void>(0xffff, entref);}
static void nullsub_119(scr_entref_t entref ){callScriptFunction<void>(0xffff, entref);}
static void nullsub_120(scr_entref_t entref ){callScriptFunction<void>(0xffff, entref);}
static void nullsub_121(scr_entref_t entref ){callScriptFunction<void>(0xffff, entref);}
static void nullsub_122(scr_entref_t entref ){callScriptFunction<void>(0x9, entref);}
static void nullsub_123(scr_entref_t entref ){callScriptFunction<void>(0xa, entref);}
static void nullsub_124(scr_entref_t entref ){callScriptFunction<void>(0x7, entref);}
static void nullsub_125(scr_entref_t entref ){callScriptFunction<void>(0xffff, entref);}
static void nullsub_126(scr_entref_t entref ){callScriptFunction<void>(0x9, entref);}
static void nullsub_127(scr_entref_t entref ){callScriptFunction<void>(0xa, entref);}
static void nullsub_128(scr_entref_t entref ){callScriptFunction<void>(0xffff, entref);}
static void nullsub_129(scr_entref_t entref ){callScriptFunction<void>(0xffff, entref);}
static void nullsub_130(scr_entref_t entref ){callScriptFunction<void>(0xffff, entref);}
static void nullsub_131(scr_entref_t entref ){callScriptFunction<void>(0xffff, entref);}
static void nullsub_132(scr_entref_t entref ){callScriptFunction<void>(0xffff, entref);}
static void nullsub_133(scr_entref_t entref ){callScriptFunction<void>(0xffff, entref);}
static void nullsub_134(scr_entref_t entref ){callScriptFunction<void>(0xffff, entref);}
static void nullsub_135(scr_entref_t entref ){callScriptFunction<void>(0xffff, entref);}
static void nullsub_136(scr_entref_t entref ){callScriptFunction<void>(0x21e, entref);}
static void nullsub_137(scr_entref_t entref ){callScriptFunction<void>(0x227, entref);}
static void nullsub_138(scr_entref_t entref ){callScriptFunction<void>(0x228, entref);}
static void nullsub_139(scr_entref_t entref ){callScriptFunction<void>(0x229, entref);}
static void nullsub_140(scr_entref_t entref ){callScriptFunction<void>(0x23d, entref);}
static void nullsub_141(scr_entref_t entref ){callScriptFunction<void>(0x23e, entref);}
static void nullsub_142(scr_entref_t entref ){callScriptFunction<void>(0x23f, entref);}
static void nullsub_143(scr_entref_t entref ){callScriptFunction<void>(0x240, entref);}
static void nullsub_144(scr_entref_t entref ){callScriptFunction<void>(0x241, entref);}
static void nullsub_145(scr_entref_t entref ){callScriptFunction<void>(0x242, entref);}
static void nullsub_146(scr_entref_t entref ){callScriptFunction<void>(0x246, entref);}
static void nullsub_147(scr_entref_t entref ){callScriptFunction<void>(0x247, entref);}
static void nullsub_148(scr_entref_t entref ){callScriptFunction<void>(0x82ad, entref);}
static void nullsub_149(scr_entref_t entref ){callScriptFunction<void>(0x831f, entref);}
static void nullsub_150(scr_entref_t entref ){callScriptFunction<void>(0xdf, entref);}
static void nullsub_151(scr_entref_t entref ){callScriptFunction<void>(0xfd, entref);}
static void nullsub_152(scr_entref_t entref ){callScriptFunction<void>(0x10b, entref);}
static void nullsub_153(scr_entref_t entref ){callScriptFunction<void>(0x110, entref);}
static void nullsub_154(scr_entref_t entref ){callScriptFunction<void>(0x112, entref);}
static void nullsub_155(scr_entref_t entref ){callScriptFunction<void>(0x1eb, entref);}
static void nullsub_156(scr_entref_t entref ){callScriptFunction<void>(0x208, entref);}
static void sub_823DE558(scr_entref_t entref, script_string_s p0){PushValue(p0);callScriptFunction<void>(0x829b, entref);}
static void sub_823E0A70(scr_entref_t entref ){callScriptFunction<void>(0x814e, entref);}
static void sub_82405EA8(scr_entref_t entref, int p0){PushValue(p0);callScriptFunction<void>(0x10, entref);}
static void sub_82406640(scr_entref_t entref, script_string_s p0, script_string_s p1){PushValue(p1);PushValue(p0);callScriptFunction<void>(0x1a, entref);}
static void sub_824067D8(scr_entref_t entref, script_string_s p0, script_string_s p1){PushValue(p1);PushValue(p0);callScriptFunction<void>(0x1b, entref);}
static script_string_s sub_8240EB88(scr_entref_t entref, script_string_s p0, int p1, int p2){PushValue(p2);PushValue(p1);PushValue(p0);return callScriptFunction<script_string_s>(0xbd, entref);}
static int sub_8240FE50(scr_entref_t entref, script_string_s p0){PushValue(p0);return callScriptFunction<int>(0x809d, entref);}
static void sub_8240FFB0(scr_entref_t entref, script_string_s p0){PushValue(p0);callScriptFunction<void>(0x809e, entref);}
static void sub_8240FFB0(scr_entref_t entref, script_string_s p0, script_string_s p1){PushValue(p1);PushValue(p0);callScriptFunction<void>(0x809e, entref);}
static void sub_8240FFB0(scr_entref_t entref, script_string_s p0, int p1){PushValue(p1);PushValue(p0);callScriptFunction<void>(0x809e, entref);}
static void sub_8240FFB0(scr_entref_t entref, script_string_s p0, float p1){PushValue(p1);PushValue(p0);callScriptFunction<void>(0x809e, entref);}
static void sub_82412030(scr_entref_t entref ){callScriptFunction<void>(0x257, entref);}
static void sub_82416598(scr_entref_t entref, script_string_s p0, float p1, float p2, int p3){PushValue(p3);PushValue(p2);PushValue(p1);PushValue(p0);callScriptFunction<void>(0x658c, entref);}
static void sub_8241C408(scr_entref_t entref, script_string_s p0){PushValue(p0);callScriptFunction<void>(0x82de, entref);}
static int sub_8241E0B0(scr_entref_t entref ){return callScriptFunction<int>(0x131, entref);}
static int sub_8241E140(scr_entref_t entref, entity p0){PushValue(p0);return callScriptFunction<int>(0x11f, entref);}
static void sub_8241E198(scr_entref_t entref ){callScriptFunction<void>(0x8337, entref);}
static void sub_8241FB58(scr_entref_t entref ){callScriptFunction<void>(0x119, entref);}
static void sub_8241FB68(scr_entref_t entref ){callScriptFunction<void>(0x117, entref);}
static void sub_8241FD20(scr_entref_t entref ){callScriptFunction<void>(0x139, entref);}
#elif defined(AW)

#endif
