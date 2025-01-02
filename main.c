#include <stdio.h>
#include <stdlib.h>

int main()
{
	//one line added

    int a=2,b=2;
    int x,y;
    x=a++;
    y=++b;
    printf("%d\n",x);
    printf("%d\n",y);
    printf("present value of a is %d\n",a);
    printf("present value of b is %d\n",b);

    return 0;
}
