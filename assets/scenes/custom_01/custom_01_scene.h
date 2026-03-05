#ifndef CUSTOM_01_SCENE_H
#define CUSTOM_01_SCENE_H

#include "ultra64.h"
#include "romfile.h"
#include "array_count.h"
#include "sequence.h"
#include "actor_profile.h"
#include "bgcheck.h"
#include "camera.h"
#include "cutscene.h"
#include "cutscene_commands.h"
#include "environment.h"
#include "z_math.h"
#include "object.h"
#include "ocarina.h"
#include "path.h"
#include "player.h"
#include "room.h"
#include "scene.h"
#include "event_manager.h"
#include "animated_materials.h"
#include "save.h"

// For older decomp versions
#ifndef SCENE_CMD_PLAYER_ENTRY_LIST
#define SCENE_CMD_PLAYER_ENTRY_LIST(length, playerEntryList) \
    { SCENE_CMD_ID_SPAWN_LIST, length, CMD_PTR(playerEntryList) }
#undef SCENE_CMD_SPAWN_LIST
#define SCENE_CMD_SPAWN_LIST(spawnList) \
    { SCENE_CMD_ID_ENTRANCE_LIST, 0, CMD_PTR(spawnList) }
#endif

#ifndef BLEND_RATE_AND_FOG_NEAR
#define BLEND_RATE_AND_FOG_NEAR(blendRate, fogNear) (s16)((((blendRate) / 4) << 10) | (fogNear))
#endif

// Animated Materials requires the segment number to be offset by 7
#ifndef MATERIAL_SEGMENT_NUM
#define MATERIAL_SEGMENT_NUM(n) ((n) - 7)
#endif

// The last entry also requires to be a negative number
#ifndef LAST_MATERIAL_SEGMENT_NUM
#define LAST_MATERIAL_SEGMENT_NUM(n) -MATERIAL_SEGMENT_NUM(n)
#endif

extern SceneCmd custom_01_scene_header00[];
extern RomFile custom_01_scene_roomList[];
extern u8 _custom_01_room_0SegmentRomStart[];
extern u8 _custom_01_room_0SegmentRomEnd[];
extern ActorEntry custom_01_scene_header00_playerEntryList[];
extern Spawn custom_01_scene_header00_entranceList[];
extern EnvLightSettings custom_01_scene_header00_lightSettings[4];
#if ENABLE_ANIMATED_MATERIALS
extern AnimatedMaterial custom_01_scene_header00_AnimMat[];
#endif
extern BgCamInfo custom_01_scene_bgCamInfo[];
extern SurfaceType custom_01_scene_polygonTypes[1];
extern Vec3s custom_01_scene_vertices[4];
extern CollisionPoly custom_01_scene_polygons[2];
extern CollisionHeader custom_01_scene_collisionHeader;
extern SceneCmd custom_01_room_0_header00[];
extern ActorEntry custom_01_room_0_header00_actorList[];
extern Gfx custom_01_room_0_shapeHeader_entry_0_opaque[];
extern Vtx custom_01_room_0_dl_Floor_mesh_layer_Opaque_vtx_cull[8];
extern Vtx custom_01_room_0_dl_Floor_mesh_layer_Opaque_vtx_0[4];
extern Gfx custom_01_room_0_dl_Floor_mesh_layer_Opaque_tri_0[];
extern Gfx mat_custom_01_room_0_dl_floor_mat_layerOpaque[];
extern Gfx custom_01_room_0_dl_Floor_mesh_layer_Opaque[];
extern RoomShapeNormal custom_01_room_0_shapeHeader;
extern RoomShapeDListsEntry custom_01_room_0_shapeDListsEntry[1];

#endif
