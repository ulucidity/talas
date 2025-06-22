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
///   File: main_opt.hpp
///
/// Author: $author$
///   Date: 6/21/2025
//////////////////////////////////////////////////////////////////////////
#ifndef XOS_APP_CONSOLE_PROTOCOL_STTP_SERVER_MAIN_OPT_HPP
#define XOS_APP_CONSOLE_PROTOCOL_STTP_SERVER_MAIN_OPT_HPP

#include "xos/app/console/protocol/sttp/base/main.hpp"
#include "xos/protocol/sttp/server/output.hpp"

///////////////////////////////////////////////////////////////////////
#define XOS_APP_CONSOLE_PROTOCOL_STTP_SERVER_MAIN_HELLO_MESSAGE_OPT "hello-message"
#define XOS_APP_CONSOLE_PROTOCOL_STTP_SERVER_MAIN_HELLO_MESSAGE_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_OPTIONAL
#define XOS_APP_CONSOLE_PROTOCOL_STTP_SERVER_MAIN_HELLO_MESSAGE_OPTARG_RESULT 0
#define XOS_APP_CONSOLE_PROTOCOL_STTP_SERVER_MAIN_HELLO_MESSAGE_OPTARG "[string]"
#define XOS_APP_CONSOLE_PROTOCOL_STTP_SERVER_MAIN_HELLO_MESSAGE_OPTUSE "hello message"
#define XOS_APP_CONSOLE_PROTOCOL_STTP_SERVER_MAIN_HELLO_MESSAGE_OPTVAL_S "H::"
#define XOS_APP_CONSOLE_PROTOCOL_STTP_SERVER_MAIN_HELLO_MESSAGE_OPTVAL_C 'H'
#define XOS_APP_CONSOLE_PROTOCOL_STTP_SERVER_MAIN_HELLO_MESSAGE_OPTION \
   {XOS_APP_CONSOLE_PROTOCOL_STTP_SERVER_MAIN_HELLO_MESSAGE_OPT, \
    XOS_APP_CONSOLE_PROTOCOL_STTP_SERVER_MAIN_HELLO_MESSAGE_OPTARG_REQUIRED, \
    XOS_APP_CONSOLE_PROTOCOL_STTP_SERVER_MAIN_HELLO_MESSAGE_OPTARG_RESULT, \
    XOS_APP_CONSOLE_PROTOCOL_STTP_SERVER_MAIN_HELLO_MESSAGE_OPTVAL_C}, \

#define XOS_APP_CONSOLE_PROTOCOL_STTP_SERVER_MAIN_CLIENT_HELLO_OPT "client-hello"
#define XOS_APP_CONSOLE_PROTOCOL_STTP_SERVER_MAIN_CLIENT_HELLO_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_OPTIONAL
#define XOS_APP_CONSOLE_PROTOCOL_STTP_SERVER_MAIN_CLIENT_HELLO_OPTARG_RESULT 0
#define XOS_APP_CONSOLE_PROTOCOL_STTP_SERVER_MAIN_CLIENT_HELLO_OPTARG "[string]"
#define XOS_APP_CONSOLE_PROTOCOL_STTP_SERVER_MAIN_CLIENT_HELLO_OPTUSE "client hello"
#define XOS_APP_CONSOLE_PROTOCOL_STTP_SERVER_MAIN_CLIENT_HELLO_OPTVAL_S "C::"
#define XOS_APP_CONSOLE_PROTOCOL_STTP_SERVER_MAIN_CLIENT_HELLO_OPTVAL_C 'C'
#define XOS_APP_CONSOLE_PROTOCOL_STTP_SERVER_MAIN_CLIENT_HELLO_OPTION \
   {XOS_APP_CONSOLE_PROTOCOL_STTP_SERVER_MAIN_CLIENT_HELLO_OPT, \
    XOS_APP_CONSOLE_PROTOCOL_STTP_SERVER_MAIN_CLIENT_HELLO_OPTARG_REQUIRED, \
    XOS_APP_CONSOLE_PROTOCOL_STTP_SERVER_MAIN_CLIENT_HELLO_OPTARG_RESULT, \
    XOS_APP_CONSOLE_PROTOCOL_STTP_SERVER_MAIN_CLIENT_HELLO_OPTVAL_C}, \

#define XOS_APP_CONSOLE_PROTOCOL_STTP_SERVER_MAIN_SERVER_HELLO_OPT "server-hello"
#define XOS_APP_CONSOLE_PROTOCOL_STTP_SERVER_MAIN_SERVER_HELLO_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_OPTIONAL
#define XOS_APP_CONSOLE_PROTOCOL_STTP_SERVER_MAIN_SERVER_HELLO_OPTARG_RESULT 0
#define XOS_APP_CONSOLE_PROTOCOL_STTP_SERVER_MAIN_SERVER_HELLO_OPTARG "[string]"
#define XOS_APP_CONSOLE_PROTOCOL_STTP_SERVER_MAIN_SERVER_HELLO_OPTUSE "server hello"
#define XOS_APP_CONSOLE_PROTOCOL_STTP_SERVER_MAIN_SERVER_HELLO_OPTVAL_S "S::"
#define XOS_APP_CONSOLE_PROTOCOL_STTP_SERVER_MAIN_SERVER_HELLO_OPTVAL_C 'S'
#define XOS_APP_CONSOLE_PROTOCOL_STTP_SERVER_MAIN_SERVER_HELLO_OPTION \
   {XOS_APP_CONSOLE_PROTOCOL_STTP_SERVER_MAIN_SERVER_HELLO_OPT, \
    XOS_APP_CONSOLE_PROTOCOL_STTP_SERVER_MAIN_SERVER_HELLO_OPTARG_REQUIRED, \
    XOS_APP_CONSOLE_PROTOCOL_STTP_SERVER_MAIN_SERVER_HELLO_OPTARG_RESULT, \
    XOS_APP_CONSOLE_PROTOCOL_STTP_SERVER_MAIN_SERVER_HELLO_OPTVAL_C}, \

#define XOS_APP_CONSOLE_PROTOCOL_STTP_SERVER_MAIN_CLIENT_KEY_EXCHANGE_ONLY_OPT "client-key-exchange-only"
#define XOS_APP_CONSOLE_PROTOCOL_STTP_SERVER_MAIN_CLIENT_KEY_EXCHANGE_ONLY_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_NONE
#define XOS_APP_CONSOLE_PROTOCOL_STTP_SERVER_MAIN_CLIENT_KEY_EXCHANGE_ONLY_OPTARG_RESULT 0
#define XOS_APP_CONSOLE_PROTOCOL_STTP_SERVER_MAIN_CLIENT_KEY_EXCHANGE_ONLY_OPTARG ""
#define XOS_APP_CONSOLE_PROTOCOL_STTP_SERVER_MAIN_CLIENT_KEY_EXCHANGE_ONLY_OPTUSE ""
#define XOS_APP_CONSOLE_PROTOCOL_STTP_SERVER_MAIN_CLIENT_KEY_EXCHANGE_ONLY_OPTVAL_S "Y"
#define XOS_APP_CONSOLE_PROTOCOL_STTP_SERVER_MAIN_CLIENT_KEY_EXCHANGE_ONLY_OPTVAL_C 'Y'
#define XOS_APP_CONSOLE_PROTOCOL_STTP_SERVER_MAIN_CLIENT_KEY_EXCHANGE_ONLY_OPTION \
   {XOS_APP_CONSOLE_PROTOCOL_STTP_SERVER_MAIN_CLIENT_KEY_EXCHANGE_ONLY_OPT, \
    XOS_APP_CONSOLE_PROTOCOL_STTP_SERVER_MAIN_CLIENT_KEY_EXCHANGE_ONLY_OPTARG_REQUIRED, \
    XOS_APP_CONSOLE_PROTOCOL_STTP_SERVER_MAIN_CLIENT_KEY_EXCHANGE_ONLY_OPTARG_RESULT, \
    XOS_APP_CONSOLE_PROTOCOL_STTP_SERVER_MAIN_CLIENT_KEY_EXCHANGE_ONLY_OPTVAL_C}, \

///////////////////////////////////////////////////////////////////////
#define XOS_APP_CONSOLE_PROTOCOL_STTP_SERVER_MAIN_OPTIONS_CHARS_EXTEND \
    XOS_APP_CONSOLE_PROTOCOL_STTP_SERVER_MAIN_HELLO_MESSAGE_OPTVAL_S \
    XOS_APP_CONSOLE_PROTOCOL_STTP_SERVER_MAIN_CLIENT_HELLO_OPTVAL_S \
    XOS_APP_CONSOLE_PROTOCOL_STTP_SERVER_MAIN_SERVER_HELLO_OPTVAL_S \
    XOS_APP_CONSOLE_PROTOCOL_STTP_SERVER_MAIN_CLIENT_KEY_EXCHANGE_ONLY_OPTVAL_S \

#define XOS_APP_CONSOLE_PROTOCOL_STTP_SERVER_MAIN_OPTIONS_OPTIONS_EXTEND \
    XOS_APP_CONSOLE_PROTOCOL_STTP_SERVER_MAIN_HELLO_MESSAGE_OPTION \
    XOS_APP_CONSOLE_PROTOCOL_STTP_SERVER_MAIN_CLIENT_HELLO_OPTION \
    XOS_APP_CONSOLE_PROTOCOL_STTP_SERVER_MAIN_SERVER_HELLO_OPTION \
    XOS_APP_CONSOLE_PROTOCOL_STTP_SERVER_MAIN_CLIENT_KEY_EXCHANGE_ONLY_OPTION \

///////////////////////////////////////////////////////////////////////
#define XOS_APP_CONSOLE_PROTOCOL_STTP_SERVER_MAIN_OPTIONS_CHARS \
   XOS_APP_CONSOLE_PROTOCOL_STTP_SERVER_MAIN_OPTIONS_CHARS_EXTEND \
   XOS_APP_CONSOLE_PROTOCOL_STTP_BASE_MAIN_OPTIONS_CHARS \

#define XOS_APP_CONSOLE_PROTOCOL_STTP_SERVER_MAIN_OPTIONS_OPTIONS \
   XOS_APP_CONSOLE_PROTOCOL_STTP_SERVER_MAIN_OPTIONS_OPTIONS_EXTEND \
   XOS_APP_CONSOLE_PROTOCOL_STTP_BASE_MAIN_OPTIONS_OPTIONS \

///////////////////////////////////////////////////////////////////////
#define XOS_APP_CONSOLE_PROTOCOL_STTP_SERVER_MAIN_ARGS 0
#define XOS_APP_CONSOLE_PROTOCOL_STTP_SERVER_MAIN_ARGV 0,

namespace xos {
namespace app {
namespace console {
namespace protocol {
namespace sttp {
namespace server {

/// class main_optt
template 
<class TExtends = xos::app::console::protocol::sttp::base::maint<>,  class TImplements = typename TExtends::implements>

class main_optt: virtual public TImplements, public TExtends {
public:
    typedef TImplements implements;
    typedef TExtends extends;
    typedef main_optt derives;

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
    main_optt(): run_(0) {
    }
    virtual ~main_optt() {
    }
private:
    main_optt(const main_optt &copy) {
        throw exception(exception_unexpected);
    }

protected:
    typedef typename extends::in_reader_t in_reader_t;
    typedef typename extends::out_writer_t out_writer_t;
    typedef typename extends::err_writer_t err_writer_t;

    typedef xos::protocol::sttp::server::output output_t;
    typedef typename output_t::output_to_t output_to_t;
    typedef typename output_t::output_to_t::string_t output_to_string_t;

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
    /// ...client_hello_run
    virtual int client_hello_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int before_client_hello_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int after_client_hello_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int all_client_hello_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_client_hello_run(argc, argv, env))) {
            int err2 = 0;
            err = client_hello_run(argc, argv, env);
            if ((err2 = after_client_hello_run(argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }
    virtual int set_client_hello_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        run_ = &derives::all_client_hello_run;
        return err;
    }

    /// ...server_hello_run
    virtual int server_hello_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int before_server_hello_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int after_server_hello_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int all_server_hello_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_server_hello_run(argc, argv, env))) {
            int err2 = 0;
            err = server_hello_run(argc, argv, env);
            if ((err2 = after_server_hello_run(argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }
    virtual int set_server_hello_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        run_ = &derives::all_server_hello_run;
        return err;
    }

    /// ...output_server_hello_message_plaintext_run
    virtual int output_server_hello_message_plaintext_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = all_output_server_hello_message_default_plaintext_run(argc, argv, env))) {
        }
        return err;
    }
    virtual int before_output_server_hello_message_plaintext_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int after_output_server_hello_message_plaintext_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int all_output_server_hello_message_plaintext_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_output_server_hello_message_plaintext_run(argc, argv, env))) {
            int err2 = 0;
            err = output_server_hello_message_plaintext_run(argc, argv, env);
            if ((err2 = after_output_server_hello_message_plaintext_run(argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }
    virtual int set_output_server_hello_message_plaintext_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        run_ = &derives::all_output_server_hello_message_plaintext_run;
        return err;
    }
    /// ...output_server_hello_message_default_plaintext_run
    virtual int output_server_hello_message_default_plaintext_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int before_output_server_hello_message_default_plaintext_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int after_output_server_hello_message_default_plaintext_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int all_output_server_hello_message_default_plaintext_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_output_server_hello_message_default_plaintext_run(argc, argv, env))) {
            int err2 = 0;
            err = output_server_hello_message_default_plaintext_run(argc, argv, env);
            if ((err2 = after_output_server_hello_message_default_plaintext_run(argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }
    virtual int set_output_server_hello_message_default_plaintext_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        run_ = &derives::all_output_server_hello_message_default_plaintext_run;
        return err;
    }
    //////////////////////////////////////////////////////////////////////////

    //////////////////////////////////////////////////////////////////////////
    /// ...hello_message_option...
    virtual int on_set_hello_message_option
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
        } else {
        }
        return err;
    }
    virtual int on_hello_message_option_set
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
        } else {
        }
        return err;
    }
    virtual int on_hello_message_option
    (int optval, const char_t* optarg, const char_t* optname,
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
            if (!(err = on_set_hello_message_option(optarg, optind, argc, argv, env))) {
                if (!(err = on_hello_message_option_set(optarg, optind, argc, argv, env))) {
                    if (!(err = set_output_server_hello_message_plaintext_run(argc, argv, env))) {
                    } else {
                    }
                } else {
                }
            } else {
            }
        } else {
            if (!(err = set_server_hello_run(argc, argv, env))) {
            } else {
            }
        }
        return err;
    }
    virtual const char_t* hello_message_option_usage(const char_t*& optarg, const struct option* longopt) {
        const char_t* chars = XOS_APP_CONSOLE_PROTOCOL_STTP_SERVER_MAIN_HELLO_MESSAGE_OPTUSE;
        optarg = XOS_APP_CONSOLE_PROTOCOL_STTP_SERVER_MAIN_HELLO_MESSAGE_OPTARG;
        return chars;
    }

    /// ...client_hello_option...
    virtual int on_set_client_hello_option
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
        } else {
        }
        return err;
    }
    virtual int on_client_hello_option_set
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
        } else {
        }
        return err;
    }
    virtual int on_client_hello_option
    (int optval, const char_t* optarg, const char_t* optname,
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
            if (!(err = on_set_client_hello_option(optarg, optind, argc, argv, env))) {
                if (!(err = on_client_hello_option_set(optarg, optind, argc, argv, env))) {
                    if (!(err = set_client_hello_run(argc, argv, env))) {
                    } else {
                    }
                } else {
                }
            } else {
            }
        } else {
            if (!(err = set_client_hello_run(argc, argv, env))) {
            } else {
            }
        }
        return err;
    }
    virtual const char_t* client_hello_option_usage(const char_t*& optarg, const struct option* longopt) {
        const char_t* chars = XOS_APP_CONSOLE_PROTOCOL_STTP_SERVER_MAIN_CLIENT_HELLO_OPTUSE;
        optarg = XOS_APP_CONSOLE_PROTOCOL_STTP_SERVER_MAIN_CLIENT_HELLO_OPTARG;
        return chars;
    }

    /// ...server_hello_option...
    virtual int on_set_server_hello_option
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
        } else {
        }
        return err;
    }
    virtual int on_server_hello_option_set
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
        } else {
        }
        return err;
    }
    virtual int on_server_hello_option
    (int optval, const char_t* optarg, const char_t* optname,
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
            if (!(err = on_set_server_hello_option(optarg, optind, argc, argv, env))) {
                if (!(err = on_server_hello_option_set(optarg, optind, argc, argv, env))) {
                    if (!(err = set_server_hello_run(argc, argv, env))) {
                    } else {
                    }
                } else {
                }
            } else {
            }
        } else {
            if (!(err = set_server_hello_run(argc, argv, env))) {
            } else {
            }
        }
        return err;
    }
    virtual const char_t* server_hello_option_usage(const char_t*& optarg, const struct option* longopt) {
        const char_t* chars = XOS_APP_CONSOLE_PROTOCOL_STTP_SERVER_MAIN_SERVER_HELLO_OPTUSE;
        optarg = XOS_APP_CONSOLE_PROTOCOL_STTP_SERVER_MAIN_SERVER_HELLO_OPTARG;
        return chars;
    }

    /// ...client_key_exchange_only_option...
    virtual int on_set_client_key_exchange_only_option
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        return err;
    }
    virtual int on_client_key_exchange_only_option_set
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        return err;
    }
    virtual int on_client_key_exchange_only_option
    (int optval, const char_t* optarg, const char_t* optname,
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if (!(err = on_set_client_key_exchange_only_option(optarg, optind, argc, argv, env))) {
            if (!(err = on_client_key_exchange_only_option_set(optarg, optind, argc, argv, env))) {
            } else {
            }
        } else {
        }
        return err;
    }
    virtual const char_t* client_key_exchange_only_option_usage(const char_t*& optarg, const struct option* longopt) {
        const char_t* chars = XOS_APP_CONSOLE_PROTOCOL_STTP_SERVER_MAIN_CLIENT_KEY_EXCHANGE_ONLY_OPTUSE;
        optarg = XOS_APP_CONSOLE_PROTOCOL_STTP_SERVER_MAIN_CLIENT_KEY_EXCHANGE_ONLY_OPTARG;
        return chars;
    }
    //////////////////////////////////////////////////////////////////////////

    //////////////////////////////////////////////////////////////////////////
    /// on_option
    virtual int on_option
    (int optval, const char_t* optarg, const char_t* optname,
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        switch(optval) {

        case XOS_APP_CONSOLE_PROTOCOL_STTP_SERVER_MAIN_HELLO_MESSAGE_OPTVAL_C:
            err = this->on_hello_message_option(optval, optarg, optname, optind, argc, argv, env);
            break;
        case XOS_APP_CONSOLE_PROTOCOL_STTP_SERVER_MAIN_CLIENT_HELLO_OPTVAL_C:
            err = this->on_client_hello_option(optval, optarg, optname, optind, argc, argv, env);
            break;
        case XOS_APP_CONSOLE_PROTOCOL_STTP_SERVER_MAIN_SERVER_HELLO_OPTVAL_C:
            err = this->on_server_hello_option(optval, optarg, optname, optind, argc, argv, env);
            break;

        case XOS_APP_CONSOLE_PROTOCOL_STTP_SERVER_MAIN_CLIENT_KEY_EXCHANGE_ONLY_OPTVAL_C:
            err = this->on_client_key_exchange_only_option(optval, optarg, optname, optind, argc, argv, env);
            break;

        default:
            err = extends::on_option(optval, optarg, optname, optind, argc, argv, env);
        }
        return err;
    }
    //////////////////////////////////////////////////////////////////////////
    /// option_usage
    virtual const char_t* option_usage(const char_t*& optarg, const struct option* longopt) {
        const char_t* chars = "";
        switch(longopt->val) {

        case XOS_APP_CONSOLE_PROTOCOL_STTP_SERVER_MAIN_HELLO_MESSAGE_OPTVAL_C:
            chars = this->hello_message_option_usage(optarg, longopt);
            break;
        case XOS_APP_CONSOLE_PROTOCOL_STTP_SERVER_MAIN_CLIENT_HELLO_OPTVAL_C:
            chars = this->client_hello_option_usage(optarg, longopt);
            break;
        case XOS_APP_CONSOLE_PROTOCOL_STTP_SERVER_MAIN_SERVER_HELLO_OPTVAL_C:
            chars = this->server_hello_option_usage(optarg, longopt);
            break;

        case XOS_APP_CONSOLE_PROTOCOL_STTP_SERVER_MAIN_CLIENT_KEY_EXCHANGE_ONLY_OPTVAL_C:
            chars = this->client_key_exchange_only_option_usage(optarg, longopt);
            break;

        default:
            chars = extends::option_usage(optarg, longopt);
            break;
        }
        return chars;
    }
    //////////////////////////////////////////////////////////////////////////
    /// options
    virtual const char_t* options(const struct option*& longopts) {
        static const char_t* chars = XOS_APP_CONSOLE_PROTOCOL_STTP_SERVER_MAIN_OPTIONS_CHARS;
        static struct option optstruct[]= {
            XOS_APP_CONSOLE_PROTOCOL_STTP_SERVER_MAIN_OPTIONS_OPTIONS
            {0, 0, 0, 0}};
        longopts = optstruct;
        return chars;
    }
    /// arguments
    virtual const char_t* arguments(const char_t**& argv) {
        static const char_t* _args = XOS_APP_CONSOLE_PROTOCOL_STTP_SERVER_MAIN_ARGS;
        static const char_t* _argv[] = {
            XOS_APP_CONSOLE_PROTOCOL_STTP_SERVER_MAIN_ARGV
            0};
        argv = _argv;
        return _args;
    }
    //////////////////////////////////////////////////////////////////////////

    //////////////////////////////////////////////////////////////////////////
protected:
}; /// class main_optt 
typedef main_optt<> main_opt;

} /// namespace server 
} /// namespace sttp 
} /// namespace protocol 
} /// namespace console 
} /// namespace app 
} /// namespace xos 

#endif /// ndef XOS_APP_CONSOLE_PROTOCOL_STTP_SERVER_MAIN_OPT_HPP
