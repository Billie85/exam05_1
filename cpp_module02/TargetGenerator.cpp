#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator(TargetGenerator const &other){
    *this = other;
}

TargetGenerator &TargetGenerator::operator=(TargetGenerator const &other){
    _target = other._target;
    return (*this);
}

TargetGenerator::TargetGenerator(){}

void TargetGenerator::learnTargetType(ATarget* type){
    if (type) {
        _target[type->getType()] = type;
    }
}

void TargetGenerator::forgetTargetType(std::string const &target){
    if (_target.find(target) != _target.end()){
        _target.erase(_target.find(target));
    }
}

ATarget* TargetGenerator::createTarget(std::string const &target){
    ATarget *tmp = NULL;
    if (_target.find(target) != _target.end())
        tmp = _target[target];
    return (tmp);
}

TargetGenerator::~TargetGenerator(){}