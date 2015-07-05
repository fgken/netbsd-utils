#include <sys/module.h>

MODULE(MODULE_CLASS_MISC, skelton, NULL);

static int
skelton_modcmd(modcmd_t cmd, void *arg)
{
    printf("Hello NetBSD Loadable Kernel Module!\n");
    return 0;
}
