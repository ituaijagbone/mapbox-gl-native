#pragma once

#include <mbgl/gl/shader.hpp>
#include <mbgl/gl/attribute.hpp>
#include <mbgl/gl/uniform.hpp>
#include <mbgl/util/color.hpp>

namespace mbgl {

class PlainVertex;

class PlainShader : public gl::Shader {
public:
    PlainShader(gl::Context&, Defines defines = None);

    using VertexType = PlainVertex;

    gl::Attribute<int16_t, 2> a_pos = {"a_pos", *this};

    gl::UniformMatrix<4> u_matrix   = {"u_matrix",  *this};
    gl::Uniform<Color>   u_color    = {"u_color",   *this};
    gl::Uniform<float>   u_opacity  = {"u_opacity", *this};
};

} // namespace mbgl
