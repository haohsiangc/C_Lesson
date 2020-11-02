#include <stdio.h>
void printFile(FILE *fptr);
int main(int argc, char *argv[]) {
    FILE *fptr;
    for (int i = 1; i < argc; i++) {
        if ((fptr = fopen(argv[i], "r")) == NULL) {
            puts("File not found");
        }
        printFile(fptr);
    }
    return 0;
}
void printFile(FILE *fptr) {
    char tmpstring[1000];
    fgets(tmpstring, 1000, fptr);
    printf("%s\n", tmpstring);
    fclose(fptr);
}