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
///   Date: 6/18/2025
//////////////////////////////////////////////////////////////////////////
#ifndef XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_XTTP_CLIENT_MAIN_HPP
#define XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_XTTP_CLIENT_MAIN_HPP

#include "xos/app/console/network/sockets/protocol/xttp/client/main_opt.hpp"

#include "xos/protocol/http/response/status/codeof.hpp"
#include "xos/protocol/http/response/status/reason.hpp"
#include "xos/protocol/http/response/line.hpp"
#include "xos/protocol/http/response/message.hpp"

namespace xos {
namespace app {
namespace console {
namespace network {
namespace sockets {
namespace protocol {
namespace xttp {
namespace client {

/// class maint
template 
<class TExtends = xos::app::console::network::sockets::protocol::xttp::client::main_optt<>,  class TImplements = typename TExtends::implements>

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

    typedef xos::protocol::http::response::status::code response_status_t;
    typedef xos::protocol::http::response::status::reason response_reason_t;
    typedef xos::protocol::http::response::line response_line_t;
    typedef xos::protocol::http::response::message response_t;
    typedef xos::protocol::http::response::message::string_t response_string_t;

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
    /// ...this_connect_run
    virtual int this_connect_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = extends::connect_run(argc, argv, env))) {} else {}
        return err;
    }
    virtual int set_this_connect_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        run_ = &derives::this_connect_run;
        return err;
    }
    virtual int unset_this_connect_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        run_ = 0;
        return err;
    }
    virtual int on_set_connect_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = set_this_connect_run(argc, argv, env))) {} else {}
        return err;
    }
    //////////////////////////////////////////////////////////////////////////

    //////////////////////////////////////////////////////////////////////////
    virtual int process_response(string_t& response, xos::network::sockets::interface& cn, int argc, char_t** argv, char_t** env) {
        int err = 0;
        response_t& this_response = this->response();
        size_t length = 0;
        const char_t* chars = 0;
        LOGGER_IS_LOGGED_INFO("((chars = this_response.has_chars(length)))...");
        if ((chars = this_response.has_chars(length))) {
            LOGGER_IS_LOGGED_INFO("this->out(\"" << chars << "\", " << length << ")...");
            this->out(chars, length);
            LOGGER_IS_LOGGED_INFO("((chars = this_response.content_chars(length)))...");
            if ((chars = this_response.content_chars(length))) {
                LOGGER_IS_LOGGED_INFO("this->out(\"" << chars << "\", " << length << ")...");
                this->out(chars, length);
            } else {
                LOGGER_IS_LOGGED_INFO("...failed on ((chars = this_response.content_chars(" << length << ")))");
            }
        } else {
            LOGGER_IS_LOGGED_INFO("...failed on ((chars = this_response.has_chars(" << length << ")))");
        }
        return err;
    }
    //////////////////////////////////////////////////////////////////////////
    virtual int on_send_request(xos::network::sockets::interface& cn, string_t& request, int argc, char_t** argv, char_t** env) {
        int err = 0;
        request_t& this_request = this->request();
        const char_t* chars = 0;
        size_t length = 0;
        LOGGER_IS_LOGGED_INFO("((chars = this_request.content_chars(length)))...");
        if ((chars = this_request.content_chars(length))) {
            LOGGER_IS_LOGGED_INFO("cn.send(\"" << chars << "\", " << length << ")...");
            cn.send(chars, length);
        } else {}
        return err;
    }
    //////////////////////////////////////////////////////////////////////////
    virtual int on_recv_response(string_t& response, xos::network::sockets::interface& cn, int argc, char_t** argv, char_t** env) {
        int err = 0;
        response_t& this_response = this->response();
        size_t content_length = 0;
        LOGGER_IS_LOGGED_INFO("this_response.assign(\"" << response << "\")...");
        this_response.assign(response);
        this_response.separate();
        LOGGER_IS_LOGGED_INFO("(0 < (content_length = this_response.content_length()))...");
        if (0 < (content_length = this_response.content_length())) {
            content_t& response_content = this->response_content();
            char_t c = 0;
            LOGGER_IS_LOGGED_INFO("...(0 < (" << content_length << " = this_response.content_length()))");
            LOGGER_IS_LOGGED_INFO("(!(err = this->recv_length(response_content, c, cn, " << content_length << ", argc, argv, env)))...");
            if (!(err = this->recv_length(response_content, c, cn, content_length, argc, argv, env))) {
                LOGGER_IS_LOGGED_INFO("...(!(" << err << " = this->recv_length(\"" << response_content << "\", c, cn, " << content_length << ", argc, argv, env)))");
                LOGGER_IS_LOGGED_INFO("this_response.set_content(\"" << response_content << "\")...");
                this_response.set_content(response_content);
            } else {
                LOGGER_IS_LOGGED_INFO("...failed on (!(" << err << " = this->recv_length(response_content, c, cn, " << content_length << ", argc, argv, env)))");
            }
        } else {
            LOGGER_IS_LOGGED_INFO("...failed on (0 < (" << content_length << " = this_response.content_length()))");
        }
        return err;
    }
    //////////////////////////////////////////////////////////////////////////

    //////////////////////////////////////////////////////////////////////////
    /// response...
    virtual response_t& response() const {
        return (response_t&)response_;
    }
    virtual content_t& response_content() const {
        return (content_t&)response_content_;
    }
    //////////////////////////////////////////////////////////////////////////

    //////////////////////////////////////////////////////////////////////////
protected:
    xos::protocol::http::response::message response_;
    xos::protocol::http::message::body::content response_content_;
}; /// class maint 
typedef maint<> main;

} /// namespace client 
} /// namespace xttp 
} /// namespace protocol 
} /// namespace sockets 
} /// namespace network 
} /// namespace console 
} /// namespace app 
} /// namespace xos 

#endif /// ndef XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_XTTP_CLIENT_MAIN_HPP
