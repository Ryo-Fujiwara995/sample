#include <iostream>
using namespace std;

//�e���v���[�g�@�^���p�����[�^�ɂƂ��ĐF�X�Ȍ^�ɑΉ��ł���@�\
//				���Ԑ��̈�i�����֐���A�N���X�������Ȍ^�ɑΉ���������j
//�v���g�^�C�v�錾

//�I�[�o�[���[�h�ŏ���
//2�̐����̂����傫���ق���Ԃ�
int myMax(int a, int b);
//2�̒P���x�ifloat�j�����̂����傫���ق���Ԃ�
float myMax(float a, float b);
//2�̔{���x�idouble�j�����̂����傫���ق���Ԃ�
double myMax(double a, double b);

int myMax(int a, int b) {
	if (a > b)
		return a;
	else
		return b;
}

float myMax(float a, float b) {
	if (a > b)
		return a;
	else
		return b;
}

double myMax(double a, double b) {
	if (a > b)
		return a;
	else
		return b;
}

//�֐��e���v���[�g
template <typename T>
T tMax(T a, T b) {
	if (a > b)
		return a;
	else
		return b;
}


//�N���X�e���v���[�g
template <typename T>
class Vec2 {
public:
	T x;
	T y;
	T GetX() { return (x); }
	void SetX(T _x) { x = _x; }
	void PrintVec() { cout << "(x, y)= (" << x << "," << y << ")" << endl; }
	T Length() const { return ((T)sqrt(x * x + y * y)); }
	bool operator >(const Vec2 <T>& other) {
		return (this->Length() > other.Length());
	}

};

//�x�N�g���̒�����T�^�ŕԂ������o�֐������
//�x�N�g���̒����Ŕ�r����>���Z�q���I�[�o�[���[�h
//�x�N�g���̒������ׂĒ������\�����Ė{���ɂ����Ă��邩�m�F�itMax�ɓ����I�j

int main() {
	//int var1 = 10;
	//int var2 = 20;
	////int res = myMax(var1, var2);
	//int res = tMax<int>(var1, var2);
	//cout << "myMax 10 20: " << res << endl;
	//
	//float var3 = 10.5f;
	//float var4 = 5.1f;
	////float res2 = myMax(var3, var4);
	//float res2 = tMax<float>(var3, var4);
	//cout << "myMax 10.5 5.1f: " << res2 << endl;
	//
	//double var5 = 0.00005f;
	//double var6 = 1e-15;//10�̃}�C�i�X15��
	////double res3 = myMax(var5, var6);
	//double res3 = tMax<double>(var5, var6);
	//cout << "myMax var5 var6: " << res3 << endl;

	Vec2<int>v1;
	v1.x = 4;
	v1.y = 1;

	Vec2<int>v2;
	v2.x = 3;
	v2.y = 2;

	if (v1 > v2)
		v1.PrintVec();
	else
		v2.PrintVec();
	
	//Vec2<int> res = tMax(v1, v2);
	//res.PrintVec();


	//float vec = tMax<float>(x, y);
	//double res3 = tMax<double>(var5, var6);
	return 0;
}