#include "cylinder.h"
#include <math.h>

float Cylinder::intersect(glm::vec3 p0, glm::vec3 dir)
{
    float r1;
    float r2;
    float a = pow(dir.x, 2) + pow(dir.z, 2);
    float b = 2 * (dir.x * (p0.x - center.x) + dir.z * (p0.z - center.z));
    float c = pow((p0.x - center.x),2) + pow((p0.z - center.z), 2) - pow(radius, 2);
    float d = pow(b, 2) - 4 * a * c;

    if(d < 0)
    {
        return -1.0;
    }

    if((fabs(d)) < 0.001)
    {
        return -1.0;
    }



    float t1 = (-b - sqrt(d))/(2*a);
    float t2 = (-b + sqrt(d))/(2*a);


    if (t1>t2)
    {
        r1 = p0.y + t2*dir.y;
        r2 = p0.y + t1*dir.y;
    }
    else
    {
        r1 = p0.y + t1*dir.y;
        r2 = p0.y + t2*dir.y;
    }

    if (r1 >= center.y && r1 <= center.y + height)
    {
        return t1;
    }
    else
    {
        if (r2 >= center.y && r2 <= center.y + height)
        {
            return t2;
        }
        else
        {
            return -1;
        }
    }
}

glm::vec3 Cylinder::normal(glm::vec3 p)
{
    glm::vec3 d = p - center;
    glm::vec3 n = glm::vec3 (d.x,0,d.z);
    n = glm::normalize(n);
    return n;
}
