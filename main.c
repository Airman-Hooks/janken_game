#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
	int player;
	int cpu;
	int judge = 0;
	srand((unsigned)time(NULL));

	while (judge == 0) {
		printf("０～２のいずれかから出す手を選んでください。\n");
		printf("0:グー　1:チョキ　2:パー\n");
		scanf_s("%d", &player);
		cpu = rand() % 3;
		switch (player) {
		case 0:
			printf("あなたの手：グー\n");
			break;
		case 1:
			printf("あなたの手：チョキ\n");
			break;
		case 2:
			printf("あなたの手：パー\n");
			break;
		default:
			printf("入力値が誤っています。再入力してください。\n");
			continue;
		}
		
		switch (cpu) {
		case 0:
			printf("CPUの手：グー\n");
			break;
		case 1:
			printf("CPUの手：チョキ\n");
			break;
		case 2:
			printf("CPUの手：パー\n");
			break;
		}

		if ((player == 0 && cpu == 2) || (player == 1 && cpu == 0) || (player == 2 && cpu == 1)) {
			printf("あなたの負けです。\n");
			judge = 1;
		}
		else if (player == cpu) {
			printf("あいこです。\nもう一度");
		}
		else {
			printf("あなたの勝ちです。\n");
			break;
		}
	}
	
	return 0;
}