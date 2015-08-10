//CountHitAndBlow.c
/*
파일 이름: CountHitAndBlow.c
기     능: 4개의 정답수와 수를 입력받아 히트와 블로우를 구한다.
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