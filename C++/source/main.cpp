/*
 * =====================================================================================
 *
 *       Filename:  main.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  07/23/2022 07:25:07 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <iostream>
#include "Activation.h"
#include "FNN.h"

int main()
{
/*      MNIST dataset("res/trainImages", "res/trainLabels");  

    Vec input(28*28);
    FNN fnn = input + 50/act::sigmoid + 20/act::sigmoid + 10/act::softmax;
    fnn.setLearningRate(0.15f);
    fnn.setLossFunction(loss::meanSquared);

   fnn.train(&dataset, 10, 10); // batch size then epoch
   std::cout << " %%%%%%%%%%%%%% train ends %%%%%%%%%%%%%%% " << std::endl;
   fnn.test(&dataset);
   

    return 0;
    */

    Mat a(2,3);

    a[0][0] = 1;    a[0][1] = 2;    a[0][2] = 2;
    a[1][0] = 2;    a[1][1] = 1;    a[1][2] = 1;

    Mat b(a);

    Mat c = 10 * b;

    std::cout << b << c;
}

