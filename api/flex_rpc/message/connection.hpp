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
        token signature {};
        api_level level;
    };

    struct response
    {
        token signature {};
        error_id error {};
    };
}
