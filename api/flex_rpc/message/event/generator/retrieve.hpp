// Flex-RPC
// Copyright (c) 2021 Flaviu C.

#pragma once
#ifndef PCH
    #include <flex_rpc/message/type.hpp>
#endif

namespace flex_rpc::message::event::generator::retrieve
{
    struct request
    {
        object_id object {};
        event_id event {};
    };

    struct response
    {
        error_id error {};
        raw_data data {};
    };
}
