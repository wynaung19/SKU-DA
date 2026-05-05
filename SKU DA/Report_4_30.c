#include <stdio.h>
#include <string.h>

#define MAX 100

typedef struct {
    char eng[MAX];
    char kor[MAX];
} Dict;

Dict dict[MAX];
int count = 0;


void init() {
    FILE* fp = fopen("data.dat", "rb");
    if (fp == NULL) {
        return;
    }

    count = fread(dict, sizeof(Dict), MAX, fp);
    fclose(fp);
}


void saveData() {
    FILE* fp = fopen("data.dat", "wb");
    if (fp == NULL) {
        printf("Error saving file!\n");
        return;
    }

    fwrite(dict, sizeof(Dict), count, fp);
    fclose(fp);
}

void addWord() {
    if (count >= MAX) {
        printf("Dictionary is full!\n");
        return;
    }

    printf("Enter English word: ");
    scanf("%s", dict[count].eng);

    printf("Enter Korean meaning: ");
    scanf("%s", dict[count].kor);

    count++;

    saveData();
    printf("Word added!\n");
}

void displayWords() {
    if (count == 0) {
        printf("\nDictionary is empty!\n\n");
        return;
    }

    printf("English\tKorean\n");
    for (int i = 0; i < count; i++) {
        printf("%s\t%s\n", dict[i].eng, dict[i].kor);
    }
}

void searchWord() {
    char eng[MAX];
    printf("Enter English word to search: ");
    scanf("%s", eng);

    for (int i = 0; i < count; i++) {
        if (strcmp(dict[i].eng, eng) == 0) {
            printf("Korean meaning: %s\n", dict[i].kor);
            return;
        }
    }

    printf("Word not found!\n");
}

void deleteAll() {
    count = 0;

    FILE* fp = fopen("data.dat", "wb");
    if (fp == NULL) {
        printf("Error clearing file!\n");
        return;
    }

    fclose(fp);

    printf("All words deleted!\n");
}

int main() {
	printf("20251310_WaiYanNaung\n");
    int choice;

    init();

    while (1) {
        printf("\n1. Add Word | 2. Display Words | 3. Search Word | 4. Delete All | 5. Exit\n");
        printf("Enter your choice: ");
        if (scanf("%d", &choice) != 1) {
            printf("Please enter a number.\n");
            while (getchar() != '\n');
            continue;
        }

        switch (choice) {
        case 1: addWord(); break;
        case 2: displayWords(); break;
        case 3: searchWord(); break;
        case 4: deleteAll(); break;
        case 5: return 0;
        default: printf("Invalid choice!\n");
        }
    }

    return 0;
}