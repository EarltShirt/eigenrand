/**
 * @file PacketFilter.h
 * @author bab2min (bab2min@gmail.com)
 * @brief 
 * @version 0.5.0
 * @date 2023-01-31
 * 
 * @copyright Copyright (c) 2020-2021
 * 
 */

#ifndef EIGENRAND_PACKET_FILTER_H
#define EIGENRAND_PACKET_FILTER_H

#include <array>
#include "MorePacketMath.h"

namespace Eigen
{
	namespace Rand
	{
		namespace detail
		{
			template<size_t PacketSize>
			class CompressMask;
		}
	}
}

#ifdef EIGEN_VECTORIZE_AVX512
#include "arch/AVX512/PacketFilter.h"
#endif

#ifdef EIGEN_VECTORIZE_AVX
#include "arch/AVX/PacketFilter.h"
#endif

#ifdef EIGEN_VECTORIZE_SSE2
#include "arch/SSE/PacketFilter.h"
#endif

#ifdef EIGEN_VECTORIZE_NEON
#include "arch/NEON/PacketFilter.h"
#endif


#endif
