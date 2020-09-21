#ifndef _GRAPHICPOLICY_H_
#define _GRAPHICPOLICY_H_


/***********************************************************************************************
*函数名: graphic_policy
*函数功能描述: 判断传入的问题id是否需要workaround。并且自动获取并判断该问题的进程名是否符合条件。
*函数参数  : 问题id，如：2001、3002
*函数返回值: 0(disable); 1(enable);
*作者: Zhixiong Lin
*函数创建日期: 2020/09/05
***********************************************************************************************/
int graphic_policy(int obj_bug_id);






#endif //_GRAPHICPOLICY_H_

