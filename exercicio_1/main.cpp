#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    
    int matrix[4][4], soma=0;
        for(int i=0; i<4; i++){
            for(int j=0; j<4; j++){
                  cout<<"Digite um numero\n\n";
                  cin>> matrix[i][j];
                  }      
        }
        for(int i=0; i<4; i++){
                 int j=i;
                 soma += matrix[i][j];
                 
                          
        }
        cout<<soma<<"\n";
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
