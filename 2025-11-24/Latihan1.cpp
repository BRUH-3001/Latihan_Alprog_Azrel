#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

struct Point {
    int x;
    int y;
};

float distancePoints(Point *a, Point *b) {
    int dx = b->x - a->x;
    int dy = b->y - a->y;
    return sqrt(dx * dx + dy * dy);
}

int main() {
    Point a, b;
    cin >> a.x >> a.y;
    cin >> b.x >> b.y;

    float dist = distancePoints(&a, &b);

    cout << fixed << setprecision(2) << dist << endl;

    return 0;
}
