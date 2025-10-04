#include <iostream>
#include <string>
#include <cmath>

using namespace std;

//problem 1

// float product(float a,float d) {
//      return a*d;
// }
// int main() {
//     float a,d;cin>>a>>d;
//     cout<<product(a,d)<<endl;
// }

//problem 2

//float acceleration (float x, float y, float z) {
//    return ( y - x ) / z;
//}
//int main() {
//    float v1, v2, t;
//    cin >> v1 >> v2 >> t;
//    cout << "Acceleration: " << acceleration(v1,v2,t) << endl;
//}

//problem 3

//float fun(float a) {
//    cout << 2 * 3.14 * a << endl;
//    cout << 3.14 * a * a << endl;
//    return 0;
//}
//int main() {
//    float a;
//    cin >> a;
//    fun(a);
//}

//problem 4

//float perimeter(float a, float b) {
//        return a*b;
//    }
//    int perimeter(int a,int b) {
//        return 2*(a + b);
//    }
//int main() {
//        int a, b;
//        cin>> a >> b;
//        cout << perimeter( a, b )<<endl;
//        cout << perimeter( (float) a, (float) b ) << endl;
//    }

//problem 5

//int swap(int a, int b) {
//    int d;
//    d = a + b;
//    a = d - a;
//    b = d - b;
//    cout << a << " " << b << endl;
//}
//int main() {
//    int a, b;
//    cin >> a >> b;
//    swap(a, b);
//}

//problem 6

//int factorial (int a = 1) {
//    return a;
//}
//int main() {
//    cout << factorial();
//}

//problem 7

//int gcd (int a,int b){
//    if (b==0){
//        return a;
//    }
//    else {
//        return gcd(b,a%b);
//    }
//}
//int main() {
//    long long int a,b;
//    cin>>a>>b;
//    cout <<"gcd is "<<gcd(a,b);
//}

//problem 8

//int max (int a, int b, int c){
//    if (a >= b and a >=c ) {
//        return a;
//    }
//    else if (b >= c and b >= a) {
//        return b;
//    }
//    else if(c >= b and c >= a) {
//        return c;
//    }
//    return 0;
//}
//int main() {
//    long long int a, b, c;
//    cin >> a >> b >> c;
//    cout << "max num is " << max(a, b, c);
//
//}


//problem 9

//int sum (int a , int b){
//    return a + b;
//}

//int subtract (int a , int b){
//    return a - b;
//}
//int product (int a , int b){
//    return a * b;
//}
//int division (int a , int b){
//    return a / b;
//}
//int main()
//{
//    long long int a , b;
//    cout << " input 2 number \n";
//    cin>> a >> b;
//    cout << "sum "<< sum(a, b) << "\n";
//    cout << "subtract " << subtract(a, b) << "\n";
//    cout << "product " << product(a, b) << "\n";
//    cout << "division " << division(a, b) << "\n";
//
//    return 0;
//}

//problem 10

//int trianglenumbers(int n = 72){
//    for(int i = 1; i <= 72; i++){
//        cout << (i) * ((i) + 1) / 2 << " ";
//        if(i % 5 == 0){
//            cout << endl;
//        }
//    }
//    return 0;
//}
//
//int main()
//{
//    trianglenumbers();
//
//    return 0;
//}

//problem 11

//void displayEven(int n){
//    string st = to_string(n);
//    for (int i = 0; i <= size(st); i++){

//      if(char(st[i]) % 2 == 0 && char(st[i]) % 2 != 48){
//         cout << st[i];
//      }
//    }
//
//}

//int main(){
//    int n;
//    cout << "input integer ";
//    cin >> n;
//    displayEven(n);

//    return 0;
//}

//problem 12

//void isArmstrong(int sum,int num){
//     if (sum == num){
//         cout << "armstrong";
//     }
//     else cout << "it is not armstrong";
// }
//
//int cubeOfDigits(int n){
//    string st = to_string(n);
//    int d, sum = 0;
//    for (int i=0; i < size(st); i++){
//     d = char(st[i]) - 48;
//      sum += pow(d,3);
//    }
//    return sum;
//}
//
//int main(){
//    int n;
//    cout <<"input integer ";
//    cin >> n;
//    isArmstrong(cubeOfDigits(n),n);
//
//    return 0;
//}

//problem 13

//int febdays(int y) {
//    if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0)) {
//        return 29;
//    }
//    else {
//        return 28;
//    }
//}

//int main() {
//   cout << "Year Days in February" << endl;
//   cout << "-----------------------" << endl;

//   for (int y = 1985; y <= 1993; y++) {
//       cout << y << "    " << febdays(y) << endl;
//   }

//   return 0;
//

//problem 14

//double fiv(double amt, double mir, int yrs) {
//    return amt * pow(1 + mir, yrs * 12);
//}

//int main() {
//    double amt, air;
//    int yrs;

//    cout << "Amount: ";
//    cin >> amt;

//    cout << "Annual rate (%): ";
//    cin >> air;

//    cout << "Years: ";
//    cin >> yrs;

//    double mir = air / 1200;
//    double fv = fiv(amt, mir, yrs);

//    cout << "Future value: " << fv << endl;
//    return 0 ;
//}

//problem 15

//void printASCII(char f, char s){
//    int d = 1;
//    for (int i = int(f); i <= int(s); i++){
//        cout << char(i) <<" ";
//        if(d % 5 == 0) {
//            cout << endl;
//        } d++;
//    }
//
//}
//
//int main()
//{
//    char f, s;
//    cout << "input 2 characters ";
//    cin >> f >> s;
//    printASCII(f, s);
//    return 0;
//}


//problem 16

//void printMatrix(int f){
//    for (int i = 0 ; i <= f; i++){
//        for(int j =0 ; j <= f; j++){
//            cout << j << " ";
//        }cout << endl;
//    }
//}

//int main(){
//    int f;
//    cout << "input 2 characters ";
//    cin >> f;
//    printMatrix(f);
//    return 0;
//}

//problem 19

//void sorted( double a, double b, double c){
//    double arr[]={a,b,c};

//     for (int i = 0; i < 3 - 1; i++) {
//        for (int j = 0; j < 3 - i - 1; j++) {
//            if (arr[j] > arr[j + 1]) {
//                int temp = arr[j];
//                arr[j] = arr[j + 1];
//                arr[j + 1] = temp;
//            }
//        }

//     }
//        for (int i = 0; i < 3; i++) cout << arr[i] << " ";
//    cout << endl;

//}

//int main(){
//    double a, b, c;
//    cout << "input 3 mumb ";
//    cin >> a >> b >> c ;
//    sorted(a, b, c);
//    return 0;
//}

