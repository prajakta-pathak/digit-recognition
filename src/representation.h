#define HEIGHT 32
#define WIDTH 32
typedef struct {
float data[HEIGHT][WIDTH];
int image_height;
int image_width;
}digit_rep;

digit_rep initialize_m1(char in[]);
//initializes the struct corrosponding to the file required
digit_rep initialize_ave(char ave[]);
//initializes the struct corrosponding to the average file required
digit_rep initialize_m2(char in[]);
//initializes the struct corrosponding to the file required

