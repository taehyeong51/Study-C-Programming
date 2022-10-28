#include <iostream>

// Ŭ������ ����
class Circle{ // class : class Ű���� �̿��� Ŭ���� ���� ����, Circle : Ŭ���� �̸�
public: // ����� ���� ���� ������
    int radius; // ��� ����
    double getArea(); // ��� �Լ� ����
}; // Ŭ���� ���� ������ ; �����ݷ� ����

/* �Ϲ��Լ���� ������ ���� �ڵ带 ���� ���� ����
double getArea(int radius)
{
    return 3.14*radius*radius;
}
*/

// Circle Class�� �ִ� getArea() �Լ��� �����ϱ� ���ؼ��� ������ ���� �ڵ� ����
double Circle::getArea() // Circle:: �� ���� Circle Ŭ������ ��� �Լ� ����
{
    return 3.14*radius*radius; // �̶� radius : Circle Ŭ���� ���� �ִ� ���� radius, Ư���� ��ġ ���� ���� ���� (C������ �Ұ����� ���)
} // �Լ� ���� ������ ; �����ݷ� �Ⱥ���

int main()
{
    Circle pizza;
    pizza.radius = 10;

    Circle donut;
    donut.radius = 5;

    std::cout << pizza.getArea() << std::endl;
    std::cout << donut.getArea() << std::endl;
    return 0;
}