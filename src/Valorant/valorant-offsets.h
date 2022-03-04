/*
MoltenCheat Offsets Repository @MoltenCheat
Unix Epoch Time: 1646319750
Visit: https://github.com/MoltenCheat/offsets
Valorant Version: 4.04 (WIP)
*/

#ifndef OFFSETS_H
#define OFFSETS_H
#include <cstdint>

namespace offsets {
    constexpr uintptr_t uworld_state = 0x86DA078;
    constexpr uintptr_t uworld_key = 0x86DA040;

    /*
    * Classes
    */
    constexpr uintptr_t game_instance = 0x1A8;
    constexpr uintptr_t persistent_level = 0x38;
    constexpr uintptr_t component_to_world = 0x250;
    constexpr uintptr_t root_component = 0x210;
    constexpr uintptr_t root_position = 0x164;
    constexpr uintptr_t mesh_component = 0x410;
    constexpr uintptr_t actor_array = 0xA0;
    constexpr uintptr_t actor_count = 0xB8;
    constexpr uintptr_t unique_id = 0x38;
    constexpr uintptr_t bone_array = 0x558;
    constexpr uintptr_t bone_count = 0x560;
    constexpr uintptr_t camera_manager = 0x458;
    constexpr uintptr_t camera_position = 0x1220;
    constexpr uintptr_t camera_rotation = 0x122C;
    constexpr uintptr_t camera_fov = 0x1238;
    constexpr uintptr_t local_player_array = 0x40;
    constexpr uintptr_t local_player_controller = 0x38;
    constexpr uintptr_t local_player_pawn = 0x440;
    constexpr uintptr_t control_rotation = 0x420;
    constexpr uintptr_t player_state = 0x3D0;
    constexpr uintptr_t health = 0x1B0;
    constexpr uintptr_t damage_handler = 0x928;
    constexpr uintptr_t team_id = 0xF8;
    constexpr uintptr_t team_component = 0x580;
    constexpr uintptr_t last_render_time = 0x350;
    constexpr uintptr_t last_submit_time = 0x358;
    constexpr uintptr_t dormant = 0x100;

    // TODO: Need check for 4.04 patch
    constexpr uintptr_t FresnelIntensity = 0x690;
    constexpr uintptr_t FresnelOffset = 0x694;
    constexpr uintptr_t bone_component = 0x548;
    constexpr uintptr_t relative_location = 0x164;
    constexpr uintptr_t relative_rotation = 0x170;
    constexpr uintptr_t acknowledged_pawn = 0x440;
    constexpr uintptr_t camera_cache_private = 0x1f80;
    constexpr uintptr_t player_camera_manager = 0x458;
    constexpr uintptr_t player_controller = 0x38;
    constexpr uintptr_t cached_life = 0x1b0;
    constexpr uintptr_t team = 0xf8;
}
#endif
