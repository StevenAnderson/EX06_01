#include <iostream> 
#include <ctime>
#include <fstream>
using namespace std;
int main(){
    //setting up the random numbers
     srand (time(NULL));
    //connecting to the file
    fstream iofile( "Exercise13_1.txt", ios::in| ios::out);
    //if no file is found then the file is created
    if (!iofile)
    {
        iofile.open("Exercise13_1.txt", ios::out);
    }
   ///goes to the end of the file
    iofile.seekg(0, ios::end);
    //for loop to create 100 random integers
    for (int i=0; i< 100; i++){
         int x=rand() % 100;
        //placing the random numbers in the file
        iofile << x << " " ;
        }
    //closes the file
    iofile.close();
    
    return 0;
    
}
