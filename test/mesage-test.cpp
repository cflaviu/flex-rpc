// Flex-RPC
// Copyright (c) 2021 Flaviu C.

#include <catch2/catch_all.hpp>
#include <flex_rpc/message/data.hpp>

namespace flex_rpc::message::variant
{
    TEST_CASE("Check connection request message type")
    {
        using namespace request;
        item msg {connection::request {}};
        array messages {std::move(msg)};

        REQUIRE(type_of(messages.front()) == type::connection_request);
    }

    TEST_CASE("Check connection response message type")
    {
        using namespace response;
        item msg {connection::response {}};
        array messages {std::move(msg)};

        REQUIRE(type_of(messages.front()) == type::connection_response);
    }

    TEST_CASE("Check disconnection request message type")
    {
        using namespace request;
        item msg {disconnection::request {}};
        array messages {std::move(msg)};

        REQUIRE(type_of(messages.front()) == type::disconnection_request);
    }

    TEST_CASE("Check feature request message type")
    {
        using namespace request;
        item msg {feature::list::request {}};
        array messages {std::move(msg)};

        REQUIRE(type_of(messages.front()) == type::feature_list_request);
    }

    TEST_CASE("Check call response message type")
    {
        using namespace response;
        item msg {feature::list::response {}};
        array messages {std::move(msg)};

        REQUIRE(type_of(messages.front()) == type::feature_list_response);
    }

    TEST_CASE("Check call request message type")
    {
        using namespace request;
        item msg {call::request {}};
        array messages {std::move(msg)};

        REQUIRE(type_of(messages.front()) == type::call_request);
    }

    TEST_CASE("Check call response request message type")
    {
        using namespace response;
        item msg {call::response {}};
        array messages {std::move(msg)};

        REQUIRE(type_of(messages.front()) == type::call_response);
    }

    TEST_CASE("Check call cancel request message type")
    {
        using namespace request;
        item msg {call::cancel::request {}};
        array messages {std::move(msg)};

        REQUIRE(type_of(messages.front()) == type::call_cancel_request);
    }

    TEST_CASE("Check ping request message type")
    {
        using namespace request;
        item msg {ping::request {}};
        array messages {std::move(msg)};

        REQUIRE(type_of(messages.front()) == type::ping_request);
    }

    TEST_CASE("Check ping response request message type")
    {
        using namespace response;
        item msg {ping::response {}};
        array messages {std::move(msg)};

        REQUIRE(type_of(messages.front()) == type::ping_response);
    }

    TEST_CASE("Check event notification message type")
    {
        using namespace response;
        item msg {event::notification {}};
        array messages {std::move(msg)};

        REQUIRE(type_of(messages.front()) == type::event_notification);
    }

    TEST_CASE("Check event subscription request message type")
    {
        using namespace request;
        item msg {event::subscription::request {}};
        array messages {std::move(msg)};

        REQUIRE(type_of(messages.front()) == type::event_subscription_request);
    }

    TEST_CASE("Check event subscription response message type")
    {
        using namespace response;
        item msg {event::subscription::response {}};
        array messages {std::move(msg)};

        REQUIRE(type_of(messages.front()) == type::event_subscription_response);
    }

    TEST_CASE("Check event unsubscription request message type")
    {
        using namespace request;
        item msg {event::unsubscription::request {}};
        array messages {std::move(msg)};

        REQUIRE(type_of(messages.front()) == type::event_unsubscription_request);
    }

    TEST_CASE("Check event unsubscription response message type")
    {
        using namespace response;
        item msg {event::unsubscription::response {}};
        array messages {std::move(msg)};

        REQUIRE(type_of(messages.front()) == type::event_unsubscription_response);
    }

    TEST_CASE("Check create event-generator request message type")
    {
        using namespace request;
        item msg {event::generator::create::request {}};
        array messages {std::move(msg)};

        REQUIRE(type_of(messages.front()) == type::event_generator_create_request);
    }

    TEST_CASE("Check create event-generator response message type")
    {
        using namespace response;
        item msg {event::generator::create::response {}};
        array messages {std::move(msg)};

        REQUIRE(type_of(messages.front()) == type::event_generator_create_response);
    }

    TEST_CASE("Check destroy event-generator request message type")
    {
        using namespace request;
        item msg {event::generator::destroy::request {}};
        array messages {std::move(msg)};

        REQUIRE(type_of(messages.front()) == type::event_generator_destroy_request);
    }

    TEST_CASE("Check destroy event-generator response message type")
    {
        using namespace response;
        item msg {event::generator::destroy::response {}};
        array messages {std::move(msg)};

        REQUIRE(type_of(messages.front()) == type::event_generator_destroy_response);
    }

    TEST_CASE("Check discover-object request message type")
    {
        using namespace request;
        item msg {discovery::object::request {}};
        array messages {std::move(msg)};

        REQUIRE(type_of(messages.front()) == type::discovery_object_request);
    }

    TEST_CASE("Check discover-object response message type")
    {
        using namespace response;
        item msg {discovery::object::response {}};
        array messages {std::move(msg)};

        REQUIRE(type_of(messages.front()) == type::discovery_object_response);
    }

    TEST_CASE("Check discover-method request message type")
    {
        using namespace request;
        item msg {discovery::method::request {}};
        array messages {std::move(msg)};

        REQUIRE(type_of(messages.front()) == type::discovery_method_request);
    }

    TEST_CASE("Check discover-method response message type")
    {
        using namespace response;
        item msg {discovery::method::response {}};
        array messages {std::move(msg)};

        REQUIRE(type_of(messages.front()) == type::discovery_method_response);
    }

    TEST_CASE("Check discover-event request message type")
    {
        using namespace request;
        item msg {discovery::event::request {}};
        array messages {std::move(msg)};

        REQUIRE(type_of(messages.front()) == type::discovery_event_request);
    }

    TEST_CASE("Check discover-event response message type")
    {
        using namespace response;
        item msg {discovery::event::response {}};
        array messages {std::move(msg)};

        REQUIRE(type_of(messages.front()) == type::discovery_event_response);
    }

    TEST_CASE("Check DLT get-status request message type")
    {
        using namespace request;
        item msg {dlt::status::request {}};
        array messages {std::move(msg)};

        REQUIRE(type_of(messages.front()) == type::dlt_status_request);
    }

    TEST_CASE("Check DLT get-status response message type")
    {
        using namespace response;
        item msg {dlt::status::response {}};
        array messages {std::move(msg)};

        REQUIRE(type_of(messages.front()) == type::dlt_status_response);
    }

    TEST_CASE("Check DLT retrieve request message type")
    {
        using namespace request;
        item msg {dlt::retrieve::request {}};
        array messages {std::move(msg)};

        REQUIRE(type_of(messages.front()) == type::dlt_retrieve_request);
    }

    TEST_CASE("Check DLT retrieve response message type")
    {
        using namespace response;
        item msg {dlt::retrieve::response {}};
        array messages {std::move(msg)};

        REQUIRE(type_of(messages.front()) == type::dlt_retrieve_response);
    }

    TEST_CASE("Check DLT activate request message type")
    {
        using namespace request;
        item msg {dlt::activate::request {}};
        array messages {std::move(msg)};

        REQUIRE(type_of(messages.front()) == type::dlt_activate_request);
    }

    TEST_CASE("Check DLT activate response message type")
    {
        using namespace response;
        item msg {dlt::activate::response {}};
        array messages {std::move(msg)};

        REQUIRE(type_of(messages.front()) == type::dlt_activate_response);
    }

    TEST_CASE("Check DLT clear request message type")
    {
        using namespace request;
        item msg {dlt::clear::request {}};
        array messages {std::move(msg)};

        REQUIRE(type_of(messages.front()) == type::dlt_clear_request);
    }

    TEST_CASE("Check DLT clear response message type")
    {
        using namespace response;
        item msg {dlt::clear::response {}};
        array messages {std::move(msg)};

        REQUIRE(type_of(messages.front()) == type::dlt_clear_response);
    }

    TEST_CASE("Check DLT configuration change request message type")
    {
        using namespace request;
        item msg {dlt::configuration::change::request {}};
        array messages {std::move(msg)};

        REQUIRE(type_of(messages.front()) == type::dlt_configuration_change_request);
    }

    TEST_CASE("Check DLT configuration change response message type")
    {
        using namespace response;
        item msg {dlt::configuration::change::response {}};
        array messages {std::move(msg)};

        REQUIRE(type_of(messages.front()) == type::dlt_configuration_change_response);
    }

    TEST_CASE("Check DLT configuration reset request message type")
    {
        using namespace request;
        item msg {dlt::configuration::reset::request {}};
        array messages {std::move(msg)};

        REQUIRE(type_of(messages.front()) == type::dlt_configuration_reset_request);
    }

    TEST_CASE("Check DLT configuration reset response message type")
    {
        using namespace response;
        item msg {dlt::configuration::reset::response {}};
        array messages {std::move(msg)};

        REQUIRE(type_of(messages.front()) == type::dlt_configuration_reset_response);
    }

    TEST_CASE("Check DLT configuration retrieve request message type")
    {
        using namespace request;
        item msg {dlt::configuration::retrieve::request {}};
        array messages {std::move(msg)};

        REQUIRE(type_of(messages.front()) == type::dlt_configuration_retrieve_request);
    }

    TEST_CASE("Check DLT configuration retrieve response message type")
    {
        using namespace response;
        item msg {dlt::configuration::retrieve::response {}};
        array messages {std::move(msg)};

        REQUIRE(type_of(messages.front()) == type::dlt_configuration_retrieve_response);
    }

    TEST_CASE("Check DLT deactivate request message type")
    {
        using namespace request;
        item msg {dlt::deactivate::request {}};
        array messages {std::move(msg)};

        REQUIRE(type_of(messages.front()) == type::dlt_deactivate_request);
    }

    TEST_CASE("Check DLT deactivate response message type")
    {
        using namespace response;
        item msg {dlt::deactivate::response {}};
        array messages {std::move(msg)};

        REQUIRE(type_of(messages.front()) == type::dlt_deactivate_response);
    }
}
