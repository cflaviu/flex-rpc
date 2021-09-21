// Flex-RPC
// Copyright (c) 2021 Flaviu C.

#pragma once
#ifndef PCH
    #include <flex_rpc/message/type.hpp>
#endif

namespace flex_rpc::message::event::generator::create
{
    struct request
    {
        using method_ref = std::pair<object_id, method_id>;
        using event_ref = std::pair<object_id, event_id>;
        using method_ref_array = cista::offset::vector<method_ref>;
        using event_ref_array = cista::offset::vector<event_ref>;

        object_id object = 0;
        method_ref_array input_methods;
        event_ref_array input_events;
        raw_data code;
    };

    struct response
    {
        context_id context {};
        error_id error {};
        event_id event {};
    };
}
