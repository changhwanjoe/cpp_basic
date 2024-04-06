/*
8 delete function
3/18 page 22
*/

int gcd(int a, int b)
{
    return b != 0 ? gcd(b, a%b) : a;

}

double gcd(double a, double b) = delete; //함수를 사요앟ㄹ 수 없다는 comepile error생성 
int main()
{
    gcd(10,4);
    gcd(3.3,4.4);
}