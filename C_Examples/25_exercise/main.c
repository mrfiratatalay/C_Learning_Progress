#include <stdio.h>

int main()
{
    unsigned int ono;

    ono = -10;
    printf("The value of ono is %u.\n", ono);
    return(0);
}

// OUTPUT: The value of ono is 4294967286.

/*

#include <stdio.h>

int main()
{
    unsigned int ono;

    ono = -10;
    printf("The value of ono is %u.\n", ono);
    return(0);
}


OUTPUT: The value of ono is -10
*/