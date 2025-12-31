#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    char choice;
    do{
        int guess,secret,attempts=0;
        
    srand (time(NULL));
    secret=rand() %1000+1;
    printf("game");
    printf(" 1 to 1000");
    while(1) {
        printf("enter\n");
        scanf("%d",&guess);
        attempts++;
        if (guess<secret) {
            printf(" select big\n");
        }
        else if( guess>secret) {
            printf(" select small\n");
        }
        else{
            printf(" congrats yo guess the number");
            printf(" total attempts =%d",attempts);
            break;
        }
    }
    printf(" do you want to play again (y/n)\n");
    scanf("%c",&choice);
} while( choice == 'y' || choice =='y');
printf("thanks");
return 0;
}
