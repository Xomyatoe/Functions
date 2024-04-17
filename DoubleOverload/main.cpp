#include "Stdafx.h"
#include "Constants.h"
#include "FillRand.h"		
#include "Print.h"	
#include "Statistics.h"
#include "Shift.h"
#include "Sort.h"
#include "Unique.h"




void main()
{
	setlocale(LC_ALL, "");
	const int I_SIZE = 8;
	int i_arr[I_SIZE];
	Unique(i_arr, I_SIZE);
	Print(i_arr, I_SIZE);
	cout << "Сумма элементов массива: " << Sum(i_arr, I_SIZE) << endl;
	cout << "Среднее арифметическое массива: " << Avg(i_arr, I_SIZE) << endl;
	cout << "Минимальное значение в массиве: " << minValueIn(i_arr, I_SIZE) << endl;
	cout << "Максимальное значение в массиве: " << maxValueIn(i_arr, I_SIZE) << endl;
	Sort(i_arr, I_SIZE);
	Print(i_arr, I_SIZE);
	int number_of_shifts;
	//cout << " На сколько элементов сдвинуть массив: "; cin >> number_of_shifts;
	//ShiftLeft(i_arr, I_SIZE, number_of_shifts);
	//Print(i_arr, I_SIZE);


	cout << delimeter << endl;

	const int D_SIZE = 8;
	double d_arr[D_SIZE];
	FillRand(d_arr, D_SIZE);
	Print(d_arr, D_SIZE);
	cout << delimeter << endl;

	const int ROWS = 3;//колво строк
	const int COLS = 4;//колво эл. строки
	int i_arr_2[ROWS][COLS];
	Unique(i_arr_2, ROWS, COLS);
	//FillRand(i_arr_2, ROWS, COLS);
	//заполнение двумерного массива случайными числами
	//вывод двумерного массива
	/*for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << i_arr_2[i][j] << tab;

		}
		cout << endl;
	}*/
	Print(i_arr_2, ROWS, COLS);
	cout << " Максимальное значение в массиве: " << maxValueIn(i_arr_2, ROWS, COLS) << endl;
	cout << " Минимальное значение в массиве: " << minValueIn(i_arr_2, ROWS, COLS) << endl;
	cout << "Сумма элементов массива: " << Sum(i_arr_2, ROWS, COLS) << endl;
	Sort(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);

	cout << delimeter << endl;
}








