// Flex-RPC
// Copyright (c) 2021 Flaviu C.

#pragma once
#ifndef PCH
    #include <flex_rpc/message/type.hpp>
#endif

namespace flex_rpc::message::ping
{
    struct request
    {
    };

    struct response: public base_response
    {
        uint16_t duration_in_ms;

        response(const context_id context, const error_id error = error_id::none): base_response(context, error), duration_in_ms(0) {}

        response(const context_id context, const uint16_t duration_in_ms, const error_id error = error_id::none):
            base_response(context, error),
            duration_in_ms(duration_in_ms)
        {
        }
    };
}
