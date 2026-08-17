#include <iostream>
using namespace std;

class Time {
    int hrs, mins;
public:
    Time(int h, int m) {
        hrs = h;
        mins = m;
    }
    Time add(Time t) {
        int totalMins = mins + t.mins;
        int totalHrs = hrs + t.hrs;
        if (totalMins >= 60) {
            totalHrs++;
            totalMins -= 60;
        }
        return Time(totalHrs, totalMins);
    }
    void display() {
        cout << hrs << " hours " << mins << " minutes";
    }
};
int main() {
    Time t1(5, 40);
    Time t2(3, 30);
    Time t3 = t1.add(t2);
    cout << "First Time: "<<endl;
    t1.display();
    cout << "Second Time: "<<endl;
    t2.display();
    cout << "Total Time: "<<endl;
    t3.display();
    return 0;
}