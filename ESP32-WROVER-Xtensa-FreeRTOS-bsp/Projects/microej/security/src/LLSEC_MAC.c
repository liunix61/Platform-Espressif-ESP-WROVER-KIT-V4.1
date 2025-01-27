/*
 * C
 *
 * Copyright 2020 MicroEJ Corp. All rights reserved.
 * This library is provided in source code for use, modification and test, subject to license terms.
 * Any modification of the source code will break MicroEJ Corp. warranties on the whole library.
 */

#include <LLSEC_MAC_impl.h>
#include <LLSEC_ERRORS.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <sni.h>
#include <stdint.h>

/**
 * @file
 * @brief MicroEJ Security low level API
 * @author MicroEJ Developer Team
 * @version 1.5.0
 * @date 19 March 2020
 */

/**
 * @brief Gets for the given algorithm the message digest description.
 *
 * @param[in] algorithm_name			Null terminated string that describes the algorithm.
 * @param[out] algorithm_desc			Description of the MAC algorithm.
 *
 * @return The algorithm ID on success or -1 on error.
 *
 * @warning <code>algorithm_name</code> must not be used outside of the VM task or saved.
 */
int32_t LLSEC_MAC_IMPL_get_algorithm_description(uint8_t* algorithm_name, LLSEC_MAC_algorithm_desc* algorithm_desc) {
	// TODO not implemented yet
	SNI_throwNativeException(J_UNKNOWN_ERROR, "Native not implemented yet");
	return -1;
}


/**
 * @brief Initializes a Mac resource.
 *
 * @param[in] algorithm_id				The algorithm ID.
 * @param[in] key						The MAC key.
 * @param[in] key_length				The key length.
 *
 * @return The native ID of the resource.
 *
 * @note Throws NativeException on error.
 *
 * @warning <code>key</code> must not be used outside of the VM task or saved.
 */
int32_t LLSEC_MAC_IMPL_init(int32_t algorithm_id, uint8_t* key, int32_t key_length) {
	// TODO not implemented yet
	SNI_throwNativeException(J_UNKNOWN_ERROR, "Native not implemented yet");
	return -1;
}

/**
 * @brief Processes the provided data to update the MAC resource.
 *
 * @param[in] algorithm_id				The algorithm ID.
 * @param[in] native_id					The native ID.
 * @param[in] buffer					The buffer containing the data to be processed.
 * @param[in] buffer_offset				The buffer offset.
 * @param[in] buffer_length				The buffer length.
 *
 * @note Throws NativeException on error.
 *
 * @warning <code>buffer</code> must not be used outside of the VM task or saved.
 */
void LLSEC_MAC_IMPL_update(int32_t algorithm_id, int32_t native_id, uint8_t* buffer, int32_t buffer_offset, int32_t buffer_length) {
	// TODO not implemented yet
	SNI_throwNativeException(J_UNKNOWN_ERROR, "Native not implemented yet");
}

/**
 * @brief Finishes the MAC operation.
 *
 * @param[in] algorithm_id				The algorithm ID.
 * @param[in] native_id					The native ID.
 * @param[out] out						The MAC result.
 * @param[in] out_offset				The offset of the out buffer.
 * @param[in] out_length				The length of the out buffer.
 *
 * @note Throws NativeException on error.
 *
 * @warning <code>out</code> must not be used outside of the VM task or saved.
 */
void LLSEC_MAC_IMPL_do_final(int32_t algorithm_id, int32_t native_id, uint8_t* out, int32_t out_offset, int32_t out_length) {
	// TODO not implemented yet
	SNI_throwNativeException(J_UNKNOWN_ERROR, "Native not implemented yet");
}

/**
 * @brief Resets the MAC resource.
 *
 * @param[in] algorithm_id				The algorithm ID.
 * @param[in] native_id					The native ID.
 *
 * @note Throws NativeException on error.
 */
void LLSEC_MAC_IMPL_reset(int32_t algorithm_id, int32_t native_id) {
	// TODO not implemented yet
	SNI_throwNativeException(J_UNKNOWN_ERROR, "Native not implemented yet");
}

/**
 * @brief Closes the resources related to the native id.
 *
 * @param[in] algorithm_id				The algorithm ID.
 * @param[in] native_id					The native ID.
 *
 * @note Throws NativeException on error.
 */
void LLSEC_MAC_IMPL_close(int32_t algorithm_id, int32_t native_id) {
	// TODO not implemented yet
	SNI_throwNativeException(J_UNKNOWN_ERROR, "Native not implemented yet");
}
