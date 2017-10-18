#include "GVShader.h"

GVShader::GVShader():BasicShader("GaussianV", "GaussianV"){
    getUniforms();
}

void GVShader::getUniforms(){
    BasicShader::getUniforms ();
    m_target = glGetUniformLocation(m_id, "target");
}

void GVShader::loadTarget(float target){
    loadFloat(m_target, target);
}