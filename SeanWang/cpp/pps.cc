#include <iostream>
#include <string>
using namespace std;

void padstr(int w, string text)
{
  for (int i = 1; i <= w - text.length(); i++)
  {
    cout << " ";
  }
  cout << text;
}

void padnum(int w, double num)
{
  int dig = 0;
  int num1 = num;
  while (num1 /= 10)
  {
    dig++;
  }
  for (int i = 1; i < w - dig; i++)
  {
    cout << " ";
  }
  cout << num;
}

void padavg(int w, double num)
{
  int dig = 0;
  int num1 = num;
  while (num1 /= 10)
  {
    dig++;
  }
  for (int i = 1; i < w - dig - 3; i++)
  {
    cout << " ";
  }
  cout << num;
}

void pretty(int nsub, int w)
{
  int sum[nsub];
  int total = 0;
  padstr(w, "");
  for (int i = 0; i < nsub; i++)
  {
    string subject;
    cin >> subject;
    padstr(w, subject);
  }
  padstr(w, "Average");
  cout << endl;
  
  int subavg[nsub];
  for (int i = 0; i < nsub; i++)
  {
    subavg[i] = 0;
  }
  int ppl = 0;
  string name;
  while (cin >> name)
  {
    padstr(w, name);
    ppl++;
    double sum = 0;
    for (int i = 0; i < nsub; i++)
    {
      int num;
      cin >> num;
      padnum(w, num);
      sum += num;
      subavg[i] += num;
    }
    int avg = sum*100/nsub;
    sum = (double)avg / 100;
    padavg(w, sum);
    cout << endl;
  }
  padstr(w, "Average");
  for (int i = 0; i < nsub; i++)
  {
    double x = subavg[i] / ppl;
    padnum(w, x);
    
  }
  cout << endl;
}

int main() {
  int nsub, width;
  cin >> nsub >> width;
  pretty(nsub, width);
}