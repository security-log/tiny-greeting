#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[]) {
  time_t now;
  time(&now);

  printf("%s\n", ctime(&now));

  if (argc < 2)
    puts("Hello, you handsome beast!");
  else
    printf("Hello, %s!\n", argv[1]);

  return EXIT_SUCCESS;
}
