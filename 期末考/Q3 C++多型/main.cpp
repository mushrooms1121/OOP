#include<iostream>
#include"Shape.h"
#include"Cuboid.h"
#include"Sphere.h"
using namespace std;

void display(Shape& s) {
    s.toString();
    cout << setprecision(1) << fixed << s.getVolume() << "," << s.getColor() << endl;
}

int main()
{
    int r, l, w, h;
    string sc, cc;

    cin >> r >> sc >> l >> w >> h >> cc;

    Sphere s(r, sc);
    Cuboid c(l, w, h, cc);

    display(s);
    display(c);

    system("pause");
    return 0;
}