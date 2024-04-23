class Shape
{
public:
    int color;
};
class Rect : public Shape
{
public:
    int x, y, w, h;
};

int main()
{
    Rect rect;

    Shape* p = &rect; 
    
    p->color = 0; // ok
    p->x = 0;     // error 기반 클래스 포인터로는 기반 클래스의 멤버만 접근 가능. 
    static_cast<Rect*>(p)->x = 0; // ok 파생 클래스의 고유 멤버에 접근하려면 명시적으로 캐스팅 해야됨. 
    
    
}



