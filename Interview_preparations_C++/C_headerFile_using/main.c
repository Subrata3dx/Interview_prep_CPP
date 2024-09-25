#include <stdio.h>
#include "strTst.h"


int main()
{
    printf("Function call from other file: %s", stringTest());
    printf("Calling from other file...");
    alien();
   // printf("Hello world!\n");
    return 0;
}
