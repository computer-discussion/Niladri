#include<stdio.h>
#define PRINT_LINE printf ("\n >> : %s : %d : %s \n" , __FILE__,__LINE__ ,__func__)
void x1 ()
{
	PRINT_LINE;
}
  void x2()
  {
  	PRINT_LINE;
  	x1();
	  PRINT_LINE;
  }
    void x3()
    {
    	PRINT_LINE;
    	x2();
    	PRINT_LINE;
	}
	void x4()
	{
	  PRINT_LINE;
	  x3();
	  PRINT_LINE;	
	}
	void x5()
	{
		PRINT_LINE;
		x4();
		PRINT_LINE;
	}
	void x6()
	{
		PRINT_LINE;
	}
	void main()
	{
		PRINT_LINE;
		x1();
		PRINT_LINE;
		x4();
		PRINT_LINE;
		x5();
		PRINT_LINE;
	}
	
