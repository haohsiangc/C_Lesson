#include <stdio.h>
void blackwin(void) {

	FILE *file;
	char word[10] = "�´ѳ�";
	file = fopen("save.txt", "a+");
	fprintf(file, "%10s", word);
	printf("\n");
}
