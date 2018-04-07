#include "head.h"
int main(void) {
	_u8 *A = MRFakePrime();
	Print(A);
	free(A);
	while (1);
	return 0;
}