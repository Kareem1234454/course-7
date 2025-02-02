                         //problem 41



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

string ReverseWordsInString(string s1){

    vector<string> vString;
    string s2 = "";
    vString = SplitString(s1 , " ");
    // declere iterator
    vector<string>::iterator iter = vString.end();

    while(iter != vString.begin()){

        --iter;
        s2 += *iter + " ";

    }

    s2 = s2.substr(0 , s2.length() - 1);//remove last space
    return s2;

}

int main(){

    string s1 = ReadString();

    cout<<"\nString after reversing words:\n"<<ReverseWordsInString(s1)<<endl;

    system("pause>0");

}*/




                         //problem 42



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

string ReplaceWords(string s1 , string StringToReplace , string ReplaceTo){

    vector<string> vString;
    string s2 = "";
    short pos = 0 ;
    string sWord ; 


    while((pos = s1.find(" ")) != std::string::npos)
    {
        sWord = s1.substr(0,pos); 
        if(sWord != "")
        {
            if(sWord == StringToReplace)
                vString.push_back(ReplaceTo);
            else
                vString.push_back(sWord);
        }

        s1.erase(0,pos + 1); 
    } 

    if(s1 != "")
    {
        if(sWord == StringToReplace)
            vString.push_back(ReplaceTo);
        else
            vString.push_back(s1); 
    }

    s2 = JoinString(vString," ");
    return s2;

}

string ReplaceWordsInStringUsingBuiltINFunction(string s1 , string StringToReplace , string ReplaceTo){

    short pos = s1.find(StringToReplace);

    while(pos != std::string::npos){

        s1 = s1.replace(pos , StringToReplace.length() , ReplaceTo);
        pos = s1.find(StringToReplace);

    }

    return s1;

}

int main(){

    string s1 = "Welcom to Jorden , Jorden is a nice country.";
    string StringToReplace = "Jorden";
    string ReplaceTo = "USA";

    cout<<"\nOriginal Stirng:\n"<<s1<<endl;
    cout<<"\nString After Replace:\n"<<ReplaceWordsInStringUsingBuiltINFunction(s1,StringToReplace,ReplaceTo)<<endl;

    system("pause>0");

}*/




                        //problem 43



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

string LowerAllString(string s1){

    for(int i = 0 ; i < s1.length() ; i++){
   
                s1[i] = tolower(s1[i]);

    }

    return s1;

}

// string ReplaceWords(string s1 , string StringToReplace , string ReplaceTo , bool NotMatch = true){

//     vector<string> vString;
//     string s2 = "";
//     short pos = 0 ;
//     string sWord ; 


//     while((pos = s1.find(" ")) != std::string::npos)
//     {
//         sWord = s1.substr(0,pos); 
//         if(sWord != "")
//         {
//             if(sWord == StringToReplace && NotMatch)
//                 vString.push_back(ReplaceTo);
//             else if(tolower(sWord[0]) == tolower(StringToReplace[0]) && NotMatch == false)
//                 vString.push_back(ReplaceTo);
//             else
//                 vString.push_back(sWord);
//         }

//         s1.erase(0,pos + 1); 
//     } 

//     if(s1 != "")
//     {
//         if(sWord == StringToReplace)
//             vString.push_back(ReplaceTo);
//         else
//             vString.push_back(s1); 
//     }

//     s2 = JoinString(vString," ");
//     return s2;

// }


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

string ReplaceWordsInStringUsingSplit(string s1 , string StringToReplace , string ReplaceTo , bool MatchCase = true){

    vector<string> vString = SplitString(s1 , " ");
    string s2 = "";
    for(string &s : vString){
        if(MatchCase){
            if(s == StringToReplace){
                s = ReplaceTo;
            }
        }
        else{
            if(LowerAllString(s) == LowerAllString(StringToReplace)){
                s = ReplaceTo;
            }
        }
    }

    return JoinString(vString," ");;
}

int main(){

    string s1 = "Welcom to Jorden , Jorden is a nice country.";
    string StringToReplace = "jorden";
    string ReplaceTo = "USA";

    cout<<"\nOriginal Stirng:\n"<<s1<<endl;
    cout<<"\nReplace with match case:\n"<<ReplaceWordsInStringUsingSplit(s1,StringToReplace,ReplaceTo)<<endl;
    cout<<"\nReplace with don't match case:\n"<<ReplaceWordsInStringUsingSplit(s1,StringToReplace,ReplaceTo , false)<<endl;

    system("pause>0");

}*/






                        //problem 44



/*#include<iostream>
#include<vector>
#include <string>
#include <iomanip>


using namespace std;

string RemovePunctuationsFromString(string s1){

    string s2 = "";

    for(short i = 0 ; i < s1.length() ; i++){
        if(!ispunct(s1[i])){
            s2 += s1[i];
        }
    }

    return s2;
}

int main(){

    string s1 = "Welcom to Jorden , Jorden is a nice country ; it's amazing.";
    cout<<"\nOriginal Stirng:\n"<<s1<<endl;

    cout<<"\nPunctuations Removed:\n"<<RemovePunctuationsFromString(s1)<<endl;

    system("pause>0");

}*/




                        //problem 45



/*#include<iostream>
#include<vector>
#include <string>
#include <iomanip>


using namespace std;

struct sClient{
    string AccountNumber;
    string PinCode;
    string Name;
    string Phone;
    double AccountBalanse;
};

sClient ReadNewClient(){

    sClient Client;

    cout<<"\n\nEnter Account Number?    ";
    getline(cin,Client.AccountNumber);
    cout<<"Enter PinCode?    ";
    getline(cin,Client.PinCode);
    cout<<"Enter Name?    ";
    getline(cin,Client.Name);
    cout<<"Enter Phone?    ";
    getline(cin,Client.Phone);
    cout<<"Enter Account Balanse?    ";
    cin>>Client.AccountBalanse;

    return Client;
}

string ClientRecordToLine(sClient Client , string Seperator = "#//#"){

    string stClientRecord = "";
    
    
    stClientRecord += Client.AccountNumber + Seperator;
    stClientRecord += Client.PinCode + Seperator;
    stClientRecord += Client.Name + Seperator;
    stClientRecord += Client.Phone + Seperator;
    stClientRecord += to_string(Client.AccountBalanse) + Seperator;

    return stClientRecord;
}

int main(){

    sClient Client;

    cout<<"Please Enter Client Data:\n\n";
    Client = ReadNewClient();
    cout<<"\n\nClient Record For Saving is:\n "
        <<ClientRecordToLine(Client)<<endl;

    system("pause>0");
}*/






                        //problem 46



/*#include<iostream>
#include<vector>
#include <string>
#include <iomanip>


using namespace std;

struct sClient{
    string AccountNumber;
    string PinCode;
    string Name;
    string Phone;
    double AccountBalanse;
};

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


sClient ConvertLineToRecord(string sLine , string Seperator = "#//#"){

    vector<string> vString = SplitString(sLine,Seperator) ;
    sClient Client;

    Client.AccountNumber = vString[0];
    Client.PinCode = vString[1];
    Client.Name = vString[2];
    Client.Phone = vString[3];
    Client.AccountBalanse = stod(vString[4]); // to convert string to double

    return Client;
    
}

void PrintClientData(sClient Client){

    cout<<"\n\nThe Following is The Extracted Client Record:\n\n";

    cout<<"Account Number : ";
    cout<<Client.AccountNumber<<endl;
    cout<<"PinCode        : ";
    cout<<Client.PinCode<<endl;
    cout<<"Name           : ";
    cout<<Client.Name<<endl;
    cout<<"Phone          : ";
    cout<<Client.Phone<<endl;
    cout<<"Account Balanse: ";
    cout<<Client.AccountBalanse<<endl;


}


int main(){

    string sLine = "AB78#//#1234#//#Kareem Ashraf Halawa#//#01155534403#//#10000.000";
    cout<<"\nLine Record is:\n"<<sLine<<"\n\n";

    sClient Client = ConvertLineToRecord(sLine);

    PrintClientData(Client);

    system("pause>0");
}*/




                        //problem 47



/*#include<iostream>
#include<vector>
#include <string>
#include <iomanip>
#include<fstream>

using namespace std;
const string ClientsFileName = "Clients.txt";

struct sClient{
    string AccountNumber;
    string PinCode;
    string Name;
    string Phone;
    double AccountBalanse;
};

sClient ReadNewClient(){

    sClient Client;

    cout<<"\n\nEnter Account Number?    ";
    //usage std::ws will extract all the whitespace character
    getline(cin >> ws,Client.AccountNumber);

    cout<<"Enter PinCode?    ";
    getline(cin,Client.PinCode);

    cout<<"Enter Name?    ";
    getline(cin,Client.Name);

    cout<<"Enter Phone?    ";
    getline(cin,Client.Phone);

    cout<<"Enter Account Balanse?    ";
    cin>>Client.AccountBalanse;

    return Client;
}

string ClientRecordToLine(sClient Client , string Seperator = "#//#"){

    string stClientRecord = "";
    
    
    stClientRecord += Client.AccountNumber + Seperator;
    stClientRecord += Client.PinCode + Seperator;
    stClientRecord += Client.Name + Seperator;
    stClientRecord += Client.Phone + Seperator;
    stClientRecord += to_string(Client.AccountBalanse);

    return stClientRecord;
}

void AddDataLineToFile(string FileName , string sDataLine){

    fstream MyFile;

    MyFile.open(FileName , ios::out | ios::app);

    if(MyFile.is_open()){

        MyFile << sDataLine <<endl;
        MyFile.close();

    }

}

void AddNewClient(){

    sClient Client;
    Client = ReadNewClient();
    AddDataLineToFile(ClientsFileName , ClientRecordToLine(Client));

}

void AddClients(){

    char AddMore = 'Y';

    do{

        system("cls");
        cout<<"Adding New Client:\n\n";

        AddNewClient();

        cout<<"\nClient Added Successfully, do you want to add more clients? Y/N? ";
        cin>>AddMore;

    }while(toupper(AddMore) == 'Y');

}

int main(){

    AddClients();

    system("pause>0");

    return 0;
}*/




                        //problem 48



/*#include<iostream>
#include<vector>
#include <string>
#include <iomanip>
#include<fstream>

using namespace std;
const string ClientsFileName = "Clients.txt";

struct sClient{
    string AccountNumber;
    string PinCode;
    string Name;
    string Phone;
    double AccountBalanse;
};


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


sClient ConvertLineToRecord(string sLine , string Seperator = "#//#"){

    vector<string> vString = SplitString(sLine,Seperator) ;
    sClient Client;

    Client.AccountNumber = vString[0];
    Client.PinCode = vString[1];
    Client.Name = vString[2];
    Client.Phone = vString[3];
    Client.AccountBalanse = stod(vString[4]); // to convert string to double

    return Client;
    
}

vector<sClient> LoadClientsDataFromFile(string FileName){

    fstream MyFile;
    vector<sClient> vClients;
    MyFile.open(FileName , ios::in);

    if(MyFile.is_open()){

        string Line;
        sClient Client;

        while(getline(MyFile,Line)){

            Client = ConvertLineToRecord(Line);
            vClients.push_back(Client);

        }

        MyFile.close();

    }
    return vClients;

}


void PrintClientRecord(sClient Clinet){

    cout<<"| "<<left<<setw(15)<<Clinet.AccountNumber;
    cout<<"| "<<left<<setw(10)<<Clinet.PinCode;
    cout<<"| "<<left<<setw(40)<<Clinet.Name;
    cout<<"| "<<left<<setw(12)<<Clinet.Phone;
    cout<<"| "<<left<<setw(12)<<Clinet.AccountBalanse;

}


void PrintAllClientsData(vector<sClient> vClients){

    cout<<"\n\t\t\t\t\tClients List ("<<vClients.size()<<") Client(s).";
    cout<<"\n_________________________________________________________"
        <<"______________________________________________\n\n";
    cout<<"| "<<left<<setw(15)<<"Account Number";
    cout<<"| "<<left<<setw(10)<<"Pin Code";
    cout<<"| "<<left<<setw(40)<<"Name";
    cout<<"| "<<left<<setw(12)<<"Phone";
    cout<<"| "<<left<<setw(12)<<"Account Balance";
    cout<<"\n_________________________________________________________"
        <<"______________________________________________\n\n";
    for(sClient Client : vClients){

        PrintClientRecord(Client);
        cout<<endl;

    }

    cout<<"\n_________________________________________________________"
        <<"______________________________________________\n";
}

int main(){

    vector<sClient> vClients = LoadClientsDataFromFile(ClientsFileName);
    PrintAllClientsData(vClients);

    system("pause>0");

    return 0;
}*/




                        //problem 49



/*#include<iostream>
#include<vector>
#include <string>
#include <iomanip>
#include<fstream>

using namespace std;
const string ClientsFileName = "Clients.txt";

struct sClient{
    string AccountNumber;
    string PinCode;
    string Name;
    string Phone;
    double AccountBalanse;
};

void PrintClientData(sClient Client){

    cout<<"\n\nThe Following is The Extracted Client Record:\n\n";

    cout<<"Account Number : ";
    cout<<Client.AccountNumber<<endl;
    cout<<"PinCode        : ";
    cout<<Client.PinCode<<endl;
    cout<<"Name           : ";
    cout<<Client.Name<<endl;
    cout<<"Phone          : ";
    cout<<Client.Phone<<endl;
    cout<<"Account Balanse: ";
    cout<<Client.AccountBalanse<<endl;


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


sClient ConvertLineToRecord(string sLine , string Seperator = "#//#"){

    vector<string> vString = SplitString(sLine,Seperator) ;
    sClient Client;

    Client.AccountNumber = vString[0];
    Client.PinCode = vString[1];
    Client.Name = vString[2];
    Client.Phone = vString[3];
    Client.AccountBalanse = stod(vString[4]); // to convert string to double

    return Client;
    
}

vector<sClient> LoadClientsDataFromFile(string FileName){

    fstream MyFile;
    vector<sClient> vClients;
    MyFile.open(FileName , ios::in);

    if(MyFile.is_open()){

        string Line;
        sClient Client;

        while(getline(MyFile,Line)){

            Client = ConvertLineToRecord(Line);
            vClients.push_back(Client);

        }

        MyFile.close();

    }
    return vClients;

}

bool FindClientByAccountNumber(string AccountNumber , sClient &Client){

    vector<sClient> vClients = LoadClientsDataFromFile(ClientsFileName);
    for(sClient C : vClients){

        if(C.AccountNumber == AccountNumber){
            Client = C;
            return true;
        }

    }
    return false;
}

string ReadClientAccountNumber(){

    string AccountNumber = "";
    cout<<"Please Enter Account Number? ";
    cin>>AccountNumber;

    return AccountNumber;
}

int main(){

    sClient Client;
    string AccountNumber = ReadClientAccountNumber();
    if(FindClientByAccountNumber(AccountNumber , Client))
    {
        PrintClientData(Client);
    }
    else
    {
        cout<<"\nClient with Account Number ("<<AccountNumber<<") Not Found!\n";
    }

    system("pause>0");

    return 0;
}*/





                        //problem 50



/*#include<iostream>
#include<vector>
#include <string>
#include <iomanip>
#include<fstream>

using namespace std;
const string ClientsFileName = "Clients.txt";

struct sClient{
    string AccountNumber;
    string PinCode;
    string Name;
    string Phone;
    double AccountBalanse;
    bool MarkForDelete = false;
};

void PrintClientData(sClient Client){

    cout<<"\n\nThe Following is The Extracted Client Record:\n\n";

    cout<<"Account Number : ";
    cout<<Client.AccountNumber<<endl;
    cout<<"PinCode        : ";
    cout<<Client.PinCode<<endl;
    cout<<"Name           : ";
    cout<<Client.Name<<endl;
    cout<<"Phone          : ";
    cout<<Client.Phone<<endl;
    cout<<"Account Balanse: ";
    cout<<Client.AccountBalanse<<endl;


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

sClient ConvertLineToRecord(string sLine , string Seperator = "#//#"){

    vector<string> vString = SplitString(sLine,Seperator) ;
    sClient Client;

    Client.AccountNumber = vString[0];
    Client.PinCode = vString[1];
    Client.Name = vString[2];
    Client.Phone = vString[3];
    Client.AccountBalanse = stod(vString[4]); // to convert string to double

    return Client;
    
}

string ConvertRecordToLine(sClient Client , string Seperator = "#//#"){

    string stClientRecord = "";
    
    
    stClientRecord += Client.AccountNumber + Seperator;
    stClientRecord += Client.PinCode + Seperator;
    stClientRecord += Client.Name + Seperator;
    stClientRecord += Client.Phone + Seperator;
    stClientRecord += to_string(Client.AccountBalanse);

    return stClientRecord;
}

vector<sClient> LoadClientsDataFromFile(string FileName){

    fstream MyFile;
    vector<sClient> vClients;
    MyFile.open(FileName , ios::in);

    if(MyFile.is_open()){

        string Line;
        sClient Client;

        while(getline(MyFile,Line)){

            Client = ConvertLineToRecord(Line);
            vClients.push_back(Client);

        }

        MyFile.close();

    }
    return vClients;

}

bool FindClientByAccountNumber(string AccountNumber , vector<sClient> &vClients , sClient &Client){

    for(sClient C : vClients){

        if(C.AccountNumber == AccountNumber){
            Client = C;
            return true;
        }

    }
    return false;
}

string ReadClientAccountNumber(){

    string AccountNumber = "";
    cout<<"Please Enter Account Number? ";
    cin>>AccountNumber;

    return AccountNumber;
}

bool MarkClientForDeleteByAccountNumber(string AccountNumber , vector<sClient>& vClients){

    for(sClient &C : vClients){

        if(C.AccountNumber == AccountNumber){
            C.MarkForDelete = true;
            return true;
        }
    }
    return false;
}

vector<sClient> SaveClientsDataToFile(string FileName , vector<sClient> vClients){

    fstream MyFile;
    MyFile.open(FileName , ios::out);
    string DataLine;

    if(MyFile.is_open()){

        for(sClient &C : vClients){

            if(C.MarkForDelete == false){
                DataLine = ConvertRecordToLine(C);
                //we only write records that are not marked for delete.
                MyFile << DataLine <<endl;
            }

        }
        MyFile.close();
    }

    return vClients;
}

bool DeleteClientByAccountNumber(string AccountNumber , vector<sClient>& vClients){

    sClient Client;
    char Answer = 'n';

    if(FindClientByAccountNumber(AccountNumber , vClients , Client))
    {
        PrintClientData(Client);

        cout<<"Are you sure you want to delete this Clinet? (y/n)? ";
        cin>>Answer;

        if(Answer == 'y' || Answer == 'Y'){

            MarkClientForDeleteByAccountNumber(AccountNumber , vClients);
            SaveClientsDataToFile(ClientsFileName , vClients);

            //Refresh Clients
            vClients = LoadClientsDataFromFile(ClientsFileName);

            cout << "\n\nClient Deleted Successfully.";
            return true;
        }
    }
    else
    {
        cout<<"\nClient with Account Number ("<<AccountNumber<<") Not Found!\n";
        return false;
    }

}


int main(){

    vector<sClient> vClients = LoadClientsDataFromFile(ClientsFileName);
    string AccountNumber = ReadClientAccountNumber();

    DeleteClientByAccountNumber(AccountNumber , vClients);

    system("pause>0");

    return 0;
}*/






                        //problem 51



#include<iostream>
#include<vector>
#include <string>
#include <iomanip>
#include<fstream>

using namespace std;
const string ClientsFileName = "Clients.txt";

struct sClient{
    string AccountNumber;
    string PinCode;
    string Name;
    string Phone;
    double AccountBalanse;
    bool MarkForDelete = false;
};

void PrintClientData(sClient Client){

    cout<<"\n\nThe Following is The Extracted Client Record:\n\n";

    cout<<"Account Number : ";
    cout<<Client.AccountNumber<<endl;
    cout<<"PinCode        : ";
    cout<<Client.PinCode<<endl;
    cout<<"Name           : ";
    cout<<Client.Name<<endl;
    cout<<"Phone          : ";
    cout<<Client.Phone<<endl;
    cout<<"Account Balanse: ";
    cout<<Client.AccountBalanse<<endl;


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

sClient ConvertLineToRecord(string sLine , string Seperator = "#//#"){

    vector<string> vString = SplitString(sLine,Seperator) ;
    sClient Client;

    Client.AccountNumber = vString[0];
    Client.PinCode = vString[1];
    Client.Name = vString[2];
    Client.Phone = vString[3];
    Client.AccountBalanse = stod(vString[4]); // to convert string to double

    return Client;
    
}

string ConvertRecordToLine(sClient Client , string Seperator = "#//#"){

    string stClientRecord = "";
    
    
    stClientRecord += Client.AccountNumber + Seperator;
    stClientRecord += Client.PinCode + Seperator;
    stClientRecord += Client.Name + Seperator;
    stClientRecord += Client.Phone + Seperator;
    stClientRecord += to_string(Client.AccountBalanse);

    return stClientRecord;
}

vector<sClient> LoadClientsDataFromFile(string FileName){

    fstream MyFile;
    vector<sClient> vClients;
    MyFile.open(FileName , ios::in);

    if(MyFile.is_open()){

        string Line;
        sClient Client;

        while(getline(MyFile,Line)){

            Client = ConvertLineToRecord(Line);
            vClients.push_back(Client);

        }

        MyFile.close();

    }
    return vClients;

}

bool FindClientByAccountNumber(string AccountNumber , vector<sClient> &vClients , sClient &Client){

    for(sClient C : vClients){

        if(C.AccountNumber == AccountNumber){
            Client = C;
            return true;
        }

    }
    return false;
}

string ReadClientAccountNumber(){

    string AccountNumber = "";
    cout<<"Please Enter Account Number? ";
    cin>>AccountNumber;

    return AccountNumber;
}

vector<sClient> SaveClientsDataToFile(string FileName , vector<sClient> vClients){

    fstream MyFile;
    MyFile.open(FileName , ios::out);
    string DataLine;

    if(MyFile.is_open()){

        for(sClient &C : vClients){

            if(C.MarkForDelete == false){
                DataLine = ConvertRecordToLine(C);
                //we only write records that are not marked for delete.
                MyFile << DataLine <<endl;
            }

        }
        MyFile.close();
    }

    return vClients;
}

sClient ChangeClientRecord(string AccountNumber){

    sClient Client;

    Client.AccountNumber = AccountNumber;

    cout<<"\n\nEnter PinCode?    ";
    getline(cin >> ws ,Client.PinCode);

    cout<<"Enter Name?    ";
    getline(cin,Client.Name);

    cout<<"Enter Phone?    ";
    getline(cin,Client.Phone);

    cout<<"Enter Account Balanse?    ";
    cin>>Client.AccountBalanse;

    return Client;
}

bool UpdateClientByAccountNumber(string AccountNumber , vector<sClient>& vClients){

    sClient Client;
    char Answer = 'n';

    if(FindClientByAccountNumber(AccountNumber , vClients , Client))
    {
        PrintClientData(Client);

        cout<<"Are you sure you want to update this Clinet? (y/n)? ";
        cin>>Answer;

        if(Answer == 'y' || Answer == 'Y'){

            for(sClient &C : vClients){
                if(C.AccountNumber == AccountNumber){
                    C = ChangeClientRecord(AccountNumber);
                    break;
                }
            }
            SaveClientsDataToFile(ClientsFileName , vClients);

            cout << "\n\nClient Updated Successfully.";
            return true;
        }
    }
    else
    {
        cout<<"\nClient with Account Number ("<<AccountNumber<<") Not Found!\n";
        return false;
    }

}

int main(){

    vector<sClient> vClients = LoadClientsDataFromFile(ClientsFileName);
    string AccountNumber = ReadClientAccountNumber();

    UpdateClientByAccountNumber(AccountNumber , vClients);

    system("pause>0");

    return 0;
}