//------------------------------------------------------------------------------
/*
    This file is part of ripple-libpp: https://github.com/ripple/ripple-libpp
    Copyright (c) 2016 Ripple Labs Inc.

    Permission to use, copy, modify, and/or distribute this software for any
    purpose  with  or without fee is hereby granted, provided that the above
    copyright notice and this permission notice appear in all copies.

    THE  SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES
    WITH  REGARD  TO  THIS  SOFTWARE  INCLUDING  ALL  IMPLIED  WARRANTIES  OF
    MERCHANTABILITY  AND  FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR
    ANY  SPECIAL ,  DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
    WHATSOEVER  RESULTING  FROM  LOSS  OF USE, DATA OR PROFITS, WHETHER IN AN
    ACTION  OF  CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF
    OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
*/
//==============================================================================

#include <stoxum/protocol/impl/AccountID.cpp>
#include <stoxum/protocol/impl/Book.cpp>
#include <stoxum/protocol/impl/BuildInfo.cpp>
#include <stoxum/protocol/impl/ByteOrder.cpp>
#include <stoxum/protocol/impl/digest.cpp>
#include <stoxum/protocol/impl/ErrorCodes.cpp>
#include <stoxum/protocol/impl/Feature.cpp>
#include <stoxum/protocol/impl/HashPrefix.cpp>
#include <stoxum/protocol/impl/Indexes.cpp>
#include <stoxum/protocol/impl/Issue.cpp>
#include <stoxum/protocol/impl/Keylet.cpp>
#include <stoxum/protocol/impl/LedgerFormats.cpp>
#include <stoxum/protocol/impl/PublicKey.cpp>
#include <stoxum/protocol/impl/Quality.cpp>
#include <stoxum/protocol/impl/Rate2.cpp>
#include <stoxum/protocol/impl/SecretKey.cpp>
#include <stoxum/protocol/impl/Seed.cpp>
#include <stoxum/protocol/impl/Serializer.cpp>
#include <stoxum/protocol/impl/SField.cpp>
#include <stoxum/protocol/impl/Sign.cpp>
#include <stoxum/protocol/impl/SOTemplate.cpp>
#include <stoxum/protocol/impl/TER.cpp>
#include <stoxum/protocol/impl/tokens.cpp>
#include <stoxum/protocol/impl/TxFormats.cpp>
#include <stoxum/protocol/impl/UintTypes.cpp>

#include <stoxum/protocol/impl/STAccount.cpp>
#include <stoxum/protocol/impl/STArray.cpp>
#include <stoxum/protocol/impl/STAmount.cpp>
#include <stoxum/protocol/impl/STBase.cpp>
#include <stoxum/protocol/impl/STBlob.cpp>
#include <stoxum/protocol/impl/STInteger.cpp>
#include <stoxum/protocol/impl/STLedgerEntry.cpp>
#include <stoxum/protocol/impl/STObject.cpp>
#include <stoxum/protocol/impl/STParsedJSON.cpp>
#include <stoxum/protocol/impl/InnerObjectFormats.cpp>
#include <stoxum/protocol/impl/STPathSet.cpp>
#include <stoxum/protocol/impl/STTx.cpp>
#include <stoxum/protocol/impl/STValidation.cpp>
#include <stoxum/protocol/impl/STVar.cpp>
#include <stoxum/protocol/impl/STVector256.cpp>
#include <stoxum/protocol/impl/IOUAmount.cpp>

#include <stoxum/basics/impl/contract.cpp>
#include <stoxum/basics/impl/CountedObject.cpp>
#include <stoxum/basics/impl/Log.cpp>
#include <stoxum/basics/impl/strHex.cpp>
#include <stoxum/basics/impl/StringUtilities.cpp>
#include <stoxum/basics/impl/Time.cpp>
#include <stoxum/beast/core/SemanticVersion.cpp>
#include <stoxum/beast/hash/impl/spookyv2.cpp>
#include <stoxum/beast/utility/src/beast_Journal.cpp>
#include <stoxum/crypto/impl/csprng.cpp>
#include <stoxum/crypto/impl/ec_key.cpp>
#include <stoxum/crypto/impl/GenerateDeterministicKey.cpp>
#include <stoxum/crypto/impl/KeyType.cpp>
#include <stoxum/crypto/impl/openssl.cpp>
#include <stoxum/crypto/impl/RFC1751.cpp>
#include <stoxum/json/impl/json_value.cpp>
#include <stoxum/json/impl/json_valueiterator.cpp>
#include <stoxum/json/impl/json_reader.cpp>
#include <stoxum/json/impl/json_writer.cpp>
#include <stoxum/json/impl/to_string.cpp>

#include <stoxum/unity/secp256k1.cpp>
/* ed25519_donna.c needs to be built separately because it's C. */
//#include <stoxum/unity/ed25519_donna.c>
