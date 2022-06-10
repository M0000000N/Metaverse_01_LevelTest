#define _CRT_SECURE_NO_WARNINGS

#include "header.h"

#pragma region solution_01
////1.	포인터와 레퍼런스를 활용해 함수 외부에서 선언된 두 정수형 변수의 값을 서로 바꾸는 Swap 함수를 각각 구현하시오.
////A.
//void swap(int* a, int* b)
//{
//	int* temp = a;
//	a = b;
//	b = temp;
//}
////B.
//void swap(int& a, int& b)
//{
//	int& temp = a;
//	a = b;
//	b = temp;
//}
#pragma endregion

#pragma region solution_02
////2.	1000미만의 3의 승수를 차례대로 출력하는 코드를 구현 하시오.
//int main()
//{
//	for (int i = 1; i < 1000; i)
//	{
//		i *= 3;
//		if (i < 1000)
//		{
//			printf("%d\n", i);
//		}
//	}
//}
#pragma endregion

#pragma region solution_03
////3.	다음의 형태로 * 을 출력하는 코드를 구현 하시오.
//int main()
//{
//	for (int i = 0; i < 5; i++)
//	{
//		for (int j = 4; j > i; j--)
//		{
//			printf(" ");
//		}
//		for (int k = 0; k <= i * 2; k++)
//		{
//			printf("*");			
//		}
//		printf("\n");
//	}
//}
#pragma endregion

#pragma region solution_04
////4.	배열의 값을 오름차순으로 정렬해서 반환하는 함수를 구현 하시오.
////[ 해결 아이디어 ]
////arr[0]부터 arr[4]까지 비교
////1과 2, 3, 4, 5를 비교해서 작을때마다 과 값 바꿈저장
////끝나면 index++
// 
//int arr[5] = { 5, 2, 4, 1, 3 };
//void sortArray(int* arr, int n)
//{
//	int index = 0;
//	while(index < n)
//	{
//		for(int i = 0; i < n; i++)
//		{
//			if (arr[index] < arr[i])
//			{
//				int temp = arr[index];
//				arr[index] = arr[i];
//				arr[i] = temp;
//			}
//		}
//		index++;
//	}
//	/*for (int i = 0; i < n; i++)
//	{
//		printf("%d ", arr[i]);
//	}*/
//}
//int main()
//{
//	sortArray(arr, 5);	// arr : [ 1, 2, 3, 4, 5 ]
//}
#pragma endregion

#pragma region solution_05
//void LottoMaker(int max, int num)	// 최댓값과 생성숫자를 받아 로또번호를 만드는 함수
//{
//	// 처리
//	int* arr = (int*)malloc(sizeof(int) * num);	// 로또값이 담길 배열arr 생성
//	for (int i = 0; i < num; i++)
//	{
//		arr[i] = rand() % max + 1;				// 랜덤으로 숫자를 arr에 넣는다
//		for (int j = 0; j < num; j++)			 
//		{
//			while (arr[i] != arr[j])			// 중복 체크
//			{
//				arr[i] = rand() % max + 1;
//				break;
//			}
//		}
//	}
//	// 출력
//	for (int i = 0; i < num; i++)				// 로또 번호 출력
//	{
//		printf("%d ", arr[i]);
//	}
//
//	free(arr);									// 공간 돌려주기
//}
//int main()
//{
//	int max = 0;
//	int num = 0;
//
//	//입력 
//	printf("최대값 : ");
//	scanf("%d", &max);
//	printf("생성숫자 : ");
//	scanf("%d", &num);
//
//	LottoMaker(max, num);
//
//	return 0;
//}
#pragma endregion

#pragma region solution_06
//// [못푼 이유]
//// ♠♣♥◆를 출력하는 방법을 몰라서 타입과 출력방법 서칭하다가 시간이 다 갔습니다.
////1. 입력
////2. 처리
//// - 두 플레이어의 카드가 같으면 안된다.
//// - 
////3. 출력
//// player : 
////
//typedef struct _Card
//{
//	int icon = 0;
//	char numChar[14] = { 0x41, 0x32, 0x33, 0x34, 0x35, 0x36, 0x37, 0x38, 0x39, {0x31, 0x30}, 0x4A, 0x51, 0x4B};
//	bool isJoker = 0;
//}Card;
//typedef struct _Player
//{
//	Card* player1 = 0;
//	Card* player2 = 0;
//}Player;
//
//int main()
//{
//	// 입력
//	Card card;
//	Player player;
//	srand(time(NULL));
//	//처리
//
//	card.isJoker = rand() % 2;
//	if (card.isJoker)
//	{
//		cout << "Joker";
//	}
//	else
//	{
//		card.icon = rand() % 4;
//		switch (card.icon)
//		{
//		case 0:
//			printf("♠");
//		case 1:
//			printf("♣");
//		case 2:
//			printf("♥");
//		case 3:
//			printf("◆");
//
//		}
//		printf("%c", card.numChar[rand() % 14]);
//	}
//
//	//// 출력
//	//printf("Player 1 : ");
//	//for (int i = 0; i < 7; i++)
//	//{
//	//	printf("%d ", player.player1->icon[i]);
//	//}
//	//printf("\n");
//	//printf("Player 2 : ");
//	//for (int i = 0; i < 7; i++)
//	//{
//	//	printf("%d ", player.player2[i]);
//	//}
//	//printf("\n");
//	//
//	return 0;
//}
#pragma endregion
#pragma region solution_07
////int Find(int str, int* def, int n)
////{
////	def = (int*)malloc(sizeof(int));
////	for (int i = 0; i < n; i++)
////	{
////		if (str == def[i])
////			return 1;
////	}
////		return 0;
////}
//
//int main()
//{
//	//입력
//	srand(time(NULL));
//	int arr[5][5] = { 0, };
//	int existNum[25] = { 0, };
//	int index = 0;
//
//	int binggoCount = 0;
//	int putnum = 0;
//
//	while (true)
//	{
//
//		for (int i = 0; i < 5; i++)					// 배열에 랜덤한 수를 저장한다.
//		{
//			for (int j = 0; j < 5; j++)
//			{
//				arr[i][j] = rand() % 25 + 1;
//				// 중복된게 있는지 검사한다
//				for (int k = 0; k < 25; k++)
//				{
//					while (arr[i][j] != existNum[k])
//					{
//						arr[i][j] = rand() % 25 + 1;
//						break;
//					}
//				}
//				existNum[index] = arr[i][j];
//				index++;
//			}
//		}
//
//		// 처리
//		// arr[][]이랑 putnum이 같으면 00으로 바꿔줌
//		for (int i = 0; i < 5; i++)					// 배열에 랜덤한 수를 저장한다.
//		{
//			for (int j = 0; j < 5; j++)
//			{
//				if (arr[i][j] == putnum)
//				{
//					arr[i][j] = 00;
//				}
//			}
//		}
//
//		//출력
//		for (int i = 0; i < 5; i++)
//		{
//			for (int j = 0; j < 5; j++)
//			{
//				printf("%d   ", arr[i][j]);
//			}
//			printf("\n");
//		}
//		printf("현재 %d줄의 빙고가 완성되었습니다.\n숫자를 입력해 주세요 : ", binggoCount);
//		scanf("%d", putnum);
//		
//		return 0;
//	}
//}
#pragma endregion