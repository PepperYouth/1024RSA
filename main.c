#include "head.h"
int main(void) {
	_u8 *A = Ini(5);
	_u8 *B;
	int i;
	A->data[0] = 0;
	A->data[1] = 0;
	A->data[2] = 0;
	A->data[3] = 2;
	A->data[4] = 0x23;
	B = RightMove(A);
	for(i = B->len - 1; i >= 0  ; i--)
		printf("%02x", B->data[i]);
	while (1);
	return 0;
}