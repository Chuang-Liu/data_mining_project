#include <stdio.h>

int main() {
    char filename[11] = "mv_00";
    char customer[8];
    bool rated[17771];
    FILE fp* = NULL;
    int i,j;

    filename[10] = 0;
    for (i=1; i<=2649429; i++) {
        for (j=1; j<=17770; j++) {
                itoa(j,filename+5,10);
                fp = fopen(filename,"r");

                fclose(fp);
        }
    }
    return 0;
}
