// Flex-RPC
// Copyright (c) 2021 Flaviu C.

#pragma once
#ifndef PCH
    #include <flex_rpc/message/discovery/parameter.hpp>
#endif

namespace flex_rpc::message::discovery::event
{
    struct info
    {
        string name {};
        string description {};
        parameter::array output {};
    };

    using info_array = cista::offset::vector<info>;

    struct request
    {
        object_id object {};
    };

    struct response
    {
        error_id error {};
        parameter::type_array types {};
        info_array meta_information {};
    };
}
