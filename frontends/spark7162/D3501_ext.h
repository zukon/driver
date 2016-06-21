/*$Source$*/
/*****************************文件头部注释*************************************/
//
//			Copyright (C), 2011-2016, AV Frontier Tech. Co., Ltd.
//
//
// 文 件 名：   $RCSfile$
//
// 创 建 者：   Administrator
//
// 创建时间：   2011.05.20
//
// 最后更新：   $Date$
//
//				$Author$
//
//				$Revision$
//
//				$State$
//
// 文件描述：   D3501外部头文件
//
/******************************************************************************/

#ifndef __D3501_EXT_H
#define __D3501_EXT_H

/********************************  文件包含********************************/

#ifdef __cplusplus
extern "C" {
#endif

/********************************  常量定义********************************/

/********************************  数据结构********************************/

struct d3501_config
{
	u32                 i;
	u8                  name[32];
	struct i2c_adapter  *pI2c;
};

/********************************  宏 定 义**********************************/

/********************************  变量定义********************************/

/********************************  变量引用********************************/

/********************************  函数声明********************************/

extern struct dvb_frontend *
dvb_d3501_fe_qpsk_attach(const struct d3501_config *config,
			 struct i2c_adapter *i2c);

/********************************  函数定义********************************/

#ifdef __cplusplus
}
#endif

#endif  /* __D3501_EXT_H */
/* EOF------------------------------------------------------------------------*/

/* BOL-------------------------------------------------------------------*/
//$Log$
/* EOL-------------------------------------------------------------------*/

