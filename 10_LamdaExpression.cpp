//3.21 chapter 10 Lamda expression
//page 23

#include <algorithm>
//#include <print>
#include <iostream>

//������������ �����ϱ� ���� ���� �Լ� ����
bool cmp(int a, int b) { return a > b; }
int main()
{
        //////////////
    /*
    C++ constraint algorithm
    c++20���� ���� �����Ǵ� ������ �˰���
    �����̳� �̸��� ���� ����
    std::ranges namespace�ȿ� ����
    std::ranges::sort(x,x+5); //
    std::ranges::sort(x); // �迭�� �̸��� ���� �־ ���ϴ�. C++ 20������
    */
    
    int x[5] = { 1,3,5,2,4 };
    std::sort(x, x + 5); // �����ϰ��� �ϴ� ������ �ð��� �� '����'�� ��Ÿ���� �ݺ���(�ּ�) ����
    for (int i = 0; i < 5; i++) {
        std::cout << x[i];
    }
    //������������ �����ϰ� �ʹٸ�? cmp �����Լ� ����
    std::cout << "�������� ����" << std::endl; 
    std::sort(x, x + 5, cmp);
    //** ���� ǥ���� ���� �ۼ�
    std::sort(x, x + 5, [](int a, int b) {return a > b; });
    std::sort(x, x + 5, [](int a, int b) ->bool {return a > b; }); // ���� ��ȯ���� ����  ǥ��� 


    for (int i = 0; i < 5; i++) {
        std::cout << x[i];
    }

}
