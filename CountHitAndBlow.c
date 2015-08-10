//CountHitAndBlow.c
/*
���� �̸�: CountHitAndBlow.c
��     ��: 4���� ������ ���� �Է¹޾� ��Ʈ�� ��ο츦 ���Ѵ�.
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

/*
�Լ� �̸�: Input
��     ��: ������ ������ �Է¹޴´�.
��     ��: ����
��     ��: ������ ����
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
�Լ� �̸�: CountHitAndBlow
��     ��: ������ ������ �Է¹޾� ��Ʈ�� ��ο츦 ���Ѵ�.
��     ��: ������ ����
��     ��: ��Ʈ�� ��ο�
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
�Լ� �̸�: Output
��     ��: ��Ʈ�� ��ο츦 �Է¹޾� ����Ϳ� �޽����� ����Ѵ�.
��     ��: ��Ʈ, ��ο�
��     ��: ����
*/
void Output(ULong hit, ULong blow) {
	print("%d HIT, %d BLOW", hit, blow);
}