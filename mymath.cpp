#include <stack>
#include <cmath>
#include <iostream>

double squareRoot(double a){

   double accuracy = 0.000000001;
   double x = a;

   while((fabs(x-a/x)) > accuracy){
        x=0.5*(x+a/x);
   }

   return x;
}

void decimalToBinary(int decimalNumber){
    std::stack<int> sztos;
    while(decimalNumber){
        sztos.push(decimalNumber%2);
        decimalNumber/=2;
    }

    while(!sztos.empty()){
        std::cout << sztos.top();
        sztos.pop();
    }
}

void quadraticEquationSolution(double a, double b, double c){
    double x1, x2, delta;
    delta = ((b*b)-(4*a*c));
    x1=((-b)-sqrt(delta))/2;
    x2=((-b)+sqrt(delta))/2;

    std::cout << "Delta = " << delta << std::endl;
    if(delta<0){
        std::cout << "Delta is smaller than 0, no solution" << std::endl;
    }else
        if(delta == 0){
        std::cout << "x1 = " << x1 << std::endl;
    }else{
        std::cout << "x1 = " << x1 << std::endl;
        std::cout << "x2 = " << x2 << std::endl;
    }
}

void pascalTriangle(int x){
    int arr[x][x];
    for(int i=0; i<x; i++){
        for(int j=0; j<x; j++){
            if(j==0)
                arr[i][j]=1;
            else
                arr[i][j]=0;
        }
    }
    for(int i=1; i<x; i++){
        for(int j=1; j<x; j++){
            arr[i][j] = arr[i-1][j-1]+arr[i-1][j];
        }
    }
    for(int i=0; i<x; i++){
        for(int j=0; j<x; j++){
            if(arr[i][j]!=0)
                std::cout << arr[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

double circlePoleInsideEquilateralTriangle(double wall){
    double heightOfTriangle = (wall*sqrt(3))/2;
    double r=(2.0/3.0*heightOfTriangle)/2;
    double area = 3.14 *(r*r);

    return area;
}







