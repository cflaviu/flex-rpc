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

    struct response: public base_response
    {
        response(const context_id context, const error_id error = error_id::none): base_response(context, error) {}
    };
}
