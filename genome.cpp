#include "genome.h"

#include <cstdlib>
#include <iostream>
#include <ctime>

using namespace std;

genome::genome() {//constructor that sets to default values
    genes = NULL;
    nGenes = 0;
}

genome::~genome() {//desctructor calls deallocate() when object is deleted
    deallocate();
}

void genome::allocate(int nGenes) {//creates array of pixels with the size of nGenes
    if (genes != NULL) {//if genes are not NULL, need to deallocate
        deallocate();
    }
    genes = new Pixel[nGenes];//creating array of pixels with default values of pixel colors as 0s
    this->nGenes = nGenes; //saving the new size of the array
}

void genome::deallocate() {//defaulting back genes and nGenes
    genes = NULL;
    nGenes = 0;
}

void genome::randomize() {//randomizing RGB values for pixel array
    std::srand(std::time(nullptr));
    for (int i=0;i<nGenes;i++) {
        genes[i].red = rand() % 256; //so that we always have values between 0-256
        genes[i].blue = rand() % 256;
        genes[i].green = rand() % 256;

    }
}

void genome::set_red(int index, int value) {//setters for RGB values of pixel from array
    genes[index].red = value;
}

void genome::set_blue(int index, int value) {
    genes[index].blue = value;
}

void genome::set_green(int index, int value) {
    genes[index].green = value;
}

int genome::get_red(int index) {//gets RGB values of pixel from array
    return genes[index].red;
}

int genome::get_blue(int index) {
    return genes[index].blue;
}

int genome::get_green(int index) {
    return genes[index].green;
}

void genome::print() {//prints pixels in a readable format
    for (int i = 0;i<nGenes;i++) {
        cout << genes[i].red << ", " << genes[i].green << ", " << genes[i].blue << endl;
    }
}    
