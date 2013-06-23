#ifndef DIGIT_H
#define DIGIT_H
int ispresent(char s[],char in[],int n);
//this function checks if that file number is present in the file s
int digitrec(char input[]);
//this function gives the actual value of the digit
float distancesq(char in[],char ave[]);
//calculates the euclidean distance between two structures
int smallest(float num[]);
//returns the smallest number in an array
int prediction(char name[]);
//Uses first algorithm to predict the value of required bitmap
void ave_construct();
//this function creates 10 files corrosponding to each digit each containing a matrix which consists of the average of all the bitmaps corrosponding to a digit
int create_training_data();
// this function creates a new file named "trainingdata.txt" in the data folder which consists of all the bitmaps from "data.txt" without its numerical interpretation. 
void data_set_divide();
//this function creates 10 files corrosponding to each digit
//Each of these files stores the serial number of the bitmaps corrosponding to that digit
//Eg: if 10 th bitmap corrosponds to 5 then 10 will be written in the file named "five.txt" 
int training_data_divide();
//this function divides all our data points into small files each containing a single data point
int accuracy_one();
//this function calculates theaccuracy of method 1
int predict(char name[]);
//Uses knn to predict the value of required bitmap
int accuracy_two();
//this function calculates theaccuracy of method 2
float distancesq1(char in[], char ave[]);
//calculates the euclidean distance between two structures
int largest_count(int num[]);
//returns the largest number of the array
#endif
