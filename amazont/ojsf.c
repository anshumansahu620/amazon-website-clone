#include<stdio.h>
#include<string.h>
int main(){
char c[20];

fgets(c,20,stdin);
int j;
j=strln(c);

char x[j];

for (int i = strlen(c); i >= 0; i--)
{
    c[i]=x[j];
    j++;
}




return 0;
}