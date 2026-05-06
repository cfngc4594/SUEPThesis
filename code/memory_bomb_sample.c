#include <stdlib.h>
#include <string.h>

int main(void) {
  const size_t block_size = 16 * 1024 * 1024;
  while (1) {
    char *p = (char *)malloc(block_size);
    if (!p) {
      break;
    }
    memset(p, 0x5A, block_size);
  }
  return 0;
}
