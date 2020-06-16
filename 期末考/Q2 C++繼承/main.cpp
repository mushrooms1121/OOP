#include<iostream>
#include"Shape.h"
#include"Cuboid.h"
#include"Sphere.h"
using namespace std;

int main()
{
    int r, l, w, h;
    string sc, cc;

    cin >> r >> sc >> l >> w >> h >> cc;

    Sphere s(r, sc);
    Cuboid c(l, w, h, cc);

    s.toString();
    cout << "(" << s.getRadius() << ")," << setprecision(1) << fixed << s.getVolume() << "," << s.getColor() << endl;
    c.toString();
    cout << setprecision(0) << fixed << "(" << c.getLength() << "," << c.getWidth() << "," << c.getHeight() << "),"
        << fixed << setprecision(1) << c.getVolume() << "," << c.getColor() << endl;

    system("pause");
    return 0;
}