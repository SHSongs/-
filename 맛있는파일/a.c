#include<stdio.h>


struct suhang
{
	double Biul;
	double score;
};

int main()
{
	double suhangB;
	double testB;
	double suhangCNT;

	printf("������ �������� �Է� \n\n");
	printf("�������� ������ �Է� : ");
	scanf_s("%lf", &suhangB);

	testB = 100 - suhangB;
	printf("�������� ������ �Է�");
	scanf_s("%lf", &suhangCNT);

	struct suhang sususu[20];

	printf("�� �������� ������ ������ �Է¹޽��ϴ�.\n\n");

	for (int i = 0; i < suhangCNT; i++)
	{
		printf("���� : ");
		scanf_s("%lf", &sususu[i].Biul);
		sususu[i].Biul /= 100;
		printf("���� : ");
		scanf_s("%lf", &sususu[i].score);
		printf("\n");
	}

	double sum = 0, n;		//�� 
	double A = 89.5, B = 79.5;
	for (int i = 0; i < suhangCNT; i++)
	{
		sususu[i].score = sususu[i].score * sususu[i].Biul;
		sum += sususu[i].score;
	}


	
	A = 89.5 - sum;			//������ ���� 
	B = 79.5 - sum;

	A = (A / testB) * 100;
	B = (B / testB) * 100;

	printf("A�� �������� : %lf\n", A);

	printf("B�� �������� : %lf", B);


	system("PAUSE");
}