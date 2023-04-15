#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  char filename[100];
  char search_string[100];

  
  printf("Enter the name of the file: ");
  scanf("%s", filename);

  printf("Enter the search string: ");
  scanf("%s", search_string);

  
  FILE* fp = fopen(filename, "r");
  if (fp == NULL) {
    printf("Error opening file %s\n", filename);
    return 1;
  }

 
  char line[1000];
  while (fgets(line, 1000, fp) != NULL) {
    if (strstr(line, search_string) != NULL) {
      printf("%s", line);
    }
  }

  
  fclose(fp);

  return 0;
}
