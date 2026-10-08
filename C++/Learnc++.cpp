// #include<iostream>
// int main()
// {
//     // std::cout << "Hello Jay"<< "\n";
//     // std::cout << "Hello Jimmy";
//     std::cout << "Hello"<<std::endl<<"hey"<<std::endl<<"hi";
//     return 0;
// }
// #include<iostream>
// using namespace std;
// int main()
//     {
//         cout <<"hey"<<endl<<"Jim";
//         return 0;
//     }
// #include<iostream>
// using namespace std;
// int main()
//     {
//         int x,y;
//         cin >>x>>y;
//         cout<<"Value of x:"<<x<< "and y:"<<y;
//         return 0;
//     }

// #include<bits/stdc++.h>
// using namespace std;
// int main()
//     {
//         // string str;
//         // cin>>str;
//         // cout<<str;
//         string s1;
//         getline(cin,s1);
//         cout<<s1;
//         return 0;
//     }
// #include<bits/stdc++.h>
// using namespace std;

//     int main(){
//         int age;
//         cin>> age;
//         if(age >= 18){
//             cout<<"You are an Adult";
//         }
//         else{
//             cout<<"You are not an adult";
//         }
//         return 0;
//     }
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int day;
//     cin>>day;

//     switch(day){
//         case 1:
//             cout<<"Monday";
//             break;
//         case 2:
//             cout<<"Tuesday";
//             break;
//         case 3:
//             cout<<"Wednesday";
//             break;
//         case 4:
//             cout<<"Thursday";
//             break;
//         case 5:
//             cout<<"Friday";
//             break;
//         case 6:
//             cout<<"Saturday";
//             break;    
//         case 7:
//             cout<<"Sunday";
//             break;
//         default:
//             cout<<"Invalid";                            
//     }
//     cout<<"Executed";
// }    

// ARRAYS
// #include<bits/stdc++.h>
// using namespace std;
// void printName(string name){
//     cout<<"hey"<<name<<endl;
// }
// int main(){
//     string name;
//     cin>>name;
//     printName(name);
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// int sum(int num1,int num2){
//     int num3 = num1 + num2;
//     return num3;
// }
// int main(){
//     int n1,n2;
//     cin>>n1>>n2;
//     int res = sum(n1,n2);
//     cout<<res;
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;
void sum(int num1,int num2){
    int num3 = num1 + num2;
    cout<< num3;
}
int main(){
    int n1,n2;
    cin>>n1>>n2;
    sum(n1,n2);
    return 0;
}