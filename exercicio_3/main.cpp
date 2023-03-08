#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int linha[2][3], coluna[3][2];
        for(int i=0; i<2; i++){
            for(int j=0; j<3; j++){
                  cout<<"Digite um numero\n\n";
                  cin>> linha[i][j];
                  }      
        }
        
        for(int i=0; i<2; i++){
            for(int j=0; j<3; j++){
                   coluna[j][i]= linha[i][j];
                 }
                      
        }
        //cout<<coluna[2][1]<<"\n";
      for(int j=0; j<3; j++){
            for(int i=0; i<2; i++){
                    cout<<coluna[j][i]<<"\t";
                    }
                  cout<<"\n";      
        }
    system("PAUSE");
    return EXIT_SUCCESS;
}
