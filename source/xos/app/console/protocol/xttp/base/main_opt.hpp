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
///   Date: 6/16/2025
//////////////////////////////////////////////////////////////////////////
#ifndef XOS_APP_CONSOLE_PROTOCOL_XTTP_BASE_MAIN_OPT_HPP
#define XOS_APP_CONSOLE_PROTOCOL_XTTP_BASE_MAIN_OPT_HPP

#include "xos/app/console/input/base/main.hpp"

#if !defined(XOS_APP_CONSOLE_PROTOCOL_XTTP_BASE_MAIN_PROTOCOL_NAME)
#if defined(XOS_APP_CONSOLE_PROTOCOL_HTTP_BASE_MAIN_OPT_HPP)
#define XOS_APP_CONSOLE_PROTOCOL_XTTP_BASE_MAIN_PROTOCOL_Name "Http"
#define XOS_APP_CONSOLE_PROTOCOL_XTTP_BASE_MAIN_PROTOCOL_name "http"
#define XOS_APP_CONSOLE_PROTOCOL_XTTP_BASE_MAIN_PROTOCOL_NAME "HTTP"
#else /// defined(XOS_APP_CONSOLE_PROTOCOL_HTTP_BASE_MAIN_OPT_HPP)
#define XOS_APP_CONSOLE_PROTOCOL_XTTP_BASE_MAIN_PROTOCOL_Name "Xttp"
#define XOS_APP_CONSOLE_PROTOCOL_XTTP_BASE_MAIN_PROTOCOL_name "xttp"
#define XOS_APP_CONSOLE_PROTOCOL_XTTP_BASE_MAIN_PROTOCOL_NAME "XTTP"
#endif /// defined(XOS_APP_CONSOLE_PROTOCOL_HTTP_BASE_MAIN_OPT_HPP)
#endif /// !defined(XOS_APP_CONSOLE_PROTOCOL_XTTP_BASE_MAIN_PROTOCOL_NAME)

///////////////////////////////////////////////////////////////////////
#define XOS_APP_CONSOLE_PROTOCOL_XTTP_BASE_MAIN_CONTENT_OPT "content"
#define XOS_APP_CONSOLE_PROTOCOL_XTTP_BASE_MAIN_CONTENT_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_OPTIONAL
#define XOS_APP_CONSOLE_PROTOCOL_XTTP_BASE_MAIN_CONTENT_OPTARG_RESULT 0
#define XOS_APP_CONSOLE_PROTOCOL_XTTP_BASE_MAIN_CONTENT_OPTARG "[string]"
#define XOS_APP_CONSOLE_PROTOCOL_XTTP_BASE_MAIN_CONTENT_OPTUSE \
    XOS_APP_CONSOLE_PROTOCOL_XTTP_BASE_MAIN_PROTOCOL_Name " message content"
#define XOS_APP_CONSOLE_PROTOCOL_XTTP_BASE_MAIN_CONTENT_OPTVAL_S "n::"
#define XOS_APP_CONSOLE_PROTOCOL_XTTP_BASE_MAIN_CONTENT_OPTVAL_C 'n'
#define XOS_APP_CONSOLE_PROTOCOL_XTTP_BASE_MAIN_CONTENT_OPTION \
   {XOS_APP_CONSOLE_PROTOCOL_XTTP_BASE_MAIN_CONTENT_OPT, \
    XOS_APP_CONSOLE_PROTOCOL_XTTP_BASE_MAIN_CONTENT_OPTARG_REQUIRED, \
    XOS_APP_CONSOLE_PROTOCOL_XTTP_BASE_MAIN_CONTENT_OPTARG_RESULT, \
    XOS_APP_CONSOLE_PROTOCOL_XTTP_BASE_MAIN_CONTENT_OPTVAL_C}, \

#define XOS_APP_CONSOLE_PROTOCOL_XTTP_BASE_MAIN_CONTENT_TYPE_OPT "content-type"
#define XOS_APP_CONSOLE_PROTOCOL_XTTP_BASE_MAIN_CONTENT_TYPE_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_OPTIONAL
#define XOS_APP_CONSOLE_PROTOCOL_XTTP_BASE_MAIN_CONTENT_TYPE_OPTARG_RESULT 0
#define XOS_APP_CONSOLE_PROTOCOL_XTTP_BASE_MAIN_CONTENT_TYPE_OPTARG "[string[/string]]"
#define XOS_APP_CONSOLE_PROTOCOL_XTTP_BASE_MAIN_CONTENT_TYPE_OPTUSE \
    XOS_APP_CONSOLE_PROTOCOL_XTTP_BASE_MAIN_PROTOCOL_Name " message content type"
#define XOS_APP_CONSOLE_PROTOCOL_XTTP_BASE_MAIN_CONTENT_TYPE_OPTVAL_S "y::"
#define XOS_APP_CONSOLE_PROTOCOL_XTTP_BASE_MAIN_CONTENT_TYPE_OPTVAL_C 'y'
#define XOS_APP_CONSOLE_PROTOCOL_XTTP_BASE_MAIN_CONTENT_TYPE_OPTION \
   {XOS_APP_CONSOLE_PROTOCOL_XTTP_BASE_MAIN_CONTENT_TYPE_OPT, \
    XOS_APP_CONSOLE_PROTOCOL_XTTP_BASE_MAIN_CONTENT_TYPE_OPTARG_REQUIRED, \
    XOS_APP_CONSOLE_PROTOCOL_XTTP_BASE_MAIN_CONTENT_TYPE_OPTARG_RESULT, \
    XOS_APP_CONSOLE_PROTOCOL_XTTP_BASE_MAIN_CONTENT_TYPE_OPTVAL_C}, \

#define XOS_APP_CONSOLE_PROTOCOL_XTTP_BASE_MAIN_CONTENT_ENCODING_OPT "content-encoding"
#define XOS_APP_CONSOLE_PROTOCOL_XTTP_BASE_MAIN_CONTENT_ENCODING_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_OPTIONAL
#define XOS_APP_CONSOLE_PROTOCOL_XTTP_BASE_MAIN_CONTENT_ENCODING_OPTARG_RESULT 0
#define XOS_APP_CONSOLE_PROTOCOL_XTTP_BASE_MAIN_CONTENT_ENCODING_OPTARG "[string]"
#define XOS_APP_CONSOLE_PROTOCOL_XTTP_BASE_MAIN_CONTENT_ENCODING_OPTUSE \
    XOS_APP_CONSOLE_PROTOCOL_XTTP_BASE_MAIN_PROTOCOL_Name " message content encoding"
#define XOS_APP_CONSOLE_PROTOCOL_XTTP_BASE_MAIN_CONTENT_ENCODING_OPTVAL_S "e::"
#define XOS_APP_CONSOLE_PROTOCOL_XTTP_BASE_MAIN_CONTENT_ENCODING_OPTVAL_C 'e'
#define XOS_APP_CONSOLE_PROTOCOL_XTTP_BASE_MAIN_CONTENT_ENCODING_OPTION \
   {XOS_APP_CONSOLE_PROTOCOL_XTTP_BASE_MAIN_CONTENT_ENCODING_OPT, \
    XOS_APP_CONSOLE_PROTOCOL_XTTP_BASE_MAIN_CONTENT_ENCODING_OPTARG_REQUIRED, \
    XOS_APP_CONSOLE_PROTOCOL_XTTP_BASE_MAIN_CONTENT_ENCODING_OPTARG_RESULT, \
    XOS_APP_CONSOLE_PROTOCOL_XTTP_BASE_MAIN_CONTENT_ENCODING_OPTVAL_C}, \

///////////////////////////////////////////////////////////////////////
#define XOS_APP_CONSOLE_PROTOCOL_XTTP_BASE_MAIN_OPTIONS_CHARS_EXTEND \
    XOS_APP_CONSOLE_PROTOCOL_XTTP_BASE_MAIN_CONTENT_OPTVAL_S \
    XOS_APP_CONSOLE_PROTOCOL_XTTP_BASE_MAIN_CONTENT_TYPE_OPTVAL_S \
    XOS_APP_CONSOLE_PROTOCOL_XTTP_BASE_MAIN_CONTENT_ENCODING_OPTVAL_S \

#define XOS_APP_CONSOLE_PROTOCOL_XTTP_BASE_MAIN_OPTIONS_OPTIONS_EXTEND \
    XOS_APP_CONSOLE_PROTOCOL_XTTP_BASE_MAIN_CONTENT_OPTION \
    XOS_APP_CONSOLE_PROTOCOL_XTTP_BASE_MAIN_CONTENT_TYPE_OPTION \
    XOS_APP_CONSOLE_PROTOCOL_XTTP_BASE_MAIN_CONTENT_ENCODING_OPTION \

///////////////////////////////////////////////////////////////////////
#define XOS_APP_CONSOLE_PROTOCOL_XTTP_BASE_MAIN_OPTIONS_CHARS \
   XOS_APP_CONSOLE_PROTOCOL_XTTP_BASE_MAIN_OPTIONS_CHARS_EXTEND \
   XOS_APP_CONSOLE_INPUT_BASE_MAIN_VERBOSE_OPTIONS_CHARS \

#define XOS_APP_CONSOLE_PROTOCOL_XTTP_BASE_MAIN_OPTIONS_OPTIONS \
   XOS_APP_CONSOLE_PROTOCOL_XTTP_BASE_MAIN_OPTIONS_OPTIONS_EXTEND \
   XOS_APP_CONSOLE_INPUT_BASE_MAIN_VERBOSE_OPTIONS_OPTIONS \

///////////////////////////////////////////////////////////////////////
#define XOS_APP_CONSOLE_PROTOCOL_XTTP_BASE_MAIN_ARGS 0
#define XOS_APP_CONSOLE_PROTOCOL_XTTP_BASE_MAIN_ARGV 0,

namespace xos {
namespace app {
namespace console {
namespace protocol {
namespace xttp {
namespace base {

/// class main_optt
template 
<class TExtends = xos::app::console::input::base::maint<>,  class TImplements = typename TExtends::implements>

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
    /// ...content_run
    virtual int content_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int before_content_run(int argc, char_t** argv, char** env) {
        int err = 0;
        return err;
    }
    virtual int after_content_run(int argc, char_t** argv, char** env) {
        int err = 0;
        return err;
    }
    virtual int all_content_run(int argc, char_t** argv, char** env) {
        int err = 0;
        if (!(err = before_content_run(argc, argv, env))) {
            int err2 = 0;
            err = content_run(argc, argv, env);
            if ((err2 = after_content_run(argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }
    virtual int set_content_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        run_ = &derives::all_content_run;
        return err;
    }
    virtual int content_run_set(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    //////////////////////////////////////////////////////////////////////////
    /// ...content_type_run
    virtual int content_type_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int before_content_type_run(int argc, char_t** argv, char** env) {
        int err = 0;
        return err;
    }
    virtual int after_content_type_run(int argc, char_t** argv, char** env) {
        int err = 0;
        return err;
    }
    virtual int all_content_type_run(int argc, char_t** argv, char** env) {
        int err = 0;
        if (!(err = before_content_type_run(argc, argv, env))) {
            int err2 = 0;
            err = content_type_run(argc, argv, env);
            if ((err2 = after_content_type_run(argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }
    virtual int set_content_type_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        run_ = &derives::all_content_type_run;
        return err;
    }
    virtual int content_type_run_set(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    //////////////////////////////////////////////////////////////////////////
    /// ...content_encoding_run
    virtual int content_encoding_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int before_content_encoding_run(int argc, char_t** argv, char** env) {
        int err = 0;
        return err;
    }
    virtual int after_content_encoding_run(int argc, char_t** argv, char** env) {
        int err = 0;
        return err;
    }
    virtual int all_content_encoding_run(int argc, char_t** argv, char** env) {
        int err = 0;
        if (!(err = before_content_encoding_run(argc, argv, env))) {
            int err2 = 0;
            err = content_encoding_run(argc, argv, env);
            if ((err2 = after_content_encoding_run(argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }
    virtual int set_content_encoding_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        run_ = &derives::all_content_encoding_run;
        return err;
    }
    virtual int content_encoding_run_set(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    //////////////////////////////////////////////////////////////////////////

    //////////////////////////////////////////////////////////////////////////
    /// ...option...
    virtual int on_set_content_option
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
        } else {
        }
        return err;
    }
    virtual int on_content_option_set
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
        } else {
        }
        return err;
    }
    virtual int on_content_option
    (int optval, const char_t* optarg, const char_t* optname,
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
            if (!(err = on_set_content_option(optarg, optind, argc, argv, env))) {
                if (!(err = on_content_option_set(optarg, optind, argc, argv, env))) {
                    if (!(err = set_content_run(argc, argv, env))) {
                        if (!(err = content_run_set(argc, argv, env))) {
                        }
                    }
                }
            }
        } else {
            if (!(err = set_content_run(argc, argv, env))) {
                if (!(err = content_run_set(argc, argv, env))) {
                }
            }
        }
        return err;
    }
    virtual const char_t* content_option_usage(const char_t*& optarg, const struct option* longopt) {
        const char_t* chars = XOS_APP_CONSOLE_PROTOCOL_XTTP_BASE_MAIN_CONTENT_OPTUSE;
        optarg = XOS_APP_CONSOLE_PROTOCOL_XTTP_BASE_MAIN_CONTENT_OPTARG;
        return chars;
    }
    //////////////////////////////////////////////////////////////////////////
    /// ...option...
    virtual int on_set_content_type_option
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
        } else {
        }
        return err;
    }
    virtual int on_content_type_option_set
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
        } else {
        }
        return err;
    }
    virtual int on_content_type_option
    (int optval, const char_t* optarg, const char_t* optname,
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
            if (!(err = on_set_content_type_option(optarg, optind, argc, argv, env))) {
                if (!(err = on_content_type_option_set(optarg, optind, argc, argv, env))) {
                    if (!(err = set_content_type_run(argc, argv, env))) {
                        if (!(err = content_type_run_set(argc, argv, env))) {
                        }
                    }
                }
            }
        } else {
            if (!(err = set_content_type_run(argc, argv, env))) {
                if (!(err = content_type_run_set(argc, argv, env))) {
                }
            }
        }
        return err;
    }
    virtual const char_t* content_type_option_usage(const char_t*& optarg, const struct option* longopt) {
        const char_t* chars = XOS_APP_CONSOLE_PROTOCOL_XTTP_BASE_MAIN_CONTENT_TYPE_OPTUSE;
        optarg = XOS_APP_CONSOLE_PROTOCOL_XTTP_BASE_MAIN_CONTENT_TYPE_OPTARG;
        return chars;
    }
    //////////////////////////////////////////////////////////////////////////
    /// ...option...
    virtual int on_set_content_encoding_option
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
        } else {
        }
        return err;
    }
    virtual int on_content_encoding_option_set
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
        } else {
        }
        return err;
    }
    virtual int on_content_encoding_option
    (int optval, const char_t* optarg, const char_t* optname,
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
            if (!(err = on_set_content_encoding_option(optarg, optind, argc, argv, env))) {
                if (!(err = on_content_encoding_option_set(optarg, optind, argc, argv, env))) {
                    if (!(err = set_content_encoding_run(argc, argv, env))) {
                        if (!(err = content_encoding_run_set(argc, argv, env))) {
                        }
                    }
                }
            }
        } else {
            if (!(err = set_content_encoding_run(argc, argv, env))) {
                if (!(err = content_encoding_run_set(argc, argv, env))) {
                }
            }
        }
        return err;
    }
    virtual const char_t* content_encoding_option_usage(const char_t*& optarg, const struct option* longopt) {
        const char_t* chars = XOS_APP_CONSOLE_PROTOCOL_XTTP_BASE_MAIN_CONTENT_ENCODING_OPTUSE;
        optarg = XOS_APP_CONSOLE_PROTOCOL_XTTP_BASE_MAIN_CONTENT_ENCODING_OPTARG;
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

        case XOS_APP_CONSOLE_PROTOCOL_XTTP_BASE_MAIN_CONTENT_OPTVAL_C:
            err = this->on_content_option(optval, optarg, optname, optind, argc, argv, env);
            break;
        case XOS_APP_CONSOLE_PROTOCOL_XTTP_BASE_MAIN_CONTENT_TYPE_OPTVAL_C:
            err = this->on_content_type_option(optval, optarg, optname, optind, argc, argv, env);
            break;
        case XOS_APP_CONSOLE_PROTOCOL_XTTP_BASE_MAIN_CONTENT_ENCODING_OPTVAL_C:
            err = this->on_content_encoding_option(optval, optarg, optname, optind, argc, argv, env);
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

        case XOS_APP_CONSOLE_PROTOCOL_XTTP_BASE_MAIN_CONTENT_OPTVAL_C:
            chars = this->content_option_usage(optarg, longopt);
            break;
        case XOS_APP_CONSOLE_PROTOCOL_XTTP_BASE_MAIN_CONTENT_TYPE_OPTVAL_C:
            chars = this->content_type_option_usage(optarg, longopt);
            break;
        case XOS_APP_CONSOLE_PROTOCOL_XTTP_BASE_MAIN_CONTENT_ENCODING_OPTVAL_C:
            chars = this->content_encoding_option_usage(optarg, longopt);
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
        static const char_t* chars = XOS_APP_CONSOLE_PROTOCOL_XTTP_BASE_MAIN_OPTIONS_CHARS;
        static struct option optstruct[]= {
            XOS_APP_CONSOLE_PROTOCOL_XTTP_BASE_MAIN_OPTIONS_OPTIONS
            {0, 0, 0, 0}};
        longopts = optstruct;
        return chars;
    }
    /// arguments
    virtual const char_t* arguments(const char_t**& argv) {
        static const char_t* _args = XOS_APP_CONSOLE_PROTOCOL_XTTP_BASE_MAIN_ARGS;
        static const char_t* _argv[] = {
            XOS_APP_CONSOLE_PROTOCOL_XTTP_BASE_MAIN_ARGV
            0};
        argv = _argv;
        return _args;
    }
    //////////////////////////////////////////////////////////////////////////

    //////////////////////////////////////////////////////////////////////////
protected:
}; /// class main_optt 
typedef main_optt<> main_opt;

} /// namespace base 
} /// namespace xttp 
} /// namespace protocol 
} /// namespace console 
} /// namespace app 
} /// namespace xos 

#endif /// ndef XOS_APP_CONSOLE_PROTOCOL_XTTP_BASE_MAIN_OPT_HPP
