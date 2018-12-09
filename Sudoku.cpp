//
// Created by ibrahima22 on 7/12/18.
//

#include <iostream>
#include "Sudoku.h"

void Sudoku::play() {

}
/**
 *
 * @pre --
 * @post print the board on screen
 * @param .--
 */
void Sudoku::showBoard() {
    const int MAX=(_MAX*2)+5;
    for (int k = 0; k < MAX; ++k)std::cout<<"+"; //print the upper fence
    std::cout<<std::endl;
    for (int i = 0; i <_MAX; i++) {
        std::cout<<"|";
        for (int j = 0; j <_MAX ; j++) {

            std::cout << _T[i][j] << "|";
            if (j == 2 || j == 5 || j == 9)std::cout << "+|";

        }
        std::cout<<std::endl;
        if(i==2 || i == 5 || i == 9 )for (int k = 0; k < MAX; ++k)std::cout<<"+";//Print line divider between squares "+"
        if(i==2 || i == 5 || i == 9 )std::cout<<std::endl;

    }
    for (int k = 0; k < MAX; ++k)std::cout<<"+"; //print the upper fence
    std::cout<<std::endl;
}

/**
 *
 */
void Sudoku::reserve() {
    std::cout<<"dintre del reserve"<<std::endl;
    _T=new int *[_MAX];
    for (int j = 0; j <_MAX ; j++) {
        _T[j]=new int [_MAX];
    }
    std::cout<<"taula reservada"<<std::endl;
  }

  /*!
   *
   */
void Sudoku::dammyData() {
    for (int i = 0; i <_MAX ; ++i) {
        for (int j = 0; j <_MAX ; ++j) {
            _T[i][j]=0;
        }
    }
}

/**
 *
 * @param n
 */
Sudoku::Sudoku(int n) {
    _MAX = n;
    reserve();
}
/**
 *
 * @param n
 * @param m
 * @param val
 */
void Sudoku::addPositon(int n,int m,int val) {
   _T[n][m]=val;
}

void Sudoku::generaTeBoard(int numCells) {
    for (int i = 0; i <numCells ; ++i) {
        int n=rand()%9;
        int m=rand()%9;
        int value=rand()%10;
        addPositon(n,m,value);
    }
}

void Sudoku::printColum(int indexColum) const {
    for (int i = 0; i < _MAX; ++i) {
        std::cout<<"|"<<_T[i][indexColum]<<"|"<<std::endl;
    }
    std::cout<<std::endl;
}

void Sudoku::printRow(int indexRow) const {
    for (int i = 0; i < _MAX; ++i) {
        std::cout<<_T[indexRow][i]<<"|";
    }
    std::cout<<std::endl;
}

bool Sudoku::isInColum(int n,int fix) const {
        bool trobat = false;
        int i=0;
        while(i < _MAX && !trobat){
            if(i != n )
                if(_T[i][fix]==_T[n][fix])trobat=true;
        i++;
        }
    return trobat;
}

bool Sudoku::isInRow(int n,int m) const {
    bool trobat = false;
    int i=0;
    while(i < _MAX && !trobat){
        if(i != m )
            if(_T[n][i]==_T[n][m])trobat=true;
        i++;
    }
    return trobat;
}

void Sudoku::printSquare(int n, int m) {

}

