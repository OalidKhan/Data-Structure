#include <stdio.h>
int main() {
    char str1[100],str2[100];
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0';
    
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0';
    
    int s1,s2,flag=0;
    s1 = strlen(str1);
    s2 = strlen(str2);
    
    for(int i=0 ; i<s1 ; i++){
        if(str1[i] == str2[0]){
            flag++;
            for(int j=0 ; j<s2 ; j++){
                if(str2[j] != str1[i+j]){
                    flag = 0;
                    break;
                }
            }
        }
        if(flag != 0){
            break;
        }
    }
    
    if(flag != 0){
        printf("String is found\n");
    }
    else{
        printf("String is not found\n");
    }

}

