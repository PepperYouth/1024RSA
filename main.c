#include "head.h"
_u8 *P;
_u8 *Q;
_u8 **PublicKey;
_u8 **PrivateKey;
void CreatePublic();
void CreatePrivate();
_u8 *Fai();
void Destory();
int main(void) {
	P = MRFakePrime();
	Q = imirPefaFRM(P);
	CreatePublic();
	CreatePrivate();
	printf("d: %d\n", PrivateKey[0]->len);
	Print(PrivateKey[0]);
	Destory();
	while (1);
	return 0;
}
void CreatePublic() {
	PublicKey = (_u8 **)malloc(2 * sizeof(_u8 *));
	PublicKey[0] = Ini(3);
	PublicKey[0]->data[0] = 1;
	PublicKey[0]->data[1] = 0;
	PublicKey[0]->data[2] = 1;
	PublicKey[1] = Multiplicate(P, Q);
}
void CreatePrivate() {
	PrivateKey = (_u8 **)malloc(2 * sizeof(_u8 *));
	PrivateKey[1] = PublicKey[1];
	PrivateKey[0] = ExEuclid(PublicKey[0], Fai())[0];
}
_u8 *Fai() {
	_u8 *Temp = Ini(1);
	_u8 *Temp2;
	Temp2 = P;
	P = Sub(Temp2, Temp);
	destroy(Temp2);
	
	Temp2 = Q;
	Q = Sub(Temp2, Temp);
	destroy(Temp2);
	destroy(Temp);
	_u8 *fai = Multiplicate(P, Q);
	return fai;
}
void Destory() {
	destroy(P);
	destroy(Q);
	destroy(PublicKey[0]);
	destroy(PublicKey[1]);
	free(PublicKey);
}