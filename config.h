#define CMDLENGTH 45
#define DELIMITER "  "
#define CLICKABLE_BLOCKS

const Block blocks[] = {
	BLOCK("dblocks-disk",    1800, 19),
	BLOCK("dblocks-memory",  10,   20),
	BLOCK("dblocks-load", 5,    21),
	BLOCK("dblocks-network", 5,    24),
	BLOCK("dblocks-battery", 5,    25),
	BLOCK("dblocks-volume",  0,    5),
	BLOCK("dblocks-date",    1,    27)
};
