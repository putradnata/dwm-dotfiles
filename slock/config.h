/* user and group to drop privileges to */
static const char *user  = "nobody";
static const char *group = "nobody";

static const char *colorname[NUMCOLS] = {
	[INIT] =   "black",     /* after initialization */
	[INPUT] =  "#005577",   /* during input */
	[FAILED] = "#CC3333",   /* wrong password */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;

/* default message */
static const char * message = "Screen Locked.";

/* text color */
static const char * text_color = "#ffffff";

/* text size (must be a valid size) */
/* static const char * font_name = "6x10"; */
static const char * font_name = "-misc-ubuntu condensed-medium-i-normal--0-0-0-0-p-0-iso8859-15";


/* Background image path, should be available to the user above */
static const char* background_image = "/usr/share/wallpapers/default-1920x1080.jpg";
