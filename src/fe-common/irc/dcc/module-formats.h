#include "formats.h"

enum {
	IRCTXT_MODULE_NAME,

	IRCTXT_FILL_1,

	IRCTXT_OWN_DCC,
	IRCTXT_OWN_DCC_ACTION,
	IRCTXT_OWN_DCC_ACTION_QUERY,
	IRCTXT_OWN_DCC_CTCP,
	IRCTXT_DCC_MSG,
	IRCTXT_ACTION_DCC,
	IRCTXT_ACTION_DCC_QUERY,
	IRCTXT_OWN_DCC_QUERY,
	IRCTXT_DCC_MSG_QUERY,
	IRCTXT_DCC_CTCP,
	IRCTXT_DCC_CHAT,
	IRCTXT_DCC_CHAT_CHANNEL,
	IRCTXT_DCC_CHAT_NOT_FOUND,
	IRCTXT_DCC_CHAT_CONNECTED,
	IRCTXT_DCC_CHAT_DISCONNECTED,
	IRCTXT_DCC_SEND,
	IRCTXT_DCC_SEND_CHANNEL,
	IRCTXT_DCC_SEND_EXISTS,
	IRCTXT_DCC_SEND_NO_ROUTE,
	IRCTXT_DCC_SEND_LOOKUP_FAILED,
	IRCTXT_DCC_SEND_NOT_FOUND,
	IRCTXT_DCC_SEND_FILE_OPEN_ERROR,
	IRCTXT_DCC_SEND_CONNECTED,
	IRCTXT_DCC_SEND_COMPLETE,
	IRCTXT_DCC_SEND_ABORTED,
	IRCTXT_DCC_GET_NOT_FOUND,
	IRCTXT_DCC_GET_CONNECTED,
	IRCTXT_DCC_GET_COMPLETE,
	IRCTXT_DCC_GET_ABORTED,
        IRCTXT_DCC_GET_WRITE_ERROR,
	IRCTXT_DCC_UNKNOWN_CTCP,
	IRCTXT_DCC_UNKNOWN_REPLY,
	IRCTXT_DCC_UNKNOWN_TYPE,
        IRCTXT_DCC_INVALID_CTCP,
	IRCTXT_DCC_CONNECT_ERROR,
	IRCTXT_DCC_CANT_CREATE,
	IRCTXT_DCC_REJECTED,
        IRCTXT_DCC_REQUEST_SEND,
	IRCTXT_DCC_CLOSE,
	IRCTXT_DCC_LOWPORT,
	IRCTXT_DCC_LIST_HEADER,
	IRCTXT_DCC_LIST_LINE_CHAT,
	IRCTXT_DCC_LIST_LINE_FILE,
	IRCTXT_DCC_LIST_LINE_QUEUED_SEND,
	IRCTXT_DCC_LIST_FOOTER,
	IRCTXT_DCC_LIST_LINE_SERVER,
	IRCTXT_DCC_SERVER_STARTED,
	IRCTXT_DCC_SERVER_CLOSED
};

extern FORMAT_REC fecommon_irc_dcc_formats[];
