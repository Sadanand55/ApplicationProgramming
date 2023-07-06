#include<stdio.h>
int main()
{   /// text section memory
    enum days {monday,tuesday,wednesday,thursday};

    
    printf("%d\n%d\n%d\n%d",monday,tuesday ,thursday,wednesday);

    // printf("%p\n",&monday);

    printf("%d\n",sizeof(enum days));
    



    return 0;
}