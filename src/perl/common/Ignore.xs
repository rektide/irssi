MODULE = Irssi  PACKAGE = Irssi

void
ignores()
PREINIT:
	GSList *tmp;
	HV *stash;
PPCODE:
	stash = gv_stashpv("Irssi::Ignore", 0);
	for (tmp = servers; tmp != NULL; tmp = tmp->next) {
		push_bless(tmp->data, stash);
	}

int
ignore_check(nick, host, channel, text, level)
	char *nick
	char *host
	char *channel
	char *text
	int level
CODE:
	RETVAL = ignore_check(NULL, nick, host, channel, text, level);
OUTPUT:
	RETVAL

#*******************************
MODULE = Irssi  PACKAGE = Irssi::Server
#*******************************

int
ignore_check(server, nick, host, channel, text, level)
	Irssi::Server server
	char *nick
	char *host
	char *channel
	char *text
	int level

#*******************************
MODULE = Irssi  PACKAGE = Irssi::Ignore  PREFIX = ignore_
#*******************************

void
ignore_add_rec(rec)
	Irssi::Ignore rec

void
ignore_update_rec(rec)
	Irssi::Ignore rec
