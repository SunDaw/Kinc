#pragma once

#include <kinc/global.h>

#include <kinc/backend/graphics5/texture.h>

/*! \file textureunit.h
    \brief Provides a texture-unit-struct which is used for setting textures in a shader.
*/

#ifdef __cplusplus
extern "C" {
#endif

typedef struct kinc_g5_texture_unit {
	int vertex;
	int fragment;
	int geometry;
	int tess_control;
	int tess_eval;

} kinc_g5_texture_unit_t;

bool kinc_g5_texture_unit_equals(kinc_g5_texture_unit_t *unit1, kinc_g5_texture_unit_t *unit2);

#ifdef __cplusplus
}
#endif
