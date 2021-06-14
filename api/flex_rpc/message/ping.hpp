// Flex-RPC
// Copyright (c) 2021 Flaviu C.

#pragma once
#ifndef PCH
    #include <flex_rpc/message/type.hpp>
#endif

namespace flex_rpc::message::ping
{
    struct request
    {
    };

    struct response
    {
        uint16_t duration_in_ms;
    };
}
