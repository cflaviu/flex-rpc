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

    struct response: public base_response
    {
        response(const context_id context, const error_id error = error_id::none): base_response(context, error) {}
    };
}
