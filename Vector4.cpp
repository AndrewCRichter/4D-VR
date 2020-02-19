//
// Created by Andrew on 2/7/2020.
//

Vector4()
{
    x = 0;
    y = 0;
    z = 0;
    w = 0;
}
Vector4(float x, float y, float z, float w)
{
    this.x = x;
    this.y = y;
    this.z = z;
    this.w = w;
}
float dot(Vector4 other)
{
    return x * other.x + y * other.y + z * other.z + w * other.w;
}
friend Vector4 operator + (Vector4 left, Vector4 right)
{
    return Vector4(left.x + right.x, left.y + right.y, left.z + right.z, left.w + right.w);
}
friend Vector4 operator - (Vector4 left, Vector4 right)
{
    return Vector4(left.x - right.x, left.y - right.y, left.z - right.z, left.w - right.w);
}
friend Vector4 operator * (Vector4 left, float factor)
{
    return Vector4(left.x * factor, left.y * factor, left.z * factor, left.w * factor);
}
friend Vector4 operator / (Vector4 left, float factor)
{
    return Vector4(left.x / factor, left.y / factor, left.z / factor, left.w / factor);
}
friend Vector4 operator += (Vector4 left, Vector4 right)
{
    left.x += right.x;
    left.y += right.y;
    left.z += right.z;
    left.w += right.w;
}
friend Vector4 operator -= (Vector4 left, Vector4 right)
{
    left.x -= right.x;
    left.y -= right.y;
    left.z -= right.z;
    left.w -= right.w;
}
friend Vector4 operator *= (Vector4 left, float factor)
{
    left.x *= factor;
    left.y *= factor;
    left.z *= factor;
    left.w *= factor;
}
friend Vector4 operator /= (Vector4 left, float factor)
{
    left.x /= factor;
    left.y /= factor;
    left.z /= factor;
    left.w /= factor;
}
float getValue(int index)
{
    switch(index)
    {
        case 0:
            return x;
        case 1:
            return y;
        case 2:
            return z;
        case 3:
            return w;
        default:
            cout << "Error invalid parameter to getValue." << endl;
            return 0;
    }
}
void setValue(float val, int index)
{
    switch(index)
    {
        case 0:
            x = val;
            break;
        case 1:
            y = val;
            break;
        case 2:
            z = val;
            break;
        case 3:
            w = val;
            break;
        default:
            cout << "Error invalid parameter to setValue." << endl;
    }
}
