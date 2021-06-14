// Flex-RPC
// Copyright (c) 2021 Flaviu C.

#pragma once
#ifndef PCH
    #include <flex_rpc/message/type.hpp>
#endif

namespace flex_rpc::message::event
{
    struct notification
    {
        object_id object = 0;
        event_id event;
        context_id context;
        error_id error;
        raw_data data;
    };
}
