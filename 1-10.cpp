                                //problem 1



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

			arr[i][j] = RandomNumber(1, 100);

		}

	}

}

void PrintMatrix(int arr[3][3], short Rows, short Cols) {

	for (int i = 0; i < Rows; i++) {

		for (int j = 0; j < Cols; j++) {

			cout << setw(3) << arr[i][j] << "		";

		}

		cout << endl;

	}

}

int main() {

	srand((unsigned)time(NULL));

	int arr[3][3];

	FillMatrixWithRandomNumbers(arr, 3, 3);

	cout << "\n the following is a 3x3 random matrix:\n";
	PrintMatrix(arr, 3, 3);

	system("pause>0");

}*/




                    //problem 2


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

			arr[i][j] = RandomNumber(1, 100);

		}

	}

}

void PrintMatrix(int arr[3][3], short Rows, short Cols) {

	for (int i = 0; i < Rows; i++) {

		for (int j = 0; j < Cols; j++) {

			cout << setw(3) << arr[i][j] << "		";

		}

		cout << endl;

	}
}

int RowSum(int arr[3][3], short RowNum, short Colms) {

	int sum = 0;

	for (int j = 0; j < Colms; j++) {

		sum += arr[RowNum][j];

	}

	return sum;

}

void PrintEachRowSum(int arr[3][3], short Rows, short Cols) {

	cout << "\nThe Following is the sum of each row in the matrix: \n";

			for (int i = 0; i < Cols; i++) {

				cout << " Row " << i + 1 << " Sum = " << RowSum(arr,i,Cols) << endl;

			}		

}

int main() {

	srand((unsigned)time(NULL));

	int arr[3][3];

	FillMatrixWithRandomNumbers(arr, 3, 3);

	cout << "\n the following is a 3x3 random matrix:\n";
	PrintMatrix(arr, 3, 3);

	PrintEachRowSum(arr, 3, 3);

	system("pause>0");

}*/



                        //problem 3


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

			arr[i][j] = RandomNumber(1, 100);

		}

	}

}

void PrintMatrix(int arr[3][3], short Rows, short Cols) {

	for (int i = 0; i < Rows; i++) {

		for (int j = 0; j < Cols; j++) {

			cout << setw(3) << arr[i][j] << "		";

		}

		cout << endl;

	}
}

int RowSum(int arr[3][3], short RowNum, short Colms) {

	int sum = 0;

	for (int j = 0; j < Colms; j++) {

		sum += arr[RowNum][j];

	}

	return sum;

}

void RowSumInArray(int arr[3][3] , int arrSum[3] , short Row, short Colms) {

    for(int i = 0 ; i < Row ; i++){

        arrSum[i] = RowSum(arr,i,Colms);

    }

}

void PrintRowsSumArray(int arr2[3], short Rows) {

	cout << "\nThe Following is the sum of each row in the matrix: \n";

			for (int i = 0; i < Rows; i++) {

				cout<< " Row " << i + 1 << " Sum = " << arr2[i] << endl;

			}		

}

int main() {

	srand((unsigned)time(NULL));

	int arr[3][3];
    int arrSum[3];

	FillMatrixWithRandomNumbers(arr, 3, 3);

	cout << "\n the following is a 3x3 random matrix:\n";
	PrintMatrix(arr, 3, 3);

    RowSumInArray(arr , arrSum , 3 , 3);

	PrintRowsSumArray(arrSum, 3);

	system("pause>0");

}*/



                            //problem 4



/*#include<iostream>
#include<string>
#include<iomanip>

using namespace std;

int RandomNumber(int From , int To){

    int randNum = rand() % (To - From + 1) + From ;

    return randNum;

}

void FillMatrixWithRandomNumbers(int arr[3][3] , short Rows ,  short Colms){

    for(int i = 0 ; i < Rows ; i++){

        for(int j = 0 ; j < Colms ; j++){

            arr[i][j] = RandomNumber(1,100);

        }

    }

}

void PrintMatrix(int arr[3][3] , short Rows ,  short Colms){

    for(int i = 0 ; i < Rows ; i++){

        for(int j = 0 ; j < Colms ; j++){

            cout<<setw(3)<<arr[i][j]<<"     ";

        }

        cout<<endl;

    }

}

int ColmSum(int arr[3][3] , short ColmNum , short Rows){

    int sum = 0 ;

    for(int i = 0 ; i < Rows ; i++){

        sum += arr[i][ColmNum];

    }

    return sum;

}

void PrintEachColmSum(int arr[3][3] , short Row , short Colm){

    cout << "\nThe Following is the sum of each Colm in the matrix: \n";

    for(int j = 0 ; j < Colm ; j++){

        cout << " Colm " << j + 1 << " Sum = " << ColmSum(arr,j,Row) << endl;

    }

}

int main(){

    srand((unsigned)time(NULL));

    int arr[3][3] ; 

    FillMatrixWithRandomNumbers(arr,3,3);
    cout << "\n the following is a 3x3 random matrix:\n";
	PrintMatrix(arr, 3, 3);

    PrintEachColmSum(arr,3,3);

    system("pause>0");

}*/



                            //problem 5



/*#include<iostream>
#include<string>
#include<iomanip>

using namespace std;

int RandomNumber(int From , int To){

    int randNum = rand() % (To - From + 1) + From ;

    return randNum;

}

void FillMatrixWithRandomNumbers(int arr[3][3] , short Rows ,  short Colms){

    for(int i = 0 ; i < Rows ; i++){

        for(int j = 0 ; j < Colms ; j++){

            arr[i][j] = RandomNumber(1,100);

        }

    }

}

void PrintMatrix(int arr[3][3] , short Rows ,  short Colms){

    for(int i = 0 ; i < Rows ; i++){

        for(int j = 0 ; j < Colms ; j++){

            cout<<setw(3)<<arr[i][j]<<"     ";

        }

        cout<<endl;

    }

}

int ColmSum(int arr[3][3] , short ColmNum , short Rows){

    int sum = 0 ;

    for(int i = 0 ; i < Rows ; i++){

        sum += arr[i][ColmNum];

    }

    return sum;

}

void ColmSumInArray(int arr[3][3] , int arrSum[3] , short Row , short Colm){

    for(int i = 0 ; i < Colm ; i++){

        arrSum[i] = ColmSum(arr,i,Row);

    }

}

void PrintEachColmSum(int arrSum [3] , short Colm){

    cout << "\nThe Following is the sum of each Colm in the matrix: \n";

    for(int j = 0 ; j < Colm ; j++){

        cout << " Colm " << j + 1 << " Sum = " << arrSum[j] << endl;

    }

}

int main(){

    srand((unsigned)time(NULL));

    int arr[3][3] ; 
    int arrSum[3] ;

    FillMatrixWithRandomNumbers(arr,3,3);
    cout << "\n the following is a 3x3 random matrix:\n";
	PrintMatrix(arr, 3, 3);

    ColmSumInArray(arr,arrSum,3,3);
    PrintEachColmSum(arrSum,3);

    system("pause>0");

}*/




                            //problem 6



/*#include<iostream>
#include<string>
#include<iomanip>

using namespace std;


void FillMatrixWithOrderedNumbers(int arr[3][3] , short Row , short Colm){

    short counter = 0 ;

    for(int i = 0 ; i < Row ; i++){

        for(int j = 0 ; j < Colm ; j++){
            
            counter += 1;
            arr[i][j] = counter;

        }

    }

}

void PrintMatrix(int arr[3][3] , short Row , short Colm){

    for(int i = 0 ; i < Row ; i++){

        for(int j = 0 ; j < Colm ; j++){
            
            cout<<setw(3)<<arr[i][j]<<"     ";

        }

        cout<<endl;

    }
}

int main(){

    int arr[3][3] ;

    FillMatrixWithOrderedNumbers(arr,3,3);
    cout<<"\nThe following is an 3x3 Ordered Matrix:\n";
    PrintMatrix(arr,3,3);

    system("pause>0");
    
}*/




                            //problem 7



/*#include<iostream>
#include<string>
#include<iomanip>

using namespace std;


void FillMatrixWithOrderedNumbers(int arr[3][3] , short Row , short Colm){

    short counter = 0 ;

    for(int i = 0 ; i < Row ; i++){

        for(int j = 0 ; j < Colm ; j++){
            
            counter += 1;
            arr[i][j] = counter;

        }

    }

}

void TransposeMatrix(int arr[3][3] , int arrTransposed[3][3] , short Row , short Colm){

    for(int i = 0 ; i < Row ; i++){

        for(int j = 0 ; j < Colm ; j++){
            
            arrTransposed[i][j] = arr[j][i];

        }

    }

}

void PrintMatrix(int arr[3][3] , short Row , short Colm){

    for(int i = 0 ; i < Row ; i++){

        for(int j = 0 ; j < Colm ; j++){
            
            cout<<setw(3)<<arr[i][j]<<"     ";

        }

        cout<<endl;

    }
}



int main(){

    int arr[3][3] ;
    int arrTransposed[3][3] ;

    FillMatrixWithOrderedNumbers(arr,3,3);
    cout<<"\nThe following is an 3x3 Ordered Matrix:\n";
    PrintMatrix(arr,3,3);

    TransposeMatrix(arr,arrTransposed,3,3);
    cout<<"\nThe following is the Transpose Matrix:\n"; 
    PrintMatrix(arrTransposed,3,3);  

    system("pause>0");
    
}*/




                            //problem 8



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

            printf("%0*d        " , 2 , arr[i][j]);
			//cout << setw(2) << arr[i][j] << "		";

		}

		cout << endl;

	}
}

void MultiplyTwoMatrises(int arr1[3][3] , int arr2[3][3] , int Result[3][3] , short Row , short Colm){

	for (int i = 0; i < Row; i++) {

		for (int j = 0; j < Colm; j++) {

			Result[i][j] = arr1[i][j] * arr2[i][j];

		}

		

	}

}

int main(){

    srand((unsigned)time(NULL));

    int Matrix1[3][3] ; 
    int Matrix2[3][3] ;
    int MatrixResult[3][3] ;

    FillMatrixWithRandomNumbers(Matrix1,3,3);
    cout << "\nMatrix1:\n";
	PrintMatrix(Matrix1, 3, 3);
    FillMatrixWithRandomNumbers(Matrix2,3,3);
    cout << "\nMatrix2:\n";
	PrintMatrix(Matrix2, 3, 3);

    MultiplyTwoMatrises(Matrix1,Matrix2,MatrixResult,3,3);
    cout << "\nResults:\n";
    PrintMatrix(MatrixResult, 3, 3);

    system("pause>0");

}*/







                            //problem 9



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

void PrintMiddleRow(int arr[3][3] , short Row , short Colm){

    for(int j = 0 ; j < Colm ; j++){

        printf(" %0*d        " , 2 , arr[Row/2][j]);

    }
    cout<<endl;
}

void PrintMiddleColm(int arr[3][3] , short Row , short Colm){

    for(int i = 0 ; i < Row ; i++){

        printf(" %0*d        " , 2 , arr[i][Colm/2]);

    }
    cout<<endl;
}

void PrintMatrix(int arr[3][3], short Rows, short Cols) {

	for (int i = 0; i < Rows; i++) {

		for (int j = 0; j < Cols; j++) {

			printf(" %0*d        " , 2 , arr[i][j]);

		}

		cout << endl;

	}
}



int main(){

    srand((unsigned)time(NULL));

    int arr[3][3] ; 

    FillMatrixWithRandomNumbers(arr,3,3);
    cout << "\nMatrix1:\n";
	PrintMatrix(arr, 3, 3);

    cout<<"\nMiddle Row Of Matrix1:\n";
    PrintMiddleRow(arr,3,3);

    cout<<"\nMiddle Colm Of Matrix1:\n";
    PrintMiddleColm(arr,3,3);

    system("pause>0");

}*/



                            //problem 10



#include<iostream>
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

int main(){

    srand((unsigned)time(NULL));

    int arr[3][3] ; 

    FillMatrixWithRandomNumbers(arr,3,3);
    cout << "\nMatrix1:\n";
	PrintMatrix(arr, 3, 3);

    cout<<"Sum Of Matrix1 is:   "<< SumOfMatrix(arr,3,3);
    cout<<endl;

    system("pause>0");

}