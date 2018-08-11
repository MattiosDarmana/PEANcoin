// Copyright (c) 2012-2017, The CryptoNote developers, The Bytecoin developers
// Copyright (c) 2014-2018, The Monero Project
// Copyright (c) 2018, The TurtleCoin Developers
// 
// Please see the included LICENSE file for more information.

#ifndef CRYPTONIGHT_SOFT_SHELL_H
#define CRYPTONIGHT_SOFT_SHELL_H

#ifdef __cplusplus
extern "C" {
#endif

#include <stdint.h>

void cn_soft_shell(const void* input, size_t len, char* output, int variant, uint32_t scratchpad, uint32_t iterations);

#ifdef __cplusplus
}
#endif

#endif
