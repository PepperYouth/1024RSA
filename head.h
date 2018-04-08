#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>
#ifndef _u8
#define TIME 10//������
#define LEN 256
typedef struct {
	char sign;//0���޷��ţ�1���з���
	unsigned char *data;
	int len;
}_u8;
typedef struct {
	_u8 *u;
	int t;
}factor;
typedef struct {
	_u8 *d;
	_u8 *n;
	_u8 *e;
}RSAKEKS;
int RealRand(int);//���������
int EqualOne(_u8 *);//�Ƿ����1, �Ƿ���1���񷵻�0
int EqualN_1(_u8 *, _u8*);//�Ƿ����n-1, �Ƿ���1���񷵻�0
int EqualZero(_u8 *);//�Ƿ����0, �Ƿ���1���񷵻�0

_u8 *Odd(int);//�����������
int F_P(_u8*);//����ɸѡ
_u8 *MR_rand(_u8*);//����Miler-Rabin������Ҫ��a�ʣ�2��n-1���������
int Witness(_u8*, _u8*);//һ��Miler-Rabin���
int Miler_Rabin(_u8 *n, int s);//"s"��Miler-Rabin��⣬ͨ������0����ͨ������1
_u8 *FakePrime(int);//α����
_u8 *MRFakePrime();//ͨ��miler-rabin����α����
_u8 *imirPefaFRM(_u8 *);//�ڶ���ͨ��miler-rabin����α����
int PsePrime(_u8 *, _u8 *);

_u8 *Ini();//��ʼ������
int Print(_u8 *);//�������
void destroy(_u8 *);//�����ڴ�

_u8 *Add(_u8 *, _u8 *);//�����ӷ�
_u8 *Sub(_u8 *, _u8 *);//��������
factor *RightMove(_u8 *);//�������������λ��Ϊ��
int Compare(_u8 * , _u8 *);//�Ƚ�
_u8 *Mod(_u8 *, _u8 *);//ģ����
_u8 *Div(_u8 *, _u8 *);//��������ȡ��
_u8 *Multiplicate(_u8 *, _u8 *);//�����˷�
_u8 *Mul(_u8 *, unsigned char);//������С���˷�
_u8 *ModExp(_u8 *, _u8 *, _u8 *);//ģ������

_u8 **ExEuclid(_u8 *, _u8 *);//��ģ��
void CreatePublic();//���ɹ�Կ��
void CreatePrivate();//����˽Կ��
_u8 *Fai();//���㣨P-1��*��Q-1��
void Destory();//�����ͷ��ڴ�
_u8 *PM(char *);//����
char *SC(_u8 *);//����
#endif
