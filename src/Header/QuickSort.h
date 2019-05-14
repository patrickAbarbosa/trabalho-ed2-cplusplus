#include <iostream>
#include "Rating.h"
#include "Analysis.h"

using namespace std;


class QuickSort {
    private:
        bool swaped = false;

    public:
        Analysis sort(int v[], int size);
        void sortRatings(Rating vr[], int low, int high);
        int partitionRatings(Rating vr[], int low, int high);
        void sort(int v[], int low, int high); //Params: vetor de elementos, menor valor do vetor e maior valor (indice)
        //        void swap(int* left, int* right); // Função de troca, inverte a posição dos elementos quando chamada
        int partition(int v[], int low, int high); //Params: vetor de elementos, menor valor do vetor e maior valor (indice)
};