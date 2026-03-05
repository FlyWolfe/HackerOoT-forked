#include "custom_01_scene.h"

RoomShapeNormal custom_01_room_0_shapeHeader = {
    ROOM_SHAPE_TYPE_NORMAL,
    ARRAY_COUNT(custom_01_room_0_shapeDListsEntry),
    custom_01_room_0_shapeDListsEntry,
    custom_01_room_0_shapeDListsEntry + ARRAY_COUNT(custom_01_room_0_shapeDListsEntry)
};

RoomShapeDListsEntry custom_01_room_0_shapeDListsEntry[1] = {
    { custom_01_room_0_shapeHeader_entry_0_opaque, NULL }
};

