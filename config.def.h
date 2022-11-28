/* user and group to drop privileges to */
static const char *user  = "user";
static const char *group = "user";

static const char *colorname[NUMCOLS] = {
    [INIT] =   "#1e1e2e",     /* after initialization */
    [INPUT] =  "#89b4fa",   /* during input */
    [FAILED] = "#FF0000",   /* wrong password */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;
