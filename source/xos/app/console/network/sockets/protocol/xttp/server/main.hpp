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
#ifndef XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_XTTP_SERVER_MAIN_HPP
#define XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_XTTP_SERVER_MAIN_HPP

#include "xos/app/console/network/sockets/protocol/xttp/server/main_opt.hpp"

#include "xos/protocol/http/request/method/which.hpp"
#include "xos/protocol/http/request/method/name.hpp"
#include "xos/protocol/http/request/method/nameof.hpp"
#include "xos/protocol/http/request/resource/which.hpp"
#include "xos/protocol/http/request/resource/identifier.hpp"
#include "xos/protocol/http/request/line.hpp"
#include "xos/protocol/http/request/message.hpp"

namespace xos {
namespace app {
namespace console {
namespace network {
namespace sockets {
namespace protocol {
namespace xttp {
namespace server {

/// class maint
template 
<class TExtends = xos::app::console::network::sockets::protocol::xttp::server::main_optt<>,  class TImplements = typename TExtends::implements>

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

    typedef typename extends::content_t content_t;
    typedef typename extends::content_type_t content_type_t;
    typedef typename extends::text_content_type_t text_content_type_t;
    typedef typename extends::json_content_type_t json_content_type_t;
    typedef typename extends::text_content_t text_content_t;

    typedef typename extends::response_status_t response_status_t;
    typedef typename extends::response_reason_t response_reason_t;
    typedef typename extends::response_line_t response_line_t;
    typedef typename extends::response_t response_t;
    typedef typename extends::response_string_t response_string_t;

    typedef xos::protocol::http::request::method::name request_method_t;
    typedef xos::protocol::http::request::resource::identifier request_resource_t;
    typedef xos::protocol::http::request::line request_line_t;
    typedef xos::protocol::http::request::message request_t;
    typedef xos::protocol::http::request::message::string_t request_string_t;

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
    /// ...this_accept_run
    virtual int this_accept_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = extends::accept_run(argc, argv, env))) {} else {}
        return err;
    }
    virtual int set_this_accept_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        run_ = &derives::this_accept_run;
        return err;
    }
    virtual int unset_this_accept_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        run_ = 0;
        return err;
    }
    virtual int on_set_accept_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = set_this_accept_run(argc, argv, env))) {} else {}
        return err;
    }
    //////////////////////////////////////////////////////////////////////////
    /// ...this_accept_one_run
    virtual int this_accept_one_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = extends::accept_one_run(argc, argv, env))) {} else {}
        return err;
    }
    virtual int set_this_accept_one_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        run_ = &derives::this_accept_one_run;
        return err;
    }
    virtual int unset_this_accept_one_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        run_ = 0;
        return err;
    }
    virtual int on_set_accept_one_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = set_this_accept_one_run(argc, argv, env))) {} else {}
        return err;
    }
    //////////////////////////////////////////////////////////////////////////

    //////////////////////////////////////////////////////////////////////////
    virtual int on_recv_request(string_t& request, xos::network::sockets::interface& cn, int argc, char_t** argv, char_t** env) {
        int err = 0;
        request_t& this_request = this->request();
        size_t content_length = 0;
        LOGGER_IS_LOGGED_INFO("this_request.assign(\"" << request << "\")...");
        this_request.assign(request);
        this_request.separate();
        LOGGER_IS_LOGGED_INFO("(0 < (content_length = this_request.content_length()))...");
        if (0 < (content_length = this_request.content_length())) {
            content_t& request_content = this->request_content();
            char_t c = 0;
            LOGGER_IS_LOGGED_INFO("...(0 < (" << content_length << " = this_request.content_length()))");
            LOGGER_IS_LOGGED_INFO("(!(err = this->recv_length(request_content, c, cn, " << content_length << ", argc, argv, env)))...");
            if (!(err = this->recv_length(request_content, c, cn, content_length, argc, argv, env))) {
                LOGGER_IS_LOGGED_INFO("...(!(" << err << " = this->recv_length(\"" << request_content << "\", c, cn, " << content_length << ", argc, argv, env)))");
                LOGGER_IS_LOGGED_INFO("this_request.set_content(\"" << request_content << "\")...");
                this_request.set_content(request_content);
            } else {
                LOGGER_IS_LOGGED_INFO("...failed on (!(" << err << " = this->recv_length(request_content, c, cn, " << content_length << ", argc, argv, env)))");
            }
        } else {
            LOGGER_IS_LOGGED_INFO("...failed on (0 < (" << content_length << " = this_request.content_length()))");
        }
        return err;
    }
    //////////////////////////////////////////////////////////////////////////
    virtual int process_request(string_t& request, xos::network::sockets::interface& cn, int argc, char_t** argv, char_t** env) {
        int err = 0;
        request_t& this_request = this->request();
        size_t length = 0;
        const char_t* chars = 0;
        LOGGER_IS_LOGGED_INFO("((chars = this_request.has_chars(length)))...");
        if ((chars = this_request.has_chars(length))) {
            LOGGER_IS_LOGGED_INFO("this->out(\"" << chars << "\", " << length << ")...");
            this->out(chars, length);
            LOGGER_IS_LOGGED_INFO("((chars = this_request.content_chars(length)))...");
            if ((chars = this_request.content_chars(length))) {
                LOGGER_IS_LOGGED_INFO("this->out(\"" << chars << "\", " << length << ")...");
                this->out(chars, length);
            } else {
                LOGGER_IS_LOGGED_INFO("...failed on ((chars = this_request.content_chars(" << length << ")))");
            }
        } else {
            LOGGER_IS_LOGGED_INFO("...failed on ((chars = this_request.has_chars(" << length << ")))");
        }
        return err;
    }
    //////////////////////////////////////////////////////////////////////////
    virtual int on_send_response(xos::network::sockets::interface& cn, string_t& response, int argc, char_t** argv, char_t** env) {
        int err = 0;
        response_t& this_response = this->response();
        const char_t* chars = 0;
        size_t length = 0;
        LOGGER_IS_LOGGED_INFO("((chars = this_response.content_chars(length)))...");
        if ((chars = this_response.content_chars(length))) {
            LOGGER_IS_LOGGED_INFO("cn.send(\"" << chars << "\", " << length << ")...");
            cn.send(chars, length);
        } else {
            LOGGER_IS_LOGGED_INFO("...failed on ((chars = this_response.content_chars(" << length << ")))");
        }
        return err;
    }
    //////////////////////////////////////////////////////////////////////////

    //////////////////////////////////////////////////////////////////////////
    /// request...
    virtual request_t& request() const {
        return (request_t&)request_;
    }
    virtual content_t& request_content() const {
        return (content_t&)request_content_;
    }
    //////////////////////////////////////////////////////////////////////////

    //////////////////////////////////////////////////////////////////////////
protected:
    xos::protocol::http::request::message request_;
    xos::protocol::http::message::body::content request_content_;
}; /// class maint 
typedef maint<> main;

} /// namespace server 
} /// namespace xttp 
} /// namespace protocol 
} /// namespace sockets 
} /// namespace network 
} /// namespace console 
} /// namespace app 
} /// namespace xos 

#endif /// ndef XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_XTTP_SERVER_MAIN_HPP
