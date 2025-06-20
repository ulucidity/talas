//////////////////////////////////////////////////////////////////////////
/// Copyright (c) 1988-2025 $organization$
///
/// This software is provided by the author and contributors ``as is'' 
/// and any express or implied warranties, including, but not limited to, 
/// the implied warranties of merchantability and fitness for a particular 
/// purpose are disclaimed. In no event shall the author or contributors 
/// be liable for any direct, indirect, incidental, special, exemplary, 
/// or consequential damages (including, but not limited to, procurement 
/// of substitute goods or services; loss of use, data, or profits; or 
/// business interruption) however caused and on any theory of liability, 
/// whether in contract, strict liability, or tort (including negligence 
/// or otherwise) arising in any way out of the use of this software, 
/// even if advised of the possibility of such damage.
///
///   File: main.hpp
///
/// Author: $author$
///   Date: 6/19/2025
//////////////////////////////////////////////////////////////////////////
#ifndef XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_SHTTP_CLIENT_MAIN_HPP
#define XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_SHTTP_CLIENT_MAIN_HPP

#include "xos/app/console/network/sockets/protocol/shttp/client/main_opt.hpp"
#include "xos/protocol/http/text/sttp/content/type.hpp"

namespace xos {
namespace app {
namespace console {
namespace network {
namespace sockets {
namespace protocol {
namespace shttp {
namespace client {

/// class maint
template 
<class TExtends = xos::app::console::network::sockets::protocol::shttp::client::main_optt<>,  class TImplements = typename TExtends::implements>

class maint: virtual public TImplements, public TExtends {
public:
    typedef TImplements implements;
    typedef TExtends extends;
    typedef maint derives;

    typedef typename extends::char_t char_t;
    typedef typename extends::end_char_t end_char_t;
    enum { end_char = extends::end_char };
    typedef typename extends::string_t string_t;
    typedef typename extends::reader_t reader_t;
    typedef typename extends::writer_t writer_t;
    typedef typename extends::file_t file_t;

    typedef typename extends::sequence_char_t sequence_char_t;
    typedef typename extends::char_sequence_t char_sequence_t;
    typedef typename extends::char_seeker_t char_seeker_t;
    typedef typename extends::char_reader_t char_reader_t;
    typedef typename extends::char_writer_t char_writer_t;
    typedef typename extends::reader_string_t reader_string_t;
    typedef typename extends::string_reader_t string_reader_t;

    /// constructor / destructor
    maint(): run_(0) {
    }
    virtual ~maint() {
    }
private:
    maint(const maint &copy) {
        throw exception(exception_unexpected);
    }

protected:
    typedef typename extends::in_reader_t in_reader_t;
    typedef typename extends::out_writer_t out_writer_t;
    typedef typename extends::err_writer_t err_writer_t;

    typedef typename extends::headers_t headers_t;
    typedef typename extends::content_encoding_header_t content_encoding_header_t;
    typedef typename extends::content_type_header_t content_type_header_t;
    typedef typename extends::content_length_header_t content_length_header_t;

    typedef typename extends::content_type_which_t content_type_which_t;
    typedef typename extends::content_type_t content_type_t;
    typedef typename extends::content_encoding_which_t content_encoding_which_t;
    typedef typename extends::content_encoding_t content_encoding_t;

    typedef typename extends::content_t content_t;
    typedef typename extends::text_content_type_t text_content_type_t;
    typedef typename extends::json_content_type_t json_content_type_t;
    typedef typename extends::text_content_t text_content_t;

    typedef typename extends::request_method_t request_method_t;
    typedef typename extends::request_resource_t request_resource_t;
    typedef typename extends::request_line_t request_line_t;
    typedef typename extends::request_t request_t;
    typedef typename extends::request_string_t request_string_t;

    typedef typename extends::response_status_t response_status_t;
    typedef typename extends::response_reason_t response_reason_t;
    typedef typename extends::response_line_t response_line_t;
    typedef typename extends::response_t response_t;
    typedef typename extends::response_string_t response_string_t;

    typedef typename extends::output_t output_t;
    typedef typename extends::output_to_t output_to_t;
    typedef typename extends::string_output_t string_output_t;
    typedef typename extends::string_output_string_t string_output_string_t;
    
    typedef xos::protocol::http::text::sttp::content::type sttp_content_type_t;

    //////////////////////////////////////////////////////////////////////////
    /// run
    int (derives::*run_)(int argc, char_t** argv, char_t** env);
    virtual int run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if ((run_)) {
            LOGGER_IS_LOGGED_INFO("(!(err = (this->*run_)(argc, argv, env)))...");
            if (!(err = (this->*run_)(argc, argv, env))) {
                LOGGER_IS_LOGGED_INFO("...(!(" << err << " = (this->*run_)(argc, argv, env)))");
            } else {
                LOGGER_IS_LOGGED_INFO("...failed on (!(" << err << " = (this->*run_)(argc, argv, env)))");
            }
        } else {
            LOGGER_IS_LOGGED_INFO("(!(err = extends::run(argc, argv, env)))...");
            if (!(err = extends::run(argc, argv, env))) {
                LOGGER_IS_LOGGED_INFO("...(!(" << err << " = extends::run(argc, argv, env)))");
            } else {
                LOGGER_IS_LOGGED_INFO("...failed on (!(err" << err << " = extends::run(argc, argv, env)))");
            }
        }
        return err;
    }

    //////////////////////////////////////////////////////////////////////////
    /// ...connect_run
    virtual int this_connect_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = extends::connect_run(argc, argv, env))) {
        } else {
        }
        return err;
    }
    virtual int set_connect_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        run_ = &derives::this_connect_run;
        return err;
    }
    //////////////////////////////////////////////////////////////////////////
    /// ...request_run
    virtual int this_request_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = extends::request_run(argc, argv, env))) {
        } else {
        }
        return err;
    }
    virtual int set_request_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        run_ = &derives::this_request_run;
        return err;
    }
    /// ...method_run
    virtual int this_method_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = extends::method_run(argc, argv, env))) {
        } else {
        }
        return err;
    }
    virtual int set_method_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        run_ = &derives::this_method_run;
        return err;
    }
    /// ...parameter_run
    virtual int this_parameter_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = extends::parameter_run(argc, argv, env))) {
        } else {
        }
        return err;
    }
    virtual int set_parameter_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        run_ = &derives::this_parameter_run;
        return err;
    }
    //////////////////////////////////////////////////////////////////////////

    //////////////////////////////////////////////////////////////////////////
    /// ...client_output_generate_hello_run...
    virtual int client_output_generate_hello_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = this->content_run(argc, argv, env))) {
        } else {
        }
        return err;
    }
    virtual int client_output_generate_hello_run_set(int argc, char_t** argv, char_t** env) {
        int err = 0;
        output_t& output = this->output(); 
        const bool verbose_output = this->verbose_output();
        sttp_content_type_t& sttp_content_type = this->sttp_content_type();
        string_t& content_string = this->content_string();
        string_output_t string_output(content_string);
        const bool old_verbose_output = output.verbose_output();
        output_to_t* old_output = output.set_output_to(&string_output);

        content_string.clear();
        output.set_verbose_output(verbose_output);
        LOGGER_IS_LOGGED_INFO("output.output_generate_client_hello()...");
        if (!(err = output.output_generate_client_hello())) {
            const char_t* chars = 0; size_t length = 0;
            
            if ((chars = content_string.has_chars(length))) {
                LOGGER_IS_LOGGED_INFO("this->set_request_content_type(\"" << sttp_content_type << "\")...");
                this->set_request_content_type(sttp_content_type);
                LOGGER_IS_LOGGED_INFO("this->set_content(chars = \"" << chars << "\", length = " << unsigned_to_string(length) << ")...");
                this->set_request_content(chars, length);
                if (!(err = this->set_content_run(argc, argv, env))) {
                    if (!(err = this->content_run_set(argc, argv, env))) {
                    } else {
                    }
                } else {
                }
            } else {
                LOGGER_IS_LOGGED_ERROR("...failed on (chars = content_string.has_chars(length))");
            }
        } else {
            LOGGER_IS_LOGGED_ERROR("...failed on output.output_generate_client_hello()");
        }
        output.set_verbose_output(old_verbose_output);
        output.set_output_to(old_output);
        return err;
    }
    //////////////////////////////////////////////////////////////////////////

    //////////////////////////////////////////////////////////////////////////
    virtual int process_response(string_t& response, xos::network::sockets::interface& cn, int argc, char_t** argv, char_t** env) {
        int err = 0;
        bool response_output = false;
        const response_t& this_response = this->response();
        const content_type_t& content_type = this_response.content_type();
        const sttp_content_type_t& sttp_content_type = this->sttp_content_type();

        LOGGER_IS_LOGGED_INFO("(sttp_content_type.is_equal(\"" << content_type << "\"))...");
        if ((sttp_content_type.is_equal(content_type))) {
            const char_t* chars = 0; size_t length = 0;

            LOGGER_IS_LOGGED_INFO("(chars = this_response.content_chars(length))...");
            if ((chars = this_response.content_chars(length))) {
                output_t& output = this->output(); 
                string_t& content_string = this->content_string();
                string_output_t string_output(content_string);
                output_to_t* old_output = output.set_output_to(&string_output);
                const bool old_verbose_output = output.verbose_output(),
                           verbose_output = this->verbose_output(); 

                content_string.clear();
                output.set_verbose_output(verbose_output);
                LOGGER_IS_LOGGED_INFO("(!(err = output.on_set_server_hello_messages_option(\"" << chars << "\")))...");
                if (!(err = output.on_set_server_hello_messages_option(chars))) {

                    LOGGER_IS_LOGGED_INFO("(!(err = output.output_server_hello_messages()))...");
                    if (!(err = output.output_server_hello_messages())) {

                        LOGGER_IS_LOGGED_INFO("(chars = content_string.has_chars(length))...");
                        if ((chars = content_string.has_chars(length))) {
                            this->err_flush();
                            this->outln(chars, length);
                            response_output = true;
                        } else {
                         LOGGER_IS_LOGGED_ERROR("...failed on (chars = content_string.has_chars(" << length << "))");
                        }
                    } else {
                        LOGGER_IS_LOGGED_ERROR("...failed on !(" << err << " = output.output_server_hello_messages())");
                    }
                } else {
                    LOGGER_IS_LOGGED_ERROR("...failed on !(" << err << " = output.on_set_server_hello_messages_option(\"" << chars << "\"))");
                }
                output.set_verbose_output(old_verbose_output);
                output.set_output_to(old_output);
            } else {
                LOGGER_IS_LOGGED_ERROR("...failed on (chars = this_response.content_chars(" << length << "))");
            }
        } else {
            LOGGER_IS_LOGGED_INFO("...failed on (sttp_content_type.is_equal(\"" << content_type << "\"))");
        }
        if (!(response_output)) {
            LOGGER_IS_LOGGED_ERROR("(!(err = extends::process_response(\"" << response << "\", cn, argc, argv, env)))...");
            if (!(err = extends::process_response(response, cn, argc, argv, env))) {
                LOGGER_IS_LOGGED_ERROR("...(!(" << err << " = extends::process_response(\"" << response << "\", cn, argc, argv, env)))");
            } else {
                LOGGER_IS_LOGGED_ERROR("...failed on (!(" << err << " = extends::process_response(\"" << response << "\", cn, argc, argv, env)))");
            }
        }
        return err;
    }
    //////////////////////////////////////////////////////////////////////////

    //////////////////////////////////////////////////////////////////////////
    /// ...output
    virtual output_t& output() const {
        return (output_t&)output_;
    }
    /// sttp_content_type
    virtual sttp_content_type_t& sttp_content_type() const {
        return (sttp_content_type_t&)sttp_content_type_;
    }
    //////////////////////////////////////////////////////////////////////////

    //////////////////////////////////////////////////////////////////////////
protected:
    output_t output_;
    sttp_content_type_t sttp_content_type_;    
}; /// class maint 
typedef maint<> main;

} /// namespace client 
} /// namespace shttp 
} /// namespace protocol 
} /// namespace sockets 
} /// namespace network 
} /// namespace console 
} /// namespace app 
} /// namespace xos 

#endif /// ndef XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_SHTTP_CLIENT_MAIN_HPP
