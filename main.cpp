using namespace std;

#include <iostream>
//pass by value
void increment (int x) {
    x++;
}

void incrementByRefrence( int& x){
    x++;
}
int main()
{
 int num = 5;
 increment (num);
 cout<< "value of num before increment : "<< num<< endl;
 
 incrementByRefrence (num);
 cout << "value of num after increment : "<< num;
    return 0;
}

