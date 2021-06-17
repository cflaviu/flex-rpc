// Flex-RPC
// Copyright (c) 2021 Flaviu C.

#pragma once
#ifndef PCH
    #include <flex_rpc/message/call.hpp>
    #include <flex_rpc/message/call_cancel.hpp>
    #include <flex_rpc/message/connection.hpp>
    #include <flex_rpc/message/disconnection.hpp>
    #include <flex_rpc/message/discovery/event.hpp>
    #include <flex_rpc/message/discovery/method.hpp>
    #include <flex_rpc/message/discovery/object.hpp>
    #include <flex_rpc/message/discovery/parameter.hpp>
    #include <flex_rpc/message/dlt/activate.hpp>
    #include <flex_rpc/message/dlt/clear.hpp>
    #include <flex_rpc/message/dlt/configuration/change.hpp>
    #include <flex_rpc/message/dlt/configuration/reset.hpp>
    #include <flex_rpc/message/dlt/configuration/retrieve.hpp>
    #include <flex_rpc/message/dlt/deactivate.hpp>
    #include <flex_rpc/message/dlt/get_status.hpp>
    #include <flex_rpc/message/dlt/retrieve.hpp>
    #include <flex_rpc/message/event/generator/change.hpp>
    #include <flex_rpc/message/event/generator/create.hpp>
    #include <flex_rpc/message/event/generator/destroy.hpp>
    #include <flex_rpc/message/event/generator/retrieve.hpp>
    #include <flex_rpc/message/event/notification.hpp>
    #include <flex_rpc/message/event/subscription.hpp>
    #include <flex_rpc/message/event/unsubscription.hpp>
    #include <flex_rpc/message/feature.hpp>
    #include <flex_rpc/message/ping.hpp>
    #include <flex_rpc/message/type.hpp>
    #include <flex_rpc/message/variant.hpp>
#endif

namespace flex_rpc::message
{
    // clang-format off
    using variant = cista::variant<
        connection::request, connection::response,
        disconnection::request,
        feature::request, feature::response,
        call::request, call::response,
        call_cancel::request,
        ping::request, ping::response,
        event::notification,
        event::subscription::request, event::subscription::response,
        event::unsubscription::request, event::unsubscription::response,
        event::generator::create::request, event::generator::create::response,
        event::generator::destroy::request, event::generator::destroy::response,
        discovery::object::request, discovery::object::response,
        discovery::method::request, discovery::method::response,
        discovery::event::request, discovery::event::response,
        dlt::activate::request, dlt::activate::response,
        dlt::clear::request, dlt::clear::response,
        dlt::configuration::change::request, dlt::configuration::change::response,
        dlt::configuration::reset::request, dlt::configuration::reset::response,
        dlt::configuration::retrieve::request, dlt::configuration::retrieve::response,
        dlt::deactivate::request, dlt::deactivate::response,
        dlt::get_status::request, dlt::get_status::response,
        dlt::retrieve::request, dlt::retrieve::response
        >;
    // clang-format on

    enum class type : std::uint8_t
    {
        connection_request,
        connection_response,

        disconnection_request,

        feature_request,
        feature_response,

        call_request,
        call_response,

        ping_request,
        ping_response,

        event_notification,

        event_subscription_request,
        event_subscription_response,

        event_unsubscription_request,
        event_unsubscription_response,

        event_generator_create_request,
        event_generator_create_response,

        event_generator_destroy_request,
        event_generator_destroy_response,

        discovery_object_request,
        discovery_object_response,

        discovery_method_request,
        discovery_method_response,

        discovery_event_request,
        discovery_event_response,

        dlt_activate_request,
        dlt_activate_response,

        dlt_clear_request,
        dlt_clear_response,

        dlt_configuration_change_request,
        dlt_configuration_change_response,

        dlt_configuration_reset_request,
        dlt_configuration_reset_response,

        dlt_configuration_retrieve_request,
        dlt_configuration_retrieve_response,

        dlt_deactivate_request,
        dlt_deactivate_response,

        dlt_get_status_request,
        dlt_get_status_response,

        dlt_retrieve_request,
        dlt_retrieve_response
    };

    inline type type_of(const variant& item) noexcept { return static_cast<type>(item.index() & 0xFF); }

    using variant_array = cista::offset::vector<variant>;
}
