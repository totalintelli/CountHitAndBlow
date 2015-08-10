//CountHitAndBlow.c
/*
���� �̸�: CountHitAndBlow.c
��     ��: 4���� ������� ���� �Է¹޾� ��Ʈ�� ��ο츦 ���Ѵ�.
�� ��  ��: �� �� ��
�ۼ� ����: 2015�� 8�� 10��
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