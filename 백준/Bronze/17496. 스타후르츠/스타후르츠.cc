#include <iostream>
using namespace std;

int main(){
    int DayOfSummer, GrowTime, PlantSpace, PlantPrice, Total = 0;
    cin >> DayOfSummer >> GrowTime >> PlantSpace >> PlantPrice;

    int PlantDate = 1;
    int NextPlant = PlantDate + GrowTime;
    for(int i=1; i<=DayOfSummer; i++){
        if(i == NextPlant){
            Total += PlantPrice*PlantSpace;
            NextPlant += GrowTime;
        }
    }
    cout << Total;
    
    return 0;
}