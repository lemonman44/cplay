#include <stdio.h>
#include <conio.h>
int main() {
	char pressed;
	char blank[30][100];
	char write[30][100];
	int positionx = 10;
	int positiony = 10;

	int a;
	int b;
	for (a = 0; a < 30; a++) {
		for (b = 0; b < 100; b++) {
			blank[a][b] = 32;
		}
	}

	while (1 == 1) {
		if (kbhit()) {
			pressed = getch();

			if (pressed == 119 && positiony <= 29 && positiony > 0) {
				positiony = positiony - 1;
			}
			if (pressed == 97 && positionx <= 99 && positionx > 0) {
				positionx = positionx - 1;
			}
			if (pressed == 115 && positiony < 29 && positiony >= 0) {
				positiony = positiony + 1;
			}
			if (pressed == 100 && positionx < 99 && positionx >= 0) {
				positionx = positionx + 1;
			}
			if (pressed == 113) {
				break;
			}
		}
		memcpy(write, blank, sizeof(char) * 30 * 100);
		write[positiony][positionx] = 64;
		printframe(write);
	}
	return 0;
}

int printframe(char frame[30][100]) {
	int a;
	int b;
	int i = 0;
	char framestring[4000];
	for (a = 0; a < 30; a++) {
		for (b = 0; b < 100; b++) {
			framestring[i] = frame[a][b];
			i++;
		}
		framestring[i] = 10;
		i++;
	}
	framestring[i] = 0;
	printf("%s", framestring);
	return 0;
}
