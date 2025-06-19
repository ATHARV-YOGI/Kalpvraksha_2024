// #include<stdio.h>

// int main(int argc, char *argv[]){
//   printf("argc: %d\n", argc);
//   for(int i=1; i<argc; i++){
//     printf("Hello, %s\n", argv[1]);
//   }
//   return 0;
// }
#include<stdio.h>
#include<string.h>

char target[] = "DOMAIN=";

int main(int argc, char *argv[], char *envp[]) {
    printf("argc: %d\n", argc);
    printf("Hello, %s\n", argv [2]);
    if(envp != NULL){
        for(int i = 0; envp[i] != NULL; i++){
            if(strncmp(envp[i], target, strlen(target)) == 0){
                printf("ENV: %s\n", envp[i]);
            }
        }
    }
    return 0;
}