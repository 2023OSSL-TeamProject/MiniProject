// 이 파일을 프로그램이 구동되는 파일입니다.
#include <stdio.h>
#include <stdlib.h>
#include "CRUD.h"
#include "menu.h"
#include "otherFunc.h"

int main(void)
{
    system("clear"); // 프로그램 시작 시 terminal 화면을 clear 해준다.
    while (1)
    {
        int menu = choice_menu(); // 사용자로부터 menu 번호를 받는다.

        if (menu != 0)
        {
            println();
            printf("%d번 메뉴입니다.\n", menu);
            println();
        }
        else
        {
            println();
            printf("프로그램이 종료되었습니다.\n");
            println();
            break;
        }

        if (menu == 1)
        {
        }
        else if (menu == 2)
        {
        }
        else if (menu == 3)
        {
        }
        else if (menu == 4)
        {
        }
        else if (menu == 5)
        {
        }
        else if (menu == 6)
        {
        }
        else if (menu == 7)
        {
        }
        else if (menu == 8)
        {
        }
        else if (menu == 9)
        {
        }
        else if (menu == 10)
        {
        }
    }
    return 0;
}