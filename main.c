#include "head.h"
int main(void) {
	_u8 *X = MRFakePrime();
	Print(X);
	printf("%d\n", X->len);

	while (1);
	return 0;
}