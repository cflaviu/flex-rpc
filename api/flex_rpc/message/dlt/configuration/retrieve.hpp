// Flex-RPC
// Copyright (c) 2021 Flaviu C.

#pragma once
#ifndef PCH
    #include <flex_rpc/message/type.hpp>
#endif

namespace flex_rpc::message::dlt::configuration::retrieve
{
    struct request
    {
    };

    struct response
    {
        error_id error;
    };
}
