#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    printf("Enter a String: ");
    fgets(str,sizeof(str),stdin);
    str[strcspn(str, "\n")] = '\0';
    
    int pos1,pos2;
    printf("Enter first position: ");
    scanf("%d",&pos1);
    getchar();
    printf("Enter second position: ");
    scanf("%d",&pos2);
    getchar();
    
    int s1;
    s1 = strlen(str);
    
    for(int i=pos1,j=pos2+1; i<=pos2+2 ; i++,j++){
        str[i] = str[j];
    }
    for(int i=0 ; str[i] ; i++){
        printf("%c",str[i]);
    }
    
    return 0;
}
