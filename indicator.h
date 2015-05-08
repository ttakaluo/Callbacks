typedef int (*alarm)(int type);

//int (*p[3])(int type);

alarm p[3];

void registerAlarm(alarm a);

int hitAlarm();

