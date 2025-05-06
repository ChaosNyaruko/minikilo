#include <errno.h>
#include <stdio.h>
#include <unistd.h>
int main() {
  int nread;
  char c;
  if ((nread = read(STDIN_FILENO, &c, 3)) != 3) {
    perror("read error");
    printf("if got %c, %d\n", c, nread);
  }
  printf("got %c, %d\n", c, nread);
}
