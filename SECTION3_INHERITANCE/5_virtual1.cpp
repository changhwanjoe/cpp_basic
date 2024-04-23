#include <iostream>

class Shape
{
public:
    void Draw() { std::cout << "Shape::Draw" << std::endl; } //1 
};

class Rect : public Shape
{
public:
    void Draw() { std::cout << "Rect::Draw" << std::endl; } //2
};

int main()
{
    Shape s; s.Draw(); // Shape::Draw //1
    Rect r;  r.Draw(); // Rect::Draw //2
    
    Shape* p = &r;     //
    p->Draw();         // Shape::Draw
}