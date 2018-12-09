//
// Created by ibrahima22 on 7/12/18.
//

#ifndef BACKTRACKING_SUDOKU_H
#define BACKTRACKING_SUDOKU_H


#include <vector>
#
class Sudoku {
public:
    explicit Sudoku(int n);
    void play();
    void showBoard();
    void addPositon(int n,int m,int val);
    void dammyData();
    void generaTeBoard(int numCells);
    bool isInColum(int num,int value)const;
    void printColum(int indexColum)const;
    bool isInRow(int n,int m)const;
    void printRow(int indexRow)const;
private:
    int _MAX;
    int **_T;

    void reserve();
    bool isInSquare(int num);
    void printSquare(int n,int m);
    void backTracking(int m,int n);
    };


#endif //BACKTRACKING_SUDOKU_H
