// Flex-RPC
// Copyright (c) 2021 Flaviu C.

#pragma once
#ifndef PCH
    #include <flex_rpc/message/type.hpp>
#endif

namespace flex_rpc::message::event::subscription
{
    struct request
    {
        object_id object = 0;
        event_id event;
    };

    struct response
    {
        context_id context {};
        error_id error {};
    };
}
