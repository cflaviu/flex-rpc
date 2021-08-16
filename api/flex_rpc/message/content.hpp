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
#endif

namespace flex_rpc::message::request
{
    // clang-format off
    using item = cista::variant<
        feature::request,
        call::cancel::request,
        call::request,
        connection::request,
        disconnection::request,
        discovery::event::request,
        discovery::method::request,
        discovery::object::request,
        dlt::activate::request,
        dlt::clear::request,
        dlt::configuration::change::request,
        dlt::configuration::reset::request,
        dlt::configuration::retrieve::request,
        dlt::deactivate::request,
        dlt::get_status::request,
        dlt::retrieve::request,
        event::generator::create::request,
        event::generator::destroy::request,
        event::subscription::request,
        event::unsubscription::request,
        ping::request
        >;
    // clang-format on

    using array = cista::offset::vector<item>;

    enum class type : std::uint8_t
    {
        feature_request,
        call_cancel_request,
        call_request,
        connection_request,
        disconnection_request,
        discovery_event_request,
        discovery_method_request,
        discovery_object_request,
        dlt_activate_request,
        dlt_clear_request,
        dlt_configuration_change_request,
        dlt_configuration_reset_request,
        dlt_configuration_retrieve_request,
        dlt_deactivate_request,
        dlt_get_status_request,
        dlt_retrieve_request,
        event_generator_create_request,
        event_generator_destroy_request,
        event_subscription_request,
        event_unsubscription_request,
        ping_request,
    };

    inline type type_of(const item& item) noexcept { return static_cast<type>(item.index() & 0xFFu); }
}

namespace flex_rpc::message::response
{
    // clang-format off
    using item = cista::variant<
        feature::response,
        call::response,
        connection::response,
        discovery::event::response,
        discovery::method::response,
        discovery::object::response,
        dlt::activate::response,
        dlt::clear::response,
        dlt::configuration::change::response,
        dlt::configuration::reset::response,
        dlt::configuration::retrieve::response,
        dlt::deactivate::response,
        dlt::get_status::response,
        dlt::retrieve::response,
        event::generator::create::response,
        event::generator::destroy::response,
        event::notification,
        event::subscription::response,
        event::unsubscription::response,
        ping::response
        >;
    // clang-format on

    using array = cista::offset::vector<item>;

    enum class type : std::uint8_t
    {
        feature_response,
        call_response,
        connection_response,
        discovery_event_response,
        discovery_method_response,
        discovery_object_response,
        dlt_activate_response,
        dlt_clear_response,
        dlt_configuration_change_response,
        dlt_configuration_reset_response,
        dlt_configuration_retrieve_response,
        dlt_deactivate_response,
        dlt_get_status_response,
        dlt_retrieve_response,
        event_generator_create_response,
        event_generator_destroy_response,
        event_notification,
        event_subscription_response,
        event_unsubscription_response,
        ping_response
    };

    inline type type_of(const item& item) noexcept { return static_cast<type>(item.index() & 0xFFu); }
}

namespace flex_rpc::message
{
    struct content
    {
        response::array responses;
        request::array requests;
    };
}
