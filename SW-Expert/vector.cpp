#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
//[6, 10, 2]	"6210"
//[3, 30, 34, 5, 9]  "9534330"
//�ڸ����� ��̵� �ϴ� �� ���ڸ� ���ؼ� �ֱ� 
//6 2 1 0 ���ڸ��� �̻��̸� �迭 �߶� �ֱ� �׸��� �ֱ� 
//9 5 �ڸ����� ���� ���� �ִ�? �ڸ��� �� �� ���� ���� ���� �ڸ������� ũ�� �� ���������� �ƴϸ� �׳� �ֱ� 
//return answer;
// numbers_len�� �迭 numbers�� �����Դϴ�.
char* solution(int numbers[], size_t numbers_len) {
	// return ���� malloc �� ���� �Ҵ��� ������ּ���. �Ҵ� ���̴� ��Ȳ�� �°� �������ּ���.
	char* answer = (char*)malloc(1);
	return answer;
	char s1[5];
	sprintf(s1, "%d", numbers);
	printf("%s", s1);
}

