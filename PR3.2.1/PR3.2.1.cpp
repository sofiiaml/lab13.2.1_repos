#include <stdio.h>
#include <conio.h>
#define Z 2 
#define SQR(x) (x)*(x) 
#define MIN(x,y)((x)<(y))?(x):(y)
#define MAX(x,y) ((x)>(y))?(x):(y)
#define PRINTI(w) puts("control output"); \
printf(#w"=%d\n",w)

#define PRINTR(w) puts ("rezult :"); \
printf (#w"=%f\n",(float)w)

void main()
{
puts("Lab 13.2. Using macros and preprocessing directive");
int x, y, w;
int ch;


do
{
#if Z>3
	{
		puts("Input 2 integer numbers");
		scanf_s("%d", &x);// введення числа
		PRINTI(x); // макрос виведення числа
		scanf_s("%d", &y);
		PRINTI(y);
		w = MIN(SQR(x - Z), x - y);
		PRINTR(w);
}
#else // компілювати іншу частину програми, якщо N >= 10
{
		puts("Input 2 integer numbers");
		scanf_s("%d", &x);// введення числа
		PRINTI(x); // макрос виведення числа
		scanf_s("%d", &y);
		PRINTI(y);
		w = MAX(x * y, y * Z) + MIN(Z * x, y * Z);
		PRINTR(w);

}
#endif // завершення блоку умовної компіляції
puts ("Repeat? yes-1 /no-0 "); 
scanf_s("%d", &ch);

} while (ch==1);
}