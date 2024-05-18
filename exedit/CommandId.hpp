#pragma once

#include <Windows.h>

namespace ExEdit {
    namespace CommandId {
        inline static constexpr const DWORD FRAME_MOVE_BEGIN    = 1102; // ICON_LL
        inline static constexpr const DWORD FRAME_MOVE_END      = 1103; // ICON_RR

        inline static constexpr const DWORD FILTER_INIT         = 1105;

        inline static constexpr const DWORD FILTER_SET_DEFVALUE = 1108;
        inline static constexpr const DWORD FILTER_MAKE_ALIAS   = 1109;

        inline static constexpr const DWORD FILTER_MOVEUP       = 1116;
        inline static constexpr const DWORD FILTER_MOVEDOWN     = 1117;
        
        inline static constexpr const DWORD id1106              = 1106;
        inline static constexpr const DWORD id1107     = 1107; // ICON_PL

        inline static constexpr const DWORD id1115     = 1115; // ICON_CH
        
        inline static constexpr const DWORD id1120     = 1120; // ICON_CA0
        inline static constexpr const DWORD id1121     = 1121; // ICON_CL0

        inline static constexpr const DWORD FILTER_DELETE       = 4300;

        inline static constexpr const DWORD FILTER_VALIDATE     = 4400;

        inline static constexpr const DWORD FILTER_FOLD         = 4500;

    }


    namespace ExtendedFilter {
        namespace Message {
            inline static constexpr const DWORD WM_EXTENDEDFILTER_COMMAND = WM_USER + 0x302;
        }
        namespace CommandId { // LOWORD(wparam)

            inline static constexpr const DWORD EXTENDEDFILTER_APEND_FILTER = 0x1e14;
            // lparam : ?

            inline static constexpr const DWORD EXTENDEDFILTER_DELETE_FILTER = 0x1e15;

            inline static constexpr const DWORD EXTENDEDFILTER_D_AND_D = 0x1e16;
            // lparam : ?

            inline static constexpr const DWORD EXTENDEDFILTER_SPLIT_OBJECT = 0x1e17;
            // lparam : ?

            inline static constexpr const DWORD EXTENDEDFILTER_UPDATE_TRACK = 0x1e19;
            // HIWORD(wparam) : track_id

            inline static constexpr const DWORD EXTENDEDFILTER_UPDATE_CHECK = 0x1e1a;
            // HIWORD(wparam) : check_id

            inline static constexpr const DWORD EXTENDEDFILTER_PUSH_BUTTON = 0x1e1b;
            // HIWORD(wparam) : button_id

            inline static constexpr const DWORD EXTENDEDFILTER_SELECT_DROPDOWN = 0x1e1c;
            // HIWORD(wparam) : list_id

// 0x1e1e ?
// 0x1e1f ?
// 0x1e20 ?

            inline static constexpr const DWORD EXTENDEDFILTER_UPDATE_OBJECT_LENGTH = 0x1e22;
            // lparam : left == 1, right == 2, other == 0

            inline static constexpr const DWORD EXTENDEDFILTER_RUN_UNDO = 0x1e26;

            inline static constexpr const DWORD EXTENDEDFILTER_MAIN_MOUSE_DOWN = 0x1e6e;

            inline static constexpr const DWORD EXTENDEDFILTER_MAIN_MOUSE_UP = 0x1e6f;

            inline static constexpr const DWORD EXTENDEDFILTER_MAIN_MOUSE_MOVE = 0x1e70;

            inline static constexpr const DWORD EXTENDEDFILTER_MAIN_KEY_DOWN = 0x1e71;

            inline static constexpr const DWORD EXTENDEDFILTER_MAIN_KEY_UP = 0x1e72;

        }
    }
}
