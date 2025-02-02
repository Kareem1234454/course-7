
                          //problem 31



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

char ReadChar(){

    char Char1;
    cout<<"\nPlease enter Character?\n";
    cin>>Char1;
    return Char1;

}

char InvertLetterCase(char Char1){
    
    return islower(Char1) ? toupper(Char1) : tolower(Char1);

}

short CountLetter(string s1 , char Char1 , bool MatchCase = true){

    short count = 0;
    for(short i = 0 ; i < s1.length() ; i++)
    {
        if(MatchCase)
        {
            if(s1[i] == Char1)
                count++;
        }
        else
        {
            if(tolower(s1[i]) == tolower(Char1))
                count++;
        }
    }
    return count;

}

int main(){

    string s1 = ReadString();
    char Char1 = ReadChar();

    cout<<"\nLetter '"<<Char1<<"' Count = "<<CountLetter(s1,Char1)<<endl;
    cout<<"\nLetter '"<<Char1<<"' or '"<<InvertLetterCase(Char1)<<"' Count = "<<CountLetter(s1,Char1,false)<<endl;

    system("pause>0");

}*/




                          //problem 32



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

bool IsVowel(char Char1)
{

    Char1 = tolower(Char1);
    return ((Char1 == 'a') || (Char1 == 'o') || (Char1 == 'i') || (Char1 == 'e') || (Char1 == 'u'));

}

int main(){

    char Char1 = ReadChar();

    if(IsVowel(Char1))
        cout<<"\nYes Letter \'"<<Char1<<"\' is vowel.\n";
    else
        cout<<"\nNo Letter \'"<<Char1<<"\' is not vowel.\n";

    system("pause>0");

}*/




                          //problem 33



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

bool IsVowel(char Char1)
{

    Char1 = tolower(Char1);
    return ((Char1 == 'a') || (Char1 == 'o') || (Char1 == 'i') || (Char1 == 'e') || (Char1 == 'u'));

}

short CountVowelLetters(string s1){

    short count = 0;
    for(short i = 0 ; i < s1.length() ; i++)
    {
        if(IsVowel(s1[i]))
            count++;
    }
    return count;

}

int main(){

    string s1 = ReadString();
    cout<<"\nNumber Of Vowels is: "<<CountVowelLetters(s1)<<endl;

    system("pause>0");

}*/





                          //problem 34



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

bool IsVowel(char Char1)
{

    Char1 = tolower(Char1);
    return ((Char1 == 'a') || (Char1 == 'o') || (Char1 == 'i') || (Char1 == 'e') || (Char1 == 'u'));

}

void PrintVowelLetters(string s1){

    cout<<"\nVowels in string are: ";
    for(short i = 0 ; i < s1.length() ; i++)
    {
        if(IsVowel(s1[i]))
            cout<<s1[i]<<"   ";
    }
    cout<<endl;

}

int main(){

    string s1 = ReadString();

    PrintVowelLetters(s1);

    system("pause>0");

}*/





                          //problem 35



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

// void PrintEachWord(string s1)
// {

//     string word = "";
//     cout<<"Your String Words Are:\n\n";

//     for(short i = 0 ; i < s1.length() ; i++)
//     {
//         if(s1[i] != ' ')
//         {
//             word += s1[i];
//         }
//         else
//         {
//             cout<<word<<endl;
//             word = "";
//         }
//     }
//     cout<<word<<endl;

// }

void PrintEachWord(string s1)
{

    string delim = " " ; // delimeter
    cout<<"Your String Words Are:\n\n";
    short pos = 0 ;
    string sWord ; //define a string variable

    //use find function to get the position of delimeter 
    while((pos = s1.find(delim)) != std::string::npos)
    {
        sWord = s1.substr(0,pos); // store the word
        if(sWord != "")
        {
            cout<<sWord<<endl;
        }

        s1.erase(0,pos + delim.length()); //erase() until position and move to next word.
    } 

    if(s1 != "")
    {
        cout<<s1<<endl; // it print last word in the string
    }
}

int main(){

    PrintEachWord(ReadString());

    system("pause>0");

}*/




                          //problem 36



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

short CountWords(string s1)
{

    short counter = 0;
    string delim = " " ; 
    short pos = 0 ;
    string sWord ;

    while((pos = s1.find(delim)) != std::string::npos)
    {
        sWord = s1.substr(0,pos); 
        if(sWord != "")
        {
            counter++;
        }

        s1.erase(0,pos + delim.length()); 
    } 

    if(s1 != "")
    {
        counter++; 
    }

    return counter;
}

int main(){

    cout<<"The number of words in your string is: "<<
        CountWords(ReadString())<<endl;

    system("pause>0");

}*/



                         //problem 37



/*#include<iostream>
#include<vector>
#include <string>
#include <iomanip>


using namespace std;

string ReadString(){

    string s1;
    cout<<"\nPlease enter your string?\n";
    getline(cin,s1);
    return s1;

}

vector<string> SplitString(string s1 , string delim)
{
    vector<string> vString;
    short pos = 0 ;
    string sWord ; 


    while((pos = s1.find(delim)) != std::string::npos)
    {
        sWord = s1.substr(0,pos); 
        if(sWord != "")
        {
            vString.push_back(sWord);
        }

        s1.erase(0,pos + delim.length()); 
    } 

    if(s1 != "")
    {
        vString.push_back(s1); 
    }

    return vString;
}

int main(){

     vector<string> vString;

    vString = SplitString(ReadString() , " ");

    cout<<"Tokens: "<<vString.size()<<endl;

    for(string& s: vString)
    {
        cout<<s<<endl;
    }


    system("pause>0");

}*/



                         //problem 38



/*#include<iostream>
#include<vector>
#include <string>
#include <iomanip>


using namespace std;

string TrimLeft(string s1){

    for(short i = 0 ; i < s1.length() ; i++){
        if(s1[i] != ' '){
            return s1.substr(i , s1.length() - i);
        }
    }
    return "";
}

string TrimRight(string s1){

    for(short i = s1.length() - 1 ; i >= 0 ; i--){
        if(s1[i] != ' '){
            return s1.substr(0 , i + 1);
        }
    }
    return "";
}

string Trim(string s1){

    return TrimLeft(TrimRight(s1));
}

int main(){

    string s1 = "           Kareem Halawa           ";
    cout<<s1<<endl;
    cout<<TrimLeft(s1)<<endl;
    cout<<TrimRight(s1)<<endl;
    cout<<Trim(s1)<<endl;

    system("pause>0");
}*/




                         //problem 39



/*#include<iostream>
#include<vector>
#include <string>
#include <iomanip>


using namespace std;

string JoinString(vector<string> &vString , string delim){

    string s1 = "" ;
    for(string& s: vString)
    {
            s1 += s + delim;
    }
    return s1.substr(0,s1.length() - delim.length());

}

int main(){

     vector<string> vString = {"Kareem" , "Ashraf" , "Halawa"};

    cout<<"\nVector After Join:\n"<<JoinString(vString , " ")<<endl;

    system("pause>0");

}*/



                         //problem 40



#include<iostream>
#include<vector>
#include <string>
#include <iomanip>


using namespace std;

string JoinString(vector<string> &vString , string delim){

    string s1 = "" ;
    for(string& s: vString)
    {
            s1 += s + delim;
    }
    return s1.substr(0,s1.length() - delim.length());

}

string JoinString(string arrString[3] , short Length , string delim){

    string s1 = "" ;
    for(short i = 0 ; i < Length ; i++)
    {
            s1 += arrString[i] + delim;
    }
    return s1.substr(0,s1.length() - delim.length());

}



int main(){

     vector<string> vString = {"Kareem" , "Ashraf" , "Halawa"};
     string arrString[3] = {"Kareem" , "Ashraf" , "Halawa"};

    cout<<"\nVector After Join:\n"<<JoinString(vString , " ")<<endl;
    cout<<"\nArray After Join:\n"<<JoinString(arrString , 3 , " ")<<endl;

    system("pause>0");

}