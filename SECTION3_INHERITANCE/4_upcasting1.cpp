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
    
    Rect*  p1 = &rect; // ok
    int*   p2 = &rect; // error. 
    Shape* p3 = &rect; // ok 기반 클래스 타입으로 가르킬 수 있는가? --> upcasting  
    
    Shape& r = rect;   // ok. 
    
}



