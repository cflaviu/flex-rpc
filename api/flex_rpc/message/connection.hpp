// Flex-RPC
// Copyright (c) 2021 Flaviu C.

#pragma once
#ifndef PCH
    #include <flex_rpc/message/type.hpp>
#endif

namespace flex_rpc::message::connection
{
    struct request
    {
        uint16_t api_level;
    };

    struct response
    {
        uint32_t token;
        error_id error;
    };
}
