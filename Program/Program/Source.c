#include <stdio.h> 

int count;

int stage = 1;

static int score = 0;

void Clear()
{
	stage += 1;
}

void Increase()
{
	static int score = 0;

	score++;

	printf("score : %d\n", score);
}

void main()

{
#pragma region �޸�

#pragma region CODE ����
	// ���μ����� ������ �ڵ�� ��ũ�� �����
	// ���� ���·� ����Ǵ� �����Դϴ�.


#pragma endregion

#pragma region DATA ����
	// ���� ������ ���� ������ ����Ǵ� �����Դϴ�.

#pragma endregion

#pragma region BSS ����
	// �ʱ�ȭ���� ���� ���� ������
	// ����Ǵ� �����Դϴ�.
#pragma endregion

#pragma region STACK ����
	// �Լ��� ȣ��� ����Ǵ� ���� ������
	// �Ű� ������ ����Ǵ� �����Դϴ�.

#pragma endregion

#pragma region HEAP ����
	//����ڰ� ���� �Ҵ��ϴ� �޸� �����Դϴ�.
#pragma endregion


#pragma endregion

#pragma region ���� ����
	// �Լ� ���ο� ����� ������, �Լ� ���ο����� ��� �����ϸ�,
	// { }�� ����� �������� �޸𸮰� �����Ǵ� Ư¡�� ������ �ִ� �����Դϴ�.

	// int x = 10;
	// 
	// {
	// 	int x = 20;
	// 	printf("x�� �� : %d\n", x);
	// }
	// printf("x�� �� : %d\n", x);
#pragma endregion

#pragma region ���� ����
	// �Լ� �ܺο����� ������ �����ϸ�, ���α׷��� ����� ��
	// �޸𸮿��� �����ǰ�, ���α׷��� ����Ǿ�߸� �޸𸮿��� �������
	// Ư¡�� ������ �ִ� �����Դϴ�.

	// Clear();
	// Clear();
	// Clear();
	// 
	// printf("stage�� �� : %d\n", stage);
	// 
	// // ���������� �ʱ�ȭ���� �ʾƵ� 0�� ���Ե˴ϴ�.
	// printf("count ������ �� : %d\n", count);
#pragma endregion

#pragma region ���� ����
	// ���� ������ ���� ������ Ư���� ������ ������, ���α׷��� ����� �� �� �ѹ���
	// �ʱ�ȭ�� �̷������, ���α׷��� ����� �� �޸𸮿� �����ǰ� ���α׷��� ����Ǿ�߸�
	// �޸𸮿��� �����Ǵ� Ư¡�� ������ �ִ� �����Դϴ�.

	// �ٸ������� �Ǽ��� �ǵ帮�°� �����ϱ� ���� ���

	Increase();
	Increase();
	Increase();


#pragma endregion


}