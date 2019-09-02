#pragma once
class WxFileToolPlugin :
	public CPlugin
{
	DECLARE_PLUGIN(WxFileToolPlugin)

private:
	WxFileToolPlugin(){}

public:
	virtual void Init();

	virtual void Query(CPluginInfo& plugininfo);
};

