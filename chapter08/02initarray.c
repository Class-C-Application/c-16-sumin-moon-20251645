#include <stdio.h>

// SIZE라는 이름으로 정수 6을 나타내는 매크로 상수를 정의하세요

int main(void)
{
	//배열 score의 선언과 초기화
	// 89.3, 79.2, 84.83, 76.8, 92.52, 97.4로 초기화된 double형 배열 score를 선언하세요
	// 합계를 저장할 double형 변수 sum을 0으로 초기화하세요

	//for 문을 이용하여 합을 구함
	// 0부터 SIZE 미만까지 반복하는 for문을 작성하세요
	// 반복할 때마다 score[i]를 sum에 누적하고, printf("score[%d] = %.2f\n", i, score[i]); 형식으로 출력하세요
	printf("성적의 합은 %.2f이고 평균은 %.2f이다.\n", sum, sum / SIZE);

	return 0;
}
