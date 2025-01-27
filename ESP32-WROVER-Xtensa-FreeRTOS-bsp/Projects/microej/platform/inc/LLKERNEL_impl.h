/* 
 * Copyright 2014-2016 IS2T. All rights reserved.
 * Modification and distribution is permitted under certain conditions.
 * IS2T PROPRIETARY/CONFIDENTIAL. Use is subject to license terms.
 */
/* 
 * AUTOGENERATED by Unknown product - Unknown version - DO NOT EDIT IT
 */
/* 
 * Implementation header file. Shall only be included by client implementation C files.
 */
#include <stdint.h>
#include <intern/LLKERNEL_impl.h>
// --------------------------------------------------------------------------------
// -                      Functions that must be implemented                      -
// --------------------------------------------------------------------------------

/**
 * Allocate a chunk of memory of the given size in bytes.
 * @return a 32bits aligned address, or null on error 
 */
void* LLKERNEL_IMPL_allocate(int32_t size);

/**
 * Release a chunk of memory previously allocated using {@link LLKERNEL_allocate}. 
 */
void LLKERNEL_IMPL_free(void* block);
