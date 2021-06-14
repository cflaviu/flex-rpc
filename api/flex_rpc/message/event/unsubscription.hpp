// Flex-RPC
// Copyright (c) 2021 Flaviu C.

#pragma once
#ifndef PCH
    #include <flex_rpc/message/type.hpp>
#endif

namespace flex_rpc::message::event::unsubscription
{
    struct request
    {
        object_id object = 0;
        event_id event;
        context_id context;
    };

    struct response
    {
        object_id object = 0;
        event_id event;
        context_id context;
        std::uint16_t error;
    };
}
