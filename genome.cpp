#include "genome.h"

#include <cstdlib>
#include <iostream>
#include <ctime>

using namespace std;

genome::genome() {
    genes = NULL;
    nGenes = 0;
}

genome::~genome() {
    deallocate();
}

void genome::allocate(int nGenes) {
    if (genes != NULL) {
        deallocate();
    }
    genes = new Pixel[nGenes];
    this->nGenes = nGenes;
}

void genome::deallocate() {
    genes = NULL;
    nGenes = 0;
}

void genome::randomize() {
    std::srand(std::time(nullptr));
    for (int i=0;i<nGenes;i++) {
        genes[i].red = rand() % 256;
        genes[i].blue = rand() % 256;
        genes[i].green = rand() % 256;

    }
}

void genome::set_red(int index, int value) {
    genes[index].red = value;
}

void genome::set_blue(int index, int value) {
    genes[index].blue = value;
}

void genome::set_green(int index, int value) {
    genes[index].green = value;
}

int genome::get_red(int index) {
    return genes[index].red;
}

int genome::get_blue(int index) {
    return genes[index].blue;
}

int genome::get_green(int index) {
    return genes[index].green;
}

void genome::print() {
    for (int i = 0;i<nGenes;i++) {
        cout << genes[i].red << ", " << genes[i].green << ", " << genes[i].blue << endl;
    }
}
