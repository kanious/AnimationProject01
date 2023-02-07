#include <iostream>
#include <fstream>
#include <cstdlib>
#include <windows.h>
#include <glm\mat4x4.hpp>
#include "AnimationGenerator.h"

using namespace std;


void AnotherSave()
{
	glm::mat4x4 mat = glm::mat4x4(1.f);
	mat[3].x = 7777.f;
	mat[3].y = 777.f;
	mat[3].z = 77.f;
	mat[3].w = 7.f;

	HANDLE hFile = CreateFile(L"my.animation"
		, GENERIC_WRITE
		, 0
		, NULL
		, CREATE_NEW
		, FILE_ATTRIBUTE_NORMAL
		, NULL);
	unsigned long dwByte;

	char str[] = "Test";

	bool success = false;
	
	cout << sizeof(glm::mat4x4) << endl;
	success = WriteFile(hFile, &mat, sizeof(glm::mat4x4), &dwByte, NULL);
	//success = WriteFile(hFile, str, strlen(str), &dwByte, NULL);
	if (!success)
		DWORD error = GetLastError();
}

void LoadAgain()
{
	glm::mat4x4 mat = glm::mat4x4(1.f);

	HANDLE hFile = CreateFile(L"my.animation"
	//HANDLE hFile = CreateFile(L"my.txt"
		, GENERIC_READ
		, 0
		, NULL
		, OPEN_EXISTING
		, FILE_ATTRIBUTE_NORMAL
		, NULL);
	unsigned long dwByte;


	bool success = ReadFile(hFile, &mat, sizeof(glm::mat4x4), &dwByte, NULL);

	//char str[] = "Test";
	//char str2[] = "Nono";
	//bool success = ReadFile(hFile, &str2, strlen(str), &dwByte, NULL);

	if (!success)
	DWORD error = GetLastError();

	int A = 0;
}

int main(int argc, char** argv)
{
	AnimationGenerator ag;

	ag.GenerateAnimations();


	//AnotherSave();
	//LoadAgain();

	return 0;
}