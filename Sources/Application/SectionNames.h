/*
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

/**
 * \file      SectionNames.h
 * \author    Ratnadip Choudhury
 * \copyright Copyright (c) 2011, Robert Bosch Engineering and Business Solutions. All rights reserved.
 */

#pragma once

enum eSECTION_ID // These IDs should be maintained with load sequence
{
    DATABASE_SECTION_ID = 0x0,
    DATABASE_SECTION_J1939_ID,
    DIL_SECTION_ID,
    FILTER_SECTION_ID,
    MAINFRAME_SECTION_ID,
    SIGWATCH_SECTION_ID,
    SIGWATCH_SECTION_J1939_ID,
    GRAPH_SECTION_ID,
    LOG_SECTION_ID,
    LOG_SECTION_J1939_ID,
    SIMSYS_SECTION_ID,
    SIMSYS_SECTION_J1939_ID,
    REPLAY_SECTION_ID,
    MSGWND_SECTION_ID,
    MSGWND_SECTION_J1939_ID,
    TXWND_SECTION_ID,
    WAVEFORMDATA_SECTION_ID,
    BUS_STATISTICS_SECTION_ID,
    TEST_SETUP_EDITOR_SECTION_ID,
    TEST_SUITE_EXECUTOR_SECTION_ID,
    SECTION_TOTAL
};

//This Names shold be maintained with eSECTION_ID sequence
static char SectionName[SECTION_TOTAL][MAX_PATH] =
{
    "DatabaseConfigSectionName",
    "DatabaseConfigSectionNameJ1939",
    "DilConfigSectionName",
    "FilterConfigSectionName",
    "MainFrameConfigSectionName",
    "SigWatchConfigSectionName",
    "SigWatchConfigSectionNameJ1939",
    "GraphConfigSectionName",
    "LogConfigSectionName",
    "LogConfigSectionNameJ1939",
    "SimSysConfigSectionName",
    "SimSysConfigSectionNameJ1939",
    "ReplayConfigSectionName",
    "MsgWndConfigSectionName",
    "MsgWndConfigSectionNameJ1939",
    "TxWndConfigSectionName",
    "WaveformConfigSectionName",
    "BusStatsConfigSectionName",
    "TestSetupEditorSectionName",
    "TestSuiteExecutorSectionName"
};
