#include <iostream>
#include <vector>


using namespace std;

// AERSP 424 Homework 1: Question 4
// Goal: Write a function named dot product that computes the dot product between
// two vectors of an arbitrary size.

double dot_product(vector<double>& w, vector<double>& x) //dot product function, 

//two vectors w and z passed into function
{
	double result = 0; //start the result at zero, then values will be added 
	//to it zero the for loop.
	for (int i = 0; i < w.size(); i++) //both vectors will be same size, so run
		//loop for number of elements within vectors
	{
		result += w[i] * x[i]; //new result is equal to the original result 
		//plus the product of w*x (dot product is multiplying respective terms
		//and adding the products of the terms together
	}
	return result; //returns result of function to main 
}


int main()
{
	//any vectors can be put in for w and x here
	vector<double> w = { 0.0001, 0.0001, 0.0001 }; //given values for w
	vector<double> x = { 124, 31.89, 20.945 }; //given values of x

	double dot_product_result = dot_product(w, x); //calls function into main

	cout << "The dot product is: " << dot_product_result << endl; //prints result

	return 0;
}




