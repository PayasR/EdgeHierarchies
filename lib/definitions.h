/*******************************************************************************
 * app/definitions.h
 *
 * Copyright (C) 2018 Demian Hespe <hespe@kit.edu>
 *
 * All rights reserved.
 ******************************************************************************/

#pragma once
#include <cstdint>
#include <limits>

#define NODE_T uint32_t
#define NODE_INVALID std::numeric_limits<NODE_T>::max();
#define EDGEWEIGHT_T uint32_t
#define EDGEWEIGHT_INFINITY numeric_limits<EDGEWEIGHT_T>::max()
#define EDGELEVEL_T uint32_t
#define EDGECOUNT_T EDGELEVEL_T
#define EDGELEVEL_INFINIY std::numeric_limits<EDGELEVEL_T>::max()
#define EDGEID_T uint64_t
#define EDGEID_EMPTY_KEY std::numeric_limits<EDGEID_T>::max()
