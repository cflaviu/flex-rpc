// Flex-RPC
// Copyright (c) 2021 Flaviu C.

#pragma once
#ifndef PCH
    #include <flex_rpc/message/type.hpp>
#endif

namespace flex_rpc::message::event::generator::destroy
{
    struct request
    {
        object_id object = 0;
        event_id event;
    };

    struct response
    {
        error_id error;
    };
}
