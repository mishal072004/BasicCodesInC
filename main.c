#include <stdio.h>
#include <stdlib.h>
#include "conio2.h"
#include <dir.h>
#include "mtb.h"
#include <errno.h>
int main()
{
    int result;
    result=mkdir("C:\\Movie Ticket Booking");
    if(result!=0 && errno!=17)
    {
        printf("Sorry! Application cannot run");
        printf("\nError Code:%d,",errno);
        perror("Reason:");
        return 1;
    }
   add_questions();

    return 0;
}
