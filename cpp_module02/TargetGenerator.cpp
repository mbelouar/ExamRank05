#include "TargetGenerator.hpp"
#include "ATarget.hpp"

TargetGenerator::TargetGenerator() {}

TargetGenerator::~TargetGenerator() {}

void TargetGenerator::learnTargetType(ATarget *target) {
	if (target)
		arrTarget[target->getType()] = target;
}

void TargetGenerator::forgetTargetType(std::string const &target) {
	if(arrTarget.find(target) != arrTarget.end())
		arrTarget.erase(target);
}

ATarget *TargetGenerator::createTarget(std::string const &target) {
	ATarget *tmp = NULL;
	if (arrTarget.find(target) != arrTarget.end())
		tmp = arrTarget[target];
	return (tmp);
}
