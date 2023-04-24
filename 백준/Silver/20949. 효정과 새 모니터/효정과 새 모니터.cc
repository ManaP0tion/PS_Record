#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;

    int *index = new int[n];        // 인덱스용 
    float *ppi_list = new float[n];      // ppi 저장용

    for(int i=0; i<n; i++){
        int w, h;
        float ppi;
        cin >> w >> h;
        ppi = pow(pow(w,2)+pow(h,2), 0.5) / 77;
        ppi_list[i] = ppi;
        index[i] = i+1;     // 인덱스 번호 재정의
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(ppi_list[i]>ppi_list[j]){
                float temp = ppi_list[i];
                ppi_list[i] = ppi_list[j];
                ppi_list[j] = temp;

                int temp_index = index[i];
                index[i] = index[j];
                index[j] = temp_index;
            }
            else if(ppi_list[i] == ppi_list[j]){
                if(index[i]<index[j]){
                    int temp_index = index[i];
                    index[i] = index[j];
                    index[j] = temp_index;
                }
            }  
        }
    }
    for(int i=0; i<n; i++){
        cout << index[i] << "\n";
    }
}