#include <stdio.h>
#include <string.h>
int main()
{
    char str[20], str2[20];
    int i=0,j=0;
    
    scanf("%s", str);
    
    for(i=strlen(str)-1;i>=0;i--)
    {
        printf("%c", str[i]);
        str2[j]=str[i];
        j++;
    }
    //str2[j]='\0';
    //printf("str2=%s\n",str2);
  return 0;      
}
