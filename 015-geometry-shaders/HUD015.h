#pragma once

// Project
#include "../common_classes/OpenGLWindow.h"
#include "../common_classes/HUD.h"

#include "../common_classes/shader_structs/ambientLight.h"
#include "../common_classes/shader_structs/diffuseLight.h"

namespace opengl4_mbsoftworks {
namespace tutorial015 {

/**
 * HUD for tutorial 015 (geometry shaders).
 */
class HUD015 : public HUD
{
public:
    HUD015(const OpenGLWindow& window);

    /**
     * Renders HUD.
     */
    void renderHUD() const override {} // Don't need this, but had to override, so that class is not abstract
    void renderHUD(const shader_structs::AmbientLight& ambientLight, const shader_structs::DiffuseLight& diffuseLight, const bool displayNormals, const float normalLength) const;
};

} // namespace tutorial015
} // namespace opengl4_mbsoftworks