#include <stdio.h>
int main()
{
  FILE *file = fopen("example.txt", "+r");

  if (file == NULL)
  {
      printf("Error opening file for writing.\n");
      return 1;
  }
  //fseek(file, 0, SEEK_SET);
  fprintf(file, "Updated content: Hello, updated world!\n");
  fclose(file);

  printf("Data updated in file succesfully,\n");
  return 0;

}


