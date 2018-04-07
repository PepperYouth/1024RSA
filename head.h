#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>
#ifndef _u8
#define TIME 3//检测次数
typedef struct {
	unsigned char *data;
	int len;
}_u8;
typedef struct {
	_u8 *u;
	int t;
}factor;
int RealRand(int);//生成随机数
int NoEqualOne(_u8 *);//是否等于1, 是返回0，否返回1
int NoEqualN_1(_u8 *, _u8*);//是否等于n-1, 是返回0，否返回1
int EqualZero(_u8 *);//是否等于0, 是返回1，否返回0

_u8 *Odd(int);//生成随机奇数
int F_P(_u8*);//素数筛选
_u8 *MR_rand(_u8*);//生成Miler-Rabin法所需要的a∈（2，n-1）的随机数
int Witness(_u8*, _u8*);//一次Miler-Rabin检测
int Miler_Rabin(_u8 *n, int s);//"s"次Miler-Rabin检测，通过返回0，不通过返回1
_u8 *FakePrime(int);//伪素数
_u8 *MRFakePrime();//通过miler-rabin法的伪素数
_u8 *imirPefaFRM(_u8 *);//第二个通过miler-rabin法的伪素数

_u8 *Ini(int);//初始化大数
int Print(_u8 *);//输出大数
int DelZero(_u8 *);//消去高位的0
void destroy(_u8 *);//销毁内存

_u8 *Sub(_u8 *, _u8 *);//大数减法
factor *RightMove(_u8 *);//大数右移至最低位不为零
int Compare(_u8* A, _u8* B);//比较
_u8 *Mod(_u8* A, _u8* B);//模运算
_u8 *Multiplicate(_u8 *, _u8 *);//大数乘法
_u8 *Mul(_u8 *, unsigned char);//大数与小数乘法
_u8 *ModExp(_u8 *, _u8 *, _u8 *);//模幂运算

_u8 **ExEuclid(_u8 *, _u8 *);//求模逆
_u8 **RSAPublic(char *, _u8 **);//用公钥加密
#endif