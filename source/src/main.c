#include <nds.h>
#include <stdio.h>

int main(void)
{
    consoleDemoInit();

    iprintf("\x1b[2J");
    iprintf("================================\n");
    iprintf("      PROJECT POLARIS\n");
    iprintf("     Go wherever you like.\n");
    iprintf("       Version 0.0.3\n");
    iprintf("================================\n");

    while (1)
    {
        swiWaitForVBlank();
    }

    return 0;
}
