#include <stdio.h>

void main()
{

#pragma region 비트
	//데이터를 나타내는 최소의 단위이며, 0 또는 1의
	//조합으로 논리 계산을 수행하는 단위입니다

	char alphabet = 15;// [0][0][0][0][1][1][1][1]

#pragma region (10)진수를 (2)진수로 변환하는 과정
	//10진수를 1이 될 때까지 계속 2로 나누어 준 다음
	//나눈 위치의 나머지 값을 아래에서 위로 순서대로
	//정렬합니다.



#pragma endregion

#pragma region (2)진수를 (10)진수로 변환하는 과정
	// 1byte에 2진수로 저장한 값을 2의 제곱으로
	// 표현하며, 각각의 비트에 1이 있다면 1과 2의
	// 제곱의 위치를 계산한 다음 각각의 비트를 모두
	// 더하여 10진수로 나타냅니다.
#pragma endregion




		//메모리는 비트 단위로 데이터를 저장 할 수 있으며,
		//1개의 비트에는 0 또는 1의 값만 저장할 수 있습니다.
#pragma endregion

#pragma region 비트 연산자
	//비트 단위로 논리 연산을 수행하기 위해
	//사용하는 연산 입니다.

#pragma region AND 연산자
	//두 개의 피연산자가 모두 1이면 1을 반환
	//하는 연산자입니다.

	//char x1 = 9;  //00001001
	//char y1 = 13; //00001101
	//			  //----------
	//			  //00001001
	//			  //= 9
	//printf("x1과 x2를 AND 연산한 결과 : %d\n", x1 & y1);

#pragma endregion

#pragma region OR 연산자
	//두 개의 피연산자 중에 하나라도 1이 있다면
	//1을 반환하는 연산자입니다.

	//int x2 = 5;  //00000101
	//int y2 = 17; //00010001
	//			 //--------
	//			 //00010101
	//			 //16 + 4 + 1 = 21

	//printf("x2와 y2를 OR 연산한 결과 : %d\n", x2 | y2);

#pragma endregion

#pragma region XOR 연산자
	//두 개의 피연산자가 서로 같으면 0을 반환하고,
	//서로 다르면 1을 반환하는 연산자입니다.

	//int x3 = 14; //00001110
	//int y3 = 7;  //00000111
	//			 //--------
	//			 //00001001
	//			 //= 9
	//
	//printf("x3와 y3을 XOR 연산한 결과 : %d\n", x3 ^ y3);

#pragma endregion

#pragma region NOT 연산자
	//비트를 반전시키는 연산자입니다.

	//char flag = 16; //00010000
	//				//--------
	//				//11101111
	//printf("flag를 NOT 연산자로 연산한 결과 : %d\n", ~flag);



#pragma endregion

	// 첫 번째 비트는 부호를 나타내며, 첫 번째 비트에 
	//1이 있다면 값은 음수가 됩니다.
#pragma endregion

#pragma region 시프트 연산자
	//비트의 위치를 오른쪽 또는 왼쪽으로 득정한 수만큼
	//이동시키는 연산자입니다.

	//int x = 10;
	//int y = 12;
	//
	//printf("x의 값을 2번 왼쪽으로 이동한 결과 : %d\n", x << 2);
	//printf("y의 값을 2번 오른쪽으로 이동한 결과 : %d\n", y >> 2);

#pragma endregion

#pragma region 산술 연산자

	//int result1 <- 변수+ 변수
	//int result2 <- 리터럴 상수 - 변수
	//int result3 <- 심볼릭 상수 * 리터럴 상수
	//int result4 <- 리터럴 상수 / 리터럴 상수
	//int result5 <- 심볼릭 상수 % 심볼릭 상수

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
	//printf("result1 변수의 값 : %d\n", result1);
	//printf("result2 변수의 값 : %d\n", result2);
	//printf("result3 변수의 값 : %d\n", result3);
	//printf("result4 변수의 값 : %d\n", result4);
	//printf("result5 변수의 값 : %d\n", result5);
#pragma endregion

#pragma region 부호 없는 자료형

	//unsigned short mineral = 65535;
	//unsigned int gas = -1;
	//
	//printf("mineral 변수의 값 : %u\n", mineral);
	//
	//printf("gas 변수의 값 : %u\n", gas); 
	//printf("gas 변수의 값 : %d\n", gas); 
	
#pragma endregion


}