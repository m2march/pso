#include <syscalls.h>
#include <tipos.h>
#include <fs.h>
#include <i386.h>

int idx;

int main(void) {
  char command[15] = "run console.pso";
  run(command);
  // void* p = palloc();
  while(1) {
    hlt();
  }
  // exit();
  return 0;
}
