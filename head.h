#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>
#ifndef _u8
typedef struct {
	unsigned char *data;
	int len;
}_u8;
int RealRand(int);
_u8 *Odd(int);
int F_P(_u8*);
_u8 **FakePrime();
_u8 *Ini(int);
_u8 *Multiplicate(_u8 *, _u8 *);
int Print(_u8 *);
_u8 *RightMove(_u8 *A);
#endif