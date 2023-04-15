#include <stdio.h>
#include <string.h>

int main() {
  FILE *input_file = fopen("input.txt", "r");
  FILE *error_file = fopen("error_log.txt", "w");

  if (input_file == NULL) {
    printf("Error: could not open input.txt\n");
    return 1;
  }

  if (error_file == NULL) {
    printf("Error: could not open error_log.txt\n");
    return 1;
  }

  char line[256];
  while (fgets(line, sizeof(line), input_file)) {
    if (strstr(line, "error") != NULL) {
      fputs(line, error_file);
    }
  }

  fclose(input_file);
  fclose(error_file);

  FILE *error_log = fopen("error_log.txt", "r");

  if (error_log == NULL) {
    printf("Error: could not open error_log.txt\n");
    return 1;
  }

  while (fgets(line, sizeof(line), error_log)) {
    printf("%s", line);
  }

  fclose(error_log);

  return 0;
}
