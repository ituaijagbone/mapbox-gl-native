#include <mbgl/shader/raster_shader.hpp>
#include <mbgl/shader/raster.vertex.hpp>
#include <mbgl/shader/raster.fragment.hpp>
#include <mbgl/shader/raster_vertex.hpp>

namespace mbgl {

RasterShader::RasterShader(gl::Context& context, Defines defines)
    : Shader(shaders::raster::name,
             shaders::raster::vertex,
             shaders::raster::fragment,
             context, defines) {
}

void RasterShader::bind(const gl::VertexBuffer<RasterVertex>&,
                       const int8_t* offset) {
    RasterVertex::bind(offset);
}

} // namespace mbgl
