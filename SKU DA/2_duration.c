//#include <stdio.h>
//#include <time.h>
//#include <stdlib.h>
//
//int main(void) {
//	clock_t start, finish,s2,f2;
//	double duration,d2;
//
//	start = clock();
//	for (int i = 0; i < 1000;i++) {
//		printf("%d ",i);
//		printf("AAAA");
//	}
//	finish = clock();
//
//	s2 = clock();
//	/*int a = 1;
//	for (int i = 1; i < 1000;i++) {
//		a += i;
//	}
//	printf("\n%d\n", a);*/
//
//	f2 = clock();
//
//	d2 = (double)(f2 - s2) / CLOCKS_PER_SEC;
//	duration = (double)(finish - start) / CLOCKS_PER_SEC;
//	printf("\n1 is %f sec\n", duration);
//	printf("\n2 is %f sec\n", d2);
//	return 0;
//}