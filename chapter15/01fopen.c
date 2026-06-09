#include <stdio.h>
#include <stdlib.h> //for exit()

int main(void)
{
    char* fname = "basic.txt"; //파일이름
    FILE* f; //파일 포인터

    char name[30] = "손혜진"; //파일에 쓰려는 자료
    int point = 99;

    // 가이드: fopen()으로 basic.txt를 쓰기 모드로 열고, 실패하면 종료하세요.
    if ((f = [          ](fname, [   ])) == NULL)
    {
        printf("파일이 열리지 않아 종료합니다.\n");
        exit(1);
    };

    // 가이드: 파일 "basic.txt"에 이름과 성적을 쓰세요.
    [       ](f, "이름 %s 학생의 성적은 %d 입니다.\n", name, point);
    [       ](f);

    // 가이드: 표준출력 콘솔에도 같은 내용을 출력하세요.
    printf("이름 %s 학생의 성적은 %d 입니다.\n", name, point);
    puts("프로젝트 폴더에서 파일 basic.txt를 열어 보세요.");

    return 0;
}
