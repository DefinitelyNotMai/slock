/* user and group to drop privileges to */
static const char *user  = "mai";
static const char *group = "mai";

static const char *colorname[NUMCOLS] = {
	[INIT] =   "#1f1f1f",     /* after initialization */
	[INPUT] =  "#757575",   /* during input */
	[FAILED] = "#CC3333",   /* wrong password */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;
