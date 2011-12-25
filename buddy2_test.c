#include "buddy2.h"
#include <stdio.h>
int main() {
  char cmd[80];
  int arg;
  struct buddy2* buddy = buddy2_new(32);
  buddy2_dump(buddy);
  for (;;) {
    scanf("%s %d", cmd, &arg);
    if (strcmp(cmd, "alloc") == 0) {
      printf("allocated@%d\n", buddy2_alloc(buddy, arg));
      buddy2_dump(buddy);
    } else if (strcmp(cmd, "free") == 0) {
      buddy2_free(buddy, arg);
      buddy2_dump(buddy);
    } else if (strcmp(cmd, "size") == 0) {
      printf("size: %d\n", buddy2_size(buddy, arg));
      buddy2_dump(buddy);
    } else
      buddy2_dump(buddy);
  }
}
