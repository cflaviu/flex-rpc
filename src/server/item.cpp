#include "server/item.hpp"

namespace flex_rpc::server
{
    error_t basic::handle_request(const message::request::item& request, const context_id context)
    {
        error_t result;
        using namespace message::request;

        buffer_t input_buffer;
        buffer_t output_buffer;
        switch (type_of(request))
        {
            case type::feature_list_request:
            {
                result = on_feature_list_request(context, request.as<message::feature::list::request>(), output_buffer);
                break;
            }
            case type::call_cancel_request:
            {
                result = on_call_cancel_request(context, request.as<message::call::cancel::request>(), output_buffer);
                break;
            }
            case type::call_request:
            {
                result = on_call_request(context, request.as<message::call::request>(), output_buffer);
                break;
            }
            case type::connection_request:
            {
                result = on_connection_request(context, request.as<message::connection::request>(), output_buffer);
                break;
            }
            case type::disconnection_request:
            {
                result = on_disconnection_request(context, request.as<message::disconnection::request>(), output_buffer);
                break;
            }
            case type::discovery_event_request:
            {
                result = on_discovery_event_request(context, request.as<message::discovery::event::request>(), output_buffer);
                break;
            }
            case type::discovery_method_request:
            {
                result = on_discovery_method_request(context, request.as<message::discovery::method::request>(), output_buffer);
                break;
            }
            case type::discovery_object_request:
            {
                result = on_discovery_object_request(context, request.as<message::discovery::object::request>(), output_buffer);
                break;
            }
            case type::dlt_activate_request:
            {
                result = on_dlt_activate_request(context, request.as<message::dlt::activate::request>(), output_buffer);
                break;
            }
            case type::dlt_clear_request:
            {
                result = on_dlt_clear_request(context, request.as<message::dlt::clear::request>(), output_buffer);
                break;
            }
            case type::dlt_configuration_change_request:
            {
                result =
                    on_dlt_configuration_change_request(context, request.as<message::dlt::configuration::change::request>(), output_buffer);
                break;
            }
            case type::dlt_configuration_reset_request:
            {
                result =
                    on_dlt_configuration_reset_request(context, request.as<message::dlt::configuration::reset::request>(), output_buffer);
                break;
            }
            case type::dlt_configuration_retrieve_request:
            {
                result = on_dlt_configuration_retrieve_request(context, request.as<message::dlt::configuration::retrieve::request>(),
                                                               output_buffer);
                break;
            }
            case type::dlt_deactivate_request:
            {
                result = on_dlt_deactivate_request(context, request.as<message::dlt::deactivate::request>(), output_buffer);
                break;
            }
            case type::dlt_status_request:
            {
                result = on_dlt_status_request(context, request.as<message::dlt::status::request>(), output_buffer);
                break;
            }
            case type::dlt_retrieve_request:
            {
                result = on_dlt_retrieve_request(context, request.as<message::dlt::retrieve::request>(), output_buffer);
                break;
            }
            case type::event_generator_create_request:
            {
                result =
                    on_event_generator_create_request(context, request.as<message::event::generator::create::request>(), output_buffer);
                break;
            }
            case type::event_generator_destroy_request:
            {
                result =
                    on_event_generator_destroy_request(context, request.as<message::event::generator::destroy::request>(), output_buffer);
                break;
            }
            case type::event_subscription_request:
            {
                result = on_event_subscription_request(context, request.as<message::event::subscription::request>(), output_buffer);
                break;
            }
            case type::event_unsubscription_request:
            {
                result = on_event_unsubscription_request(context, request.as<message::event::unsubscription::request>(), output_buffer);
                break;
            }
            case type::ping_request:
            {
                result = on_ping_request(context, request.as<message::ping::request>(), output_buffer);
                break;
            }
            default:
            {
                result = error_t::generic;
                break;
            }
        }

        return result;
    }

    void basic::handle_requests(const message::request::array& requests, const context_id context) noexcept
    {
        for (auto& item: requests)
        {
            try
            {
                auto result = handle_request(item, context);
                // if (result) {}
            }
            catch (const std::exception& e)
            {
            }
            catch (...)
            {
            }
        }
    }

    error_t basic::on_call_cancel_request(const context_id context, const message::call::cancel::request& request, buffer_t& output_buffer)
    {
        output_buffer.buf_.resize(0U);
        return error_t::none;
    }

    error_t basic::on_call_request(const context_id context, const message::call::request& request, buffer_t& output_buffer)
    {
        return not_implemented<message::call::response>(context, output_buffer);
    }

    error_t basic::on_connection_request(const context_id context, const message::connection::request& request, buffer_t& output_buffer)
    {
        return not_implemented<message::connection::response>(context, output_buffer);
    }

    error_t basic::on_disconnection_request(const context_id context, const message::disconnection::request& /*request*/,
                                            buffer_t& /*output_buffer*/)
    {
        return error_t::none;
    }

    error_t basic::on_discovery_event_request(const context_id context, const message::discovery::event::request& request,
                                              buffer_t& output_buffer)
    {
        return not_implemented<message::discovery::event::response>(context, output_buffer);
    }

    error_t basic::on_discovery_method_request(const context_id context, const message::discovery::method::request& request,
                                               buffer_t& output_buffer)
    {
        return not_implemented<message::discovery::method::response>(context, output_buffer);
    }

    error_t basic::on_discovery_object_request(const context_id context, const message::discovery::object::request& request,
                                               buffer_t& output_buffer)
    {
        return not_implemented<message::discovery::object::response>(context, output_buffer);
    }

    error_t basic::on_dlt_activate_request(const context_id context, const message::dlt::activate::request& request,
                                           buffer_t& output_buffer)
    {
        return not_implemented<message::dlt::activate::response>(context, output_buffer);
    }

    error_t basic::on_dlt_clear_request(const context_id context, const message::dlt::clear::request& request, buffer_t& output_buffer)
    {
        return not_implemented<message::dlt::activate::response>(context, output_buffer);
    }

    error_t basic::on_dlt_configuration_change_request(const context_id context,
                                                       const message::dlt::configuration::change::request& request, buffer_t& output_buffer)
    {
        return not_implemented<message::dlt::activate::response>(context, output_buffer);
    }

    error_t basic::on_dlt_configuration_reset_request(const context_id context, const message::dlt::configuration::reset::request& request,
                                                      buffer_t& output_buffer)
    {
        return not_implemented<message::dlt::configuration::reset::response>(context, output_buffer);
    }

    error_t basic::on_dlt_configuration_retrieve_request(const context_id context,
                                                         const message::dlt::configuration::retrieve::request& request,
                                                         buffer_t& output_buffer)
    {
        return not_implemented<message::dlt::configuration::retrieve::response>(context, output_buffer);
    }

    error_t basic::on_dlt_deactivate_request(const context_id context, const message::dlt::deactivate::request& request,
                                             buffer_t& output_buffer)
    {
        return not_implemented<message::dlt::deactivate::response>(context, output_buffer);
    }

    error_t basic::on_dlt_status_request(const context_id context, const message::dlt::status::request& request, buffer_t& output_buffer)
    {
        return not_implemented<message::dlt::status::response>(context, output_buffer);
    }

    error_t basic::on_dlt_retrieve_request(const context_id context, const message::dlt::retrieve::request& request,
                                           buffer_t& output_buffer)
    {
        return not_implemented<message::dlt::retrieve::response>(context, output_buffer);
    }

    error_t basic::on_event_generator_create_request(const context_id context, const message::event::generator::create::request& request,
                                                     buffer_t& output_buffer)
    {
        return not_implemented<message::event::generator::create::response>(context, output_buffer);
    }

    error_t basic::on_event_generator_destroy_request(const context_id context, const message::event::generator::destroy::request& request,
                                                      buffer_t& output_buffer)
    {
        return not_implemented<message::event::generator::destroy::response>(context, output_buffer);
    }

    error_t basic::on_event_subscription_request(const context_id context, const message::event::subscription::request& request,
                                                 buffer_t& output_buffer)
    {
        return not_implemented<message::event::subscription::response>(context, output_buffer);
    }

    error_t basic::on_event_unsubscription_request(const context_id context, const message::event::unsubscription::request& request,
                                                   buffer_t& output_buffer)
    {
        return not_implemented<message::event::unsubscription::response>(context, output_buffer);
    }

    error_t basic::on_feature_list_request(const context_id context, const message::feature::list::request& request,
                                           buffer_t& output_buffer)
    {
        return not_implemented<message::feature::list::response>(context, output_buffer);
    }

    error_t basic::on_ping_request(const context_id context, const message::ping::request& request, buffer_t& output_buffer)
    {
        return not_implemented<message::ping::response>(context, output_buffer);
    }
}
