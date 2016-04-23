#include <stdio.h>
#include <stdlib.h>

void do_hello(int i) {

    printf("hello world %d", i);
    
    return;
}

int main(int argc, char *argv[]) {

    int i = 0;
    
    do_hello(i);
    
    return 0;

}
