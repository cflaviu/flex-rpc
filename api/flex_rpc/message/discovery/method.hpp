// Flex-RPC
// Copyright (c) 2021 Flaviu C.

#pragma once
#ifndef PCH
    #include <flex_rpc/message/type.hpp>
#endif

namespace flex_rpc::message::discovery::method
{
    class info
    {
        string name;
        string description;
        parameter::variant_array input;
        parameter::variant_array output;
    };

    using info_array = cista::offset::vector<info>;

    struct request
    {
        object_id object = 0;
    };

    struct response: public base_response
    {
        info_array meta_information;

        response(const context_id context, const error_id error = error_id::none): base_response(context, error) {}
    };
}
