//3.24 chapter 10 Lamda expression
//�ٸ� ����

#include <algorithm>
#include <iostream>

//������������ �����ϱ� ���� ���� �Լ� ����
void foo(int n)
{
    if (n < 40)
        std::cout << n << std::endl;
}

int main()
{
    int score[5] = { 95,35,63,72,22 };
    std::for_each(score, score + 5, foo); // 35. 22 ���, score ������ �ֵ��� ���ʴ�� ����. �̶� �����Լ� foo ���ǿ� �´��ֵ� ���

    std::cout << "�ι�° ����" << std::endl;
    int pass = 70;
    //������ pass�̸��� ����ϰ� ������?
    std::for_each(score, score + 5, 
        [pass](int n) { if (n < pass) std::cout << n << std::endl; // pass 를 단항함수 안에서 쓰겠다는 표기법 
        } );
}
