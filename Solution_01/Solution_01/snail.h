#pragma once
class Snail
{
public:
	/// <summary>
	/// //size*size �迭����� 0���� �ʱ�ȭ
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
	/// �迭������Ʈ
	/// </summary>
	void update()
	{
		int i = 0;
		int j = 0;
		_arr[i][j] = 1;
		int a = 2;

		while (a <= _size * _size) // ���� �迭�� ũ�⺸�� �۰ų� ����.
		{
			// while�� ���� ���� : ���� ������������(������) �ƴµ� ��Ȯ���� �𸥴�.

			// ������ �ǹ� : �迭 ���� N���� ũ�� �ȵ�
			//				�����ϴ� ���� ���� 0�̾����
			while (j + 1 < _size && _arr[i][j + 1] == 0)	// ���������� ���� ����
			{
				j++;
				_arr[i][j] = a;
				a++;
			}
			while (i + 1 < _size && _arr[i + 1][j] == 0)	// �Ʒ��� ���� ����
			{
				i++;
				_arr[i][j] = a;
				a++;
			}
			while (j - 1 >= 0 && _arr[i][j - 1] == 0)	// �������� ���� ����
			{
				j--;
				_arr[i][j] = a;
				a++;
			}
			while (i - 1 >= 0 && _arr[i - 1][j] == 0)	// ���� ���� ����
			{
				i--;
				_arr[i][j] = a;
				a++;
			}
		}
	}

	/// <summary>
	/// ���������
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