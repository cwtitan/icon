enum {
    CODE_ENTER_GAME = 1,
    CODE_SETUP_BINDS,
    CODE_CMD_HANDLER,
    CODE_GENERIC_MOV,
    CODE_GET_TARGET,
    CODE_LOADMAP,
    CODE_MAP_TRAVERSER,
    CODE_ENT_SET_FACING,
    CODE_SETUP_TUTORIAL,
    CODE_CREATE_ENT,

    CODE_CMD_FLY,
    CODE_CMD_TORCH,
    CODE_CMD_NOCOLL,
    CODE_CMD_SEEALL,
    CODE_CMD_DETACH,
    CODE_CMD_LOADMAP,
    CODE_CMD_LOADMAP_PROMPT,
    CODE_CMD_COORDS,
    CODE_CMD_MOV,

    CODE_LOADMAP_CB,
    CODE_POS_UPDATE_CB,
/*    CODE_KEY_FX,
    CODE_FX_CB,
    CODE_KEY_KILLFX,
    CODE_KEY_SPAWN,
    CODE_SPAWNCB,
    CODE_KEY_KILLENT,
    CODE_KEY_TARGETMODE, */
    CODE_END,
};

unsigned long CodeAddr(int id);
void RelocateCode();
void WriteCode();
void FixupCode(int vers);
