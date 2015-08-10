//CountHitAndBlow.c
/*
파일 이름: CountHitAndBlow.c
기     능: 4개의 정답들과 수를 입력받아 히트와 블로우를 구한다.
작 성  자: 송 용 단
작성 일자: 2015년 8월 10일
*/
#include <stdio.h>
#define MAX 4	
typedef unsigned long int ULong;

int main(int argc, char *argv[]);
void Input(ULong (*answers), ULong (*numbers));
void CountHitAndBlow(ULong (*answers), ULong (*numbers), ULong (*hit), ULong (*blow));
void Output(ULong hit, ULong blow);

int main(int argc, char *argv[]) {
	ULong answers[MAX];
	ULong numbers[MAX];
	ULong hit;
	ULong blow;

	Input(answers, numbers);
	CountHitAndBlow(answers, numbers, &hit, &blow);
	Output(hit, blow);

	return 0;
}

/*
함수 이름: Input
기     능: 정답들과 수들을 입력받는다.
입     력: 없음
출     력: 정답들과 수들
*/
void Input(ULong(*answers), ULong(*numbers)) {
	ULong i;

	for (i = 0; i < MAX; i++) {
		scanf("%d", answers + i);
	}

	for (i = 0; i < MAX; i++) {
		scanf("%d", numbers + i);
	}
}

/*
함수 이름: CountHitAndBlow
기     능: 정답들과 수들을 입력받아 히트와 블로우를 구한다.
입     력: 정답들과 수들
출     력: 히트와 블로우
*/
void CountHitAndBlow(ULong(*answers), ULong(*numbers), ULong *hit, ULong *blow) {
	ULong i;
	ULong j;
	*hit = 0;
	*blow = 0;

	for (i = 0; i < MAX; i++) {
		for (j = 0; j < MAX; j++) {
			if (answers[i] = numbers[j]) {
				if (i = j) {
					(*hit)++;
				}
				else {
					(*blow)++;
				}
			}
		}
	}
}

/*
함수 이름: Output
기     능: 히트와 블로우를 입력받아 모니터에 메시지를 출력한다.
입     력: 히트, 블로우
출     력: 없음
*/
void Output(ULong hit, ULong blow) {
	print("%d HIT, %d BLOW", hit, blow);
}