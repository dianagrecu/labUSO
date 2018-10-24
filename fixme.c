#include <stdio.h>
#include <stdlib.h>

int main() {
	unsigned char v[64];
	
	for (int i = 0; i < 63; i++) {
		v[i] = i;
		printf("%c", v[i]);
	}

	return 0;
}
