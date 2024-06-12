#pragma once

#include <tri/program/Program.h>
#include <fmt/format.h>

#include "shader_path.h"

static constexpr auto LIGHT_PATH = "light";

class LightMaterial : public Program {
public:
    LightMaterial():Program(
        fmt::format("{}/{}/vs.glsl", SHADER_PATH, LIGHT_PATH), 
        fmt::format("{}/{}/fs.glsl", SHADER_PATH, LIGHT_PATH)
        ) {}

};
