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

    struct response: public base_response
    {
        bool is_activated = false;

        response(const context_id context, const error_id error = error_id::none): base_response(context, error) {}
    };
}
