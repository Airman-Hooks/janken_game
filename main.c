#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
	int player;
	int cpu;
	int judge = 0;
	srand((unsigned)time(NULL));

	while (judge == 0) {
		printf("�O�`�Q�̂����ꂩ����o�����I��ł��������B\n");
		printf("0:�O�[�@1:�`���L�@2:�p�[\n");
		scanf_s("%d", &player);
		cpu = rand() % 3;
		switch (player) {
		case 0:
			printf("���Ȃ��̎�F�O�[\n");
			break;
		case 1:
			printf("���Ȃ��̎�F�`���L\n");
			break;
		case 2:
			printf("���Ȃ��̎�F�p�[\n");
			break;
		default:
			printf("���͒l������Ă��܂��B�ē��͂��Ă��������B\n");
			continue;
		}
		
		switch (cpu) {
		case 0:
			printf("CPU�̎�F�O�[\n");
			break;
		case 1:
			printf("CPU�̎�F�`���L\n");
			break;
		case 2:
			printf("CPU�̎�F�p�[\n");
			break;
		}

		if ((player == 0 && cpu == 2) || (player == 1 && cpu == 0) || (player == 2 && cpu == 1)) {
			printf("���Ȃ��̕����ł��B\n");
			judge = 1;
		}
		else if (player == cpu) {
			printf("�������ł��B\n������x");
		}
		else {
			printf("���Ȃ��̏����ł��B\n");
			break;
		}
	}
	
	return 0;
}