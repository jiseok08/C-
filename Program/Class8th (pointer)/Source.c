#include <stdio.h> 

void main()
{
#pragma region �ּ� ������
	// ������ �ּ� ���� ��ȯ�ϴ� �������Դϴ�.

	// int data = 10;
	// printf("data ������ �ּ� : %p", &data);

	// �������� �ּ� ���� �ش� �����Ͱ� ����� �޸���
	// ���� �ּҸ� �ǹ��ϸ�, �޸��� ������ 1byte��
	// ũ��� ������ ǥ���մϴ�.
#pragma endregion

#pragma region scanf �Լ�
	// ǥ�� �Է� �Լ���, ���� ������ �����͸� �پ���
	// ���Ŀ� ���߾� �Է����ִ� �Լ��Դϴ�.

	//int score = 0;

	// ǥ�� �Է� �Լ��� �Է��� ������ ������ ����
	// �۾����� �Ѿ �� �����ϴ�.

	//printf("score ���� �Է����ּ���\n");
	//scanf_s("%d", &score);

	// ���۴� �����Ͱ� �̵��� �� �ӽ÷� ����Ǵ� �����̸�,
	// ���� �����ڿ� ���� �Է��� �� �ִ� �������� ������ �����˴ϴ�.

	//printf("score ������ �� : %d" + score);

	// ǥ�� �Է� �Լ��� �����͸� �Է��ϰ� �Ǹ� 
	// ������ �����͸� �����Ͽ��ٰ� �Է��ϴ� ����
	// ���� ���� ������ ���α׷��� �����մϴ�.
#pragma endregion

#pragma region star

	// int n = 0;
	// scanf_s("%d", &n);
	// 
	// for (int i = 0; i < n; i++)
	// {
	// 	for (int j = 0; j <= i; j++)
	// 	{
	// 		printf("*");
	// 	}
	// 	printf("\n");
	// }
#pragma endregion

#pragma region ������
	// �޸��� �ּ� ���� ������ �� �ִ� �����Դϴ�.

	//int x = 10;
	//int * pointer = &x; //<- ������ ���� ����, x�� ����
	//
	//*pointer = 99; // ������
	//
	//printf("x ������ �� : %d\n", x);
	//printf("x�� �ּ� �� : %p\n", &x);
	//printf("pointer ������ �� : %d\n", pointer);
	//printf("pointer ������ �ּ� : %p\n", &pointer);
	// ������ ������ �ڽ��� �޸� ������ ������ ������,
	// ������ ������ ������ �ּҸ� �����ϰ� �Ǹ� �ش�
	// ������ ���� �ּҸ� ����Ű�� �˴ϴ�.

	//float health = 100.0f;
	//
	//pointer = &health;
	//
	//*pointer = 15.5f;
	//
	//printf("health ������ �� : %f\n", health);
	//
	//// ������ ������ �����ϱ� ���� �ּ� ���� ������ ������
	//// �ڷ����� ������ ������ �ڷ����� ��ġ�ؾ� �մϴ�.
	//
	//printf("������ ������ ũ�� : %u\n", sizeof(pointer));

	// ������ ������ ũ��� �߾� ó�� ��ġ�� �� ���� ó���� ��
	// �ִ� ũ��� ��������, �� ���� ó���� �� �ִ� ũ���
	// � ü���� ���� ũ�Ⱑ �����˴ϴ�.
#pragma endregion

#pragma region ���� ������
	// �ڷ����� �������� ���� ���·� ��� �ڷ�����
	// ������ �� �ִ� �������Դϴ�.

	// void* p = NULL;
	// 
	// char character = 'A';
	// 
	// int integer = 10;
	// 
	// float decimal = 5.5f;

	// ���� �����ͷ� ������ �޸𸮿� �����Ϸ���
	// ���� �����Ͱ� ����Ű�� ������ �ڷ�������
	// �� ��ȯ�� ���־�� �մϴ�.

	// p = &character;
	// *(char*)p = 'B';
	// printf("charater ������ �� : %c\n", character);
	// 
	// p = &integer;
	// *(int*)p = 99;
	// printf("integer : %d\n", integer);
	// 
	// p = &decimal;
	// *(float*)p = 10.1f;
	// printf("decimal : %f\n", decimal);

	// ���� �����ʹ� �޸� �ּҿ� �����ؼ� ����
	// ������ �� �����ϴ�.
#pragma endregion

#pragma region ��� ���� ������
// int vectorX = 10;
// int vectorY = 20;
// 
// const int* ptr = &vectorX;
// 
// printf("ptr ������ ����Ű�� �� : %d\n", *ptr);
// 
// // *ptr = 99;
// 
// ptr = &vectorY;
// 
// printf("ptr ������ ����Ű�� �� : %d\n", *ptr);

// ��� ���� �����͸� �����ϰ� �Ǹ� ������ ������
// ����Ű�� �ִ� �ּҿ� �����ϴ� ���� ������ ��
// ������ ������ �� �ֽ��ϴ�.

// ������(X), �ٸ� �ּ� ����(O)
#pragma endregion

#pragma region ������ ���

// int positionX = 5;
// int positionY = 0;
// int* const reference = &positionX;
// 
// *reference = 10;

// reference = &positionY;

// ������ ����� �ش� ������ ���� ������ �� ������,
// �ٸ� �޸� �ּҸ� ������ �� �����ϴ�.

// ������(O), �ٸ� �ּ� ����(X)
#pragma endregion
}