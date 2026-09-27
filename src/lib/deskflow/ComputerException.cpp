/*
 * Deskflow -- mouse and keyboard sharing utility
 * SPDX-FileCopyrightText: (C) 2025 - 2026 Deskflow Developers
 * SPDX-FileCopyrightText: (C) 2012 - 2016 Synergy App Ltd
 * SPDX-FileCopyrightText: (C) 2002 Chris Schoeneman
 * SPDX-License-Identifier: GPL-2.0-only WITH LicenseRef-OpenSSL-Exception
 */

#include "deskflow/ComputerException.h"

//
// ComputerOpenFailureException
//

QString ComputerOpenFailureException::getWhat() const throw()
{
  return format("ComputerOpenFailureException", "unable to open computer settings");
}

//
// ComputerUnavailableException
//

QString ComputerUnavailableException::getWhat() const throw()
{
  return format("ComputerUnavailableException", "unable to open computer settings");
}
