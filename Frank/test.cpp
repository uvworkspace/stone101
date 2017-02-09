#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
    float w , h;
    cout << "Please enter your weight(kg) and height(cm)" << endl;
    while (cin >> w >> h ){
        float bmi = w / ( (h/100)*(h/100) );
        cout<<"your BMI is "<< bmi << endl;
    
        if(bmi>=24)
            cout<<"體重過重"<<endl;
      
        else if(bmi<18.5)
            cout<<"體重過輕"<<endl;
      
        else
            cout<<"體重標準"<<endl;
    }
    
system("pause");
return 0;
} 