// Flex-RPC
// Copyright (c) 2021 Flaviu C.

#pragma once
#ifndef PCH
    #include <flex_rpc/message/type.hpp>
#endif

namespace flex_rpc::message::dlt::retrieve
{
    struct request
    {
        time_point start_time {};
        time_point end_time {};
        std::uint8_t min_log_level {};
        std::uint8_t max_log_level {};
    };

    struct response
    {
        error_id error {};
        raw_data data {};
    };
}
