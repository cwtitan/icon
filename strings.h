/* vim: set sts=4 sw=4 et: */

/* Titan Icon
 * Copyright (C) 2013 Titan Network
 * All Rights Reserved
 *
 * This code is for educational purposes only and is not licensed for
 * redistribution in source form.
 */

enum {
    STR_NOCLIP_ON = 1,
    STR_NOCLIP_OFF,
    STR_MAPFILE,
    STR_MOV,
    STR_FX,
    STR_CAMERADETACH,
    STR_CAMERAATTACH,
    STR_HOLDTORCH,
    STR_MAP_OUTBREAK,
    STR_MAP_ATLAS,
    STR_MAP_NERVA,
    STR_MAP_POCKETD,
    STR_MAP_NOVA,
    STR_MAP_IMPERIAL,
    STR_DEFAULT_CLASS,
    STR_DEFAULT_ORIGIN,
    STR_COYOTE_NAME,
    STR_COYOTE_MODEL,
    STR_COYOTE_MOV,
    STR_SPAWNLOCATION,
    STR_CMD_FLY,
    STR_CMD_FLY_HELP,
    STR_CMD_TORCH,
    STR_CMD_TORCH_HELP,
    STR_CMD_DETACH,
    STR_CMD_DETACH_HELP,
    STR_CMD_COORDS,
    STR_CMD_COORDS_HELP,
    STR_CMD_LOADMAP,
    STR_CMD_LOADMAP_HELP,
    STR_CMD_LOADMAP_PROMPT,
    STR_CMD_MAPDEV,
    STR_CMD_MAPDEV_HELP,
    STR_CMD_NOCLIP,
    STR_CMD_NOCLIP_HELP,
    STR_CMD_MOV,
    STR_CMD_MOV_HELP,
    STR_CMD_TIME,
    STR_CMD_TIME_HELP,
    STR_CMD_PREVSPAWN,
    STR_CMD_PREVSPAWN_HELP,
    STR_CMD_NEXTSPAWN,
    STR_CMD_NEXTSPAWN_HELP,
    STR_CMD_RANDOMSPAWN,
    STR_CMD_RANDOMSPAWN_HELP,
    STR_END
};

unsigned long StringAddr(int id);
void WriteStrings();
unsigned long AddString(const char *str);
