#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    printf("Enter a String: ");
    fgets(str,sizeof(str),stdin);
    str[strcspn(str, "\n")] = '\0';
   
    char str2[100];
    printf("Enter a new string: ");
    
    fgets(str2,sizeof(str2),stdin);
    str2[strcspn(str2, "\n")] = '\0';
    
    int pos;
    printf("Enter a position: ");
    scanf("%d",&pos);
    getchar();
    
    int s1,s2;
    s1 = strlen(str);
    s2 = strlen(str2);
    
    for(int i=s1 ; i>=pos ; i--){
        str[i+s2] = str[i];
    }
    for(int i=0,j=pos ; i<s2 ; i++,j++){
        str[j] = str2[i];
    }
    for(int i=0 ; i<s1+s2 ; i++){
        printf("%c", str[i]);
    }
    
    return 0;
}
