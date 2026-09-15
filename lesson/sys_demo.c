#include <stdlib.h>
#include <stdio.h>

int main()
{
printf("Using system function for running ps program.\n");
printf("/tmp/zzz cat /home/codespace/secret");
system("ps -ax");
printf("ps completed\n");
return 0;
}