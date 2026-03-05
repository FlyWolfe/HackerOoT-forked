#include "custom_01_scene.h"

BgCamInfo custom_01_scene_bgCamInfo[] = {
    { CAM_SET_NORMAL0, 0, NULL },
};

SurfaceType custom_01_scene_polygonTypes[1] = {
    { SURFACETYPE0(0, 0, 0x00, 0, 0x00, 0x00, 0, 0), SURFACETYPE1(0x00, 0x00, 0, 0, 0, 0, 0, 0) },
};

Vec3s custom_01_scene_vertices[4] = {
    {   -300,   -120,    300 },
    {    300,   -120,    300 },
    {    300,   -120,   -300 },
    {   -300,   -120,   -300 },
};

CollisionPoly custom_01_scene_polygons[2] = {
    { 0, COLPOLY_VTX(0, COLPOLY_IGNORE_NONE), COLPOLY_VTX(1, COLPOLY_IGNORE_NONE), COLPOLY_VTX_INDEX(2), { COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(1.0), COLPOLY_SNORMAL(7.549790126404332e-08) }, 120 },
    { 0, COLPOLY_VTX(0, COLPOLY_IGNORE_NONE), COLPOLY_VTX(2, COLPOLY_IGNORE_NONE), COLPOLY_VTX_INDEX(3), { COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(1.0), COLPOLY_SNORMAL(7.549790126404332e-08) }, 120 },
};

CollisionHeader custom_01_scene_collisionHeader = {
    { -300, -120, -300 },
    { 300, -120, 300 },
    ARRAY_COUNT(custom_01_scene_vertices), custom_01_scene_vertices,
    ARRAY_COUNT(custom_01_scene_polygons), custom_01_scene_polygons,
    custom_01_scene_polygonTypes,
    custom_01_scene_bgCamInfo,
    0, NULL
};

