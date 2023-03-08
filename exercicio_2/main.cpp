#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
        int matrix[3][5], soma_linha[3], soma=0;
        for(int i=0; i<3; i++){
            for(int j=0; j<5; j++){
                  cout<<"Digite um numero\n\n";
                  cin>> matrix[i][j];
                  }      
        }
        for(int i=0; i<3; i++){
            for(int j=0; j<5; j++){
                  soma += matrix[i][j];
                  }
                  soma_linha[i] =  soma;
                  soma=0;
                   
        }
        for(int i=0; i<3; i++){
              cout<<soma_linha[i]<<"\t";
        }
        
     
    system("PAUSE");
    return EXIT_SUCCESS;
}
