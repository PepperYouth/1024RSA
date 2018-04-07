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
	char a[100] = { 0 };
	P = MRFakePrime();
	Q = imirPefaFRM(P);
	CreatePublic();
	Print(PublicKey[1]);
	gets(a);
	_u8 **P_M=RSAPublic(a, PublicKey);
	PrintPM(P_M);
	//CreatePrivate();
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
	P = Sub(P, Temp);
	destroy(P);
	Q = Sub(Q, Temp);
	destroy(Q);
	_u8 *fai = Multiplicate(P, Q);
	return fai;
}
void Destory() {
	destroy(P);
	destroy(Q);
	destroy(PublicKey[0]);
	destroy(PublicKey[1]);
	//destroy(PrivateKey[0]);
	//destroy(PrivateKey[1]);
}