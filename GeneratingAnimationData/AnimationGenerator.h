#ifndef _ANIMATIONGENERATOR_H_
#define _ANIMATIONGENERATOR_H_

#include <vector>
#include <unordered_map>
#include <string>
#include <glm\mat4x4.hpp>

class AnimationGenerator
{
private:
	typedef std::unordered_map<std::string, std::vector<glm::mat4x4>> MAPANIM;
	MAPANIM					m_mapAnimations;
	std::string				m_AssetFolderPath;


public:
	AnimationGenerator();
	~AnimationGenerator();

public:
	void GenerateAnimations();

private:
	void GenerateMoving();
	void GenerateRotating();
	void GenerateScaling();

private:
	void SaveFiles();

};

#endif //_ANIMATIONGENERATOR_H_
