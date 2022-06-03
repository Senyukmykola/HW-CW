//2.1
#include <iostream>
#include <math.h>

int main()
{
    double x;
    printf("x = ");
    scanf_s("%lf", &x);
    x = cos(x);
    printf("cos(x) = %lf", x);


}
//2.2
#include <iostream>
#include <math.h>

int main() 
{
    
	double a, b, c;
	printf("a=");
	scanf_s("%lf", &a);
	printf("b=");
	scanf_s("%lf", &b);
	c = hypot(a, b);
    printf("c = %0.2f\n", c);


}

//2.3


#include <iostream>
#include <math.h>
//heron formula
double area(double x, double y, double z) {
    double p = (x + y + z) / z;
    return sqrt(p * (p - x) * (p - y) * (p - z));


}

int main()
{    
    double a, b, c;
    printf("a, b, c:\n");
    scanf_s("%lf %lf %lf", &a, &b, &c);

    double s = area(a, b, c);
    printf("area of triangle is %lf", s);

    
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.




//2.4


#include <iostream>
#include <math.h>



int main()
{
	double x, y;

	printf("x = ");
	scanf_s("%lf", &x);
	y = pow((pow(x, 2) + 1), 2);
	printf("y = %lf", y);
	
}


//2.5


#include <iostream>
#include <math.h>

int Rosenbrock2d(double x, double y)
{
    
    
    return 100 * (pow(x, 2) - pow(y, 2) + pow(x - 1, 2));
    
}




int main()
{
    double x1, y1;
    printf("x1 = ");
    scanf_s("%lf", &x1);
    printf("y1 = ");
    scanf_s("%lf", &y1);
    double f1 = Rosenbrock2d(x1, y1);
    printf("f1 = %lf\n", f1);
    double x2, y2;
    printf("x2 = ");
    scanf_s("%lf", &x2);
    printf("y2 = ");
    scanf_s("%lf", &y2);
    double f2 = Rosenbrock2d(x2, y2);
    printf("f2 = %lf\n", f2);
    double x3, y3;
    printf("x3 = ");
    scanf_s("%lf", &x3);
    printf("y3 = ");
    scanf_s("%lf", &y3);
    double f3 = Rosenbrock2d(x3, y3);
    printf("f3 = %lf\n", f3);
    
}


//2.6




#include <iostream>
#include <math.h>

double lenght(double x1, double y1, double x2, double y2)
{
    return sqrt(pow((x2 - x1), 2) + (pow((y2 - y1), 2)));


}

double square(double a, double b, double c)
{
    
    
    return sqrt(((a + b + c) / 2) * (((a + b + c) / 2) - a) * (((a + b + c) / 2) - b) * (((a + b + c) / 2) - c));


}

int main()
{
    double xa, ya;
    printf("A(x; y) = ");
    scanf_s("%lf %lf", &xa, &ya);

    double xb, yb;
    printf("\nB(x; y) = ");
    scanf_s("%lf %lf", &xb, &yb);

    double xc, yc;
    printf("\nC(x; y) = ");
    scanf_s("%lf %lf", &xc, &yc);

    double AB = lenght(xa, ya, xb, yb);
    double BC = lenght(xb, yb, xc, yc);
    double CA = lenght(xc, yc, xa, ya);
    double ABC = square(AB, BC, CA);
    
    printf("\nSquare = %lf", ABC);
}