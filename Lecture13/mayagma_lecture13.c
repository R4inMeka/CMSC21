#include<stdio.h>
#include<math.h>

//Structure 
struct line{
    struct point{
        float x;
        float y;
    }point1, point2;
    struct midpoint{
        float x;
        float y;
    }point3;
    float slope;
    float distance;
};

//Functions
float solveSlope(struct line *line1);
float solveMidpoint(struct line *line1);
float solveDistance(struct line *line1);
void getSlopeInterceptForm(struct line *line1);

int main(){
    //Get the point1 and point2
    struct line line1;
    printf("Enter x and y for point1: ");
    scanf("%f %f", &line1.point1.x, &line1.point1.y);
    printf("Enter x and y for point2: ");
    scanf("%f %f", &line1.point2.x, &line1.point2.y);
    
    //Solve and print the slope, midpoint, distance, and slope intercept form.
    //Passing structure to a function by reference.
    solveSlope(&line1);
    printf("Slope: %f\n", line1.slope);

    solveMidpoint(&line1);
    printf("Midpoint: %f %f\n", line1.point3.x, line1.point3.y);

    solveDistance(&line1);
    printf("Distance between 2 points: %f\n", line1.distance);
    
    getSlopeInterceptForm(&line1);
    return 0;
}

float solveSlope(struct line *line1){
    //Passing structure to a function by reference.
    return line1->slope = (line1->point2.y - line1->point1.y) / (line1->point2.x - line1->point1.x);
}

float solveMidpoint(struct line *line1){
    //Passing structure to a function by reference.
    line1->point3.x = ((line1->point1.x + line1->point2.x) / 2);
    line1->point3.y = ((line1->point1.y + line1->point2.y) / 2);
    return (line1->point3.x, line1->point3.y);
}

float solveDistance(struct line *line1){
    //Passing structure to a function by reference.
    float squareX = (line1->point2.x - line1->point1.x) * (line1->point2.x - line1->point1.x);
    float squareY = (line1->point2.y - line1->point1.y) * (line1->point2.y - line1->point1.y);
    line1->distance = sqrt(squareX + squareY);
    return (line1->distance);
}

void getSlopeInterceptForm(struct line *line1){
    //Passing structure to a function by reference.
    float b = line1->point2.y-(line1->slope * line1->point2.x);
    printf("Slope Intercept Form: y = %fx + (%f)", line1->slope, b);
}

