#include "QMLPlugin.hpp"
#include "qqmlsettings_p.h"

#include <cutehmi/workarounds/qt/labs/settings/metadata.hpp>

#include <QtQml>

//<Doxygen-3.workaround target="Doxygen" cause="missing">
#ifdef DOXYGEN_WORKAROUND

namespace CuteHMI {
namespace Workarounds {
namespace Qt {
namespace labs {
namespace settings {

/**
 * Exposes cutehmi::workarounds::qt::labs::settings::internal::QQmlSettings to QML.
 */
class Settings: public cutehmi::workarounds::qt::labs::settings::internal::QQmlSettings {};

}
}
}
}
}

#endif
//</Doxygen-3.workaround>

namespace cutehmi {
namespace workarounds {
namespace qt {
namespace labs {
namespace settings {
namespace internal {

/**
 * Register QML types.
 * @param uri URI.
 */
void QMLPlugin::registerTypes(const char * uri)
{
	Q_ASSERT(uri == QLatin1String("CuteHMI.Workarounds.Qt.labs.settings"));

	qmlRegisterType<QQmlSettings>(uri, CUTEHMI_WORKAROUNDS_QT_LABS_SETTINGS_MAJOR, 0, "Settings");
}

}
}
}
}
}
}

//(c)C: Copyright © 2021, Michał Policht <michal@policht.pl>. All rights reserved.
//(c)C: SPDX-License-Identifier: LGPL-3.0-or-later OR GPL-2.0-or-later
//(c)C: CuteHMI.Workarounds.Qt.labs.settings.1 extension is free software: you can redistribute it and/or modify it under the terms of the GNU Lesser General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version approved by the KDE Free Qt Foundation.
//(c)C: This file is a part of CuteHMI.Workarounds.Qt.labs.settings.1 extension.
//(c)C: Additionally, this file is licensed under terms of the GNU General Public License as published by the Free Software Foundation, either version 2 of the License, or (at your option) any later version approved by the KDE Free Qt Foundation.
//(c)C: CuteHMI.Workarounds.Qt.labs.settings.1 extension is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU Lesser General Public License or GNU General Public License for more details.
//(c)C: You should have received a copy of the GNU Lesser General Public License along with CuteHMI.Workarounds.Qt.labs.settings.1 extension. If not, see <https://www.gnu.org/licenses/>.
//(c)C: You should have received a copy of the GNU General Public License along with CuteHMI.Workarounds.Qt.labs.settings.1 extension. If not, see <https://www.gnu.org/licenses/>.
