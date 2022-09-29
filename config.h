#define CMDLENGTH 45
#define DELIMITER "  "
#define CLICKABLE_BLOCKS

const Block blocks[] = {
	BLOCK("sb-disk",    1800, 19),
	BLOCK("sb-memory",  10,   20),
	BLOCK("sb-loadavg", 5,    21),
	BLOCK("sb-network", 5,    24),
	BLOCK("sb-battery", 5,    25),
	BLOCK("sb-volume",  0,    5),
	BLOCK("sb-date",    1,    27)
};
