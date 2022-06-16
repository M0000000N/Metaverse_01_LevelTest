#define _CRT_SECURE_NO_WARNINGS

#include "header.h"

using namespace std;

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
//		i *= 3;					//3의 승수
//		if (i < 1000)			//1000 이만이어야함
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
//	for(int i = 0; i < 5; i++)
//	{
//		for (int j = 4; j > i; j--)
//		{
//			printf(" ");					//순서대로
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
////[ 해결 아이디어 ]
////arr[0]부터 arr[4]까지 비교
////1과 2, 3, 4, 5를 비교해서 작을때마다 과 값 바꿈저장
////끝나면 index++
//
//int arr[5] = { 5, 2, 4, 1, 3 };
//void sortArray(int* arr, int n)
//{
//	/*int index = 0;
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
//	}*/
//	//교수님 코드
//	 for (int i = 0; i < n - 1; i++)
//	{
//		for (int phase = 0; phase < n - 1; n++)
//		{
//			int current = i;
//			int next = i + 1;
//			//  각 페이즈 마다 해줘야 할 일
//			if (current > next)
//			{
//				std::swap(current, next);
//			}
//		}
//	}
//}
//int main()
//{
//	sortArray(arr, 5);	// arr : [ 1, 2, 3, 4, 5 ]
//}
#pragma endregion

#pragma region solution_05

#pragma region 객체지향설계
//class LimitedLotto
//{
//	static const int MAX_DIGIT_COUNT = 100;
//public:
//	int *_digitcount;
//	_digitCount = 0;
//};
///// <summary>
///// 로또 번호를 생성한다. 이미 생성된 번호가 있다면 지우고 새로 만든다.
///// </summary>
///// <param name="maxValue">최대 번호값</param>
///// <param name="digitCount">생성 숫자 개수. 최대 생성 숫자는 100개</param>
//void Make(int maxValue, int digitCount)
//{
//	// digitCount : [1, 100]
//	// 1. digitCount가 최솟값(1)보다 작을 때
//	// 2. digitCount가 최댓값(100)보다 작을 때
//	// 3. digitCount가 최솟값과 최댓값 사이에 있을 때
//
//	digitCount = std::max(1, std::min(digitCount, MAX_DIGIT_COUNT));
//
//	// 1~mazValue 사이의 값 중 중복되지 않게 digitCount만큼 뽑음.
//	_digitCount = digitCount;
//	
//	srand(time(nullptr));
//	
//	// 로또번호 정하기
//	// 3. 1번부터 digitCount만큼 반복한다.
//	for(int curPos = 0; curPos , digitCount;)
//	int* arr = (int*)malloc(sizeof(int) * digitCount);	// 로또값이 담길 배열arr 생성
//
//	int i = 0;
//	bool isExist = false;
//
//	do
//	{
//		int candidate = 1 + rand() % maxValue;
//		bool isExist = false;
//
//		for (int i = 0; i < curPos; i++)
//		{
//			if (candidate == lotto[i])
//			{
//				isExist = true;
//			}
//		}
//		delete[] lotto;							// 공간 돌려주기
//	} while (isExist);
//	
//	do
//	{
//		arr[i] = rand() % maxValue + 1;				// 랜덤으로 숫자를 arr에 넣는다
//		bool isExist = false;
//		for (int i = 0 < i < maxValue; i++)
//		{
//			if (arr[i] == )
//			{
//				isExist = true;
//			}
//		}
//	} while (isExist)
//}
//};
// Print() : 로또 번호를 출력한다. 만약에 생성된 번호가 없다면 아무것도 출력하지 않는다.
#pragma endregion

#pragma region 내코드
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

#pragma region 교수님코드
//int main()
//{
//	int maxValue;
//	int digitCount;
//	
//	//입력
//	cout << "생성할 로또의 최대값 : ";
//	cin >> maxValue;
//	cout << "생성할 숫자의 개수 : ";
//	cin >> digitCount;
//
//	
//	// 처리
//	int* lotto = new int[digitCount];
//
//	srand(time(nullptr));
//
//	for (int curPos = 0; curPos < digitCount; curPos++)
//	{
//		int candidate = 0;
//		bool isExist = false;
//		do
//		{
//			int candidate = 1 + rand() % maxValue;
//			bool isExist = false;
//
//			for (int i = 0; i < curPos; i++)
//			{
//				if (candidate == lotto[i])
//				{
//					isExist = true;
//				}
//			}
//			delete[] lotto;							// 공간 돌려주기
//		} while (isExist);
//	}
//}
#pragma endregion

#pragma endregion

#pragma region solution_06

#pragma region 모듈화
////교수님코드///////////////////////////////////////////////////////
////0~12 스페이드, 12~25 클로버, 26~38 하트, 28~51 다이아몬드, 52 조커
//#pragma once
//
//#include <iostream>
//#include <string>
//#include <sstream>
//
//// Deck 타입
//// ToString()
////   : 현재 덱의 카드를 표현하는 문자열을 만든다.
////     카드가 없는 경우 "The deck is empty" 로 반환한다.
//
////using namespace std;
//
//class Deck
//{
//	static bool isUsedCard[54];
//	static int remainCard;
//public:
//	/// <summary>
//	/// 카드를 7장 뽑아서 덱을 구성한다.
//	/// 모든 덱은 카드가 중복되지 않아야 한다.
//	/// </summary>
//	/// <returns>덱이 성공적으로 구성됐을 경우 true, 아니면 false</returns>
//	bool	Make()
//	{
//		int count = 0;
//
//		// isUsedCard를 순회하면서 남은 카드가 7장 이상인지를 확인한다.
//		if (remainCard < 7)
//		{
//			return false;
//		}
//
//		for (int i = 0; i < 7; i++)
//		{
//			int card = 0;
//			do
//			{
//				card = 1 + rand() % 53;
//			} while (isUsedCard[card]);
//
//			_deck[i] = card;
//			isUsedCard[card] = true;	// 카드 뽑았다고 알려줌
//
//		}
//		// 사후 조건 : 덱이 완성되었다.
//		remainCard -= 7;
//
//		return true;
//	}
//
//	/// <summary>
//	/// 현재 덱의 카드를 표현하는 문자열을 만듬
//	/// 카드가 없는 경우 "The deck is empty"를 반환
//	/// </summary>
//	/// <returns></returns>
//	std::string ToString()
//	{
//		if (_deck[0] == 0)
//		{
//			return "The deck is empty";
//		}
//		std::string result;
//
//		static const std::string CARD_TYPE[] = { "♠", "♣", "♥", "◆" };
//		static const std::string CARD_NUMBER[] = { "A", "2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K" };
//		// 1. 덱을 불러와 숫자를 읽음
//		for (int i = 0; i < 7; ++i)
//		{
//			if (_deck[i] == 53)
//			{
//				result += "Joker, ";
//			}
//			else
//			{
//				result += CARD_TYPE[_deck[i] / 13] + CARD_NUMBER[_deck[i] % 13] + ", ";
//			}
//		}
//		// 4. 타입과 숫자에 맞춰 조합한 수 반환
//
//		return result;
//	}
//
//private:
//	int _deck[7] = { 0 };
//};
//
//int main()
//{
//	Deck decks[8];
//
//	for (int i = 0; i < 8; ++i)
//	{
//		if (false == decks[i].Make())
//		{
//			cout << i + 1 << "번째는 덱 구성 실패\n";
//		}
//	}
//
//	for (int i = 0; i < 8; ++i)
//	{
//		cout << decks[i].ToString() << "\n";
//	}
//}
#pragma endregion

#pragma region 교수님코드
///// <summary>
///// 로또 번호를 만든다.
///// </summary>
///// <param name="maxValue">최대 번호값</param>
///// <param name="digitCount">생성 숫자 개수</param>
///// <returns>로또 번호들 (동적 할당된) </returns>
//int* MakeLotto(int maxValue, int digitCount)
//{
//	// 1 ~ maxValue 사이의 값 중 중복되지 않게 digitCount만큼 뽑음.
//	int* lotto = new int[digitCount];
//
//	srand(time(nullptr));
//
//	// 로또 번호 정하기
//	// 3. 1번부터 digitCount만큼 반복한다.
//	for (int curPos = 0; curPos < digitCount; ++curPos)
//	{
//		int candidate = 0;
//		bool isExist = false;
//
//		do
//		{
//			// 1. [1, maxValue] 사이의 값으로 무작위로 뽑는다.
//			candidate = 1 + rand() % maxValue;
//			isExist = false;
//
//			// 2. 중복인지 확인한다. => 이미 나온 값인지 확인한다.
//			for (int i = 0; i < curPos; ++i)
//			{
//				// 2-1. 중복이면? 1번을 다시 수행한다.
//				if (candidate == lotto[i])
//				{
//					isExist = true;
//
//					break;
//				}
//			}
//		} while (isExist);
//
//		// 2-2. 중복이 아니면? 데이터를 저장한다.
//		lotto[curPos] = candidate;
//	}
//
//	return lotto;
//}
//
//int main()
//{
//	// 입력 : 최대 번호값과 생성 숫자 개수 입력 받는다.
//	cout << "최대 번호 값을 입력하세요. : ";
//	int maxValue;
//	cin >> maxValue;
//
//	cout << "생성할 숫자의 개수를 입력하세요. : ";
//	int digitCount;
//	cin >> digitCount;
//
//	// 처리 : 로또 생성 
//	int* lotto = MakeLotto(maxValue, digitCount); // 생성? 생성자
//
//	// 출력 : 로또 번호 출력
//	for (int i = 0; i < digitCount; ++i)
//	{
//		cout << lotto[i] << " ";
//	}
//
//	delete[] lotto;
//
//	return 0;
//}
#pragma endregion

//// [못푼 이유]
//// ♠♣♥◆를 출력하는 방법을 몰라서 타입과 출력방법 서칭하다가 시간이 다 갔습니다.
////1. 입력
////2. 처리
//// - 두 플레이어의 카드가 같으면 안된다.
////3. 출력
//// player :
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
//#define BLANK 0
//int main()
//{
//	bool isUsed[26] = { false };
//	int board[5][5];
//
//	for (int r = 0; r < 5; r++)			// 빙고판 세팅
//	{
//		for (int c = 0; c < 5; c++)
//		{
//			int n = 0;
//			do
//			{
//				n = rand() % 25 + 1;
//			} while (isUsed[n]);
//			board[r][c] = n;
//			isUsed[n] = true;
//		}
//	}
//	
//	int bingoCount = 0;
//	while (bingoCount <= 12)
//	{
//		system("cls");
//
//	// [   출력   ]
//	for (int r = 0; r < 5; r++)			// 빙고판 출력
//	{
//		bool isBingo = true;
//		for (int c = 0; c < 5; c++)
//		{
//			if (board[r][c] == BLANK)
//			{
//				cout << "\t";
//			}
//			else
//			{
//				cout << board[r][c] << "\t";
//			}
//		}
//		cout << endl;
//	}
//
//	cout << "현재" << bingoCount << "줄의 빙고가 완성되었습니다.\n";
//	cout << "숫자를 입력해 주세요 : ";
//
//
//		// [   입력   ]
//		int input;
//		cin >> input;
//
//
//		if (input < 0 || input >25)			// 오입력 처리
//		{
//			continue;
//		}
//
//		// [   처리   ]
//		for (int r = 0; r < 5; r++)			// 빙고판 업데이트
//		{
//			bool isExist = false;
//			for (int c = 0; c < 5; c++)
//			{
//				if (board[r][c] == input)
//				{
//					board[r][c] = BLANK;
//					isExist = true;
//					break;
//				}
//			}
//			if (isExist)
//			{
//				break;
//			}
//		}
//
//		for (int r = 0; r < 5; r++)			// 가로의 모든 숫자를 지운 것
//		{
//			bool isBingo = true;
//			for (int c = 0; c < 5; c++)
//			{
//				if (board[r][c] != BLANK)
//				{
//					isBingo = false;
//					break;
//				}
//			}
//
//			if (isBingo)
//			{
//				bingoCount++;
//			}
//		}
//
//		for (int r = 0; r < 5; r++)			// 세로의 모든 숫자를 지운 것
//		{
//			bool isBingo = true;
//			for (int c = 0; c < 5; c++)
//			{
//				if (board[c][r] != BLANK)
//				{
//					isBingo = false;
//					break;
//				}
//			}
//
//			if (isBingo)
//			{
//				bingoCount++;
//			}
//		}
//
//		bool isBingo = true;
//		for (int i = 0; i < 5; i++)			// 대각선의 모든 숫자를 지운 것
//		{
//			if (board[i][i] != BLANK)
//			{
//				isBingo = false;
//				break;
//			}
//		}
//		
//		for (int i = 0; i < 5; i++)			// 반대 대각선의 모든 숫자를 지운 것
//		{
//			if (board[i][4 - i] != BLANK)
//			{
//				isBingo = false;
//				break;
//			}
//		}
//		if (isBingo)
//		{
//			bingoCount++;
//		}
//
//	}
//	return 0;
//}


//int find(int str, int* def, int n)
//{
//	def = (int*)malloc(sizeof(int));
//	for (int i = 0; i < n; i++)
//	{
//		if (str == def[i])
//			return 1;
//	}
//		return 0;
//}
//int main()
//{
//	//입력
//	srand(time(nullptr));
//	bool existnum[26] = { false };
//	int arr[5][5] = { 0, };
//
//	int binggocount = 0;
//	int input = 0;
//
//	bool isexist = false;
//
//	while (true)
//	{
//		system("cls");
//		for (int i = 0; i < 5; i++)					// 배열에 랜덤한 수를 저장한다.
//		{
//			for (int j = 0; j < 5; j++)
//			{
//				int number = 0;
//				do
//				{
//					number = rand() % 25 + 1;		// 중복 체크
//
//				} while (existnum[number]);
//
//				arr[i][j] = number;
//				existnum[number] = true;
//			}
//		}
//
//		// 출력
//		for (int i = 0; i < 5; i++)
//		{
//			for (int j = 0; j < 5; j++)
//			{
//				if (arr[i][j] == BLANK)				// arr[][]이랑 putnum이 같으면 00으로 바꿔줌
//				{
//					cout << "\t";
//				}
//				else
//
//				cout << arr[i][j] << "\t";
//			}
//			cout <<endl << endl;
//		}
//
//		cout << "현재" << binggocount << "줄의 빙고가 완성되었습니다.\n숫자를 입력해 주세요 : ";
//		cin >> input;
//
//		// 처리
//
//		if (0 < input || input < 26)				// 플레이어의 입력이 정상인지 확인한다.
//		{
//			for (int i = 0; i < 5; i++)
//			{
//				for (int j = 0; j < 5; j++)
//				{
//					if (arr[i][j] == input)				// arr[][]이랑 putnum이 같으면 00으로 바꿔줌
//					{
//						arr[i][j] == BLANK;
//						existnum[i*j] = true;
//						break;
//					}
//				}
//				if (isexist)
//				{
//					break;
//				}
//			}
//
//			// 빙고 개수를 센다.
//			int binggo = 0;
//
//			for (int i = 0; i < 5; i++)		// 가로로 똑같은거
//			{
//				for (int j = 0; j < 4; j++)
//				{
//					if (arr[i][j] == arr[i][j + 1])
//						binggo++;
//				}
//				if (binggo == 4)
//				{
//					binggocount++;
//				}
//			}
//
//			for (int i = 0; i < 5; i++)		// 세로로 똑같은거
//			{
//				for (int j = 0; j < 4; j++)
//				{
//					if (arr[j][i] == arr[j + 1][i])
//						binggo++;
//				}
//				if (binggo == 4)
//				{
//					binggocount++;
//				}
//			}
//
//			if (arr[0][0] == arr[1][1] == arr[2][2] == arr[3][3] == arr[4][4])		//대각선 같은거
//			{
//				binggocount++;
//			}
//			if (arr[0][4] == arr[1][3] == arr[2][2] == arr[3][1] == arr[4][0])
//			{
//				binggocount++;
//			}
//		}
//		else
//		{
//			return 0;
//		}
//
//	}
//	return 0;
//}
#pragma endregion

#pragma region solution_08

#pragma region 객체지향설계
#include "snail.h"
int main()
{
	Snail snail;
	int size = 0;
	
	cout << "배열의 크기를 입력하세요 : ";
	cin >> size;
	
	snail.Init(size);

	snail.update();

	snail.print();
}
#pragma endregion

#pragma region 내코드
//int main()
//{
//	// 입력 
//	int arr[100][100] = { 0, };
//	cout << "배열의 크기를 입력하세요 : ";
//	int N = 0;
//	cin >> N;
//	
//	// 처리
//	for (int i = 0; i < N; i++)			//N*N 배열만들고 0으로 초기화
//	{
//		for (int j = 0; j < N; j++)
//		{
//			arr[i][j] = 0;
//		}
//	}
//
//	// 초기값 설정
//	int i = 0;
//	int j = 0;
//	arr[i][j] = 1;
//	int a = 2;
//
//	while (a<= N * N) // 값은 배열의 크기보다 작거나 같다.
//	{
//		// while을 쓰는 이유 : 대충 어디까지인지는(범위는) 아는데 정확히는 모른다.
//
//		// 조건의 의미 : 배열 수가 N보다 크면 안됨
//		//				증가하는 방향 값이 0이어야함
//		while (j + 1 < N && arr[i][j + 1] == 0)	// 오른쪽으로 가는 동안
//		{
//			j++;
//			arr[i][j] = a;
//			a++;
//		}
//		while (i + 1 < N && arr[i + 1][j] == 0)	// 아래로 가는 동안
//		{
//			i++;
//			arr[i][j] = a;
//			a++;
//		}
//		while (j - 1 >= 0  && arr[i][j - 1] == 0)	// 왼쪽으로 가는 동안
//		{
//			j--;
//			arr[i][j] = a;
//			a++;
//		}
//		while (i - 1 >= 0 && arr[i - 1][j] == 0)	// 위로 가는 동안
//		{
//			i--;
//			arr[i][j] = a;
//			a++;
//		}
//	}
//
//	// 출력
//	for (int i = 0; i < N; i++)
//	{
//		for (int j = 0; j < N; j++)
//		{
//			cout << arr[i][j] << "\t";
//		}
//		cout << endl << endl;
//	}
//}
#pragma endregion

#pragma endregion