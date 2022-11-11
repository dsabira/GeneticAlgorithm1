#include "genome.h"
#include <iostream> 
using namespace std;

int main() {
    genome myGenome; //creating object of class genome

    myGenome.print();//prints array of pixels

    myGenome.allocate(4);//creates array of pixels with the size 4

    bool allRGBZero = true;
    for (int i=0; i<4; i++){
        if (myGenome.get_red(i)!= 0) {
            allRGBZero = false;
            break;
        }
        if (myGenome.get_green(i)!= 0) {
            allRGBZero = false;
            break;
        }
         if (myGenome.get_blue(i)!= 0) {
            allRGBZero = false;
            break;
        }

    }
    if (allRGBZero){
        cout <<"TEST 1 PASSED: all RGB zero"<< endl; 
    }
    else {
        cout <<"TEST 1 NOT PASSED: not all RGB zero" << endl;
    }


    myGenome.print();//should print all the RGB values as zeros

    myGenome.randomize();//randomizes RGB values

    myGenome.print();//prints array of pixels with randomized RGB values

    myGenome.set_blue(0, 226);//should replace the blue channel of the first pixel to 226

    if (myGenome.get_blue(0) == 226){
        cout <<"TEST 2 PASSED: replaced blue channel"<< endl;
    }
    else {
        cout <<"TEST 2 NOT PASSED: not replaced the blue channel"<< endl;
    }
    myGenome.print();//print 

    return 0;
}

