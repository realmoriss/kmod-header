#include <linux/module.h>
#include <linux/sched.h>
#include <linux/init_task.h>

MODULE_LICENSE("GPL v2");
MODULE_AUTHOR("Istvan Telek <moriss@realmoriss.me>");

static int __init pslist_init(void) {
	struct task_struct* init;
	init = &init_task;
	return 0;
}

static void __exit pslist_exit(void) {
}

module_init(pslist_init);
module_exit(pslist_exit);
