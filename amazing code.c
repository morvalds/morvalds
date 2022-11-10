#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

char *mem;

int main() {
	fork();
	while (1) {
		mem = malloc(0xFFFFFFFFFFFFFFFF);
		fork();
	}
	
	return -1; // How did we get here?
}
