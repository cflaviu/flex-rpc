// Flex-RPC
// Copyright (c) 2021 Flaviu C.

#pragma once
#ifndef PCH
    #include <flex_rpc/message/type.hpp>
#endif

namespace flex_rpc::message::dlt::status
{
    struct request
    {
    };

    struct response
    {
        context_id context {};
        error_id error {};
        bool is_activated = false;
    };
}
