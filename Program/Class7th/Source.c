#include <stdio.h> 

void main()
{
#pragma region �ݺ���
	// ������Ʈ ������ Ư���� �۾��� �ݺ�������
	// �����ϴ� ���ɹ��Դϴ�.

#pragma region ���� ������
	// �ǿ����ڸ� �ϳ��� ������Ű�ų� ���ҽ�ų ��
	// ����ϴ� �������Դϴ�.

	//int x = 0;
	//
	//int vectorX = ++x;
	//
	//printf("���� ������ x�� �� : %d\n", x); // 1
	//printf("vectorx�� �� : %d\n", vectorX); // 1
	//
	//vectorX = --x;
	//
	//printf("���� ������ x�� �� : %d\n", x); // 0
	//printf("vectorX�� �� : %d\n", vectorX); // 0

	// ���� ���� �����ڴ� ������ ���� ������Ų �Ŀ�
	// ������ �����մϴ�.

	//int y = 0;
	//
	//int vectorY = y++;
	//printf("���� ������ y�� �� : %d\n", y); //1
	//printf("vectorY�� �� : %d\n", vectorY); //0
	//
	//vectorY = y--;
	//printf("���� ������ y�� �� : %d\n", y); //0
	//printf("vectorY�� �� : %d\n", vectorY); //1

	// ���� ���� �����ڴ� ������ ����� ���� ������
	// ���� ������ŵ�ϴ�.
#pragma endregion

#pragma region for��
	// �ʱ���� �����Ͽ� ���ǽ��� ����� ���� Ư����
	// Ƚ����ŭ �ݺ��ϴ� �ݺ����Դϴ�.

	//int i;
	//for (int i = 0; i < 5; i++)
	//{
	//	printf("%d\n", i);
	//}

	// for���� ��� ������ ������ ���¿� �ݴ�� �ʱ����
	// �����ϰ� �Ǹ� ������ ��ġ���� �ʾ� �Լ� �ݺ�������
	// ����Ǵ� ������ �߻��մϴ�.
#pragma endregion

#pragma region While��
	// Ư�� ������ ������ ������ ����ؼ� �־���
	// ���ɹ��� �����ϴ� �ݺ����Դϴ�.

	//int x = 1;
	//while (x <= 5)
	//{
	//	printf("%d\n", x);
	//	++x;
	//}

	// While���� ��� ������ �Ʒ��� ����Ǹ�,
	// �Ʒ��� �ִ� ���ɹ��� ������ �� ������
	// �ٽ� ���� �ִ� ���ɹ����� ���ư��� �����մϴ�.
#pragma endregion

#pragma region do while��
	// ���ǰ� ������� �� ���� �۾��� ������ ����
	// ���ǿ� ���� ���ɹ��� �����ϴ� �ݺ����Դϴ�.

	//int connection = 0;
	//
	//do
	//{
	//	printf("connection...");
	//}
	//while (connection > 0);

#pragma endregion

#pragma region continue��
	// �ش� ���ǹ��� �������� �ʰ�, �ݺ����� �̾
	// �����ϴ� ����Դϴ�.

	//for (int i = 1; i <= 10; i++)
	//{
	//	if (i % 3 == 0)
	//	{
	//		continue;
	//	}
	//	printf("%d\n", i);
	//}
#pragma endregion

#pragma region ���� �� ���
	// ����� �����ϴ� ���߿� ����� �̹� Ȯ���� ���,
	// ������ ����ϴ� ������ �����ϴ� ���Դϴ�.

// int x = 0;
// int y = 0;
// int z = 0;
// if (x == 0 && y++)
// {
// 	printf("Short Circuit\n");
// }
// if (z == 0 || y++)
// {
// 	printf("OR Operator");
// }
// printf("y�� �� : %d\n", y);
#pragma endregion

#pragma region '2'�� for��

// for (int i = 0; i < 3; i++)
// {	
// 	for (int j = 0; j < 3; j++)
// 	{
// 		printf("j�� �� : %d\n", j);
// 	}
// 	printf("i�� �� : %d\n", i);
// 	printf("\n")
// }


#pragma endregion

#pragma endregion





}