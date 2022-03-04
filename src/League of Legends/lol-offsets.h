/*
MoltenCheat Offsets Repository @MoltenCheat
Contributor: xmar from @cheatglobal.com - Thanks for support!
Unix Epoch Time: 1646360202
Visit: https://github.com/MoltenCheat/offsets
League of Legends Version: 12.5 (WIP)
*/

#ifndef OFFSETS_H
#define OFFSETS_H
#include <cstdint>

namespace offsets {
    constexpr uintptr_t oDrawCircle = 0x4E5520;
    constexpr uintptr_t oTurretList = 0x310B7E8;
    constexpr uintptr_t oOnProcessSpell = 0x4F59D0;
    constexpr uintptr_t oCastSpell = 0x5D5D00;
    constexpr uintptr_t oChat = 0x3116F60;
    constexpr uintptr_t oMinimapObject = 0x310F288;
    constexpr uintptr_t oNetClient = 0x311E868;
    constexpr uintptr_t oGetPing = 0x336750;
    constexpr uintptr_t oPrintChat = 0x57AA00;
    constexpr uintptr_t oChatClientPtr = 0x310AA04;
    constexpr uintptr_t oMissileList = 0x1879874;
    constexpr uintptr_t oSpellIndex = 0xC;
    constexpr uintptr_t oIsNotWall = 0x9B8B30;
    constexpr uintptr_t oIssueClick = 0x5ED0C0;
    constexpr uintptr_t oMinionList = 0x18798C4;
    constexpr uintptr_t oHeroList = 0x1877334;
    constexpr uintptr_t oGetAttackDelay = 0x276E60;
    constexpr uintptr_t oGetAttackCastDelay = 0x276D60;
    constexpr uintptr_t oGetNextOject = 0x27A760;
    constexpr uintptr_t oGetFirstObject = 0x279B50;
    constexpr uintptr_t oIsAlive = 0x13F8D0;
    constexpr uintptr_t oIsInhib = 0x13E2A0;
    constexpr uintptr_t oIsNexus = 0x0;
    constexpr uintptr_t oIsDragon = 0x0;
    constexpr uintptr_t oIsBaron = 0x17F240;
    constexpr uintptr_t oIsHero = 0x31D700;
    constexpr uintptr_t oIsMissile = 0x13F8D0;
    constexpr uintptr_t oIssueOrder = 0x5DF5FD;
    constexpr uintptr_t oGetSpellState = 0x0;
    constexpr uintptr_t oGetBasicAttack = 0x125060;
    // TODO: Duplicate with line 26
    constexpr uintptr_t oIsNotWall = 0x9B8B30;
    constexpr uintptr_t oGameVersion = 0x578B60;
    constexpr uintptr_t oWorldToScreen = 0xA34420;
    // TODO: Duplicate adress with line 47
    constexpr uintptr_t oWorldToScreen2 = 0xA34420;
    // TODO: Duplicate definition with line 33
    constexpr uintptr_t oGetFirstObject = 0xB44CCF;
    constexpr uintptr_t oGetNextObject = 0x27A760;
    constexpr uintptr_t oHPBarPos = 0x59EB60;
    constexpr uintptr_t oBaseDrawPosition = 0x1748B0;
    constexpr uintptr_t oLocalPlayer = 0x31168D4;
    // TODO: Duplicate with line 19
    constexpr uintptr_t oMinimapObject = 0x310F288;
    constexpr uintptr_t oHudInstance = 0x1879860;
    constexpr uintptr_t oRenderer = 0x3143DE0;
    constexpr uintptr_t oObjManager = 0x1879830;
    constexpr uintptr_t oGameTime = 0x310DF84;
    // TODO: Duplicate with line 59
    constexpr uintptr_t oRenderer = 0x3143DE0;
    constexpr uintptr_t oD3DRenderer = 0x312C688;
    constexpr uintptr_t oZoomClass = 0x310D610;
    // TODO: Duplicate definition with line 65
    constexpr uintptr_t oZoomClass = 0x3108E60;
    constexpr uintptr_t oViewProjMatricies = 0x3140F40;
    constexpr uintptr_t oUnderMouseObject = 0x310A9D8;
    constexpr uintptr_t oGameInfo = 0x310AA08;
    constexpr uintptr_t oChatIsOpen = 0x73C;
    constexpr uintptr_t oObjIndex = 0x20;
    constexpr uintptr_t oViewMatrix = 0x58;
    constexpr uintptr_t oProjection = 0x98;
    constexpr uintptr_t oObjTeam = 0x4C;
    constexpr uintptr_t oObjPos = 0x1F4;
    constexpr uintptr_t oObjMissileCast = 0x250;
    constexpr uintptr_t oObjMissileName = 0x6C;
    constexpr uintptr_t oObjHealth = 0xDB4;
    constexpr uintptr_t oObjMana = 0x2B4;
    constexpr uintptr_t oObjMovementSpeed = 0x12FC;
    constexpr uintptr_t oObjAttackRange = 0x1304;
    constexpr uintptr_t oObjTargetable = 0xD1C;
    constexpr uintptr_t oObjInvulrable = 0x3EC;
    constexpr uintptr_t oObjVisiblity = 0x28C;
    constexpr uintptr_t oObjNetworkID = 0xCC;
    constexpr uintptr_t oObjSpawnCount = 0x2A0;
    constexpr uintptr_t oObjSrcIndex = 0x2AC;
    constexpr uintptr_t oObjRecallState = 0xD78;
    constexpr uintptr_t oObjAbilityHaste = 0x110C;
    constexpr uintptr_t oObjLethality = 0x10F4;
    constexpr uintptr_t oObjArmor = 0x12E4;
    constexpr uintptr_t oObjMagicRes = 0x12EC;
    constexpr uintptr_t oObjBaseAtk = 0x12BC;
    constexpr uintptr_t oObjBonusAtk = 0x1234;
    // TODO: Duplicate with line 81
    constexpr uintptr_t oObjMovementSpeed = 0x12FC;
    constexpr uintptr_t oObjSpellBook = 0x27F8;
    // TODO: Duplicate adress with line 78
    constexpr uintptr_t oObjPlayerName = 0x6C;
    // TODO: Duplicate adress with line 74
    constexpr uintptr_t oSpellSlotDamage = 0x98;
}
#endif