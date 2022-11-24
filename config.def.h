/* user and group to drop privileges to */
static const char *user  = "user";
static const char *group = "user";

static const char *colorname[NUMCOLS] = {
    [INIT] =   "#282a36",     /* after initialization */
    [INPUT] =  "#8a8ea8",   /* during input */
    [FAILED] = "#FF0000",   /* wrong password */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;
