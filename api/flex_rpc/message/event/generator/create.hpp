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

    struct response: public base_response
    {
        event_id event;

        response(const context_id context, const error_id error = error_id::none): base_response(context, error) {}
    };
}
