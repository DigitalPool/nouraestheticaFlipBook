#include <stdio.h>

int main(void) {
    /* rename files from 3.png to 1.png, shifting all numbers down by 2 */
    for (int i = 3; i <= 100; i++) {
        char oldname[20];
        char newname[20];

        sprintf(oldname, "%d.png", i);
        sprintf(newname, "%d.png", i - 2);

        if (rename(oldname, newname) != 0) {
            perror("rename failed");
        }
    }

    return 0;
}