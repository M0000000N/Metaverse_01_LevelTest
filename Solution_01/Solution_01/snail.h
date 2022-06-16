#pragma once
class Snail
{
public:
	/// <summary>
	/// //size*size 배열만들고 0으로 초기화
	/// </summary>
	void Init(int size)
	{
		_size = size;

		for (int i = 0; i < _size; i++)
		{
			for (int j = 0; j < _size; j++)
			{
				_arr[i][j] = 0;
			}
		}
	}

	/// <summary>
	/// 배열업데이트
	/// </summary>
	void update()
	{
		int i = 0;
		int j = 0;
		_arr[i][j] = 1;
		int a = 2;

		while (a <= _size * _size) // 값은 배열의 크기보다 작거나 같다.
		{
			// while을 쓰는 이유 : 대충 어디까지인지는(범위는) 아는데 정확히는 모른다.

			// 조건의 의미 : 배열 수가 N보다 크면 안됨
			//				증가하는 방향 값이 0이어야함
			while (j + 1 < _size && _arr[i][j + 1] == 0)	// 오른쪽으로 가는 동안
			{
				j++;
				_arr[i][j] = a;
				a++;
			}
			while (i + 1 < _size && _arr[i + 1][j] == 0)	// 아래로 가는 동안
			{
				i++;
				_arr[i][j] = a;
				a++;
			}
			while (j - 1 >= 0 && _arr[i][j - 1] == 0)	// 왼쪽으로 가는 동안
			{
				j--;
				_arr[i][j] = a;
				a++;
			}
			while (i - 1 >= 0 && _arr[i - 1][j] == 0)	// 위로 가는 동안
			{
				i--;
				_arr[i][j] = a;
				a++;
			}
		}
	}

	/// <summary>
	/// 달팽이출력
	/// </summary>
	void print()
	{
		for (int i = 0; i < _size; i++)
		{
			for (int j = 0; j < _size; j++)
			{
				cout << _arr[i][j] << "\t";
			}
			cout << endl << endl;
		}
	}

private:
	int _size;
	int _arr[100][100] = { 0, };

};