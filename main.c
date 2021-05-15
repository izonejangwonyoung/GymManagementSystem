#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <windows.h>




void gotoxy(int x,int y)
{

    COORD pos={x,y};

    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);

}


struct members

{
    int id;
    char name[20];
    int expiration_date;
    int sbd_kg;
}; struct members a;

int mainmenu(void){
    gotoxy(8,2);
    printf("*******  MAIN MENU  *******\n");
    while (1)

    {

        printf("-------------------------------------------- \n");

        printf("0. Exit program \n");

        printf("1. 대소문자 확인 후 대소문자로 변경 \n");

        printf("2. 홀수/짝수 확인\n");

        printf("3. N 팩토리얼 구하기(N!) \n");

        printf("4. 2의 거듭제곱 구하기 \n");

        printf("5. X의 Y제곱 구하기 \n");

        printf("-------------------------------------------- \n");


        int num;
        scanf("%d", &num);



        switch (num)

        {

            case 1:

                printf("문자 하나를 입력하세요.\n");

                break;

            case 2:

                printf("숫자를 입력하세요 \n.");

                break;

            case 3:

                printf("N 팩토리얼 구하기(N!) \n");

                break;

            case 4:

                printf("2 의 거듭제곱 구하기 \n");


                break;

            case 5:

                printf("X 의 Y제곱 구하기 \n");


                break;

            case 0:
                return 0;

        }

    }


}
int main(void){
//    int t,y;
//    printf("Enter the x-coordinate you want to move. : ");
//    scanf("%d",&t);
//    printf("Enter the y-coordinate you want to move. : ");
//    scanf("%d",&y);
//    gotoxy(t,y);
//    printf("here!!.");

mainmenu();
}

