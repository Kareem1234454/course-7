
                            //problem 21



/*#include<iostream>
#include <string>
#include <iomanip>

using namespace std;

void PrintFibonacciSeries(int Length){

    int prev2 = 0;
    int prev1 = 1; 
    int FebNumber = 0;

    cout<<"1    ";

    for(short i = 1 ; i < Length ; i++){

        FebNumber = prev1 + prev2;
        cout<<FebNumber<<"    ";
        prev2 = prev1;
        prev1 = FebNumber;

    }

    cout<<"\n";

}

int main(){

    cout<<"\nFibonacci Series Of 10: \n";
    PrintFibonacciSeries(10);

    system("pause>0");

}*/





                            //problem 22



/*#include<iostream>
#include <string>
#include <iomanip>

using namespace std;

void PrintFibonacciSeriesUsingRecurssion(int Number , int Prev1 , int Prev2){

    int FebNumber = 0;

    if(Number > 0){

        FebNumber = Prev1 + Prev2;
        Prev2 = Prev1;
        Prev1 = FebNumber;
        cout<<FebNumber<<"  ";
        PrintFibonacciSeriesUsingRecurssion(Number-1 , Prev1 , Prev2);

    }
}

int main(){

    PrintFibonacciSeriesUsingRecurssion(10,0,1);

    system("pause>0");

}*/






                            //problem 23



/*#include<iostream>
#include <string>
#include <iomanip>

using namespace std;

string ReadString(){

    string s1;
    cout<<"\nPlease enter your string?\n";
    getline(cin,s1);
    return s1;

}

// void PrintFirstLetterOfEachWord(string exp){

//     cout<<exp[0]<<"\n";

//     for(int i = 1 ; i < exp.length() -1 ; i++){
  
//             if(exp[i] == ' ')
//                 cout<<exp[i+1]<<"\n";

//     }

// }

void PrintFirstLetterOfEachWord(string exp){

    bool isFirstLetter = true;

    for(int i = 0 ; i < exp.length() ; i++){
  
            if(exp[i] != ' ' && isFirstLetter)
                cout<<exp[i]<<"\n";

            isFirstLetter = (exp[i] == ' ' ? true : false);

    }

}

int main(){

    cout<<"\nFirst Letter Of This String:\n";
    PrintFirstLetterOfEachWord(ReadString());

    system("pause>0");

}*/



                          //problem 24



/*#include<iostream>
#include <string>
#include <iomanip>

using namespace std;

string ReadString(){

    string s1;
    cout<<"\nPlease enter your string?\n";
    getline(cin,s1);
    return s1;

}

string UpperFirstLetterOfEachWord(string s1){

    bool isFirstLetter = true;

    for(int i = 0 ; i < s1.length() ; i++){
  
            if(s1[i] != ' ' && isFirstLetter)
                s1[i] = toupper(s1[i]);

            isFirstLetter = (s1[i] == ' ' ? true : false);

    }

    return s1;

}

int main(){

    string s1 = ReadString();
    s1 = UpperFirstLetterOfEachWord(s1);
    cout<<"string after convertion:\n";
    cout<<s1<<"\n";

    system("pause>0");

}*/






                          //problem 25



/*#include<iostream>
#include <string>
#include <iomanip>

using namespace std;

string ReadString(){

    string s1;
    cout<<"\nPlease enter your string?\n";
    getline(cin,s1);
    return s1;

}

string LowerFirstLetterOfEachWord(string s1){

    bool isFirstLetter = true;

    for(int i = 0 ; i < s1.length() ; i++){
  
            if(s1[i] != ' ' && isFirstLetter)
                s1[i] = tolower(s1[i]);

            isFirstLetter = (s1[i] == ' ' ? true : false);

    }

    return s1;

}

int main(){

    string s1 = ReadString();
    s1 = LowerFirstLetterOfEachWord(s1);
    cout<<"string after convertion:\n";
    cout<<s1<<"\n";

    system("pause>0");

}*/




                          //problem 26



/*#include<iostream>
#include <string>
#include <iomanip>

using namespace std;

string ReadString(){

    string s1;
    cout<<"\nPlease enter your string?\n";
    getline(cin,s1);
    return s1;

}

string LowerAllString(string s1){

    for(int i = 0 ; i < s1.length() ; i++){
   
                s1[i] = tolower(s1[i]);

    }

    return s1;

}

string UpperAllString(string s1){

    for(int i = 0 ; i < s1.length() ; i++){
   
                s1[i] = toupper(s1[i]);

    }

    return s1;

}

int main(){

    string s1 = ReadString();
    s1 = LowerAllString(s1);
    cout<<"\nstring after convertion To lower:\n";
    cout<<s1<<"\n";

    s1 = UpperAllString(s1);
    cout<<"\nstring after convertion To Upper:\n";
    cout<<s1<<"\n";

    system("pause>0");

}*/




                          //problem 27



/*#include<iostream>
#include <string>
#include <iomanip>

using namespace std;

char ReadChar(){

    char Char1;
    cout<<"\nPlease enter Character?\n";
    cin>>Char1;
    return Char1;

}

char InvertLetterCase(char Char1){
    
    return islower(Char1) ? toupper(Char1) : tolower(Char1);

}

int main(){

    char Char1 = ReadChar();

    Char1 = InvertLetterCase(Char1);
    cout<<"\nChar after inverting case: \n";
    cout<<Char1<<"\n";

    system("pause>0");

}*/




                          //problem 28



/*#include<iostream>
#include <string>
#include <iomanip>

using namespace std;

string ReadString(){

    string s1;
    cout<<"\nPlease enter your string?\n";
    getline(cin,s1);
    return s1;

}

char InvertLetterCase(char Char1){
    
    return islower(Char1) ? toupper(Char1) : tolower(Char1);

}

string InvertAllLettersCase(string s1){

    for(int i = 0 ; i < s1.length() ; i++)
    {
        s1[i] = InvertLetterCase(s1[i]);
    }
    return s1;

}

int main(){

    // string s1 = ReadString();
    // s1 = InvertAllLettersCase(s1);
     cout<<"\nString after inverting all letter case:\n";
    // cout<<s1<<endl;

    cout<<InvertAllLettersCase(ReadString());

    system("pause>0");

}*/




                          //problem 29



/*#include<iostream>
#include <string>
#include <iomanip>

using namespace std;

enum enWhatToCount{SmallLetters = 0 , CapitalLetters = 1 , All = 2};

string ReadString(){

    string s1;
    cout<<"\nPlease enter your string?\n";
    getline(cin,s1);
    return s1;

}

short CountLetters(string s1 , enWhatToCount WhatToCount = enWhatToCount::All){

    if(WhatToCount == enWhatToCount::All)
        return s1.length() ;

    short count = 0;

    for(short i = 0 ; i < s1.length() ; i++)
    {
        if(WhatToCount == enWhatToCount::CapitalLetters && isupper(s1[i]))
            count++;

        if(WhatToCount == enWhatToCount::SmallLetters && islower(s1[i]))
            count++;
    }
    return count;

}

short CountCapitalLetters(string s1){

    short count = 0;

    for(short i = 0 ; i < s1.length() ; i++)
    {
        if(isupper(s1[i]))
            count++;
    }
    return count;

}

short CountSmallLetters(string s1){

    short count = 0;

    for(short i = 0 ; i < s1.length() ; i++)
    {
        if(islower(s1[i]))
            count++;
    }
    return count;

}

int main(){

    string s1 = ReadString();

    cout<<"\nString Length = "<<s1.length() <<endl;
    cout<<"\nCapital Letters Count = "<<CountCapitalLetters(s1)<<endl;
    cout<<"\nSmall Letters Count = "<<CountSmallLetters(s1)<<endl;
    
    cout<<"\nString Length = "<<CountLetters(s1) <<endl;
    cout<<"\nCapital Letters Count = "<<CountLetters(s1 , enWhatToCount ::CapitalLetters)<<endl;
    cout<<"\nSmall Letters Count = "<<CountLetters(s1 , enWhatToCount ::SmallLetters)<<endl;

    system("pause>0");

}*/





                          //problem 30



#include<iostream>
#include <string>
#include <iomanip>

using namespace std;

string ReadString(){

    string s1;
    cout<<"\nPlease enter your string?\n";
    getline(cin,s1);
    return s1;

}

char ReadChar(){

    char Char1;
    cout<<"\nPlease enter Character?\n";
    cin>>Char1;
    return Char1;

}

short CountLetter(string s1 , char Char1){

    short count = 0;
    for(short i = 0 ; i < s1.length() ; i++)
    {
        if(s1[i] == Char1)
            count++;
    }
    return count;

}

int main(){

    string s1 = ReadString();
    char Char1 = ReadChar();

    cout<<"\nLetter '"<<Char1<<"' Count = "<<CountLetter(s1,Char1)<<endl;

    system("pause>0");

}