#include<stdio.h>
#include<windows.h>
#include<conio.h>
#include<stdlib.h> 
int main( void )
{
char ch;
while( !kbhit() )
{
cprintf("Hello World\n");
if(kbhit() )
{
ch = getch();
if( 27 == ch )
break;
}
}
printf("End!\n");
system("pause");
return 0;
}
