#include <sys/module.h>

MODULE(MODULE_CLASS_MISC, skelton, NULL);

static int
skelton_modcmd(modcmd_t cmd, void *arg)
{
    switch (cmd) {
        case MODULE_CMD_INIT:
            printf("Skelton Moudle is loaded.\n");
            break;

        case MODULE_CMD_FINI:
            printf("Skelton Module is unloaded\n");
            break;

        case MODULE_CMD_AUTOUNLOAD:
            printf("Slelton Module is autounloaded\n");
            break;

        case MODULE_CMD_STAT:
            return ENOTTY;

        default:
            return ENOTTY;
    }

    return 0;
}
