#ifndef H_AL_Z3BR0_H
#define H_AL_Z3BR0_H

#include <iostream>
#include <functional>
#include <random>
#include <cmath>

class Vec
{
    private:
        float* data;
        int size;

    public:
        
        Vec();
        Vec(int size);
        Vec(const Vec&); // l value copy constructor
        Vec(Vec&&); // r value copy constructor
        ~Vec();

        int getSize();

        Vec& operator=(Vec&); //l value assignment
        Vec& operator=(Vec&&); // r value assignment

        float& operator[](int i);

        friend Vec operator+(Vec&, Vec&);
        friend Vec operator+(Vec&, Vec&&);
        friend Vec operator+(Vec&&, Vec&);
        friend Vec operator+(Vec&&, Vec&&);

        friend Vec operator-(Vec&,Vec&);
        friend Vec operator-(Vec&, Vec&&);
        friend Vec operator-(Vec&&, Vec&);
        friend Vec operator-(Vec&&, Vec&&);

        friend Vec operator*(float,Vec&);
        friend Vec operator*(float,Vec&&);

        friend Vec operator*(Vec&, float);
        friend Vec operator*(Vec&&, float);

        void reset();

        friend std::ostream& operator<<(std::ostream&, Vec&);
};

class Mat
{
    private:
        float** data;
        int row, col;

    public:

        Mat();
        Mat(int row, int col);
        Mat(const Mat&);
        Mat(Mat&&);
        ~Mat();
        int getRow();
        int getCol();
        void getDimension(int& r, int& c);

        Mat& operator=(Mat&);
        Mat& operator=(Mat&&);

        float* operator[](int);

        friend Vec operator*(Mat&,Vec&);
        friend Vec operator*(Mat&,Vec&&);
        friend Vec operator*(Mat&&,Vec&);
        friend Vec operator*(Mat&&,Vec&&);

        friend Mat operator*(float, Mat&);
        friend Mat operator*(float, Mat&&);

        void operator+=(Mat&);
        void operator+=(Mat&&);
};

namespace randomize
{
    void normal(Mat&);
    void normal(Vec&);
};

#endif

