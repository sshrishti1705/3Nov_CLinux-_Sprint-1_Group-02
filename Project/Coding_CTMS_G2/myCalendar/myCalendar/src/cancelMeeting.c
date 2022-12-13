#include <common.h>
#include <cancelMeeting.h>
#include <scheduleMeeting.h>
 
void cancelMeeting()
{
	if (remove("./data/meetings.txt") == 0)
		printf("\n\t Meeting Successfully deleted !!!!");
	else
		printf("\n\tUnable to delete the Meeting !!!!");
}
