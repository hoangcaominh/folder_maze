#include <direct.h>
#include <windows.h>
#include <string>
//#include <stdlib.h>
#include <iostream>
using namespace std;

int main()
{
	short int i[10];
	string path0 = "0/";
	string position = "";
	//long long number;
	
	mkdir(path0.data());
	cout << "Insert position to continue:" << endl;
	while (position.length() < 10)
	{
		cout << ">"; getline(cin, position);
	}
	
	for (short int j = 0;j < 10;j++)
	{
		i[j] = int(position[j] - 48);
	}
	//number = atoi(position.data()) + 1;
	
	while (i[0] < 10)
	{
		string path1 = path0 + char(i[0] + 48) + "/";
		mkdir(path1.data());
		
		while (i[1] < 10)
		{
			string path2 = path1 + char(i[1] + 48) + "/";
			mkdir(path2.data());
			
			while (i[2] < 10)
			{
				string path3 = path2 + char(i[2] + 48) + "/";
				mkdir(path3.data());
				
				while (i[3] < 10)
				{
					string path4 = path3 + char(i[3] + 48) + "/";
					mkdir(path4.data());
					
					while (i[4] < 10)
					{
						string path5 = path4 + char(i[4] + 48) + "/";
						mkdir(path5.data());
						
						while (i[5] < 10)
						{
							string path6 = path5 + char(i[5] + 48) + "/";
							mkdir(path6.data());
							
							while (i[6] < 10)
							{
								string path7 = path6 + char(i[6] + 48) + "/";
								mkdir(path7.data());
								
								while (i[7] < 10)
								{
									//system("cls");
									string path8 = path7 + char(i[7] + 48) + "/";
									mkdir(path8.data());
									
									while (i[8] < 10)
									{
										string path9 = path8 + char(i[8] + 48) + "/";
										mkdir(path9.data());
										
										while (i[9] < 10)
										{
											string path10 = path9 + char(i[9] + 48) + "/";
											mkdir(path10.data());
											/*
											system("cls");
											cout << path10 << endl << "Process: ";
											cout.precision(4);
											cout << (float(number) / 10000000000) * 100 << "%";
											*/
											cout << path10 << endl;
											//number++;
											i[9]++;
										}
										i[8]++;
										i[9] = 0;
									}
									i[7]++;
									i[8] = 0;
								}
								i[6]++;
								i[7] = 0;
							}
							i[5]++;
							i[6] = 0;
						}
						i[4]++;
						i[5] = 0;
					}
					i[3]++;
					i[4] = 0;
				}
				i[2]++;
				i[3] = 0;
			}
			i[1]++;
			i[2] = 0;
		}
		i[0]++;
		i[1] = 0;
	}
	return 0;
}
