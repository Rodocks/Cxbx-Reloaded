// ******************************************************************
// *
// *    .,-:::::    .,::      .::::::::.    .,::      .:
// *  ,;;;'````'    `;;;,  .,;;  ;;;'';;'   `;;;,  .,;;
// *  [[[             '[[,,[['   [[[__[[\.    '[[,,[['
// *  $$$              Y$$$P     $$""""Y$$     Y$$$P
// *  `88bo,__,o,    oP"``"Yo,  _88o,,od8P   oP"``"Yo,
// *    "YUMMMMMP",m"       "Mm,""YUMMMP" ,m"       "Mm,
// *
// *   Cxbx->Win32->CxbxKrnl->XG.1.0.5558.cpp
// *
// *  This file is part of the Cxbx project.
// *
// *  Cxbx and Cxbe are free software; you can redistribute them
// *  and/or modify them under the terms of the GNU General Public
// *  License as published by the Free Software Foundation; either
// *  version 2 of the license, or (at your option) any later version.
// *
// *  This program is distributed in the hope that it will be useful,
// *  but WITHOUT ANY WARRANTY; without even the implied warranty of
// *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
// *  GNU General Public License for more details.
// *
// *  You should have recieved a copy of the GNU General Public License
// *  along with this program; see the file COPYING.
// *  If not, write to the Free Software Foundation, Inc.,
// *  59 Temple Place - Suite 330, Bostom, MA 02111-1307, USA.
// *
// *  (c) 2002-2003 Aaron Robinson <caustik@caustik.com>
// *
// *  All rights reserved
// *
// ******************************************************************

// ******************************************************************
// * XGSwizzleBox
// ******************************************************************
OOVPA_NO_XREF(XGSwizzleBox, 5558, 10)

        // XGSwizzleBox+0x60 : sub ecx, [eax]
        { 0x60, 0x2B }, // (Offset,Value)-Pair #1
        { 0x61, 0x08 }, // (Offset,Value)-Pair #2

        // XGSwizzleBox+0x8E : lea ecx, [ebp+0xD8]
        { 0x8E, 0x8D }, // (Offset,Value)-Pair #3
        { 0x8F, 0x4D }, // (Offset,Value)-Pair #4
        { 0x90, 0xD8 }, // (Offset,Value)-Pair #5

        // XGSwizzleBox+0xD5 : shl eax, 2
        { 0xD5, 0xC1 }, // (Offset,Value)-Pair #6
        { 0xD6, 0xE0 }, // (Offset,Value)-Pair #7
        { 0xD7, 0x02 }, // (Offset,Value)-Pair #8

        // XGSwizzleBox+0xE2 : test ebx, ebx
        { 0xE2, 0x85 }, // (Offset,Value)-Pair #9
        { 0xE3, 0xDB }, // (Offset,Value)-Pair #10
OOVPA_END;

// ******************************************************************
// * XGSwizzleRect
// ******************************************************************
OOVPA_NO_XREF(XGSwizzleRect, 5558, 8)

        { 0x1E, 0x03 },
        { 0x3E, 0x89 },
        { 0x5E, 0x83 },
        { 0x7E, 0x6C },
        { 0x9E, 0xFF },
        { 0xBE, 0xFF },
        { 0xDE, 0x89 },
        { 0xFE, 0x89 },
OOVPA_END;

/* Leave unpatched
// ******************************************************************
// * XGUnswizzleRect
// ******************************************************************
OOVPA_NO_XREF(XGUnswizzleRect, 5558, 8)

        { 0x1E, 0x03 },
        { 0x3E, 0x00 },
        { 0x5E, 0xD2 },
        { 0x7E, 0x75 },
        { 0x9E, 0x70 },
        { 0xC1, 0xE9 },
        { 0xDE, 0x89 },
        { 0xFE, 0x60 },
OOVPA_END;
*/

// ******************************************************************
// * XGSwizzleBox
// ******************************************************************
//OOVPA_NO_XREF(XGSwizzleBox, 5558, 8)
//
//        { 0x1E, 0x75 },
//        { 0x3E, 0x4D },
//        { 0x5E, 0x48 },
//        { 0x7E, 0x04 },
//        { 0x9E, 0xD8 },
//        { 0xC0, 0x83 },
//        { 0xDE, 0xAF },
//        { 0xFE, 0x45 },
//OOVPA_END;

// ******************************************************************
// * XGUnswizzleBox
// ******************************************************************
OOVPA_NO_XREF(XGUnswizzleBox, 5558, 8)

        { 0x1E, 0x26 },
        { 0x3E, 0x55 },
        { 0x5E, 0x58 },
        { 0x7E, 0x89 },
        { 0xA0, 0xFF },
        { 0xBE, 0x2C },
        { 0xDE, 0x24 },
        { 0xFE, 0x20 },
OOVPA_END;

// ******************************************************************
// * XG_5558
// ******************************************************************
OOVPATable XG_5558[] = {

	REGISTER_OOVPA(XGIsSwizzledFormat, 4361, PATCH),
    
	// REGISTER_OOVPA(XGSwizzleRect, 5558, PATCH), // Leave unpatched
	REGISTER_OOVPA(XGSwizzleBox, 5558, PATCH), // (* UNTESTED *)
	// REGISTER_OOVPA(XGUnswizzleRect, 5558, PATCH), // Leave unpatched
	// REGISTER_OOVPA(XGUnswizzleBox, 5558, PATCH), //  (* UNTESTED *)
};

// ******************************************************************
// * XG_5558_SIZE
// ******************************************************************
uint32 XG_5558_SIZE = sizeof(XG_5558);
