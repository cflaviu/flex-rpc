// Flex-RPC
// Copyright (c) 2021 Flaviu C.

#pragma once
#ifndef PCH
    #include <flex_rpc/message/type.hpp>
#endif

namespace flex_rpc::message::dlt::is_activated
{
    struct request
    {
    };

    struct response
    {
        error_id error;
        bool is_activated = false;
    };
}
