#include <stdio.h>


void print_file(const char *name) {
    char line[256];
    FILE *f = fopen(name, "rt");
    if (f != NULL) {
       while(fgets(line,sizeof(line),f)) {
            printf("%s",line);
       }
        fclose(f);
    }
}

int main(const int argc, char *argv[]) {

    int i = 1;
    while (i<=argc){
        print_file(argv[i]);
        i++;
    }

    return 0;
}

