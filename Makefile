NAME	:= ft

METHODS	:=		\
	atoi		\
	bzero		\
	calloc		\
	isalnum		\
	isalpha		\
	isascii		\
	isdigit		\
	isprint		\
	itoa		\
	memchr		\
	memcmp		\
	memcpy		\
	memmove		\
	memset		\
	putchar_fd	\
	putendl_fd	\
	putnbr_fd	\
	putstr_fd	\
	split		\
	strchr		\
	strdup		\
	striteri	\
	strjoin		\
	strlcat		\
	strlcpy		\
	strlen		\
	strmapi		\
	strncmp		\
	strnstr		\
	strrchr		\
	strtrim		\
	substr		\
	tolower		\
	toupper

MK	:= ./mk/
include $(MK)/library.mk
