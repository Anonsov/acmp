// #include <iostream>
// #include <vector>
// // typedef std::string text_t;
// // typedef int number_t;
// using text_t = std::string;
// using number_t = int;
// int main(){
//     text_t firstName = "something";
//     number_t number = 40;
//     std::cout << firstName << " " << number << std::endl;
// }




// #include <iostream>
// #include <string>

// using namespace std;

// int main(){
//     for(int i = 1; i <= 2; i++){
//         for(int j = 1; j <= 5; j++){
//             cout << i << " ";
//         }
//     }
// }



// #include <iostream>

// using namespace std;
// string students[] = {"Spongebob", "Patrick", "Sandy"};
// int main(){
//     for(string student : students){
//         cout << student << endl;
//     }
//     return 0;
// }



// #include <iostream>
// using namespace std;

// long long s[] = {60, 70, 20, 40, 21, 12, 3, 5,  7, 23};
// long long res = 1;
// int main(){
//     for(int n : s){
//         res *= n;

//     }
//     cout << res << endl;
    
// }




// #include <iostream>
// using namespace std;
 
// int main() {
//     setlocale(LC_ALL, "Russian");
//     float  r;
//     int i, n, sum = 0;
//     cout<<"N:";
//     cin>>n;
//     for (i = 1; i <= n; ++i) {
//         cout << "i" << i << "-";
//         cin >> r;
//         cout<< (float)(int)r;
//         sum += (int)r;
//     }
//     cout<<"Сумма"<< sum;
//     return 0;
// }



// #include <iostream>
// using namespace std;
// int main(){
//     int a, n;
//     cout << "VVedite nomer"  << endl;
//     cin >> a;
//     int count = 0;
//     for(int i = 1; i <= a; i++){
//         cout << "Vvedite n: ";
//         cin >> n;
//         if(n > 0){
//             count+=1;
//         }
//     }
//     if(count >= 1){
//         cout << "False" << endl;
//     }
//     else{
//         cout << "True" << endl;
//     }

//     return 0;
// }



// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     int count = 0;


//     while(n != 0){
//         cout << "Vvedite n: ";
//         cin >> n;
//         count += 1;
//     }
//     cout << count-1 << endl;

//     return 0;
// }


// #include <iostream>
// #include <string>

// using namespace std;

// int main(){
//     int not_null;
//     int count = 0;
//     while(not_null != 0){
//         cout << "Write the number: ";
//         cin >> not_null;

//         if(not_null % 2 == 0  && not_null > 0){
//             count += not_null;
//         }
//         cout << count << endl;
//     }

//     return 0;
// }




// #include <iostream>
// #include <string>

// using namespace std;

// int main(){
//     int k, current, current_greatest, i = 0;
    
//     while(k!=0){
//         cout << "Vvedite k: ";
//         cin >> k;
//         cout << endl;
//         i++;
//         current = k;
//         if(i==1){
//             current_greatest = k;
//         }
//         if(i>=1){

//         }
//         else{
//             if(k > current_greatest){
//                 k = current_greatest;
//             }
//             else{
//                 continue;
//             }
//         }
//         cout << "current: " << current << endl;
//         cout << "current_greatest: " << current_greatest << endl;

//     }

//     return 0;
// }

// #include <iostream>

// int main() {
//     int N;
//     std::cout << "Enter the number of elements (N > 1): ";
//     std::cin >> N;

//     if (N <= 1) {
//         std::cerr << "N must be greater than 1." << std::endl;
//         return 1;
//     }

//     int prev, current, count = 0;

//     std::cout << "Enter the first element: ";
//     std::cin >> prev;

//     for (int i = 1; i < N; ++i) {
//         std::cout << "Enter the next element: ";
//         std::cin >> current;

//         if (prev < current) {
//             std::cout << prev << " is less than its right neighbor " << current << std::endl;
//             ++count;
//         }

//         prev = current;
//     }

//     std::cout << "Count of such elements: " << count << std::endl;

//     return 0;
// }




// #include <iostream>
// #include <string>

// using namespace std;
// int Sign(int x){
//     if(x < 0){
//         return -1;
//     }
//     if(x > 0){
//         return 1;
//     }
//     else{
//         return 0;
//     }
// }

// int main(void){
//     int x = 5;
//     cout << Sign(x);

//     return 0;
// }


// #include <iostream>
// #include <string>

// using namespace std;

// int main(){
    
//     int n;
//     int temp;
//     cout << "Vvedite n: ";
//     cin >> n;




//     return 0;
// }



// #include <iostream>
// #include <string>

// using namespace std;

// int main(){
//     int a, b;
//     cin >> a;
//     cin >> b;

//     if(a < b){
//         cout << "<";
//     }
//     if(a>b){
//         cout << ">";
//     }
//     if(a==b){
//         cout << "=";
//     }
// }

// #include <iostream>
// #include <string>

// using namespace std;

// int main(){
//     int n, m, k;
//     int res;
//     cin >> n >> m >> k;
//     res = n*m;
//     if(res >= k){
//         cout << "YES";
//     }
//     else{
//         cout << "NO";
//     }

//     return 0;
// }


// #include <iostream>
// #include <string>

// using namespace std;

// int main(){
//     int n, a, b;
//     cin >> n >> a >> b;
//     cout << a*b*n*2;

//     return 0;
// }


// #include <iostream>
// #include <string>
// #include <cmath>
// using namespace std;

// int main(){
//     int a, b, c;
//     cin >> a >> b >> c;
//     int max, min;
//     max = min = 0;
//     if((a>=b) && (a>=c)){
//         max = a;
//     }
//     else if(b>c){
//         max = b;
//     }
//     else{
//         max = c;
//     }


//     if((a<=b) && (a<=c)){
//         min = a;
//     }
//     else if(b<c){
//         min = b;
//     }
//     else{
//         min = c;
//     }

//     cout << max - min;
// }


// #include <iostream>
// #include <string>

// using namespace std;

// int main(){
//     int a, b, c;
//     cin >> a >> b >> c;
//     if(a*b==c){
//         cout << "YES";
//     }
//     else{
//         cout << "NO";
//     }


//     return 0;
// }

// #include <iostream>
// #include <string>

// using namespace std;

// int main(){
//     int n=0, team1=0, team2=0;
//     int ochkos1, ochkos2;
//     while(n<4){
        
//         cin >> ochkos1 >> ochkos2;
//         if(ochkos1 > ochkos2){
//             ++team1;
//         }
//         else if(ochkos1 < ochkos2){
//             ++team2;
//         }
//         else{
//             team1 = team1;
//             team2 = team2;
//         }
//         n++;
//     }
//     if(team1 > team2){
//         cout << 1;
//     }
//     else if(team1 < team2){
//         cout << 2;
//     }
//     else{
//         cout << "DRAW";
//     }
//     return 0;
// }



// #include <iostream>
// #include <string>

// using namespace std;

// int main(){
//     int a, b, c;
//     cin >> a >> b >> c;
//     if(a+b>c){
//         cout << a+b-c;
//     }
//     else{
//         cout << "Impossible";
//     }

//     return 0;
// }


#include <iostream>
#include <string>

using namespace std;

int main(){
    int n;
    cin >> n;
    if(n==1) cout << 0;
    else if(n%2==0) cout << n/2;
    else cout << n;

    return 0;
}