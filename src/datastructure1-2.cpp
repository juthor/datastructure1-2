//============================================================================
// Name        : datastructure1-2.cpp
// Author      : Hyunju Kim
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include<iostream>
#include<cmath>
using namespace std;
bool isPrime(int);//�ο��Լ� ��������

int main(void)
{
	int  num, i, num_3_4;//num3_4�� 3�� ���ų� 6�� �� ���� �����ϴ� ����
	cin>>num;
	isPrime(num);//num�� �Ҽ����� Ȯ���ϱ� ���� �Լ��� �Է�
	num_3_4=num-4;//num�� 4�� ��, ù ��°�� 2, �� ��°�� 2, ����° �ڸ��� Ȧ���� �Ҽ� �̷��� �Ǳ� ������

	if(isPrime(num_3_4)==true)//num_3_4�� ���� �Ҽ��̸�
	{
		cout<<2<<" "<<2<<" "<<num_3_4;//���
	}

	else//�ƴϸ�, ù ��° ���� �ݵ�� 3�̴�
	{
		num_3_4=num-6;// ù ��°�� 3, �� ��° �ڸ��� 3���� �����ؼ� ���� ���� ��������
		if(isPrime(num_3_4)==true)//num_3_4�� ���� �Ҽ��̸�
		{
			cout<<3<<" "<<3<<" "<<num_3_4;//ù ��° �� 3, �� ��° �� 3, ������ �� ���
		}

		else//�ƴϸ� ù ��° ���� 3�̰� �� ��° ���� �Ҽ��� Ȧ��, ���� ° ���� �Ҽ��� Ȧ��
		{
			cout<<3<<" ";//3�� ���� ���
			for(i=5; i<num; i++)//ù��° 3, �ι�° 3�� �ƴϹǷ� �ʱⰪ 5���� ����
			{
				num_3_4=num-3-i;//�Է°����� ������ 3�� ���� ��������� 3�� ���� i���� ��

				if((isPrime(i)==true))//i�� ���� �Ҽ��̸�
				{
					if(isPrime(num_3_4)==true)//num_3_4�� ���� ���̸�
					{
						break;//�ݺ� Ż��
					}

					else
					{
						continue;//�� ��° ���� 5�� �ƴϹǷ� �ٽ� �ݺ�
					}
				}
			}
			cout<<i<<" "<<num_3_4;
		}
	}

	return 0;

}

bool isPrime(int n)
{
	if (n==1)//1�� �Ҽ��� �ƴϹǷ�
	{
		return false;
	}
	int sqrtn=int(sqrt(double(n)));//������� cmath�� ����ؼ� ��Ʈ�� ���

	for(int i=2; i<=sqrtn; i++)//�Ҽ��� 2���� �����ϹǷ� �ʱⰪ 2, i�� ���� ��Ʈ�� ������ �۰ų� ����������
	{
		if(n%i==0)//�������� 0�̸� �Ҽ��� �ƴ�
		{
			return false;
		}
	}

	return true;//�Ҽ��� ����
}
