/*
 * ME/CS 132A - Assigment 1, Part A
 * Open and display an image using OpenCV
 *
 */

#include <iostream>
#include <highgui.h>
#include <cv.h>

int main(){
    Mat imgdata = imread("First_Image.bmp", 1);
    return 0;
}
