#include "hlsl++_vector_float_type.h"
#include "hlsl++_vector_int_type.h"
#include "hlsl++_vector_uint_type.h"
#include "hlsl++_vector_double_type.h"
#include "hlsl++_quaternion_type.h"

void Declaration()
{
	float1 f1;
	float2 f2;
	float3 f3;
	float4 f4;

	int1 i1;
	int2 i2;
	int3 i3;
	int4 i4;

	uint1 ui1;
	uint2 ui2;
	uint3 ui3;
	uint4 ui4;

#if defined(HLSLPP_DOUBLE)
	double1 d1;
	double2 d2;
	double3 d3;
	double4 d4;
#endif

	quaternion q;
}