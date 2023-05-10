// https://codeforces.com/problemset/problem/71/A
#include <stdio.h>
#include <string.h>
int main(void){
    int n;
    scanf("%d",&n);
    char word[n][100];
    for (int i = 0; i < n; i++)
    {
        scanf("%s",&word[i]);
        int length = strlen(word[i]);
        if(length <= 10){
            printf("%s\n",word[i]);
        }
        else{
            printf("%c%d%c\n",word[i][0],length-2,word[i][length-1]);
        }
 
 
    }
    
 
}