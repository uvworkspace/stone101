#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

const clock_t SEC_PER_MIN = 60;
const clock_t SEC_PER_HOUR = 60 * SEC_PER_MIN;
const clock_t SEC_PER_DAY = 24 * SEC_PER_HOUR; 
  
void show_time(clock_t sec){
  clock_t hr = 0, min = 0;
  hr = sec/SEC_PER_HOUR;
  cout << setw(2) << setfill('0') << hr << ":";
  sec %= SEC_PER_HOUR;
  min = sec/SEC_PER_MIN;
  cout << setw(2) << setfill('0') << min << ":";
  sec %= SEC_PER_MIN;
  cout << setw(2) << setfill('0') << sec << '\n';
}

int main(){
  clock_t start = clock();
  clock_t elapsed = (clock() - start)/CLOCKS_PER_SEC;
  clock_t pre_elapsed= elapsed;
  while(elapsed < SEC_PER_DAY){
    if (elapsed - pre_elapsed>= 1){
      pre_elapsed= elapsed;
      show_time(elapsed);
    }
    elapsed = (clock() - start)/CLOCKS_PER_SEC;
  }
} 