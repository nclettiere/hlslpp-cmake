cmake_minimum_required(VERSION 3.14)

project(hlslpp CXX)

set(PWD "${CMAKE_CURRENT_SOURCE_DIR}")

set(HLSLPP_HEADERS
	"${PWD}/include/hlsl++_bitmask.h"
	"${PWD}/include/hlsl++_common.h"
	"${PWD}/include/hlsl++_config.h"
	"${PWD}/include/hlsl++_dependent.h"
	"${PWD}/include/hlsl++_matrix_float.h"
	"${PWD}/include/hlsl++_quaternion_type.h"
	"${PWD}/include/hlsl++_quaternion.h"
	"${PWD}/include/hlsl++_type_traits.h"
	"${PWD}/include/hlsl++_vector_double_type.h"
	"${PWD}/include/hlsl++_vector_double.h"
	"${PWD}/include/hlsl++_vector_float_type.h"
	"${PWD}/include/hlsl++_vector_float.h"
	"${PWD}/include/hlsl++_vector_float8.h"
	"${PWD}/include/hlsl++_vector_int_type.h"
	"${PWD}/include/hlsl++_vector_int.h"
	"${PWD}/include/hlsl++_vector_uint_type.h"
	"${PWD}/include/hlsl++_vector_uint.h"
	"${PWD}/include/hlsl++.h"
	"${PWD}/include/hlsl++.natvis"
	"${PWD}/include/platforms/hlsl++_360.h"
	"${PWD}/include/platforms/hlsl++_neon.h"
	"${PWD}/include/platforms/hlsl++_scalar.h"
	"${PWD}/include/platforms/hlsl++_sse.h"
	"${PWD}/include/swizzle/hlsl++_matrix_row0_1.h"
	"${PWD}/include/swizzle/hlsl++_matrix_row0_2.h"
	"${PWD}/include/swizzle/hlsl++_matrix_row0_3.h"
	"${PWD}/include/swizzle/hlsl++_matrix_row0_4.h"
	"${PWD}/include/swizzle/hlsl++_matrix_row1_1.h"
	"${PWD}/include/swizzle/hlsl++_matrix_row1_2.h"
	"${PWD}/include/swizzle/hlsl++_matrix_row1_3.h"
	"${PWD}/include/swizzle/hlsl++_matrix_row1_4.h"
	"${PWD}/include/swizzle/hlsl++_matrix_row2_1.h"
	"${PWD}/include/swizzle/hlsl++_matrix_row2_2.h"
	"${PWD}/include/swizzle/hlsl++_matrix_row2_3.h"
	"${PWD}/include/swizzle/hlsl++_matrix_row2_4.h"
	"${PWD}/include/swizzle/hlsl++_matrix_row3_1.h"
	"${PWD}/include/swizzle/hlsl++_matrix_row3_2.h"
	"${PWD}/include/swizzle/hlsl++_matrix_row3_3.h"
	"${PWD}/include/swizzle/hlsl++_matrix_row3_4.h"
	"${PWD}/include/swizzle/hlsl++_vector_double_w.h"
	"${PWD}/include/swizzle/hlsl++_vector_double_x.h"
	"${PWD}/include/swizzle/hlsl++_vector_double_y.h"
	"${PWD}/include/swizzle/hlsl++_vector_double_z.h"
	"${PWD}/include/swizzle/hlsl++_vector_float_w.h"
	"${PWD}/include/swizzle/hlsl++_vector_float_x.h"
	"${PWD}/include/swizzle/hlsl++_vector_float_y.h"
	"${PWD}/include/swizzle/hlsl++_vector_float_z.h"
	"${PWD}/include/swizzle/hlsl++_vector_int_w.h"
	"${PWD}/include/swizzle/hlsl++_vector_int_x.h"
	"${PWD}/include/swizzle/hlsl++_vector_int_y.h"
	"${PWD}/include/swizzle/hlsl++_vector_int_z.h"
	"${PWD}/include/swizzle/hlsl++_vector_uint_w.h"
	"${PWD}/include/swizzle/hlsl++_vector_uint_x.h"
	"${PWD}/include/swizzle/hlsl++_vector_uint_y.h"
	"${PWD}/include/swizzle/hlsl++_vector_uint_z.h"
	"${PWD}/include/transform/hlsl++_transform_common.h"
	"${PWD}/include/transform/hlsl++_transform_float2x2.h"
	"${PWD}/include/transform/hlsl++_transform_float3x3.h"
	"${PWD}/include/transform/hlsl++_transform_float4x4.h"
)

add_library(
	${PROJECT_NAME} INTERFACE
	${HLSLPP_HEADERS}
)

target_include_directories(
	${PROJECT_NAME} INTERFACE
	"${PWD}/include"
	"$<BUILD_INTERFACE:${PWD}/include>"
)