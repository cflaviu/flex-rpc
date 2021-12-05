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
        error_id error {};
        time_point start_time {};
        time_point end_time {};
        bool is_activated {};
    };
}
