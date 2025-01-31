// Copyright (c) 2009-2010 Satoshi Nakamoto
// Copyright (c) 2009-2019 The Bitcoin Core developers
// Copyright (c) 2021 The PIVX developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef VOLT_UTIL_VALIDATION_H
#define VOLT_UTIL_VALIDATION_H

#include <string>

class CValidationState;

/** Convert CValidationState to a human-readable message for logging */
std::string FormatStateMessage(const CValidationState& state);

extern const std::string strMessageMagic;

#endif // VOLT_UTIL_VALIDATION_H
