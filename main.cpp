#include <iostream>
#include <string>
#include "Sudoku.h"

const int MAX = 9;

int main() {
    Sudoku sudoku(9); //doku.dammyData();
    sudoku.showBoard();
    sudoku.generaTeBoard(30);
    sudoku.showBoard();
    std::cout<<"check for colums"<<std::endl;
    int m=0;
    std::cin>>m;
    while(m!=0){
        sudoku.printColum(m);
        if(sudoku.isInColum(1,m))std::cout<<"YES"<<std::endl;
        else std::cout<<"NO"<<std::endl;
        sudoku.showBoard();
        std::cin>>m;
    }

    std::cout<<"--------------------------------------------------"<<std::endl;

    std::cout<<"check for rows"<<std::endl;
    int n=0;
    std::cin>>n;
    while(n!=0){
        sudoku.printRow(n);
        if(sudoku.isInRow(n,1))std::cout<<"YES"<<std::endl;
        else std::cout<<"NO"<<std::endl;
        sudoku.showBoard();
        std::cin>>n;
    }
    return 0;
}
