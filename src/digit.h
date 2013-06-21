#ifndef DIGIT_H
#define DIGIT_H



int ispresent(char s[],char in[],int n);
int digitrec(char input[]);
float distancesq(char in[],char ave[]);
int smallest(float num[]);
int prediction(char name[]);
void ave_construct();
int create_training_data();
void data_set_divide();
int training_data_divide();
int accuracy_one();
int predict(char name[]);
int accuracy_two();
float distancesq1(char in[], char ave[]);

#endif
