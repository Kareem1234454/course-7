                            //problem 11



/*#include<iostream>
#include <string>
#include <iomanip>

using namespace std;

int RandomNumber(int From, int To) {

	int randNum = rand() % (To - From + 1) + From;

	return randNum;

}

void FillMatrixWithRandomNumbers(int arr[3][3], short Rows, short Cols) {

	for (int i = 0; i < Rows; i++) {

		for (int j = 0; j < Cols; j++) {

			arr[i][j] = RandomNumber(1, 10);

		}

	}

}

void PrintMatrix(int arr[3][3], short Rows, short Cols) {

	for (int i = 0; i < Rows; i++) {

		for (int j = 0; j < Cols; j++) {

			printf(" %0*d        " , 2 , arr[i][j]);

		}

		cout << endl;

	}
}

int SumOfMatrix(int arr[3][3] , short Row , short Colm){

    int sum = 0;
    
    for (int i = 0; i < Row; i++) {

		for (int j = 0; j < Colm; j++) {

			sum += arr[i][j];

		}

	}

    return sum;

}

bool CheckEqualityOfMatrices(int Matrix1[3][3] , int Matrix2[3][3] , short Row , short Colm){

    return (SumOfMatrix(Matrix1,Row,Colm) == SumOfMatrix(Matrix2,Row,Colm));

}

int main(){

    srand((unsigned)time(NULL));

    int Matrix1[3][3] ;
    int Matrix2[3][3] ;


    FillMatrixWithRandomNumbers(Matrix1,3,3);
    cout << "\nMatrix1:\n";
	PrintMatrix(Matrix1, 3, 3);

    FillMatrixWithRandomNumbers(Matrix2,3,3);
    cout << "\nMatrix1:\n";
	PrintMatrix(Matrix2, 3, 3);

    if(CheckEqualityOfMatrices(Matrix1,Matrix2,3,3))
        cout<<"\nYes:  Matrices are equal.\n";
    else
        cout<<"\nNo:  Matrices are not equal.\n";

    system("pause>0");

}*/




                            //problem 12



/*#include<iostream>
#include <string>
#include <iomanip>

using namespace std;

int RandomNumber(int From, int To) {

	int randNum = rand() % (To - From + 1) + From;

	return randNum;

}

void FillMatrixWithRandomNumbers(int arr[3][3], short Rows, short Cols) {

	for (int i = 0; i < Rows; i++) {

		for (int j = 0; j < Cols; j++) {

			arr[i][j] = RandomNumber(1, 10);

		}

	}

}

void PrintMatrix(int arr[3][3], short Rows, short Cols) {

	for (int i = 0; i < Rows; i++) {

		for (int j = 0; j < Cols; j++) {

			printf(" %0*d        " , 2 , arr[i][j]);

		}

		cout << endl;

	}
}

bool CheckTypicalOfMatrices(int Matrix1[3][3] , int Matrix2[3][3] , short Row , short Colm){

    for (int i = 0; i < Row; i++) {

		for (int j = 0; j < Colm; j++) {

            if(Matrix1[i][j] != Matrix2[i][j])
                return false;

		}

	}

    return true;

}

int main(){

    srand((unsigned)time(NULL));

    int Matrix1[3][3] ;
    int Matrix2[3][3] ;


    FillMatrixWithRandomNumbers(Matrix1,3,3);
    cout << "\nMatrix1:\n";
	PrintMatrix(Matrix1, 3, 3);

    FillMatrixWithRandomNumbers(Matrix2,3,3);
    cout << "\nMatrix1:\n";
	PrintMatrix(Matrix2, 3, 3);

    if(CheckTypicalOfMatrices(Matrix1,Matrix2,3,3))
        cout<<"\nYes:  Matrices are equal.\n";
    else
        cout<<"\nNo:  Matrices are not equal.\n";

    system("pause>0");

}*/






                            //problem 13



/*#include<iostream>
#include <string>
#include <iomanip>

using namespace std;


void PrintMatrix(int arr[3][3], short Rows, short Cols) {

	for (int i = 0; i < Rows; i++) {

		for (int j = 0; j < Cols; j++) {

			cout<<setw(3)<<arr[i][j]<<"     ";

		}

		cout << endl;

	}
}

bool IsIdentityMatrix(int Matrix1[3][3] , short Row , short Colm){

    for (int i = 0; i < Row; i++) {

		for (int j = 0; j < Colm; j++) {

            if(i == j && Matrix1[i][j] != 1)
                return false;
            
            else if(i != j && Matrix1[i][j] != 0)
                return false;
            

		}

	}

    return true;
}

int main(){

    int Matrix1[3][3] = {{1,0,0} , {0,1,0} , {0,0,1}};

    cout << "\nMatrix1:\n";
	PrintMatrix(Matrix1, 3, 3);

    if(IsIdentityMatrix(Matrix1,3,3))
        cout<<"\nYes:  Matrix Is Identity.\n";
    else
        cout<<"\nNo:  Matrix Is Not Identity.\n";

    system("pause>0");

}*/



                            //problem 14



/*#include<iostream>
#include <string>
#include <iomanip>

using namespace std;


void PrintMatrix(int arr[3][3], short Rows, short Cols) {

	for (int i = 0; i < Rows; i++) {

		for (int j = 0; j < Cols; j++) {

			cout<<setw(3)<<arr[i][j]<<"     ";

		}

		cout << endl;

	}
}

bool IsScalarMatrix(int Matrix1[3][3] , short Row , short Colm){

    int FirstDiagElement = Matrix1[0][0];

    for (int i = 0; i < Row; i++) {

		for (int j = 0; j < Colm; j++) {

            if(i == j && Matrix1[i][j] != FirstDiagElement)
                return false;
            
            else if(i != j && Matrix1[i][j] != 0)
                return false;
            

		}

	}

    return true;
}

int main(){

    int Matrix1[3][3] = {{10,0,0} , {0,10,0} , {0,0,10}};

    cout << "\nMatrix1:\n";
	PrintMatrix(Matrix1, 3, 3);

    if(IsScalarMatrix(Matrix1,3,3))
        cout<<"\nYes:  Matrix Is Scalar.\n";
    else
        cout<<"\nNo:  Matrix Is Not Scalar.\n";

    system("pause>0");

}*/





                            //problem 15



/*#include<iostream>
#include <string>
#include <iomanip>

using namespace std;


void PrintMatrix(int arr[3][3], short Rows, short Cols) {

	for (int i = 0; i < Rows; i++) {

		for (int j = 0; j < Cols; j++) {

			cout<<setw(3)<<arr[i][j]<<"     ";

		}

		cout << endl;

	}
}

short CountNumberInMatrix(int Matrix1[3][3] , int num , short Row , short Colm){

    short count = 0;

    for (int i = 0; i < Row; i++) {

		for (int j = 0; j < Colm; j++) {

			if(Matrix1[i][j] == num)
                count++;

		}

	}

    return count;

}

int main(){

    int Matrix1[3][3] = {{9,1,12} , {0,9,1} , {0,9,9}};
    int num ;

    cout << "\nMatrix1:\n";
	PrintMatrix(Matrix1, 3, 3);

    cout<<"\nEnter the number to count in matrix? ";
    cin>>num;

    int count = CountNumberInMatrix(Matrix1 , num , 3,3); 

    if(count == 0)
        cout<<"\nNumber "<<num<<" is not Found in matrix.\n";
    else
        cout<<"\nNumber "<<num<<" count in matrix is "<<count<<"\n";

    system("pause>0");

}*/




                            //problem 16



/*#include<iostream>
#include <string>
#include <iomanip>

using namespace std;


void PrintMatrix(int arr[3][3], short Rows, short Cols) {

	for (int i = 0; i < Rows; i++) {

		for (int j = 0; j < Cols; j++) {

			cout<<setw(3)<<arr[i][j]<<"     ";

		}

		cout << endl;

	}
}

short CountNumberInMatrix(int Matrix1[3][3] , int num , short Row , short Colm){

    short count = 0;

    for (int i = 0; i < Row; i++) {

		for (int j = 0; j < Colm; j++) {

			if(Matrix1[i][j] == num)
                count++;

		}

	}

    return count;

}

bool IsSparseMatrix(int Matrix1[3][3] , short Row , short Colm){

    short MatrixSize = Row * Colm;

    return (CountNumberInMatrix(Matrix1,0,3,3) > (MatrixSize / 2));

}

int main(){

    int Matrix1[3][3] = {{1,0,12} , {0,0,1} , {0,0,9}};

    cout << "\nMatrix1:\n";
	PrintMatrix(Matrix1, 3, 3);

    if(IsSparseMatrix(Matrix1,3,3))
        cout<<"\nYes:  Matrix Is Sparse.\n";
    else
        cout<<"\nNo:  Matrix Is Not Sparse.\n";

    system("pause>0");

}*/






                            //problem 17



/*#include<iostream>
#include <string>
#include <iomanip>

using namespace std;


void PrintMatrix(int arr[3][3], short Rows, short Cols) {

	for (int i = 0; i < Rows; i++) {

		for (int j = 0; j < Cols; j++) {

			cout<<setw(3)<<arr[i][j]<<"     ";

		}

		cout << endl;

	}
}

short CountNumberInMatrix(int Matrix1[3][3] , int num , short Row , short Colm){

    short count = 0;

    for (int i = 0; i < Row; i++) {

		for (int j = 0; j < Colm; j++) {

			if(Matrix1[i][j] == num)
                count++;

		}

	}

    return count;

}

bool IsNumberInMatrix(int Matrix1[3][3] , int num , short Row , short Colm){

    for (int i = 0; i < Row; i++) {

		for (int j = 0; j < Colm; j++) {

			if(Matrix1[i][j] == num)
                return true;

		}

	}

    return false;

}

int main(){

    int Matrix1[3][3] = {{1,0,12} , {0,0,1} , {0,0,9}};

    cout << "\nMatrix1:\n";
	PrintMatrix(Matrix1, 3, 3);

    int num;
    cout<<"Please enter the number to look for in matrix? ";
    cin>>num;

    if(CountNumberInMatrix(Matrix1,num,3,3) > 0)
        cout<<"\nYes:  it is there.\n";
    else
        cout<<"\nNo:  it is not there.\n";

    if(IsNumberInMatrix(Matrix1,num,3,3))
        cout<<"\nYes:  it is there.\n";
    else
        cout<<"\nNo:  it is not there.\n";

    system("pause>0");

}*/





                            //problem 18



/*#include<iostream>
#include <string>
#include <iomanip>

using namespace std;


void PrintMatrix(int arr[3][3], short Rows, short Cols) {

	for (int i = 0; i < Rows; i++) {

		for (int j = 0; j < Cols; j++) {

			cout<<setw(3)<<arr[i][j]<<"     ";

		}

		cout << endl;

	}
}

bool IsNumberInMatrix(int Matrix1[3][3] , int num , short Row , short Colm){

    for (int i = 0; i < Row; i++) {

		for (int j = 0; j < Colm; j++) {

			if(Matrix1[i][j] == num)
                return true;

		}

	}

    return false;

}

void PrintIntersectedNumbers(int Matrix1[3][3] , int Matrix2[3][3] , short Row , short Colm){

    for (int i = 0; i < Row; i++) {

		for (int j = 0; j < Colm; j++) {

            if(IsNumberInMatrix(Matrix2 , Matrix1[i][j] , Row , Colm))
                cout<<" "<<Matrix1[i][j]<<"    ";

		}

	}
}

int main(){

    int Matrix1[3][3] = {{77,5,12} , {22,20,1} , {1,0,9}};
    int Matrix2[3][3] = {{5,80,90} , {22,77,1} , {10,8,33}};


    cout << "\nMatrix1:\n";
	PrintMatrix(Matrix1, 3, 3);

    cout << "\nMatrix2:\n";
	PrintMatrix(Matrix2, 3, 3);

    cout<<"\nIntersected Numbers Are:\n\n";
    PrintIntersectedNumbers(Matrix1,Matrix2,3,3);

    system("pause>0");

}*/




                            //problem 19



/*#include<iostream>
#include <string>
#include <iomanip>

using namespace std;


void PrintMatrix(int arr[3][3], short Rows, short Cols) {

	for (int i = 0; i < Rows; i++) {

		for (int j = 0; j < Cols; j++) {

			cout<<setw(3)<<arr[i][j]<<"     ";

		}

		cout << endl;

	}
}

short MinNumberInMatrix(int Matrix1[3][3] , short Rows, short Cols){

    short MinNum = Matrix1[0][0] ;

    for (int i = 0; i < Rows; i++) {

		for (int j = 0; j < Cols; j++) {

            if(MinNum > Matrix1[i][j])
                MinNum = Matrix1[i][j];

		}

	}

    return MinNum;
}

short MaxNumberInMatrix(int Matrix1[3][3] , short Rows, short Cols){

    short MaxNum = Matrix1[0][0] ;

    for (int i = 0; i < Rows; i++) {

		for (int j = 0; j < Cols; j++) {

            if(MaxNum < Matrix1[i][j])
                MaxNum = Matrix1[i][j];

		}

	}

    return MaxNum;
}

int main(){

    int Matrix1[3][3] = {{77,5,12} , {22,20,6} , {14,3,9}};

    cout << "\nMatrix1:\n";
	PrintMatrix(Matrix1, 3, 3);

    cout<<"\nMinimum Number is: "<<MinNumberInMatrix(Matrix1,3,3)<<"\n";
    cout<<"\nMaxmum Number is: "<<MaxNumberInMatrix(Matrix1,3,3);

    system("pause>0");

}*/






                            //problem 20



#include<iostream>
#include <string>
#include <iomanip>

using namespace std;


void PrintMatrix(int arr[3][3], short Rows, short Cols) {

	for (int i = 0; i < Rows; i++) {

		for (int j = 0; j < Cols; j++) {

			cout<<setw(3)<<arr[i][j]<<"     ";

		}

		cout << endl;

	}
}

bool ISPalindromeMatrix(int Matrix1[3][3] , short Rows , short Cols){

    for(short i = 0 ; i < Rows ; i++){

        for(int j = 0; j < Cols / 2 ; j++){

            if(Matrix1[i][j] != Matrix1[i][Cols - 1 - j])
                return false;

        }
    }
    return true;

}

int main(){

    int Matrix1[3][3] = {{1,2,1} , {5,5,5} , {7,3,7}};

    cout << "\nMatrix1:\n";
	PrintMatrix(Matrix1, 3, 3);

    if(ISPalindromeMatrix(Matrix1,3,3))
        cout<<"\nYes: Matrix is Palindrome.\n";
    else
        cout<<"\nNo: Matrix is not Palindrome.\n";

    system("pause>0");

}