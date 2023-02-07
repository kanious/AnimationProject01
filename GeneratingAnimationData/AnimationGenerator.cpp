#include "AnimationGenerator.h"
#include <glew/glew.h> //#include <glad/glad.h>
#include <glut/freeglut.h>
#include <glfw/glfw3.h>
#include <glm/glm.hpp>
#include <glm/vec2.hpp>
#include <glm/vec3.hpp>
#include <glm/vec4.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>
#include <glm/gtx/easing.hpp>
#include <iostream>
#include <sstream>
#include <atlconv.h>

using namespace glm;
using namespace std;

AnimationGenerator::AnimationGenerator()
{
	m_mapAnimations.clear();

	wchar_t path[MAX_PATH] = { 0 };
	GetModuleFileName(NULL, path, MAX_PATH);
	USES_CONVERSION;
	std::string str = W2A(path);
	str = str.substr(0, str.find_last_of("\\/"));
	stringstream ss;
	ss << str << "\\..\\Assets\\";
	m_AssetFolderPath = ss.str();
}

AnimationGenerator::~AnimationGenerator()
{
}

void AnimationGenerator::GenerateAnimations()
{
	//GenerateMoving();
	//GenerateRotating();
	GenerateScaling();

	SaveFiles();
}

void AnimationGenerator::GenerateMoving()
{
	vec3 vPos(0.f);

	vector<mat4x4> newVec;
	newVec.clear();
	for (float i = 0.f; i <= 1.f; i += 0.1f)
	{
		vPos.y = i;
		mat4x4 newMat(1.f);
		newMat = translate(newMat, vPos);
		newVec.push_back(newMat);
	}
	for (float i = 0.f; i <= 1.f; i += 0.1f)
	{
		vPos.y = 1 - i;
		mat4x4 newMat(1.f);
		newMat = translate(newMat, vPos);
		newVec.push_back(newMat);
	}
	m_mapAnimations.insert(MAPANIM::value_type("moving.animation", newVec));

	vector<mat4x4> newVec2;
	newVec2.clear();
	for (float i = 0.f; i <= 1.f; i += 0.1f)
	{
		float value = glm::sineEaseIn(i);
		vPos.y = value;
		mat4x4 newMat(1.f);
		newMat = translate(newMat, vPos);
		newVec2.push_back(newMat);
	}
	for (float i = 0.f; i <= 1.f; i += 0.1f)
	{
		float value = glm::sineEaseIn(i);
		vPos.y = 1 - value;
		mat4x4 newMat(1.f);
		newMat = translate(newMat, vPos);
		newVec2.push_back(newMat);
	}
	m_mapAnimations.insert(MAPANIM::value_type("moving_easein.animation", newVec2));

	vector<mat4x4> newVec3;
	newVec3.clear();
	for (float i = 0.f; i <= 1.f; i += 0.1f)
	{
		float value = glm::sineEaseOut(i);
		vPos.y = value;
		mat4x4 newMat(1.f);
		newMat = translate(newMat, vPos);
		newVec3.push_back(newMat);
	}
	for (float i = 0.f; i <= 1.f; i += 0.1f)
	{
		float value = glm::sineEaseOut(i);
		vPos.y = 1 - value;
		mat4x4 newMat(1.f);
		newMat = translate(newMat, vPos);
		newVec3.push_back(newMat);
	}
	m_mapAnimations.insert(MAPANIM::value_type("moving_easeout.animation", newVec3));

	vector<mat4x4> newVec4;
	newVec4.clear();
	for (float i = 0.f; i <= 1.f; i += 0.1f)
	{
		float value = glm::sineEaseInOut(i);
		vPos.y = value;
		mat4x4 newMat(1.f);
		newMat = translate(newMat, vPos);
		newVec4.push_back(newMat);
	}
	for (float i = 0.f; i <= 1.f; i += 0.1f)
	{
		float value = glm::sineEaseInOut(i);
		vPos.y = 1 - value;
		mat4x4 newMat(1.f);
		newMat = translate(newMat, vPos);
		newVec4.push_back(newMat);
	}
	m_mapAnimations.insert(MAPANIM::value_type("moving_easeinout.animation", newVec4));
}

void AnimationGenerator::GenerateRotating()
{
	vec3 vRot(0.f);

	vector<mat4x4> newVec;
	newVec.clear();
	for (float i = 0.f; i <= 1.f; i += 0.05f)
	{
		vRot.y = i * 360.f;
		mat4x4 newMat(1.f);
		newMat = rotate(newMat, radians(vRot.y), vec3(0.f, 1.f, 0.f));
		newVec.push_back(newMat);
	}
	m_mapAnimations.insert(MAPANIM::value_type("rotating.animation", newVec));

	vector<mat4x4> newVec2;
	newVec2.clear();
	for (float i = 0.f; i <= 1.f; i += 0.05f)
	{
		float value = glm::sineEaseIn(i);
		vRot.y = value * 360.f;
		mat4x4 newMat(1.f);
		newMat = rotate(newMat, radians(vRot.y), vec3(0.f, 1.f, 0.f));
		newVec2.push_back(newMat);
	}
	m_mapAnimations.insert(MAPANIM::value_type("rotating_easein.animation", newVec2));

	vector<mat4x4> newVec3;
	newVec3.clear();
	for (float i = 0.f; i <= 1.f; i += 0.05f)
	{
		float value = glm::sineEaseOut(i);
		vRot.y = value * 360.f;
		mat4x4 newMat(1.f);
		newMat = rotate(newMat, radians(vRot.y), vec3(0.f, 1.f, 0.f));
		newVec3.push_back(newMat);
	}
	m_mapAnimations.insert(MAPANIM::value_type("rotating_easeout.animation", newVec3));

	vector<mat4x4> newVec4;
	newVec4.clear();
	for (float i = 0.f; i <= 1.f; i += 0.05f)
	{
		float value = glm::sineEaseInOut(i);
		vRot.y = value * 360.f;
		mat4x4 newMat(1.f);
		newMat = rotate(newMat, radians(vRot.y), vec3(0.f, 1.f, 0.f));
		newVec4.push_back(newMat);
	}
	m_mapAnimations.insert(MAPANIM::value_type("rotating_easeinout.animation", newVec4));
}

void AnimationGenerator::GenerateScaling()
{
	vec3 vScale(1.f);

	vector<mat4x4> newVec;
	newVec.clear();
	for (float i = 0.f; i <= 1.f; i += 0.1f)
	{
		vScale.y = (i * 0.2f) + 1.f;
		mat4x4 newMat(1.f);
		newMat = scale(newMat, vScale);
		newVec.push_back(newMat);
	}
	for (float i = 0.f; i <= 1.f; i += 0.1f)
	{
		vScale.y = 1.2f - (i * 0.2f);
		mat4x4 newMat(1.f);
		newMat = scale(newMat, vScale);
		newVec.push_back(newMat);
	}
	m_mapAnimations.insert(MAPANIM::value_type("scaling.animation", newVec));

	vector<mat4x4> newVec2;
	newVec2.clear();
	for (float i = 0.f; i <= 1.f; i += 0.1f)
	{
		float value = glm::sineEaseIn(i);
		vScale.y = (value * 0.2f) + 1.f;
		mat4x4 newMat(1.f);
		newMat = scale(newMat, vScale);
		newVec2.push_back(newMat);
	}
	for (float i = 0.f; i <= 1.f; i += 0.1f)
	{
		float value = glm::sineEaseIn(i);
		vScale.y = 1.2f - (value * 0.2f);
		mat4x4 newMat(1.f);
		newMat = scale(newMat, vScale);
		newVec2.push_back(newMat);
	}
	m_mapAnimations.insert(MAPANIM::value_type("scailing_easein.animation", newVec2));

	vector<mat4x4> newVec3;
	newVec3.clear();
	for (float i = 0.f; i <= 1.f; i += 0.1f)
	{
		float value = glm::sineEaseOut(i);
		vScale.y = (value * 0.2f) + 1.f;
		mat4x4 newMat(1.f);
		newMat = scale(newMat, vScale);
		newVec3.push_back(newMat);
	}
	for (float i = 0.f; i <= 1.f; i += 0.1f)
	{
		float value = glm::sineEaseOut(i);
		vScale.y = 1.2f - (value * 0.2f);
		mat4x4 newMat(1.f);
		newMat = scale(newMat, vScale);
		newVec3.push_back(newMat);
	}
	m_mapAnimations.insert(MAPANIM::value_type("scailing_easeout.animation", newVec3));

	vector<mat4x4> newVec4;
	newVec4.clear();
	for (float i = 0.f; i <= 1.f; i += 0.1f)
	{
		float value = glm::sineEaseInOut(i);
		vScale.y = (value * 0.2f) + 1.f;
		mat4x4 newMat(1.f);
		newMat = scale(newMat, vScale);
		newVec4.push_back(newMat);
	}
	for (float i = 0.f; i <= 1.f; i += 0.1f)
	{
		float value = glm::sineEaseInOut(i);
		vScale.y = 1.2f - (value * 0.2f);
		mat4x4 newMat(1.f);
		newMat = scale(newMat, vScale);
		newVec4.push_back(newMat);
	}
	m_mapAnimations.insert(MAPANIM::value_type("scailing_easeinout.animation", newVec4));
}

void AnimationGenerator::SaveFiles()
{
	MAPANIM::iterator iter;
	for (iter = m_mapAnimations.begin(); iter != m_mapAnimations.end(); ++iter)
	{
		//string name = iter->first;
		stringstream outputPath;
		outputPath << m_AssetFolderPath << "Animation\\" << iter->first;
		string output = outputPath.str();
		wstring wstr = wstring(output.begin(), output.end());

		//const wchar_t* name = iter->first;
		HANDLE hFile = CreateFile(wstr.c_str()
			, GENERIC_WRITE
			, 0
			, NULL
			, CREATE_NEW// | OPEN_EXISTING
			, FILE_ATTRIBUTE_NORMAL
			, NULL);
		unsigned long dwByte;

		bool success = false;
		unsigned int duration = iter->second.size();
		success = WriteFile(hFile, &duration, sizeof(unsigned int), &dwByte, NULL);

		float tick = 3.f / duration;
		success = WriteFile(hFile, &tick, sizeof(float), &dwByte, NULL);

		for (int i = 0; i < iter->second.size(); ++i)
		{
			success = WriteFile(hFile, &iter->second[i], sizeof(glm::mat4x4), &dwByte, NULL);
			if (!success)
				cout << "Error Code: " << GetLastError() << endl;
		}
	}
}
