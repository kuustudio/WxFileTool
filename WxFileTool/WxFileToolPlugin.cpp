#include "stdafx.h"
#include "WxFileToolPlugin.h"


IMPLEMENT_PLUGIN(WxFileToolPlugin)

void WxFileToolPlugin::Init()
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState());

	// merge menu
	CMenu append;
	append.LoadMenu(IDR_MENU1);
	MergeMenu(&append, TRUE);
}

void WxFileToolPlugin::Query(CPluginInfo& plugininfo)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState());

	plugininfo.m_strName = _T("WeiXin Tool");
	plugininfo.m_strBlurb = _T("微信文件传输爬取");
	plugininfo.m_strHelp = _T("暂无");
	plugininfo.m_strAuthor = _T("wangzha");
	plugininfo.m_strCopyRight = _T("Copyright wangzha");
	plugininfo.m_strDate = _T("2018.09.11");
	plugininfo.m_strMenuLabel = "插件";
}

