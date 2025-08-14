#include <stdio.h>



int main() {
    char path;
    char line[256];
    printf("Введите путь до файла:");
    scanf("%s", &path);
    FILE *file = fopen(&path, "r");
    if (file == NULL) {
        perror("Ошибка при открытии файла");
        return 1;
    }
    while (fgets(line, sizeof(line), file) != NULL) {
        printf("%s", line);
    }
    fclose(file);
    return 0;
}
