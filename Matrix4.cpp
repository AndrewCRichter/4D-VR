//
// Created by Andrew on 12/23/2019.
//

#include "Matrix4.h"

Matrix4()
{
    for(int i = 0; i < SIZE; ++i)
    {
        for (int j = 0; j < SIZE; ++j)
        {
            this.matrix4[i][j] = 0;
        }
    }
}
Matrix4(vector<Vector4> vec)
{
    for(int i = 0; i < SIZE; ++i)
    {
        for(int j = 0; j < SIZE; ++j)
        {
            matrix4[i][j] = vec[j].getValue(i);
        }
    }
}
Matrix4(Matrix4 other)
{
    for(int i = 0; i < SIZE; ++i)
    {
        for (int j = 0; j < SIZE; ++j)
        {
            this.matrix4[i][j] = other.getVal(i, j);
        }
    }
}
float getVal(index1, index2)
{
    return matrix4[index1][index2];
}
float setVal(value, index1, index2)
{
    matrix4[index1][index2] = value;
}
friend Matrix4 operator * (Matrix4 left, Matrix4 right)
{
    Matrix4 outMatrix;
    for(int i = 0; i < SIZE; ++i)
    {
        for (int j = 0; j < SIZE; ++j)
        {
            outMatrix::matrix4[i][j] = left::matrix4[i][j] * right::matrix4[j][i];
        }
    }
    return outMatrix;
}
friend operator *= (Matrix4 left, Matrix4 right)
{
    for(int i = 0; i < SIZE; ++i)
    {
        for (int j = 0; j < SIZE; ++j)
        {
            left[i][j] *= right[j][i];
        }
    }
}
friend operator * (Matrix4 matrix4, Vector4 vec)
{
    Matrix4 outMatrix;
    for(int i = 0; i < SIZE; ++i)
    {
        for(int j = 0; j < SIZE; ++j)
        {
            outMatrix.setVal(matrix4.getVal(i, j) * vec.getValue(j), i, j);
        }
    }
    return outMatrix;
}
friend operator *= (Matrix4 matrix4, Vector4 vec)
{
    for(int i = 0; i < SIZE; ++i)
    {
        for(int j = 0; j < SIZE; ++j)
        {
            matrix4.setVal(matrix4.getVal(i, j) * vec.getValue(j), i, j);
        }
    }
}
