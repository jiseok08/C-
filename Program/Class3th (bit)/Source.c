#include <stdio.h>

void main()
{

#pragma region ��Ʈ
	//�����͸� ��Ÿ���� �ּ��� �����̸�, 0 �Ǵ� 1��
	//�������� �� ����� �����ϴ� �����Դϴ�

	char alphabet = 15;// [0][0][0][0][1][1][1][1]

#pragma region (10)������ (2)������ ��ȯ�ϴ� ����
	//10������ 1�� �� ������ ��� 2�� ������ �� ����
	//���� ��ġ�� ������ ���� �Ʒ����� ���� �������
	//�����մϴ�.



#pragma endregion

#pragma region (2)������ (10)������ ��ȯ�ϴ� ����
	// 1byte�� 2������ ������ ���� 2�� ��������
	// ǥ���ϸ�, ������ ��Ʈ�� 1�� �ִٸ� 1�� 2��
	// ������ ��ġ�� ����� ���� ������ ��Ʈ�� ���
	// ���Ͽ� 10������ ��Ÿ���ϴ�.
#pragma endregion




		//�޸𸮴� ��Ʈ ������ �����͸� ���� �� �� ������,
		//1���� ��Ʈ���� 0 �Ǵ� 1�� ���� ������ �� �ֽ��ϴ�.
#pragma endregion

#pragma region ��Ʈ ������
	//��Ʈ ������ �� ������ �����ϱ� ����
	//����ϴ� ���� �Դϴ�.

#pragma region AND ������
	//�� ���� �ǿ����ڰ� ��� 1�̸� 1�� ��ȯ
	//�ϴ� �������Դϴ�.

	//char x1 = 9;  //00001001
	//char y1 = 13; //00001101
	//			  //----------
	//			  //00001001
	//			  //= 9
	//printf("x1�� x2�� AND ������ ��� : %d\n", x1 & y1);

#pragma endregion

#pragma region OR ������
	//�� ���� �ǿ����� �߿� �ϳ��� 1�� �ִٸ�
	//1�� ��ȯ�ϴ� �������Դϴ�.

	//int x2 = 5;  //00000101
	//int y2 = 17; //00010001
	//			 //--------
	//			 //00010101
	//			 //16 + 4 + 1 = 21

	//printf("x2�� y2�� OR ������ ��� : %d\n", x2 | y2);

#pragma endregion

#pragma region XOR ������
	//�� ���� �ǿ����ڰ� ���� ������ 0�� ��ȯ�ϰ�,
	//���� �ٸ��� 1�� ��ȯ�ϴ� �������Դϴ�.

	//int x3 = 14; //00001110
	//int y3 = 7;  //00000111
	//			 //--------
	//			 //00001001
	//			 //= 9
	//
	//printf("x3�� y3�� XOR ������ ��� : %d\n", x3 ^ y3);

#pragma endregion

#pragma region NOT ������
	//��Ʈ�� ������Ű�� �������Դϴ�.

	//char flag = 16; //00010000
	//				//--------
	//				//11101111
	//printf("flag�� NOT �����ڷ� ������ ��� : %d\n", ~flag);



#pragma endregion

	// ù ��° ��Ʈ�� ��ȣ�� ��Ÿ����, ù ��° ��Ʈ�� 
	//1�� �ִٸ� ���� ������ �˴ϴ�.
#pragma endregion

#pragma region ����Ʈ ������
	//��Ʈ�� ��ġ�� ������ �Ǵ� �������� ������ ����ŭ
	//�̵���Ű�� �������Դϴ�.

	//int x = 10;
	//int y = 12;
	//
	//printf("x�� ���� 2�� �������� �̵��� ��� : %d\n", x << 2);
	//printf("y�� ���� 2�� ���������� �̵��� ��� : %d\n", y >> 2);

#pragma endregion

#pragma region ��� ������

	//int result1 <- ����+ ����
	//int result2 <- ���ͷ� ��� - ����
	//int result3 <- �ɺ��� ��� * ���ͷ� ���
	//int result4 <- ���ͷ� ��� / ���ͷ� ���
	//int result5 <- �ɺ��� ��� % �ɺ��� ���

	//int x = 10;
	//const int y = 10;
	//
	//
	//int result1 = x + x;
	//int result2 = 15 - x;
	//int result3 = y * 5;
	//int result4 = 15 / y;
	//int result5 = y % y;
	//
	//printf("result1 ������ �� : %d\n", result1);
	//printf("result2 ������ �� : %d\n", result2);
	//printf("result3 ������ �� : %d\n", result3);
	//printf("result4 ������ �� : %d\n", result4);
	//printf("result5 ������ �� : %d\n", result5);
#pragma endregion

#pragma region ��ȣ ���� �ڷ���

	//unsigned short mineral = 65535;
	//unsigned int gas = -1;
	//
	//printf("mineral ������ �� : %u\n", mineral);
	//
	//printf("gas ������ �� : %u\n", gas); 
	//printf("gas ������ �� : %d\n", gas); 
	
#pragma endregion


}