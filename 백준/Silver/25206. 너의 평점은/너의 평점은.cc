#include <iostream>
#include <string>
using namespace std;

int main(){
    string lecture, grade;
    double hour, convert;
    double gradesum = 0, hoursum = 0, calculation = 0; // gradesum : 과목평점, hoursum = 학점의 합, calculation = (학점 × 과목평점)

    for(int i=0; i<20; i++){
        cin >> lecture >> hour >> grade;
        if(grade == "P") continue;

        if(grade == "A+")   convert = 4.5;
        else if(grade == "A0")  convert = 4.0;
        else if(grade == "B+")  convert = 3.5;
        else if(grade == "B0")  convert = 3.0;
        else if(grade == "C+")  convert = 2.5;
        else if(grade == "C0")  convert = 2.0;
        else if(grade == "D+")  convert = 1.5;
        else if(grade == "D0")  convert = 1.0;
        else if(grade == "F") convert = 0;
        gradesum += convert;

        hoursum += hour;
        calculation += hour*convert;
        
        convert = 0;
    }
    cout << fixed;
    cout.precision(6);
    cout << (calculation)/hoursum;
}