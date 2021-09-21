// Flex-RPC
// Copyright (c) 2021 Flaviu C.

#pragma once
#ifndef PCH
    #include <flex_rpc/message/type.hpp>
#endif

namespace flex_rpc::message::feature
{
    using id = std::uint16_t;
    using id_array = cista::offset::vector<id>;

    enum class item : id
    {
        call,
        call_cancel,
        connection,
        disconnection,
        discovery_event,
        discovery_method,
        discovery_parameter,
        discovery_object,
        dlt_activate,
        dlt_clear,
        dlt_configuration_change,
        dlt_configuration_reset,
        dlt_configuration_retrieve,
        dlt_deactivate,
        dlt_is_activated,
        dlt_retrieve,
        event_generator_change,
        event_generator_create,
        event_generator_destroy,
        event_generator_retrieve,
        event_notification,
        event_subscription,
        event_unsubscription,
        multiple_objects,
        ping,
    };

    namespace list
    {
        struct request
        {
        };

        struct response
        {
            context_id context {};
            error_id error {};
            id_array features {};
        };
    }
}
