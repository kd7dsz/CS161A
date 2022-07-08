/******************************************************************************
# Author:           Don Alexander
# Lab:              Assignment #2
# Date:             July , 2022
# Description:     
# Input:            
# Output:           
# Sources:          None
#
******************************************************************************/


#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
const double PI = M_PI;
const double LOAD_FACTOR = 0.698;
using namespace std;

int main() {
// declare variables
  double jellyBeanLength;
  double jellyBeanHeight;
  double volJellyBean;
  double jarVol;
  int numJellyBeans;

//user input
  cout << "Welcome to my jelly bean program!!" << endl;
  cout << "Enter jelly bean length (cm): ";
  cin >> jellyBeanLength;
  cout << "Enter jelly bean height (cm): ";
  cin >> jellyBeanHeight;
  cout << "Enter jar size (mL): ";
  cin >> jarVol;

//calculations
  volJellyBean = (5 * PI * jellyBeanLength * pow(jellyBeanHeight, 2)) / 24;

  numJellyBeans = (jarVol * LOAD_FACTOR) / volJellyBean; 


//output statement
  cout << "Estimate of jelly beans in the jar: " << numJellyBeans << endl;
  cout << "Thank you for using my jelly bean program!" << endl;
  
}