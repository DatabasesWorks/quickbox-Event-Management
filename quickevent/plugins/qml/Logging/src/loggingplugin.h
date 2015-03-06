#ifndef LOGGINGPLUGIN_H
#define LOGGINGPLUGIN_H

#include <qf/qmlwidgets/framework/plugin.h>
#include <qf/qmlwidgets/framework/ipersistentsettings.h>
/*
namespace qf {
namespace qmlwidgets {
namespace framework {
class DockWidget;
}
}
}
*/
class QDockWidget;

class LoggingPlugin : public qf::qmlwidgets::framework::Plugin, public qf::qmlwidgets::framework::IPersistentSettings
{
	Q_OBJECT
	typedef qf::qmlwidgets::framework::Plugin Super;
public:
	LoggingPlugin(QObject *parent = nullptr);
private:
	Q_SLOT void onInstalled();
	Q_SLOT void saveSettings();
	void loadSettings();
private:
	void setLogDockVisible(bool on = true);
private:
	QDockWidget *m_logDockWidget = nullptr;
};

#endif // LOGGINGPLUGIN_H