#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    printf("Enter a String: ");
    fgets(str,sizeof(str),stdin);
    str[strcspn(str, "\n")] = '\0';
    
    char str2[100];
    printf("Enter a new String: ");
    fgets(str2,sizeof(str2),stdin);
    str2[strcspn(str2, "\n")] = '\0';
    
    int pos1,pos2;
    printf("Enter first position: ");
    scanf("%d",&pos1);
    getchar();
    printf("Enter second position: ");
    scanf("%d",&pos2);
    getchar();
    
    int s1,s2;
    s1 = strlen(str);
    s2 = strlen(str2);
    
    for(int i=pos1,j=0 ; i<=pos2 ; i++,j++){
        str[i] = str2[j];
    }
    for(int i=0 ; i<s1 ; i++){
        printf("%c",str[i]);
    }
    
    return 0;
}
