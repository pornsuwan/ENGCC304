 #include <stdio.h>

 int main() {

    char name[50];
    int  id;
    char sec[50];

    scanf("%d", &id);
    scanf("%s", name);
    scanf("%s", sec);



    printf("Student ID: %d\n", id);
    printf("Nickname: %s\n", name );
    printf("Section: %s\n",sec);
   
    return 0;
}