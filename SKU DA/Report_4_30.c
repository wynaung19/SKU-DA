#include <stdio.h>
#include <string.h>

#define MAX 100

typedef struct {
	char eng[MAX];
char kor[MAX];
} Dict;

Dict dict[MAX];
int count = 0;

void addWord() {
	if(count >= MAX) {
		printf("Dictionary is full!\n");
		return;
	}
	printf("Enter English word: ");
	scanf("%s", dict[count].eng);
	printf("Enter Korean meaning: ");
	scanf("%s", dict[count].kor);
	count++;
	printf("Word added!\n");
}

void displayWords() {
	if(count == 0) {
		printf("Dictionary is empty!\n");
		return;
	}
	printf("English\tKorean\n");
	for(int i = 0; i < count; i++) {
		printf("%s\t%s\n", dict[i].eng, dict[i].kor);
	}
}

void searchWord() {
	char eng[MAX];
	printf("Enter English word to search: ");
	scanf("%s", eng);
	for(int i = 0; i < count; i++) {
		if(strcmp(dict[i].eng, eng) == 0) {
			printf("Korean meaning: %s\n", dict[i].kor);
			return;
		}
	}
	printf("Word not found!\n");
}

int main() {
	int choice;
	while(1) {
		printf("\n1. Add Word\n2. Display Words\n3. Search Word\n4. Exit\n");
		printf("Enter your choice: ");
		scanf("%d", &choice);
		switch(choice) {
			case 1: addWord(); break;
			case 2: displayWords(); break;
			case 3: searchWord(); break;
			case 4: return 0;
			default: printf("Invalid choice!\n");
		}
	}
	return 0;
}
