#include <stdio.h>
#include <unistd.h>
/**
* main - Entry point
* Return:1
*/
int main(void)
{
write(1, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
return (1);
}
Now for BETTY after cloning Betty and moving to /bin/
touch testBetty.c
#include <stdio.h>
int main(void)
{
int a = 5;
int b = 4;
for (a < b;;)
{
 printf("%d\n", a++);
}
}
