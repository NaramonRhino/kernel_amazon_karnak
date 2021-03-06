#ifndef __MUSBFSH_LINUX_DEBUG_H__
#define __MUSBFSH_LINUX_DEBUG_H__

/* for normal log, very detail, impact performance a lot*/
extern int musbfsh_debug;
#define yprintk(facility, format, args...)	do { \
		if (musbfsh_debug) { \
			printk(facility "[MUSBFSH] %s %d: " format , \
					__func__, __LINE__ , ## args); \
		} \
	} while (0)

#define INFO(fmt, args...) yprintk(KERN_NOTICE, fmt, ## args)

/* for critical log */
#define zprintk(facility, format, args...) \
		printk(facility "[MUSBFSH] %s %d: " format , \
				__func__, __LINE__ , ## args)

#define WARNING(fmt, args...) zprintk(KERN_WARNING, fmt, ## args)
#define ERR(fmt, args...) zprintk(KERN_ERR, fmt, ## args)
extern int musbfsh_init_debugfs(struct musbfsh *musb);
extern void musbfsh_exit_debugfs(struct musbfsh *musb);

#endif

