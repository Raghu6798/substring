#include <stdio.h>
#include <string.h>
void substring(char str[]){
    int len1 = strlen(str);
for(int i=0;i<len1;i++){
    for(int j=i;j<len1;j++){
        for(int k=i;k<=j;k++){
            printf("%c ",str[k]);
        }
        printf("\n");
    }
}


}
int main ()
{
char string[20];
int len2 = strlen(string);
printf("Enter the required string for which we have to find the substrings for :\n");
fgets(string,sizeof(string),stdin);
if(string[strlen(string)-1] =='\n'){
    string[strlen(string) - 1] = '\0';
}
printf("All the possible substrings of a string input from the user are : \n");
substring(string);

return 0;
}
