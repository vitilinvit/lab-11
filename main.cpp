/* TRPO GEOMETRY EASY */

#include <iostream>
#include <math.h>
#include <stdio.h>
using namespace std;
const double pi = 3.141592653589793238462643;
void print(
        double p1,
        double p2,
        double s1,
        double s2,
        int x1,
        int x2,
        int y1,
        int y2,
        double r1,
        double r2,
        int flag)
{
    cout << "1" << endl;
    printf("circle(%d %d , %.1f)\n", x1, y1, r1);
    printf("perimetr = %.3f\n", p1);
    printf("area = %.3f\n", s1);
    if (flag == 1) {
        printf("intersects: \n   circle \n  ");
    } else
        printf("intersects: \n   - \n  ");
    cout << "2" << endl;
    printf("circle(%d %d , %.1f)\n", x2, y2, r2);
    printf("perimetr = %.3f\n", p2);
    printf("area = %.3f\n", s2);
    if (flag == 1) {
        printf("intersects: \n   circle \n  ");
    } else
        printf("intersects: \n   - \n  ");
    system("PAUSE");
    return;
}
int main()
{
    int x1, y1, xx; // eii?aeiaou oaio?a
    int x2, y2, yy; // eii?aeiaou oaio?a
    double d = 0;   //?annoiyiea ia?ao ?aaeonaie
    double r1, r2;  //?aaeonu ie?o?iinoae
    double p1, p2, s1, s2;
    int flag = 0; // eiaeeaoi? ia?ana?aiey
    cout << "input circle1(x1 y1, r1) --- >>> ";
    cout << endl << "x1 = ";
    cin >> x1;
    cout << endl << "y1 = ";
    cin >> y1;
    cout << endl << "r1 = ";
    cin >> r1;
    cout << endl << "Input circle2(x2 y2, r2) --->>>";
    cout << endl << "x2 = ";
    cin >> x2;
    cout << endl << "y2 = ";
    cin >> y2;
    cout << endl << "r2 = ";
    cin >> r2;
    cout << endl;
    s1 = pi * r1 * r1; // ieiuaau ia?aie ie?o?iinoe
    s2 = pi * r2 * r2; // ieiuaau aoi?ie ie?o?iinoe
    p1 = 2 * pi * r1;  // ia?eiao? ia?aie ie?o?iinoe
    p2 = 2 * pi * r2;  // ia?eiao? aoi?ie ie?o?iinoe

    xx = x2 - x1;
    yy = y2 - y1;
    xx = pow(xx, 2);
    yy = pow(yy, 2);
    d = sqrt(xx + yy);
    cout << "d = " << d << endl;
    if (x1 == x2 && y1 == y2 && r1 == r2) {
        flag = 1;
        print(p1, p2, s1, s2, x1, x2, y1, y2, r1, r2, flag);
    } else if (x1 == x2 && y1 == y2 && r1 != r2) {
        flag = 0;
        print(p1, p2, s1, s2, x1, x2, y1, y2, r1, r2, flag);
    } else if (d + r1 == r2 || d + r1 > r2) {
        flag = 1;
        print(p1, p2, s1, s2, x1, x2, y1, y2, r1, r2, flag);
    } else if (d + r1 < r2 || d + r2 < r1) {
        flag = 0;
        print(p1, p2, s1, s2, x1, x2, y1, y2, r1, r2, flag);
    } else if (d == r1 + r2 || d < r1 + r2) {
        flag = 1;
        print(p1, p2, s1, s2, x1, x2, y1, y2, r1, r2, flag);
    } else {
        flag = 0;
        print(p1, p2, s1, s2, x1, x2, y1, y2, r1, r2, flag);
    }
    system("PAUSE");
    return 0;
}
