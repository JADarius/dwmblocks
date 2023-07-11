#define CMDLENGTH 45
#define DELIMITER "  "
// #define CLICKABLE_BLOCKS

const Block blocks[] = {
//	BLOCK("sb-mail",    1800, 17),
//	BLOCK("/home/jadarius/status_scripts/dwm_mpc.sh",   1,    18),
//	BLOCK("sb-disk",    1800, 19),
//	BLOCK("sb-memory",  10,   20),
//	BLOCK("sb-loadavg", 5,    21),
//	BLOCK("sb-mic",     0,    26),
	BLOCK("/home/jadarius/status-scripts/light.sh",  0,    21),
	BLOCK("/home/jadarius/status-scripts/volume.sh",  0,    22),
	BLOCK("/home/jadarius/status-scripts/battery.sh", 5,    23),
	BLOCK("/home/jadarius/status-scripts/date.sh",    1,    24)
};
