#ifndef H_EXTENSIONS_CUTEHMI_BITCOINCOM_0_INCLUDE_CUTEHMI_BITCOINCOM_LOGGING_HPP
#define H_EXTENSIONS_CUTEHMI_BITCOINCOM_0_INCLUDE_CUTEHMI_BITCOINCOM_LOGGING_HPP

#include <cutehmi/loggingMacros.hpp>

Q_DECLARE_LOGGING_CATEGORY(cutehmi_bitcoincom_0_loggingCategory)

namespace cutehmi {
namespace bitcoincom {

inline
const QLoggingCategory & loggingCategory()
{
	return cutehmi_bitcoincom_0_loggingCategory();
}

}
}

#endif

//(c)MP: Copyright © 2019, Michal Policht. All rights reserved.
//(c)MP: This Source Code Form is subject to the terms of the Mozilla Public License, v. 2.0. If a copy of the MPL was not distributed with this file, You can obtain one at http://mozilla.org/MPL/2.0/.
