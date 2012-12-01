#include "ketama.h"
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv)
{
  if(argc == 1) {
    printf("Usage: %s <string>\n", *argv);
    return 1;
  }

  unsigned int kh = ketama_hashi(argv[1]);

  printf("  The md5 digest for %s is %u\n", argv[1], kh);

  return 0;
}
