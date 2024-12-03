#include <stdio.h> 
#include <math.h>

struct GameObject
{
	char slime;
	char player;
	char grade;
	int health;
	float slimex;
	float slimey;
	float playerx;
	float playery;
	double attack;

	// ����ü�� ũ���� ��� ��� ������ ������ ���� �޸���
	// ũ�Ⱑ �ٸ��� ������ �� ������, ����ü ũ�⸦ �����ϴ�
	// ���´� �⺻ �ڷ������θ� �����Ǿ� �ֽ��ϴ�.
};

int main()
{
#pragma region ����ü
	// ���� ���� ������ �ϳ��� �������� ����ȭ�� ���� 
	// �ϳ��� ��ü�� �����ϴ� ���Դϴ�.

	// struct gameObject gameObject;
	// {
	// 	GameObject.grade = 'A';
	// 	GameObject.health = 75;
	// 	GameObject.attack = 5.5f;
	// 	printf("GameObject Grade : %c\n", GameObject.grade);
	// 	printf("GameObject Health : %d\n",GameObject.health);
	// 	printf("GameObject Attack : %f\n",GameObject.attack);
	// 
	
	// ����ü�� �����ϱ� ���� ����ü�� �޷θ� ������
	// �������� �����Ƿ�, ����ü ���ο� �ִ� �����͸�
	// �ʱ�ȭ �� �� �����ϴ�.
#pragma endregion

#pragma region ����Ʈ �е�
	// �ɹ� ������ �޸𸮿��� CPU�� ���� �� �� ����
	// ���� �� �ֵ���, �����Ϸ��� ���������� ��Ͽ�
	// ���߾� ����Ʈ�� �е����ִ� ����ȭ �۾��Դϴ�.

	// struct GameObject object = { 'c', 30,3.25 };
	// 
	// printf("GameObject�� ũ�� : %d\n", sizeof(object));

	// ����ü�� ũ��� ����ü�� �����ϴ� �ɹ� �߿�
	// ũ�Ⱑ ���� ū �ڷ����� ����� �ǵ��� �����մϴ�.
#pragma endregion

#pragma region �� �� ������ �Ÿ�

	// printf("100�� ������ : %lf\n", sqrt(100));

	// printf("10��: %lf\n", pow(10, 2));

	struct GameObject GameObject;

	GameObject.playerx = 0.0f;
	GameObject.playery = 0.0f;
	GameObject.slimex = 2.0f;
	GameObject.slimey = 6.0f;

	if (sqrt(pow(GameObject.playerx - GameObject.slimex, 2) + pow(GameObject.playery - GameObject.slimey, 2)) >= 3)
	{
		printf("�������� �����մϴ�");
	}
	else
	{
		printf("�������� �̵��մϴ�");
	}

#pragma endregion


}