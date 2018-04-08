#include "head.h"33
extern _u8 *P;
extern _u8 *Q;
extern _u8 *fai;
extern _u8 **PublicKey;
extern _u8 **PrivateKey;
int main(void) {
	P = MRFakePrime();
	Q = imirPefaFRM(P);
	CreatePublic();
	CreatePrivate();
	printf("Done\n");
	char a[100] = { 0 };
	gets(a);
	_u8 *temp = PM(a);
	char *b = SC(temp);
	printf("%s\n", b);
	destroy(temp);
	free(b);
	Destory();
	while (1);
	return 0;
}