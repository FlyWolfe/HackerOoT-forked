#include "custom_01_scene.h"

/**
 * Header Child Day (Default)
*/
#define LENGTH_CUSTOM_01_ROOM_0_HEADER00_ACTORLIST 1
SceneCmd custom_01_room_0_header00[] = {
    SCENE_CMD_ROOM_SHAPE(&custom_01_room_0_shapeHeader),
    SCENE_CMD_ECHO_SETTINGS(0x00),
    SCENE_CMD_ROOM_BEHAVIOR(0x00, 0x00, false, false),
    SCENE_CMD_SKYBOX_DISABLES(false, false),
    SCENE_CMD_TIME_SETTINGS(255, 255, 10),
    SCENE_CMD_ACTOR_LIST(LENGTH_CUSTOM_01_ROOM_0_HEADER00_ACTORLIST, custom_01_room_0_header00_actorList),
    SCENE_CMD_END(),
};

ActorEntry custom_01_room_0_header00_actorList[LENGTH_CUSTOM_01_ROOM_0_HEADER00_ACTORLIST] = {
    // Breakable Pot
    {
        /* Actor ID   */ ACTOR_OBJ_TSUBO,
        /* Position   */ { 0, -120, 102 },
        /* Rotation   */ { DEG_TO_BINANG(0.000), DEG_TO_BINANG(0.000), DEG_TO_BINANG(0.000) },
        /* Parameters */ (0x0 | (0x13 & 0x001F) | 0)
    },
};

