#include <iostream>
using namespace std;

void conclusion (int quant, int array) {
  int quantity = 0;
  for (int i=0; i<quant; i+=1) {
    cout << "введите " << i + 1 << " элемент   ";
    cin >> array;
    
    if (array!=0) {
        quantity += 1;
    }
  }  
    cout << "количество ненулевых элементов массива   " << quantity << endl;
}

int main(){
  setlocale (LC_ALL, "RUS");
  
  int m, n, quantity = 0, i, F[m], G[n];
  
  cout << "введите количество элементов в массиве F   ";
  cin >> m;
  conclusion (m, F[i]);
  
  cout <<"введите количество элементов в массиве G   ";
  cin >> n;
  conclusion (n, G[i]);
}