// ******************************************************************
// *
// *    .,-:::::    .,::      .::::::::.    .,::      .:
// *  ,;;;'````'    `;;;,  .,;;  ;;;'';;'   `;;;,  .,;;
// *  [[[             '[[,,[['   [[[__[[\.    '[[,,[['
// *  $$$              Y$$$P     $$""""Y$$     Y$$$P
// *  `88bo,__,o,    oP"``"Yo,  _88o,,od8P   oP"``"Yo,
// *    "YUMMMMMP",m"       "Mm,""YUMMMP" ,m"       "Mm,
// *
// *   Cxbx->Win32->CxbxKrnl->DSound.1.0.4627.cpp
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
// * DirectSoundDoWork
// ******************************************************************
#define DirectSoundDoWork_4627 DirectSoundDoWork_4361

// ******************************************************************
// * DirectSoundGetSampleTime
// ******************************************************************
#define DirectSoundGetSampleTime_4627 DirectSoundGetSampleTime_4361

// ******************************************************************
// * DirectSound_CDirectSound::CreateSoundBuffer
// ******************************************************************
OOVPA_XREF(DirectSound_CDirectSound_CreateSoundBuffer, 4627, 14,

    XREF_DSCREATESOUNDBUFFER,
    XRefZero)

        // DirectSound_CDirectSound_CreateSoundBuffer+0x23 : mov eax, 0x80004005
        { 0x23, 0xB8 }, // (Offset,Value)-Pair #1
        { 0x24, 0x05 }, // (Offset,Value)-Pair #2
        { 0x25, 0x40 }, // (Offset,Value)-Pair #3
        { 0x27, 0x80 }, // (Offset,Value)-Pair #4

        // DirectSound_CDirectSound_CreateSoundBuffer+0x2A : push 0x24
        { 0x2A, 0x6A }, // (Offset,Value)-Pair #5
        { 0x2B, 0x24 }, // (Offset,Value)-Pair #6

        // DirectSound_CDirectSound_CreateSoundBuffer+0x4A : add esi, 0x7FF8FFF2
        { 0x4A, 0x81 }, // (Offset,Value)-Pair #7
        { 0x4B, 0xE6 }, // (Offset,Value)-Pair #8
        { 0x4C, 0xF2 }, // (Offset,Value)-Pair #9
        { 0x4D, 0xFF }, // (Offset,Value)-Pair #10
        { 0x4E, 0xF8 }, // (Offset,Value)-Pair #11
        { 0x4F, 0x7F }, // (Offset,Value)-Pair #12

        // DirectSound_CDirectSound_CreateSoundBuffer+0x99 : retn 0x10
        { 0x99, 0xC2 }, // (Offset,Value)-Pair #13
        { 0x9A, 0x10 }, // (Offset,Value)-Pair #14
OOVPA_END;

// ******************************************************************
// * DirectSound_CDirectSound::SetMixBinHeadroom
// ******************************************************************
OOVPA_XREF(DirectSound_CDirectSound_SetMixBinHeadroom, 4627, 15,

    XREF_DSSETMIXBINHEADROOMA,
    XRefZero)

        // DirectSound_CDirectSound_SetMixBinHeadroom+0x21 : mov eax, 0x80004005
        { 0x21, 0xB8 }, // (Offset,Value)-Pair #1
        { 0x22, 0x05 }, // (Offset,Value)-Pair #2
        { 0x23, 0x40 }, // (Offset,Value)-Pair #3
        { 0x24, 0x00 }, // (Offset,Value)-Pair #4
        { 0x25, 0x80 }, // (Offset,Value)-Pair #5

        // DirectSound_CDirectSound_SetMixBinHeadroom+0x34 : mov bl, [esp+0x14]
        { 0x34, 0x8A }, // (Offset,Value)-Pair #6
        { 0x35, 0x5C }, // (Offset,Value)-Pair #7
        { 0x36, 0x24 }, // (Offset,Value)-Pair #8
        { 0x37, 0x14 }, // (Offset,Value)-Pair #9

        // DirectSound_CDirectSound_SetMixBinHeadroom+0x39 : mov [edx+ecx+0x14], bl
        { 0x39, 0x88 }, // (Offset,Value)-Pair #10
        { 0x3A, 0x5C }, // (Offset,Value)-Pair #11
        { 0x3B, 0x0A }, // (Offset,Value)-Pair #12
        { 0x3C, 0x14 }, // (Offset,Value)-Pair #13

        // DirectSound_CDirectSound_SetMixBinHeadroom+0x5C : retn 0x0C
        { 0x5C, 0xC2 }, // (Offset,Value)-Pair #14
        { 0x5D, 0x0C }, // (Offset,Value)-Pair #15
OOVPA_END;

// ******************************************************************
// * IDirectSound_SetMixBinHeadroom
// ******************************************************************
OOVPA_XREF(IDirectSound_SetMixBinHeadroom, 4627, 12,

    XRefNoSaveIndex,
    XRefOne)

        // IDirectSound_SetMixBinHeadroom+0x19 : call [CDirectSound::SetMixBinHeadroom]
        XREF_ENTRY( 0x19, XREF_DSSETMIXBINHEADROOMA ), // (Offset,Value)-Pair #1

        // IDirectSound_SetMixBinHeadroom+0x04 : push [esp+0x0C]
        { 0x04, 0xFF }, // (Offset,Value)-Pair #2
        { 0x05, 0x74 }, // (Offset,Value)-Pair #3
        { 0x06, 0x24 }, // (Offset,Value)-Pair #4
        { 0x07, 0x0C }, // (Offset,Value)-Pair #5

        // IDirectSound_SetMixBinHeadroom+0x0E : add eax, 0xFFFFFFF8
        { 0x0E, 0x83 }, // (Offset,Value)-Pair #6
        { 0x0F, 0xC0 }, // (Offset,Value)-Pair #7
        { 0x10, 0xF8 }, // (Offset,Value)-Pair #8

        // IDirectSound_SetMixBinHeadroom+0x13 : sbb ecx, ecx
        { 0x13, 0x1B }, // (Offset,Value)-Pair #9
        { 0x14, 0xC9 }, // (Offset,Value)-Pair #10

        // IDirectSound_SetMixBinHeadroom+0x15 : and ecx, eax
        { 0x15, 0x23 }, // (Offset,Value)-Pair #11
        { 0x16, 0xC8 }, // (Offset,Value)-Pair #12
OOVPA_END;

// ******************************************************************
// * IDirectSoundBuffer_SetHeadroomA
// ******************************************************************
OOVPA_XREF(IDirectSoundBuffer_SetHeadroomA, 4928, 7,

    XREF_DSBUFFERSETHEADROOMA,
    XRefZero)

        { 0x03, 0x04 },
        { 0x08, 0x48 },
        { 0x0D, 0x24 },
        { 0x12, 0x48 },
        { 0x17, 0x8B },
        { 0x1F, 0x5E },
        { 0x21, 0x08 },
OOVPA_END;

// ******************************************************************
// * IDirectSoundBuffer_SetHeadroom
// ******************************************************************
OOVPA_XREF(IDirectSoundBuffer_SetHeadroom, 4928, 8,

    XRefNoSaveIndex,
    XRefOne)

        // IDirectSoundBuffer_SetHeadroom+0x32 : call [IDirectSoundBuffer_SetHeadroomA]
        XREF_ENTRY( 0x32, XREF_DSBUFFERSETHEADROOMA ),

        { 0x0C, 0x00 },
        { 0x12, 0x85 },
        { 0x1C, 0x15 },
        { 0x26, 0xEB },
        { 0x30, 0x10 },
        { 0x3A, 0x74 },
        { 0x47, 0x8B },
OOVPA_END;

// ******************************************************************
// * DirectSound_CDirectSound::SetVelocity
// ******************************************************************
OOVPA_XREF(DirectSound_CDirectSound_SetVelocity, 4627, 15,

    XREF_DSSETVELOCITYA,
    XRefZero)

        // DirectSound_CDirectSound_SetVelocity+0x24 : mov eax, 0x80004005
        { 0x24, 0xB8 }, // (Offset,Value)-Pair #1
        { 0x25, 0x05 }, // (Offset,Value)-Pair #2
        { 0x26, 0x40 }, // (Offset,Value)-Pair #3
        { 0x27, 0x00 }, // (Offset,Value)-Pair #4
        { 0x28, 0x80 }, // (Offset,Value)-Pair #5

        // DirectSound_CDirectSound_SetVelocity+0x37 : mov [edx+0x44], edi
        { 0x37, 0x89 }, // (Offset,Value)-Pair #6
        { 0x38, 0x7A }, // (Offset,Value)-Pair #7
        { 0x39, 0x44 }, // (Offset,Value)-Pair #8

        // DirectSound_CDirectSound_SetVelocity+0x4C : or byte ptr [eax+0x0x00A4], 0x80
        { 0x4C, 0x80 }, // (Offset,Value)-Pair #9
        { 0x4D, 0x88 }, // (Offset,Value)-Pair #10
        { 0x4E, 0xA4 }, // (Offset,Value)-Pair #11
        { 0x4F, 0x00 }, // (Offset,Value)-Pair #12
        { 0x52, 0x80 }, // (Offset,Value)-Pair #13

        // DirectSound_CDirectSound_SetVelocity+0x73 : retn 0x14
        { 0x73, 0xC2 }, // (Offset,Value)-Pair #14
        { 0x74, 0x14 }, // (Offset,Value)-Pair #15
OOVPA_END;

// ******************************************************************
// * DirectSound_CDirectSound::SetAllParametersA
// ******************************************************************
OOVPA_XREF(DirectSound_CDirectSound_SetAllParametersA, 4627, 10,

    XREF_DSSETALLPARAMETERSA,
    XRefZero)

        { 0x16, 0x68 }, // (Offset,Value)-Pair #1
        { 0x17, 0xE8 }, // (Offset,Value)-Pair #2
        { 0x18, 0xF7 }, // (Offset,Value)-Pair #3
        { 0x19, 0x2D }, // (Offset,Value)-Pair #4

        { 0x2F, 0xD9 }, // (Offset,Value)-Pair #5
        { 0x30, 0x41 }, // (Offset,Value)-Pair #6
        { 0x31, 0x04 }, // (Offset,Value)-Pair #7

        { 0x87, 0x8B }, // (Offset,Value)-Pair #8
        { 0x88, 0x50 }, // (Offset,Value)-Pair #9
        { 0x89, 0x08 }, // (Offset,Value)-Pair #10
OOVPA_END;

// ******************************************************************
// * DirectSound_CDirectSound::SetAllParametersA
// ******************************************************************
OOVPA_XREF(DirectSound_CDirectSound_SetAllParametersA, 4721, 10,

    XREF_DSSETALLPARAMETERSA,
    XRefZero)

        { 0x16, 0x68 }, // (Offset,Value)-Pair #1
        { 0x17, 0xD8 }, // (Offset,Value)-Pair #2
        { 0x18, 0x81 }, // (Offset,Value)-Pair #3
        { 0x19, 0x15 }, // (Offset,Value)-Pair #4

        { 0x2F, 0xD9 }, // (Offset,Value)-Pair #5
        { 0x30, 0x41 }, // (Offset,Value)-Pair #6
        { 0x31, 0x04 }, // (Offset,Value)-Pair #7

        { 0x87, 0x8B }, // (Offset,Value)-Pair #8
        { 0x88, 0x50 }, // (Offset,Value)-Pair #9
        { 0x89, 0x08 }, // (Offset,Value)-Pair #10
OOVPA_END;

// ******************************************************************
// * DirectSound::CDirectSound::SetAllParameters
// ******************************************************************
OOVPA_XREF(DirectSound_CDirectSound_SetAllParameters, 4928, 8,

    XREF_DSSETALLPARAMETERSA,
    XRefZero)

        { 0x1B, 0xFF },
        { 0x38, 0x08 },
        { 0x55, 0x5A },
        { 0x72, 0xD9 },
        { 0x8F, 0x2C },
        { 0xAC, 0x50 },
        { 0xC9, 0x10 },
        { 0xE6, 0x0C },
OOVPA_END;

// ******************************************************************
// * DirectSound_CDirectSoundVoiceSettings::SetMixBinVolumes
// ******************************************************************
OOVPA_XREF(DirectSound_CDirectSoundVoiceSettings_SetMixBinVolumes, 4627, 10,

    XREF_DSSETMIXBINVOLUMESC,
    XRefZero)

        // DirectSound_CDirectSoundVoiceSettings_SetMixBinVolumes+0x09 : jbe +0x16
        { 0x09, 0x76 }, // (Offset,Value)-Pair #1
        { 0x0A, 0x16 }, // (Offset,Value)-Pair #2

        // DirectSound_CDirectSoundVoiceSettings_SetMixBinVolumes+0x18 : mov [ecx+edi*4+0x30], eax
        { 0x18, 0x89 }, // (Offset,Value)-Pair #3
        { 0x19, 0x44 }, // (Offset,Value)-Pair #4
        { 0x1A, 0xB9 }, // (Offset,Value)-Pair #5
        { 0x1B, 0x30 }, // (Offset,Value)-Pair #6

        // DirectSound_CDirectSoundVoiceSettings_SetMixBinVolumes+0x1E : jb +0xEC
        { 0x1E, 0x72 }, // (Offset,Value)-Pair #7
        { 0x1F, 0xEC }, // (Offset,Value)-Pair #8

        // DirectSound_CDirectSoundVoiceSettings_SetMixBinVolumes+0x22 : retn 0x04
        { 0x22, 0xC2 }, // (Offset,Value)-Pair #9
        { 0x23, 0x04 }, // (Offset,Value)-Pair #10
OOVPA_END;

// ******************************************************************
// * DirectSound_CDirectSoundVoice::SetMixBinVolumes
// ******************************************************************
OOVPA_XREF(DirectSound_CDirectSoundVoice_SetMixBinVolumes, 4627, 17,

    XREF_DSSETMIXBINVOLUMESB,
    XRefOne)

        // DirectSound_CDirectSoundVoice_SetMixBinVolumes+0x0D : call [CDirectSoundVoiceSettings::SetMixBinVolumes]
        XREF_ENTRY( 0x0D, XREF_DSSETMIXBINVOLUMESC ), // (Offset,Value)-Pair #1

        // DirectSound_CDirectSoundVoice_SetMixBinVolumes+0x01 : mov esi, [esp+8]
        { 0x01, 0x8B }, // (Offset,Value)-Pair #2
        { 0x02, 0x74 }, // (Offset,Value)-Pair #3
        { 0x03, 0x24 }, // (Offset,Value)-Pair #4
        { 0x04, 0x08 }, // (Offset,Value)-Pair #5

        // DirectSound_CDirectSoundVoice_SetMixBinVolumes+0x05 : push [esp+0x0C]
        { 0x05, 0xFF }, // (Offset,Value)-Pair #6
        { 0x06, 0x74 }, // (Offset,Value)-Pair #7
        { 0x07, 0x24 }, // (Offset,Value)-Pair #8
        { 0x08, 0x0C }, // (Offset,Value)-Pair #9

        // DirectSound_CDirectSoundVoice_SetMixBinVolumes+0x09 : mov ecx, [esi+0x10]
        { 0x09, 0x8B }, // (Offset,Value)-Pair #10
        { 0x0A, 0x4E }, // (Offset,Value)-Pair #11
        { 0x0B, 0x10 }, // (Offset,Value)-Pair #12

        // DirectSound_CDirectSoundVoice_SetMixBinVolumes+0x11 : mov ecx, [esi+0x0C]
        { 0x11, 0x8B }, // (Offset,Value)-Pair #13
        { 0x12, 0x4E }, // (Offset,Value)-Pair #14
        { 0x13, 0x0C }, // (Offset,Value)-Pair #15

        // DirectSound_CDirectSoundVoice_SetMixBinVolumes+0x1A : retn 0x08
        { 0x1A, 0xC2 }, // (Offset,Value)-Pair #16
        { 0x1B, 0x08 }, // (Offset,Value)-Pair #17
OOVPA_END;

// ******************************************************************
// * DirectSound_CDirectSoundBuffer::SetMixBinVolumes
// ******************************************************************
OOVPA_XREF(DirectSound_CDirectSoundBuffer_SetMixBinVolumes, 4627, 17,

    XREF_DSSETMIXBINVOLUMESA,
    XRefOne)

        // DirectSound_CDirectSoundBuffer_SetMixBinVolumes+0x32 : call [CDirectSoundVoice::SetMixBinVolumes]
        XREF_ENTRY( 0x32, XREF_DSSETMIXBINVOLUMESB ), // (Offset,Value)-Pair #1

        // DirectSound_CDirectSoundBuffer_SetMixBinVolumes+0x21 : mov eax, 0x80004005
        { 0x21, 0xB8 }, // (Offset,Value)-Pair #2
        { 0x22, 0x05 }, // (Offset,Value)-Pair #3
        { 0x23, 0x40 }, // (Offset,Value)-Pair #4
        { 0x24, 0x00 }, // (Offset,Value)-Pair #5
        { 0x25, 0x80 }, // (Offset,Value)-Pair #6

        // DirectSound_CDirectSoundBuffer_SetMixBinVolumes+0x29 : push [esp+0x10]; push [esp+0x10]
        { 0x29, 0xFF }, // (Offset,Value)-Pair #7
        { 0x2A, 0x74 }, // (Offset,Value)-Pair #8
        { 0x2B, 0x24 }, // (Offset,Value)-Pair #9
        { 0x2C, 0x10 }, // (Offset,Value)-Pair #10
        { 0x2D, 0xFF }, // (Offset,Value)-Pair #11
        { 0x2E, 0x74 }, // (Offset,Value)-Pair #12
        { 0x2F, 0x24 }, // (Offset,Value)-Pair #13
        { 0x30, 0x10 }, // (Offset,Value)-Pair #14

        // DirectSound_CDirectSoundBuffer_SetMixBinVolumes+0x49 : pop edi
        { 0x49, 0x5F }, // (Offset,Value)-Pair #15

        // DirectSound_CDirectSoundBuffer_SetMixBinVolumes+0x4B : retn 0x08
        { 0x4B, 0xC2 }, // (Offset,Value)-Pair #16
        { 0x4C, 0x08 }, // (Offset,Value)-Pair #17
OOVPA_END;

// ******************************************************************
// * IDirectSoundBuffer_SetMixBinVolumes
// ******************************************************************
OOVPA_XREF(IDirectSoundBuffer_SetMixBinVolumes, 4627, 12,

    XRefNoSaveIndex,
    XRefOne)

        // IDirectSoundBuffer_SetMixBinVolumes+0x15 : call [CDirectSoundBuffer::SetMixBinVolumes]
        XREF_ENTRY( 0x15, XREF_DSSETMIXBINVOLUMESA ), // (Offset,Value)-Pair #1

        // IDirectSoundBuffer_SetMixBinVolumes+0x04 : push [esp+0x08]
        { 0x04, 0xFF }, // (Offset,Value)-Pair #2
        { 0x05, 0x74 }, // (Offset,Value)-Pair #3
        { 0x06, 0x24 }, // (Offset,Value)-Pair #4
        { 0x07, 0x08 }, // (Offset,Value)-Pair #5

        // IDirectSoundBuffer_SetMixBinVolumes+0x0A : add eax, 0xFFFFFFE4
        { 0x0A, 0x83 }, // (Offset,Value)-Pair #6
        { 0x0B, 0xC0 }, // (Offset,Value)-Pair #7
        { 0x0C, 0xE4 }, // (Offset,Value)-Pair #8

        // IDirectSoundBuffer_SetMixBinVolumes+0x0F : sbb ecx, ecx
        { 0x0F, 0x1B }, // (Offset,Value)-Pair #9
        { 0x10, 0xC9 }, // (Offset,Value)-Pair #10

        // IDirectSoundBuffer_SetMixBinVolumes+0x11 : and ecx, eax
        { 0x11, 0x23 }, // (Offset,Value)-Pair #11
        { 0x12, 0xC8 }, // (Offset,Value)-Pair #12
OOVPA_END;

// ******************************************************************
// * DirectSound_CDirectSound::SetPositionA
// ******************************************************************
OOVPA_XREF(DirectSound_CDirectSound_SetPositionA, 4627, 11,

    XREF_DSSETPOSITIONA,
    XRefZero)

        // DirectSound_CDirectSound_SetPositionA+0x2B : mov ecx, [ebp+0x08]
        { 0x2B, 0x8B }, // (Offset,Value)-Pair #1
        { 0x2C, 0x4D }, // (Offset,Value)-Pair #2
        { 0x2D, 0x08 }, // (Offset,Value)-Pair #3

        // DirectSound_CDirectSound_SetPositionA+0x3F : mov [edx+0x3C], edi
        { 0x3F, 0x89 }, // (Offset,Value)-Pair #4
        { 0x40, 0x7A }, // (Offset,Value)-Pair #5
        { 0x41, 0x3C }, // (Offset,Value)-Pair #6

        // DirectSound_CDirectSound_SetPositionA+0x4C : or word ptr [eax+0xA4], 0x01FF
        { 0x4C, 0x66 }, // (Offset,Value)-Pair #7
        { 0x4D, 0x81 }, // (Offset,Value)-Pair #8
        { 0x4E, 0x88 }, // (Offset,Value)-Pair #9
        { 0x4F, 0xA4 }, // (Offset,Value)-Pair #10
        { 0x53, 0xFF }, // (Offset,Value)-Pair #11
OOVPA_END;

// ******************************************************************
// * DirectSoundCreateBuffer
// ******************************************************************
OOVPA_XREF(DirectSoundCreateBuffer, 4627, 12,

    XRefNoSaveIndex,
    XRefOne)

        // DirectSoundCreateBuffer+0x2F : call [CDirectSound::CreateSoundBuffer]
        XREF_ENTRY( 0x2F, XREF_DSCREATESOUNDBUFFER ), // (Offset,Value)-Pair #1

        // DirectSoundCreateBuffer+0x04 : and [ebp-0x04], 0
        { 0x04, 0x83 }, // (Offset,Value)-Pair #2
        { 0x05, 0x65 }, // (Offset,Value)-Pair #3
        { 0x06, 0xFC }, // (Offset,Value)-Pair #4

        // DirectSoundCreateBuffer+0x08 : push ebx; push esi; push edi
        { 0x08, 0x53 }, // (Offset,Value)-Pair #5
        { 0x09, 0x56 }, // (Offset,Value)-Pair #6
        { 0x0A, 0x57 }, // (Offset,Value)-Pair #7

        // DirectSoundCreateBuffer+0x3C : call dword ptr [eax+8]
        { 0x3C, 0xFF }, // (Offset,Value)-Pair #8
        { 0x3D, 0x50 }, // (Offset,Value)-Pair #9
        { 0x3E, 0x08 }, // (Offset,Value)-Pair #10

        // DirectSoundCreateBuffer+0x54 : retn 0x08
        { 0x54, 0xC2 }, // (Offset,Value)-Pair #11
        { 0x55, 0x08 }, // (Offset,Value)-Pair #12
OOVPA_END;

// ******************************************************************
// * IDirectSound_CreateSoundBuffer
// ******************************************************************
OOVPA_XREF(IDirectSound_CreateSoundBuffer, 4627, 12,

    XRefNoSaveIndex,
    XRefOne)

        // IDirectSound_CreateSoundBuffer+0x1D : call [CDirectSound::CreateSoundBuffer]
        XREF_ENTRY( 0x1D, XREF_DSCREATESOUNDBUFFER ), // (Offset,Value)-Pair #1

        // IDirectSound_CreateSoundBuffer+0x04 : mov eax, [esp+8]
        { 0x04, 0x8B }, // (Offset,Value)-Pair #2
        { 0x05, 0x44 }, // (Offset,Value)-Pair #3
        { 0x06, 0x24 }, // (Offset,Value)-Pair #4
        { 0x07, 0x08 }, // (Offset,Value)-Pair #5

        // IDirectSound_CreateSoundBuffer+0x12 : add eax, 0xFFFFFFF8
        { 0x12, 0x83 }, // (Offset,Value)-Pair #6
        { 0x13, 0xC0 }, // (Offset,Value)-Pair #7
        { 0x14, 0xF8 }, // (Offset,Value)-Pair #8

        // IDirectSound_CreateSoundBuffer+0x17 : sbb ecx, ecx
        { 0x17, 0x1B }, // (Offset,Value)-Pair #9
        { 0x18, 0xC9 }, // (Offset,Value)-Pair #10

        // IDirectSound_CreateSoundBuffer+0x21 : retn 0x10
        { 0x21, 0xC2 }, // (Offset,Value)-Pair #11
        { 0x22, 0x10 }, // (Offset,Value)-Pair #12
OOVPA_END;

// ******************************************************************
// * DirectSound_CDirectSoundVoice::SetFrequency
// ******************************************************************
OOVPA_XREF(DirectSound_CDirectSoundVoice_SetFrequency, 4627, 11,

    XREF_DSBUFFERSETFREQUENCYB,
    XRefZero)

        // DirectSound_CDirectSoundVoice_SetFrequency+0x0D : mov eax, [esi+0x10]
        { 0x0D, 0x8B }, // (Offset,Value)-Pair #1
        { 0x0E, 0x46 }, // (Offset,Value)-Pair #2
        { 0x0F, 0x10 }, // (Offset,Value)-Pair #3

        // DirectSound_CDirectSoundVoice_SetFrequency+0x10 : mov eax, [eax+0x10]
        { 0x10, 0x8B }, // (Offset,Value)-Pair #4
        { 0x11, 0x40 }, // (Offset,Value)-Pair #5
        { 0x12, 0x10 }, // (Offset,Value)-Pair #6

        // DirectSound_CDirectSoundVoice_SetFrequency+0x14 : call [abs]; push eax; push esi
        { 0x14, 0xE8 }, // (Offset,Value)-Pair #7
        { 0x19, 0x50 }, // (Offset,Value)-Pair #8
        { 0x1A, 0x56 }, // (Offset,Value)-Pair #9

        // DirectSound_CDirectSoundVoice_SetFrequency+0x22 : retn 0x08
        { 0x21, 0xC2 }, // (Offset,Value)-Pair #10
        { 0x22, 0x08 }, // (Offset,Value)-Pair #11
OOVPA_END;

// ******************************************************************
// * DirectSound_CDirectSoundBuffer::SetFrequency
// ******************************************************************
OOVPA_XREF(DirectSound_CDirectSoundBuffer_SetFrequency, 4627, 17,

    XREF_DSBUFFERSETFREQUENCYA,
    XRefOne)

        // DirectSound_CDirectSoundBuffer_SetFrequency+0x32 : call [CDirectSoundVoice::SetFrequency]
        XREF_ENTRY( 0x32, XREF_DSBUFFERSETFREQUENCYB ), // (Offset,Value)-Pair #1

        // DirectSound_CDirectSoundBuffer_SetFrequency+0x21 : mov eax, 0x80004005
        { 0x21, 0xB8 }, // (Offset,Value)-Pair #2
        { 0x22, 0x05 }, // (Offset,Value)-Pair #3
        { 0x23, 0x40 }, // (Offset,Value)-Pair #4
        { 0x24, 0x00 }, // (Offset,Value)-Pair #5
        { 0x25, 0x80 }, // (Offset,Value)-Pair #6

        // DirectSound_CDirectSoundBuffer_SetFrequency+0x29 : push [esp+0x10]; push [esp+0x10]
        { 0x29, 0xFF }, // (Offset,Value)-Pair #7
        { 0x2A, 0x74 }, // (Offset,Value)-Pair #8
        { 0x2B, 0x24 }, // (Offset,Value)-Pair #9
        { 0x2C, 0x10 }, // (Offset,Value)-Pair #10
        { 0x2D, 0xFF }, // (Offset,Value)-Pair #11
        { 0x2E, 0x74 }, // (Offset,Value)-Pair #12
        { 0x2F, 0x24 }, // (Offset,Value)-Pair #13
        { 0x30, 0x10 }, // (Offset,Value)-Pair #14

        // DirectSound_CDirectSoundBuffer_SetFrequency+0x49 : pop edi
        { 0x49, 0x5F }, // (Offset,Value)-Pair #15

        // DirectSound_CDirectSoundBuffer_SetFrequency+0x4B : retn 0x08
        { 0x4B, 0xC2 }, // (Offset,Value)-Pair #16
        { 0x4C, 0x08 }, // (Offset,Value)-Pair #17
OOVPA_END;

// ******************************************************************
// * IDirectSoundBuffer_SetFrequency
// ******************************************************************
OOVPA_XREF(IDirectSoundBuffer_SetFrequency, 4627, 12,

    XRefNoSaveIndex,
    XRefOne)

        // IDirectSoundBuffer_SetFrequency+0x15 : call [CDirectSound::SetFrequency]
        XREF_ENTRY( 0x15, XREF_DSBUFFERSETFREQUENCYA ), // (Offset,Value)-Pair #1

        // IDirectSoundBuffer_SetFrequency+0x04 : push [esp+0x08]
        { 0x04, 0xFF }, // (Offset,Value)-Pair #2
        { 0x05, 0x74 }, // (Offset,Value)-Pair #3
        { 0x06, 0x24 }, // (Offset,Value)-Pair #4
        { 0x07, 0x08 }, // (Offset,Value)-Pair #5

        // IDirectSoundBuffer_SetFrequency0x0A : add eax, 0xFFFFFFE4
        { 0x0A, 0x83 }, // (Offset,Value)-Pair #6
        { 0x0B, 0xC0 }, // (Offset,Value)-Pair #7
        { 0x0C, 0xE4 }, // (Offset,Value)-Pair #8

        // IDirectSoundBuffer_SetFrequency+0x0F : sbb ecx, ecx
        { 0x0F, 0x1B }, // (Offset,Value)-Pair #9
        { 0x10, 0xC9 }, // (Offset,Value)-Pair #10

        // IDirectSoundBuffer_SetFrequency+0x11 : and ecx, eax
        { 0x11, 0x23 }, // (Offset,Value)-Pair #11
        { 0x12, 0xC8 }, // (Offset,Value)-Pair #12
OOVPA_END;

// ******************************************************************
// * CMcpxVoiceClient_SetVolume
// ******************************************************************
OOVPA_XREF(CMcpxVoiceClient_SetVolume, 4627, 13,

    XREF_DSSTREAMSETVOLUME,
    XRefZero)

        // CMcpxVoiceClient_SetVolume+0x2A : lea eax, [ecx+ecx*2]
        { 0x2A, 0x8D }, // (Offset,Value)-Pair #1
        { 0x2B, 0x04 }, // (Offset,Value)-Pair #2
        { 0x2C, 0x49 }, // (Offset,Value)-Pair #3

        // CMcpxVoiceClient_SetVolume+0x45 : movzx edx, word ptr [ecx]
        { 0x45, 0x0F }, // (Offset,Value)-Pair #4
        { 0x46, 0xB7 }, // (Offset,Value)-Pair #5
        { 0x47, 0x11 }, // (Offset,Value)-Pair #6

        // CMcpxVoiceClient_SetVolume+0x6C : mov edx, [ebp+eax*4-0x14]
        { 0x6C, 0x8B }, // (Offset,Value)-Pair #7
        { 0x6D, 0x54 }, // (Offset,Value)-Pair #8
        { 0x6E, 0x85 }, // (Offset,Value)-Pair #9
        { 0x6F, 0xEC }, // (Offset,Value)-Pair #10

        // CMcpxVoiceClient_SetVolume+0x84 : inc eax; inc ecx, inc ecx
        { 0x84, 0x40 }, // (Offset,Value)-Pair #11
        { 0x85, 0x41 }, // (Offset,Value)-Pair #12
        { 0x86, 0x41 }, // (Offset,Value)-Pair #13
OOVPA_END;

// ******************************************************************
// * DirectSound_CDirectSoundStream_SetVolume
// ******************************************************************
OOVPA_XREF(DirectSound_CDirectSoundStream_SetVolume, 4627, 11,

    XRefNoSaveIndex,
    XRefOne)

        // DirectSound_CDirectSoundStream_SetVolume+0x15 : call [CMcpxVoiceClient::SetVolume]
        XREF_ENTRY( 0x15, XREF_DSSTREAMSETVOLUME ),  // (Offset,Value)-Pair #1

        // DirectSound_CDirectSoundStream_SetVolume+0x00 : mov ecx, [esp+0x04]
        { 0x00, 0x8B }, // (Offset,Value)-Pair #2
        { 0x01, 0x4C }, // (Offset,Value)-Pair #3
        { 0x02, 0x24 }, // (Offset,Value)-Pair #4
        { 0x03, 0x04 }, // (Offset,Value)-Pair #5

        // DirectSound_CDirectSoundStream_SetVolume+0x0B : sub edx, [eax+0x20]
        { 0x0B, 0x2B }, // (Offset,Value)-Pair #6
        { 0x0C, 0x50 }, // (Offset,Value)-Pair #7
        { 0x0D, 0x20 }, // (Offset,Value)-Pair #8

        // DirectSound_CDirectSoundStream_SetVolume+0x11 : mov ecx, [ecx+0x0C]
        { 0x11, 0x8B }, // (Offset,Value)-Pair #9
        { 0x12, 0x49 }, // (Offset,Value)-Pair #10
        { 0x13, 0x0C }, // (Offset,Value)-Pair #11
OOVPA_END;

// ******************************************************************
// * IDirectSoundBuffer_LockA
// ******************************************************************
OOVPA_XREF(IDirectSoundBuffer_LockA, 4627, 13,

    XREF_DSBUFFERLOCKA,
    XRefZero)

        // IDirectSoundBuffer_LockA+0x37 : test [ebp+0x24], 1
        { 0x37, 0xF6 }, // (Offset,Value)-Pair #1
        { 0x38, 0x45 }, // (Offset,Value)-Pair #2
        { 0x39, 0x24 }, // (Offset,Value)-Pair #3
        { 0x3A, 0x01 }, // (Offset,Value)-Pair #4

        // IDirectSoundBuffer_LockA+0x5C : mov eax, [eax+0xBC]
        { 0x5C, 0x8B }, // (Offset,Value)-Pair #5
        { 0x5D, 0x80 }, // (Offset,Value)-Pair #6
        { 0x5E, 0xBC }, // (Offset,Value)-Pair #7
        { 0x5F, 0x00 }, // (Offset,Value)-Pair #8

        // IDirectSoundBuffer_LockA+0xA4 : jnb +0x11; mov esi, [esi+0x1C]
        { 0xA2, 0x73 }, // (Offset,Value)-Pair #9
        { 0xA3, 0x11 }, // (Offset,Value)-Pair #10
        { 0xA4, 0x8B }, // (Offset,Value)-Pair #11
        { 0xA5, 0x76 }, // (Offset,Value)-Pair #12
        { 0xA6, 0x1C }, // (Offset,Value)-Pair #13
OOVPA_END;

// ******************************************************************
// * CMcpxBuffer_GetStatus
// ******************************************************************
OOVPA_XREF(CMcpxBuffer_GetStatus, 4627, 11,

    XREF_DSBUFFERGETSTATUSA,
    XRefZero)

        // CMcpxBuffer_GetStatus+0x0A : mov esi, ecx
        { 0x0A, 0x8B }, // (Offset,Value)-Pair #1
        { 0x0B, 0xF1 }, // (Offset,Value)-Pair #2

        // CMcpxBuffer_GetStatus+0x20 : jz +0x18
        { 0x20, 0x74 }, // (Offset,Value)-Pair #3
        { 0x21, 0x18 }, // (Offset,Value)-Pair #4

        // CMcpxBuffer_GetStatus+0x22 : test word ptr [esi+0x12], 0x8002
        { 0x22, 0x66 }, // (Offset,Value)-Pair #5
        { 0x23, 0xF7 }, // (Offset,Value)-Pair #6
        { 0x24, 0x46 }, // (Offset,Value)-Pair #7
        { 0x25, 0x12 }, // (Offset,Value)-Pair #8

        // CMcpxBuffer_GetStatus+0x2C : test word ptr [esi+0x12], 0x200
        { 0x2C, 0x66 }, // (Offset,Value)-Pair #9
        { 0x2D, 0xF7 }, // (Offset,Value)-Pair #10
        { 0x2E, 0x46 }, // (Offset,Value)-Pair #11
OOVPA_END;

// ******************************************************************
// * CMcpxBuffer_GetStatus
// ******************************************************************
OOVPA_XREF(CMcpxBuffer_GetStatus, 4721, 10,

    XREF_DSBUFFERGETSTATUSA,
    XRefZero)

        // CMcpxBuffer_GetStatus+0x00 : movzx eax, word ptr [esi+0x12]
        { 0x00, 0x0F }, // (Offset,Value)-Pair #5
        { 0x01, 0xB7 }, // (Offset,Value)-Pair #6
        { 0x02, 0x41 }, // (Offset,Value)-Pair #7
        { 0x03, 0x12 }, // (Offset,Value)-Pair #8

        // CMcpxBuffer_GetStatus+0x27 : mov ecx, 0x8001
        { 0x27, 0xB9 }, // (Offset,Value)-Pair #3
        { 0x28, 0x01 }, // (Offset,Value)-Pair #4
		{ 0x29, 0x80 }, // (Offset,Value)-Pair #4
		{ 0x2A, 0x00 }, // (Offset,Value)-Pair #4

        // CMcpxBuffer_GetStatus+0x39 : mov [ecx], eax
        { 0x39, 0x89 }, // (Offset,Value)-Pair #5
        { 0x3A, 0x01 }, // (Offset,Value)-Pair #6
OOVPA_END;

// ******************************************************************
// * CMcpxBuffer_GetStatus
// ******************************************************************
//OOVPA_XREF(CMcpxBuffer_GetStatus, 4928, 11,
//
//    XREF_DSBUFFERGETSTATUSA,
//    XRefZero)
//
//        // CMcpxBuffer_GetStatus+0x0A : mov esi, ecx
//        { 0x0A, 0x8B }, // (Offset,Value)-Pair #1
//        { 0x0B, 0xF1 }, // (Offset,Value)-Pair #2
//
//        // CMcpxBuffer_GetStatus+0x1B : jnz +0x44
//        { 0x1B, 0x75 }, // (Offset,Value)-Pair #3
//        { 0x1C, 0x44 }, // (Offset,Value)-Pair #4
//
//        // CMcpxBuffer_GetStatus+0x23 : movzx eax, word ptr [esi+0x12]
//        { 0x23, 0x0F }, // (Offset,Value)-Pair #5
//        { 0x24, 0xB7 }, // (Offset,Value)-Pair #6
//        { 0x25, 0x46 }, // (Offset,Value)-Pair #7
//        { 0x26, 0x12 }, // (Offset,Value)-Pair #8
//
//        // CMcpxBuffer_GetStatus+0x3C : movzx eax, word ptr [esi+0x12]
//        { 0x3C, 0x0F }, // (Offset,Value)-Pair #9
//        { 0x3D, 0xB7 }, // (Offset,Value)-Pair #10
//        { 0x3E, 0x46 }, // (Offset,Value)-Pair #11
//OOVPA_END;

// ******************************************************************
// * CMcpxBuffer_GetStatusB
// ******************************************************************
OOVPA_XREF(CMcpxBuffer_GetStatusB, 4627, 12,

    XREF_DSBUFFERGETSTATUSA,
    XRefZero)

        { 0x16, 0x6A }, // (Offset,Value)-Pair #1
        { 0x17, 0x00 }, // (Offset,Value)-Pair #2
        { 0x18, 0x5A }, // (Offset,Value)-Pair #3

        { 0x1C, 0x42 }, // (Offset,Value)-Pair #4
        { 0x1D, 0xF6 }, // (Offset,Value)-Pair #5
        { 0x1E, 0xC4 }, // (Offset,Value)-Pair #6
        { 0x1F, 0x02 }, // (Offset,Value)-Pair #7

        { 0x29, 0xB9 }, // (Offset,Value)-Pair #8
        { 0x2A, 0x01 }, // (Offset,Value)-Pair #9
        { 0x2B, 0x80 }, // (Offset,Value)-Pair #10

        { 0x3F, 0xC2 }, // (Offset,Value)-Pair #11
        { 0x40, 0x04 }, // (Offset,Value)-Pair #12
OOVPA_END;

// ******************************************************************
// * DirectSound_CDirectSoundBuffer_GetStatus
// ******************************************************************
OOVPA_XREF(DirectSound_CDirectSoundBuffer_GetStatus, 4627, 10,

    XREF_DSBUFFERGETSTATUSB,
    XRefOne)

        // DirectSound_CDirectSoundBuffer_GetStatus+0x35 : call [CMcpxBuffer::GetStatus]
        XREF_ENTRY( 0x35, XREF_DSBUFFERGETSTATUSA ),  // (Offset,Value)-Pair #1

        // DirectSound_CDirectSoundBuffer_GetStatus+0x21 : mov eax, 0x80004005
        { 0x21, 0xB8 }, // (Offset,Value)-Pair #2
        { 0x22, 0x05 }, // (Offset,Value)-Pair #3
        { 0x23, 0x40 }, // (Offset,Value)-Pair #4
        { 0x24, 0x00 }, // (Offset,Value)-Pair #5
        { 0x25, 0x80 }, // (Offset,Value)-Pair #6

        // DirectSound_CDirectSoundBuffer_GetStatus+0x3D : jz +0x0B
        { 0x3D, 0x74 }, // (Offset,Value)-Pair #7
        { 0x3E, 0x0B }, // (Offset,Value)-Pair #8

        // DirectSound_CDirectSoundBuffer_GetStatus+0x4E : retn 0x08
        { 0x4E, 0xC2 }, // (Offset,Value)-Pair #9
        { 0x4F, 0x08 }, // (Offset,Value)-Pair #10
OOVPA_END;

// ******************************************************************
// * IDirectSoundBuffer_GetStatus
// ******************************************************************
OOVPA_XREF(IDirectSoundBuffer_GetStatus, 4627, 9,

    XRefNoSaveIndex,
    XRefOne)

        // IDirectSoundBuffer_GetStatus+0x15 : call [CDirectSoundBuffer::GetStatus]
        XREF_ENTRY( 0x15, XREF_DSBUFFERGETSTATUSB ),  // (Offset,Value)-Pair #1

        // IDirectSoundBuffer_GetStatus+0x04 : push [esp+0x08]
        { 0x04, 0xFF }, // (Offset,Value)-Pair #2
        { 0x05, 0x74 }, // (Offset,Value)-Pair #3
        { 0x06, 0x24 }, // (Offset,Value)-Pair #4
        { 0x07, 0x08 }, // (Offset,Value)-Pair #5

        // IDirectSoundBuffer_GetStatus+0x0F : sbb ecx, ecx
        { 0x0F, 0x1B }, // (Offset,Value)-Pair #6
        { 0x10, 0xC9 }, // (Offset,Value)-Pair #7

        // IDirectSoundBuffer_GetStatus+0x11 : and ecx, eax
        { 0x11, 0x23 }, // (Offset,Value)-Pair #8
        { 0x12, 0xC8 }, // (Offset,Value)-Pair #9
OOVPA_END;

// ******************************************************************
// * DirectSound_CDirectSound_GetSpeakerConfig
// ******************************************************************
OOVPA_NO_XREF(DirectSound_CDirectSound_GetSpeakerConfig, 4627, 7)

        { 0x0B, 0x00 },
        { 0x14, 0x0B },
        { 0x20, 0xB8 },
        { 0x2A, 0x04 },
        { 0x35, 0x81 },
        { 0x40, 0x0B },
        { 0x4C, 0x33 },
OOVPA_END;

// ******************************************************************
// * CMcpxBuffer_Play
// ******************************************************************
OOVPA_XREF(CMcpxBuffer_Play, 4721, 10,

    XREF_DSOUNDPLAY,
    XRefZero)

        // CMcpxBuffer_Play+0x2E : test byte ptr [eax+9], 20h
        { 0x2E, 0xF6 }, // (Offset,Value)-Pair #5
        { 0x2F, 0x40 }, // (Offset,Value)-Pair #6
        { 0x30, 0x09 }, // (Offset,Value)-Pair #7
        { 0x31, 0x20 }, // (Offset,Value)-Pair #8

        // CMcpxBuffer_Play+0x44 : test byte ptr [esi+12h], 2h
        { 0x44, 0xF6 }, // (Offset,Value)-Pair #1
        { 0x45, 0x46 }, // (Offset,Value)-Pair #2
        { 0x46, 0x12 }, // (Offset,Value)-Pair #3
        { 0x47, 0x02 }, // (Offset,Value)-Pair #4

        // CMcpxBuffer_Play+0x52 : xor eax, eax
        { 0x52, 0x33 }, // (Offset,Value)-Pair #9
        { 0x53, 0xC0 }, // (Offset,Value)-Pair #10
OOVPA_END;

// ******************************************************************
// * CMcpxBuffer_Play
// ******************************************************************
OOVPA_XREF(CMcpxBuffer_Play, 4928, 10,

    XREF_DSOUNDPLAY,
    XRefZero)

        // CMcpxBuffer_Play+0x32 : test byte ptr [esi+12h], 42h
        { 0x32, 0xF6 }, // (Offset,Value)-Pair #1
        { 0x33, 0x46 }, // (Offset,Value)-Pair #2
        { 0x34, 0x12 }, // (Offset,Value)-Pair #3
        { 0x35, 0x42 }, // (Offset,Value)-Pair #4

        // CMcpxBuffer_Play+0x4D : test byte ptr [eax+9], 20h
        { 0x4D, 0xF6 }, // (Offset,Value)-Pair #5
        { 0x4E, 0x40 }, // (Offset,Value)-Pair #6
        { 0x4F, 0x09 }, // (Offset,Value)-Pair #7
        { 0x50, 0x20 }, // (Offset,Value)-Pair #8

        // CMcpxBuffer_Play+0x71 : xor eax, eax
        { 0x71, 0x33 }, // (Offset,Value)-Pair #9
        { 0x72, 0xC0 }, // (Offset,Value)-Pair #10
OOVPA_END;

// ******************************************************************
// * CMcpxBuffer_PlayA
// ******************************************************************
#define CMcpxBuffer_PlayA_4627 CMcpxBuffer_PlayA_4361

// ******************************************************************
// * DirectSound_CDirectSound::SetDistanceFactorA
// ******************************************************************
OOVPA_XREF(DirectSound_CDirectSound_SetDistanceFactorA, 4627, 11,

    XREF_SETDISTANCEFACTORA,
    XRefZero)

        // DirectSound_CDirectSound_SetDistanceFactorA+0x21 : mov eax, 0x80004005
        { 0x21, 0xB8 }, // (Offset,Value)-Pair #1
        { 0x22, 0x05 }, // (Offset,Value)-Pair #2
        { 0x23, 0x40 }, // (Offset,Value)-Pair #3
        { 0x24, 0x00 }, // (Offset,Value)-Pair #4
        { 0x25, 0x80 }, // (Offset,Value)-Pair #5

        // DirectSound_CDirectSound_SetDistanceFactorA+0x39 : or byte ptr[eax+0xA4], 0xE0
        { 0x39, 0x80 }, // (Offset,Value)-Pair #6
        { 0x3A, 0x88 }, // (Offset,Value)-Pair #7
        { 0x3B, 0xA4 }, // (Offset,Value)-Pair #8
        { 0x3F, 0xE0 }, // (Offset,Value)-Pair #9

        // DirectSound_CDirectSound_SetDistanceFactorA+0x4F : jz +0x0B
        { 0x4F, 0x74 }, // (Offset,Value)-Pair #10
        { 0x50, 0x0B }, // (Offset,Value)-Pair #11
OOVPA_END;

// ******************************************************************
// * DirectSound_CDirectSound::SetDistanceFactorA
// ******************************************************************
OOVPA_XREF(DirectSound_CDirectSound_SetDistanceFactorA, 4531, 11,

    XREF_SETDISTANCEFACTORA,
    XRefZero)

        // DirectSound_CDirectSound_SetDistanceFactorA+0x21 : mov eax, 0x80004005
        { 0x21, 0xB8 }, // (Offset,Value)-Pair #1
        { 0x22, 0x05 }, // (Offset,Value)-Pair #2
        { 0x23, 0x40 }, // (Offset,Value)-Pair #3
        { 0x24, 0x00 }, // (Offset,Value)-Pair #4
        { 0x25, 0x80 }, // (Offset,Value)-Pair #5

        // DirectSound_CDirectSound_SetDistanceFactorA+0x39 : or dword ptr[eax+0xA4], 0x60
        { 0x39, 0x83 }, // (Offset,Value)-Pair #6
        { 0x3A, 0x88 }, // (Offset,Value)-Pair #7
        { 0x3B, 0xA4 }, // (Offset,Value)-Pair #8
        { 0x3F, 0x60 }, // (Offset,Value)-Pair #9

        // DirectSound_CDirectSound_SetDistanceFactorA+0x4F : jz +0x0B
        { 0x4F, 0x74 }, // (Offset,Value)-Pair #10
        { 0x50, 0x0B }, // (Offset,Value)-Pair #11
OOVPA_END;

// ******************************************************************
// * DirectSound_CDirectSound::SetRolloffFactor
// ******************************************************************
OOVPA_XREF(DirectSound_CDirectSound_SetRolloffFactor, 4627, 11,

    XREF_SETROLLOFFFACTORA,
    XRefZero)

        // DirectSound_CDirectSound_SetRolloffFactor+0x21 : mov eax, 0x80004005
        { 0x21, 0xB8 }, // (Offset,Value)-Pair #1
        { 0x22, 0x05 }, // (Offset,Value)-Pair #2
        { 0x23, 0x40 }, // (Offset,Value)-Pair #3
        { 0x24, 0x00 }, // (Offset,Value)-Pair #4
        { 0x25, 0x80 }, // (Offset,Value)-Pair #5

        // DirectSound_CDirectSound_SetRolloffFactor+0x39 : or dword ptr[eax+0xA4], 0x04
        { 0x39, 0x83 }, // (Offset,Value)-Pair #6
        { 0x3A, 0x88 }, // (Offset,Value)-Pair #7
        { 0x3B, 0xA4 }, // (Offset,Value)-Pair #8
        { 0x3F, 0x04 }, // (Offset,Value)-Pair #9

        // DirectSound_CDirectSound_SetRolloffFactor+0x4F : jz +0x0B
        { 0x4F, 0x74 }, // (Offset,Value)-Pair #10
        { 0x50, 0x0B }, // (Offset,Value)-Pair #11
OOVPA_END;

// ******************************************************************
// * IDirectSound_SetRolloffFactor
// ******************************************************************
OOVPA_XREF(IDirectSound_SetRolloffFactor, 4627, 11,

    XRefNoSaveIndex,
    XRefOne)

        // IDirectSound_SetRolloffFactor+0x1D : call [CDirectSound::SetRolloffFactor]
        XREF_ENTRY( 0x1D, XREF_SETROLLOFFFACTORA ),  // (Offset,Value)-Pair #1

        // IDirectSound_SetRolloffFactor+0x04 : fld [esp+0x0C]
        { 0x04, 0xD9 }, // (Offset,Value)-Pair #2
        { 0x05, 0x44 }, // (Offset,Value)-Pair #3
        { 0x06, 0x24 }, // (Offset,Value)-Pair #4
        { 0x07, 0x0C }, // (Offset,Value)-Pair #5

        // IDirectSound_SetRolloffFactor+0x0C : push ecx
        { 0x0C, 0x51 }, // (Offset,Value)-Pair #6

        // IDirectSound_SetRolloffFactor+0x12 : add eax, 0xFFFFFFF8
        { 0x12, 0x83 }, // (Offset,Value)-Pair #7
        { 0x13, 0xC0 }, // (Offset,Value)-Pair #8
        { 0x14, 0xF8 }, // (Offset,Value)-Pair #9

        // IDirectSound_SetRolloffFactor+0x21 : retn 0x0C
        { 0x21, 0xC2 }, // (Offset,Value)-Pair #10
        { 0x22, 0x0C }, // (Offset,Value)-Pair #11
OOVPA_END;

// ******************************************************************
// * DirectSound_CDirectSound::SetDopplerFactor
// ******************************************************************
OOVPA_XREF(DirectSound_CDirectSound_SetDopplerFactor, 4531, 14,

    XREF_SETDOPPLERFACTOR,
    XRefZero)

        // DirectSound_CDirectSound_SetDopplerFactor+0x21 : mov eax, 0x80004005
        { 0x21, 0xB8 }, // (Offset,Value)-Pair #1
        { 0x22, 0x05 }, // (Offset,Value)-Pair #2
        { 0x23, 0x40 }, // (Offset,Value)-Pair #3
        { 0x24, 0x00 }, // (Offset,Value)-Pair #4
        { 0x25, 0x80 }, // (Offset,Value)-Pair #5

        // DirectSound_CDirectSound_SetDopplerFactor+0x33 : mov [eax+0x70], edx
        { 0x33, 0x89 }, // (Offset,Value)-Pair #6
        { 0x34, 0x50 }, // (Offset,Value)-Pair #7
        { 0x35, 0x70 }, // (Offset,Value)-Pair #8

        // DirectSound_CDirectSound_SetDopplerFactor+0x39 : or dword ptr[eax+0xA4], 0x40
        { 0x39, 0x83 }, // (Offset,Value)-Pair #9
        { 0x3A, 0x88 }, // (Offset,Value)-Pair #10
        { 0x3B, 0xA4 }, // (Offset,Value)-Pair #11
        { 0x3F, 0x40 }, // (Offset,Value)-Pair #12

        // DirectSound_CDirectSound_SetDopplerFactor+0x4F : jz +0x0B
        { 0x4F, 0x74 }, // (Offset,Value)-Pair #13
        { 0x50, 0x0B }, // (Offset,Value)-Pair #14
OOVPA_END;

// ******************************************************************
// * DirectSound_CDirectSound::SetDopplerFactor
// ******************************************************************
OOVPA_XREF(DirectSound_CDirectSound_SetDopplerFactor, 4627, 14,

    XREF_SETDOPPLERFACTOR,
    XRefZero)

        // DirectSound_CDirectSound_SetDopplerFactor+0x21 : mov eax, 0x80004005
        { 0x21, 0xB8 }, // (Offset,Value)-Pair #1
        { 0x22, 0x05 }, // (Offset,Value)-Pair #2
        { 0x23, 0x40 }, // (Offset,Value)-Pair #3
        { 0x24, 0x00 }, // (Offset,Value)-Pair #4
        { 0x25, 0x80 }, // (Offset,Value)-Pair #5

        // DirectSound_CDirectSound_SetDopplerFactor+0x33 : mov [eax+0x70], edx
        { 0x33, 0x89 }, // (Offset,Value)-Pair #6
        { 0x34, 0x50 }, // (Offset,Value)-Pair #7
        { 0x35, 0x70 }, // (Offset,Value)-Pair #8

        // DirectSound_CDirectSound_SetDopplerFactor+0x39 : or byte ptr[eax+0xA4], 0x80
        { 0x39, 0x80 }, // (Offset,Value)-Pair #9
        { 0x3A, 0x88 }, // (Offset,Value)-Pair #10
        { 0x3B, 0xA4 }, // (Offset,Value)-Pair #11
        { 0x3F, 0x80 }, // (Offset,Value)-Pair #12

        // DirectSound_CDirectSound_SetDopplerFactor+0x4F : jz +0x0B
        { 0x4F, 0x74 }, // (Offset,Value)-Pair #13
        { 0x50, 0x0B }, // (Offset,Value)-Pair #14
OOVPA_END;

// ******************************************************************
// * IDirectSound_SetDopplerFactor
// ******************************************************************
OOVPA_XREF(IDirectSound_SetDopplerFactor, 4627, 11,

    XRefNoSaveIndex,
    XRefOne)

        // IDirectSound_SetDopplerFactor+0x1D : call [CDirectSound::SetDopplerFactor]
        XREF_ENTRY( 0x1D, XREF_SETDOPPLERFACTOR),  // (Offset,Value)-Pair #1

        // IDirectSound_SetDopplerFactor+0x04 : fld [esp+0x0C]
        { 0x04, 0xD9 }, // (Offset,Value)-Pair #2
        { 0x05, 0x44 }, // (Offset,Value)-Pair #3
        { 0x06, 0x24 }, // (Offset,Value)-Pair #4
        { 0x07, 0x0C }, // (Offset,Value)-Pair #5

        // IDirectSound_SetDopplerFactor+0x0C : push ecx
        { 0x0C, 0x51 }, // (Offset,Value)-Pair #6

        // IDirectSound_SetDopplerFactor+0x12 : add eax, 0xFFFFFFF8
        { 0x12, 0x83 }, // (Offset,Value)-Pair #7
        { 0x13, 0xC0 }, // (Offset,Value)-Pair #8
        { 0x14, 0xF8 }, // (Offset,Value)-Pair #9

        // IDirectSound_SetDopplerFactor+0x21 : retn 0x0C
        { 0x21, 0xC2 }, // (Offset,Value)-Pair #10
        { 0x22, 0x0C }, // (Offset,Value)-Pair #11
OOVPA_END;

// ******************************************************************
// * DirectSound_CDirectSoundVoice::SetRolloffFactor
// ******************************************************************
OOVPA_XREF(DirectSound_CDirectSoundVoice_SetRolloffFactor, 4627, 9,

    XREF_DSVOICESETROLLOFFFACTOR,
    XRefZero)

        // DirectSound_CDirectSoundVoice_SetRolloffFactor+0x0D : mov edx, [esp+arg_4]
        { 0x0D, 0x8B },
        { 0x0E, 0x54 },
        { 0x0F, 0x24 },
        { 0x10, 0x08 },

        // DirectSound_CDirectSoundVoice_SetRolloffFactor+0x11 : mov [eax+44h], edx
        { 0x11, 0x89 },
        { 0x12, 0x50 },
        { 0x13, 0x44 },

        // DirectSound_CDirectSoundVoice_SetRolloffFactor+0x30 : retn 0Ch
        { 0x31, 0x0C },
        { 0x32, 0x00 }
OOVPA_END;

// ******************************************************************
// * DirectSound_CDirectSoundBuffer::SetRolloffFactor
// ******************************************************************
OOVPA_XREF(DirectSound_CDirectSoundBuffer_SetRolloffFactor, 4627, 10,

    XREF_DSBUFFERSETROLLOFFFACTOR,
    XRefOne)

        // DirectSound_CDirectSoundBuffer_SetRolloffFactor+0x39 : call [CDirectSoundVoice::SetRolloffFactor]
        XREF_ENTRY( 0x3A, XREF_DSVOICESETROLLOFFFACTOR ),

        // DirectSound_CDirectSoundBuffer_SetRolloffFactor+0x21 : mov eax, 80004005h
        { 0x22, 0x05 },
        { 0x23, 0x40 },
        { 0x24, 0x00 },
        { 0x25, 0x80 },

        // DirectSound_CDirectSoundBuffer_SetRolloffFactor+0x32 : fstp    [esp+0Ch+var_C]
        { 0x32, 0xD9 },
        { 0x33, 0x1C },
        { 0x34, 0x24 },

        // DirectSound_CDirectSoundBuffer_SetRolloffFactor+0x53 : retn 0Ch
        { 0x54, 0x0C },
        { 0x55, 0x00 }
OOVPA_END;

// ******************************************************************
// * IDirectSoundBuffer_SetRolloffFactor
// ******************************************************************
OOVPA_XREF(IDirectSoundBuffer_SetRolloffFactor, 4627, 10,

    XRefNoSaveIndex,
    XRefOne)

        // IDirectSoundBuffer_SetRolloffFactor+0x1C : call [CDirectSoundBuffer::SetRolloffFactor]
        XREF_ENTRY( 0x1D, XREF_DSBUFFERSETROLLOFFFACTOR ),

        // IDirectSoundBuffer_SetRolloffFactor+0x04 : fld [esp+4+arg_4]
        { 0x04, 0xD9 },
        { 0x05, 0x44 },
        { 0x06, 0x24 },
        { 0x07, 0x0C },

        // IDirectSoundBuffer_SetRolloffFactor+0x12 : add eax, 0FFFFFFE4
        { 0x12, 0x83 },
        { 0x13, 0xC0 },
        { 0x14, 0xE4 },

        // IDirectSoundBuffer_SetRolloffFactor+0x21 : retn 0Ch
        { 0x22, 0x0C },
        { 0x23, 0x00 }
OOVPA_END;

// ******************************************************************
// * DirectSound_CDirectSoundVoice::SetDistanceFactor
// ******************************************************************
OOVPA_XREF(DirectSound_CDirectSoundVoice_SetDistanceFactor, 4627, 9,

    XREF_DSVOICESETDISTANCEFACTOR,
    XRefZero)

        // DirectSound_CDirectSoundVoice_SetDistanceFactor+0x0D : mov edx, [esp+arg_4]
        { 0x0D, 0x8B },
        { 0x0E, 0x54 },
        { 0x0F, 0x24 },
        { 0x10, 0x08 },

        // DirectSound_CDirectSoundVoice_SetDistanceFactor+0x11 : mov [eax+40h], edx
        { 0x11, 0x89 },
        { 0x12, 0x50 },
        { 0x13, 0x40 },

        // DirectSound_CDirectSoundVoice_SetDistanceFactor+0x30 : retn 0Ch
        { 0x31, 0x0C },
        { 0x32, 0x00 }
OOVPA_END;

// ******************************************************************
// * DirectSound_CDirectSoundBuffer::SetDistanceFactor
// ******************************************************************
OOVPA_XREF(DirectSound_CDirectSoundBuffer_SetDistanceFactor, 4627, 10,

    XREF_DSBUFFERSETDISTANCEFACTOR,
    XRefOne)

        // DirectSound_CDirectSoundBuffer_SetDistanceFactor+0x39 : call [CDirectSoundVoice::SetDistanceFactor]
        XREF_ENTRY( 0x3A, XREF_DSVOICESETDISTANCEFACTOR ),

        // DirectSound_CDirectSoundBuffer_SetDistanceFactor+0x21 : mov eax, 80004005h
        { 0x22, 0x05 },
        { 0x23, 0x40 },
        { 0x24, 0x00 },
        { 0x25, 0x80 },

        // DirectSound_CDirectSoundBuffer_SetDistanceFactor+0x32 : fstp    [esp+0Ch+var_C]
        { 0x32, 0xD9 },
        { 0x33, 0x1C },
        { 0x34, 0x24 },

        // DirectSound_CDirectSoundBuffer_SetDistanceFactor+0x53 : retn 0Ch
        { 0x54, 0x0C },
        { 0x55, 0x00 }
OOVPA_END;

// ******************************************************************
// * IDirectSoundBuffer_SetDistanceFactor
// ******************************************************************
OOVPA_XREF(IDirectSoundBuffer_SetDistanceFactor, 4627, 10,

    XRefNoSaveIndex,
    XRefOne)

        // IDirectSoundBuffer_SetDistanceFactor+0x1C : call [CDirectSoundBuffer::SetDistanceFactor]
        XREF_ENTRY( 0x1D, XREF_DSBUFFERSETDISTANCEFACTOR ),

        // IDirectSoundBuffer_SetDistanceFactor+0x04 : fld [esp+4+arg_4]
        { 0x04, 0xD9 },
        { 0x05, 0x44 },
        { 0x06, 0x24 },
        { 0x07, 0x0C },

        // IDirectSoundBuffer_SetDistanceFactor+0x12 : add eax, 0FFFFFFE4
        { 0x12, 0x83 },
        { 0x13, 0xC0 },
        { 0x14, 0xE4 },

        // IDirectSoundBuffer_SetSetDistanceFactor+0x21 : retn 0Ch
        { 0x22, 0x0C },
        { 0x23, 0x00 }
OOVPA_END;

// ******************************************************************
// * DirectSound_CDirectSoundVoice::SetConeAngles
// ******************************************************************
OOVPA_XREF(DirectSound_CDirectSoundVoice_SetConeAngles, 4627, 9,

    XREF_DSVOICESETCONEANGLES,
    XRefZero)

        // DirectSound_CDirectSoundVoice_SetConeAngles+0x0D : mov edx, [esp+arg_4]
        { 0x0D, 0x8B },
        { 0x0E, 0x54 },
        { 0x0F, 0x24 },
        { 0x10, 0x08 },

        // DirectSound_CDirectSoundVoice_SetConeAngles+0x11 : mov [ecx+1Ch], edx
        { 0x11, 0x89 },
        { 0x12, 0x51 },
        { 0x13, 0x1C },

        // DirectSound_CDirectSoundVoice_SetConeAngles+0x40 : retn 10h
        { 0x41, 0x10 },
        { 0x42, 0x00 }
OOVPA_END;

// ******************************************************************
// * DirectSound_CDirectSoundBuffer::SetConeAngles
// ******************************************************************
OOVPA_XREF(DirectSound_CDirectSoundBuffer_SetConeAngles, 4627, 11,

    XREF_DSBUFFERSETCONEANGLES,
    XRefOne)

        // DirectSound_CDirectSoundBuffer_SetConeAngles+0x39 : call [CDirectSoundVoice::SetConeAngles]
        XREF_ENTRY( 0x3A, XREF_DSVOICESETCONEANGLES ),

        // DirectSound_CDirectSoundBuffer_SetConeAngles+0x21 : mov eax, 80004005h
        { 0x22, 0x05 },
        { 0x23, 0x40 },
        { 0x24, 0x00 },
        { 0x25, 0x80 },

        // DirectSound_CDirectSoundBuffer_SetConeAngles+0x31 : push [esp+0Ch+arg_4]
        { 0x31, 0xFF },
        { 0x32, 0x74 },
        { 0x33, 0x24 },
        { 0x34, 0x18 },

        // DirectSound_CDirectSoundBuffer_SetConeAngles+0x53 : retn 10h
        { 0x54, 0x10 },
        { 0x55, 0x00 }
OOVPA_END;

// ******************************************************************
// * IDirectSoundBuffer_SetConeAngles
// ******************************************************************
OOVPA_XREF(IDirectSoundBuffer_SetConeAngles, 4627, 10,

    XRefNoSaveIndex,
    XRefOne)

        // IDirectSoundBuffer_SetConeAngles+0x1C : call [CDirectSoundBuffer::SetConeAngles]
        XREF_ENTRY( 0x1D, XREF_DSBUFFERSETCONEANGLES ),

        // IDirectSoundBuffer_SetConeAngles+0x04 : mov eax, [esp+4+arg_0]
        { 0x04, 0x8B },
        { 0x05, 0x44 },
        { 0x06, 0x24 },
        { 0x07, 0x08 },

        // IDirectSoundBuffer_SetConeAngles+0x12 : add eax, 0FFFFFFE4
        { 0x12, 0x83 },
        { 0x13, 0xC0 },
        { 0x14, 0xE4 },

        // IDirectSoundBuffer_SetConeAngles+0x21 : retn 10h
        { 0x22, 0x10 },
        { 0x23, 0x00 }
OOVPA_END;

// ******************************************************************
// * DirectSound_CDirectSoundVoice::SetConeOrientation
// ******************************************************************
OOVPA_XREF(DirectSound_CDirectSoundVoice_SetConeOrientation, 4627, 8,

    XREF_DSVOICESETCONEORIENTATION,
    XRefZero)

        // DirectSound_CDirectSoundVoice_SetConeOrientation+0x0F : mov edx, [ebp+arg_4]
        { 0x0F, 0x8B },
        { 0x10, 0x55 },
        { 0x11, 0x0C },

        // DirectSound_CDirectSoundVoice_SetConeOrientation+0x12 : mov [ecx+24h], edx
        { 0x12, 0x89 },
        { 0x13, 0x51 },
        { 0x14, 0x24 },

        // DirectSound_CDirectSoundVoice_SetConeOrientation+0x4F : retn 14h
        { 0x50, 0x14 },
        { 0x51, 0x00 }
OOVPA_END;

// ******************************************************************
// * DirectSound_CDirectSoundBuffer::SetConeOrientation
// ******************************************************************
OOVPA_XREF(DirectSound_CDirectSoundBuffer_SetConeOrientation, 4627, 9,

    XREF_DSBUFFERSETCONEORIENTATION,
    XRefOne)

        // DirectSound_CDirectSoundBuffer_SetConeOrientation+0x49 : call [CDirectSoundVoice::SetConeOrientation]
        XREF_ENTRY( 0x4A, XREF_DSVOICESETCONEORIENTATION ),

        // DirectSound_CDirectSoundBuffer_SetConeOrientation+0x2B : fld [ebp+arg_C]
        { 0x2B, 0xD9 },
        { 0x2C, 0x45 },
        { 0x2D, 0x14 },

        // DirectSound_CDirectSoundBuffer_SetConeOrientation+0x43 : fstp [esp+18h+var_18]
        { 0x43, 0xD9 },
        { 0x44, 0x1C },
        { 0x45, 0x24 },

        // DirectSound_CDirectSoundBuffer_SetConeOrientation+0x64 : retn 14h
        { 0x65, 0x14 },
        { 0x66, 0x00 }
OOVPA_END;

// ******************************************************************
// * IDirectSoundBuffer_SetConeOrientation
// ******************************************************************
OOVPA_XREF(IDirectSoundBuffer_SetConeOrientation, 4627, 9,

    XRefNoSaveIndex,
    XRefOne)

        // IDirectSoundBuffer_SetConeOrientation+0x2C : call [CDirectSoundBuffer::SetConeOrientation]
        XREF_ENTRY( 0x2D, XREF_DSBUFFERSETCONEORIENTATION ),

        // IDirectSoundBuffer_SetConeOrientation+0x06 : fld [ebp+arg_C]
        { 0x06, 0xD9 },
        { 0x07, 0x45 },
        { 0x08, 0x14 },

        // IDirectSoundBuffer_SetConeOrientation+0x28 : fstp [esp+10h+var_10]
        { 0x28, 0xD9 },
        { 0x29, 0x1C },
        { 0x2A, 0x24 },

        // IDirectSoundBuffer_SetConeOrientation+0x32 : retn 14h
        { 0x33, 0x14 },
        { 0x34, 0x00 }
OOVPA_END;

// ******************************************************************
// * DirectSound_CDirectSoundVoice::SetConeOutsideVolume
// ******************************************************************
OOVPA_XREF(DirectSound_CDirectSoundVoice_SetConeOutsideVolume, 4627, 9,

    XREF_DSVOICESETCONEOUTSIDEVOLUME,
    XRefZero)

        // DirectSound_CDirectSoundVoice_SetConeOutsideVolume+0x0D : mov edx, [esp+arg_4]
        { 0x0D, 0x8B },
        { 0x0E, 0x54 },
        { 0x0F, 0x24 },
        { 0x10, 0x08 },

        // DirectSound_CDirectSoundVoice_SetConeOutsideVolume+0x11 : mov [eax+30h], edx
        { 0x11, 0x89 },
        { 0x12, 0x50 },
        { 0x13, 0x30 },

        // DirectSound_CDirectSoundVoice_SetConeOutsideVolume+0x30 : retn 0Ch
        { 0x31, 0x0C },
        { 0x32, 0x00 }
OOVPA_END;

// ******************************************************************
// * DirectSound_CDirectSoundBuffer::SetConeOutsideVolume
// ******************************************************************
OOVPA_XREF(DirectSound_CDirectSoundBuffer_SetConeOutsideVolume, 4627, 11,

    XREF_DSBUFFERSETCONEOUTSIDEVOLUME,
    XRefOne)

        // DirectSound_CDirectSoundBuffer_SetConeOutsideVolume+0x35 : call [CDirectSoundVoice::SetConeOutsideVolume]
        XREF_ENTRY( 0x36, XREF_DSVOICESETCONEOUTSIDEVOLUME ),

        // DirectSound_CDirectSoundBuffer_SetConeOutsideVolume+0x21 : mov eax, 80004005h
        { 0x22, 0x05 },
        { 0x23, 0x40 },
        { 0x24, 0x00 },
        { 0x25, 0x80 },

        // DirectSound_CDirectSoundBuffer_SetConeOutsideVolume+0x31 : push [esp+0Ch+arg_0]
        { 0x31, 0xFF },
        { 0x32, 0x74 },
        { 0x33, 0x24 },
        { 0x34, 0x14 },

        // DirectSound_CDirectSoundBuffer_SetConeOutsideVolume+0x4F : retn 0Ch
        { 0x50, 0x0C },
        { 0x51, 0x00 }
OOVPA_END;

// ******************************************************************
// * IDirectSoundBuffer_SetConeOutsideVolume
// ******************************************************************
OOVPA_XREF(IDirectSoundBuffer_SetConeOutsideVolume, 4627, 9,

    XRefNoSaveIndex,
    XRefOne)

        // IDirectSoundBuffer_SetConeOutsideVolume+0x18 : call [CDirectSoundBuffer::SetConeOutsideVolume]
        XREF_ENTRY( 0x19, XREF_DSBUFFERSETCONEOUTSIDEVOLUME ),

        // IDirectSoundBuffer_SetConeOutsideVolume+0x0A : push [esp+4+arg_4]
        { 0x0A, 0xFF },
        { 0x0B, 0x74 },
        { 0x0C, 0x24 },
        { 0x0D, 0x0C },

        // IDirectSoundBuffer_SetConeOutsideVolume+0x15 : and ecx, eax
        { 0x15, 0x23 },
        { 0x16, 0xC8 },

        // IDirectSoundBuffer_SetConeOutsideVolume+0x1D : retn 0Ch
        { 0x1E, 0x0C },
        { 0x1F, 0x00 }
OOVPA_END;

// ******************************************************************
// * DirectSound_CDirectSoundVoice::SetPosition
// ******************************************************************
OOVPA_XREF(DirectSound_CDirectSoundVoice_SetPosition, 4627, 8,

    XREF_DSVOICESETPOSITION,
    XRefZero)

        // DirectSound_CDirectSoundVoice_SetPosition+0x0F : mov edx, [ebp+arg_4]
        { 0x0F, 0x8B },
        { 0x10, 0x55 },
        { 0x11, 0x0C },

        // DirectSound_CDirectSoundVoice_SetPosition+0x12 : mov [ecx+04h], edx
        { 0x12, 0x89 },
        { 0x13, 0x51 },
        { 0x14, 0x04 },

        // DirectSound_CDirectSoundVoice_SetPosition+0x51 : retn 14h
        { 0x52, 0x14 },
        { 0x53, 0x00 }
OOVPA_END;

// ******************************************************************
// * DirectSound_CDirectSoundBuffer::SetPosition
// ******************************************************************
OOVPA_XREF(DirectSound_CDirectSoundBuffer_SetPosition, 4627, 9,

    XREF_DSBUFFERSETPOSITION,
    XRefOne)

        // DirectSound_CDirectSoundBuffer_SetPosition+0x49 : call [CDirectSoundVoice::SetPosition]
        XREF_ENTRY( 0x4A, XREF_DSVOICESETPOSITION ),

        // DirectSound_CDirectSoundBuffer_SetPosition+0x2B : fld [ebp+arg_C]
        { 0x2B, 0xD9 },
        { 0x2C, 0x45 },
        { 0x2D, 0x14 },

        // DirectSound_CDirectSoundBuffer_SetPosition+0x43 : fstp [esp+18h+var_18]
        { 0x43, 0xD9 },
        { 0x44, 0x1C },
        { 0x45, 0x24 },

        // DirectSound_CDirectSoundBuffer_SetPosition+0x64 : retn 14h
        { 0x65, 0x14 },
        { 0x66, 0x00 }
OOVPA_END;

// ******************************************************************
// * DirectSound_CDirectSoundVoice::SetVelocity
// ******************************************************************
OOVPA_XREF(DirectSound_CDirectSoundVoice_SetVelocity, 4627, 8,

    XREF_DSVOICESETVELOCITY,
    XRefZero)

        // DirectSound_CDirectSoundVoice_SetVelocity+0x0F : mov edx, [ebp+arg_4]
        { 0x0F, 0x8B },
        { 0x10, 0x55 },
        { 0x11, 0x0C },

        // DirectSound_CDirectSoundVoice_SetVelocity+0x12 : mov [ecx+10h], edx
        { 0x12, 0x89 },
        { 0x13, 0x51 },
        { 0x14, 0x10 },

        // DirectSound_CDirectSoundVoice_SetVelocity+0x4F : retn 14h
        { 0x50, 0x14 },
        { 0x51, 0x00 }
OOVPA_END;

// ******************************************************************
// * DirectSound_CDirectSoundBuffer::SetVelocity
// ******************************************************************
OOVPA_XREF(DirectSound_CDirectSoundBuffer_SetVelocity, 4627, 9,

    XREF_DSBUFFERSETVELOCITY,
    XRefOne)

        // DirectSound_CDirectSoundBuffer_SetVelocity+0x49 : call [CDirectSoundVoice::SetVelocity]
        XREF_ENTRY( 0x4A, XREF_DSVOICESETVELOCITY ),

        // DirectSound_CDirectSoundBuffer_SetVelocity+0x2B : fld [ebp+arg_C]
        { 0x2B, 0xD9 },
        { 0x2C, 0x45 },
        { 0x2D, 0x14 },

        // DirectSound_CDirectSoundBuffer_SetVelocity+0x43 : fstp [esp+18h+var_18]
        { 0x43, 0xD9 },
        { 0x44, 0x1C },
        { 0x45, 0x24 },

        // DirectSound_CDirectSoundBuffer_SetVelocity+0x64 : retn 14h
        { 0x65, 0x14 },
        { 0x66, 0x00 }
OOVPA_END;

// ******************************************************************
// * DirectSound_CDirectSoundVoice::SetDopplerFactor
// ******************************************************************
OOVPA_XREF(DirectSound_CDirectSoundVoice_SetDopplerFactor, 4627, 9,

    XREF_DSVOICESETDOPPLERFACTOR,
    XRefZero)

        // DirectSound_CDirectSoundVoice_SetDopplerFactor+0x0D : mov edx, [esp+arg_4]
        { 0x0D, 0x8B },
        { 0x0E, 0x54 },
        { 0x0F, 0x24 },
        { 0x10, 0x08 },

        // DirectSound_CDirectSoundVoice_SetDopplerFactor+0x12 : mov [eax+48h], edx
        { 0x11, 0x89 },
        { 0x12, 0x50 },
        { 0x13, 0x48 },

        // DirectSound_CDirectSoundVoice_SetDopplerFactor+0x31 : retn 0Ch
        { 0x31, 0x0C },
        { 0x32, 0x00 }
OOVPA_END;

// ******************************************************************
// * DirectSound_CDirectSoundBuffer::SetDopplerFactor
// ******************************************************************
OOVPA_XREF(DirectSound_CDirectSoundBuffer_SetDopplerFactor, 4627, 10,

    XREF_DSBUFFERSETDOPPLERFACTOR,
    XRefOne)

        // DirectSound_CDirectSoundBuffer_SetDopplerFactor+0x39 : call [CDirectSoundVoice::SetDopplerFactor]
        XREF_ENTRY( 0x3A, XREF_DSVOICESETDOPPLERFACTOR ),

        // DirectSound_CDirectSoundBuffer_SetDopplerFactor+0x2D : push    [esp+4+arg_8]
        { 0x2D, 0xFF },
        { 0x2E, 0x74 },
        { 0x2F, 0x24 },
        { 0x30, 0x14 },

        // DirectSound_CDirectSoundBuffer_SetDopplerFactor+0x32 : fstp [esp+0Ch+var_C]
        { 0x32, 0xD9 },
        { 0x33, 0x1C },
        { 0x34, 0x24 },

        // DirectSound_CDirectSoundBuffer_SetDopplerFactor+0x53 : retn 0Ch
        { 0x54, 0x0C },
        { 0x55, 0x00 }
OOVPA_END;

// ******************************************************************
// * IDirectSoundBuffer_SetDopplerFactor
// ******************************************************************
OOVPA_XREF(IDirectSoundBuffer_SetDopplerFactor, 4627, 9,

    XRefNoSaveIndex,
    XRefOne)

        // IDirectSoundBuffer_SetDopplerFactor+0x1C : call [CDirectSoundBuffer::SetDopplerFactor]
        XREF_ENTRY( 0x1D, XREF_DSBUFFERSETDOPPLERFACTOR ),

        // IDirectSoundBuffer_SetDopplerFactor+0x08 : mov eax, [esp+4+arg_0]
        { 0x08, 0x8B },
        { 0x09, 0x44 },
        { 0x0A, 0x24 },
        { 0x0B, 0x08 },

        // IDirectSoundBuffer_SetDopplerFactor+0x19 : and ecx, eax
        { 0x19, 0x23 },
        { 0x1A, 0xC8 },

        // IDirectSoundBuffer_SetDopplerFactor+0x21 : retn 0Ch
        { 0x22, 0x0C },
        { 0x23, 0x00 }
OOVPA_END;

// ******************************************************************
// * DirectSound_CDirectSoundVoice::SetI3DL2Source
// ******************************************************************
OOVPA_XREF(DirectSound_CDirectSoundVoice_SetI3DL2Source, 4627, 10,

    XREF_DSVOICESETI3DL2SOURCE,
    XRefZero)

        // DirectSound_CDirectSoundVoice_SetI3DL2Source+0x12 : mov esi, [ecx]
        { 0x12, 0x8B },
        { 0x13, 0x31 },

        // DirectSound_CDirectSoundVoice_SetI3DL2Source+0x14 : mov [edx+4Ch], esi
        { 0x14, 0x89 },
        { 0x15, 0x72 },
        { 0x16, 0x4C },

        // DirectSound_CDirectSoundVoice_SetI3DL2Source+0x44 : fld dword ptr [ecx+10h]
        { 0x44, 0xD9 },
        { 0x45, 0x41 },
        { 0x46, 0x10 },

        // DirectSound_CDirectSoundVoice_SetI3DL2Source+0xAC : retn 0Ch
        { 0xAD, 0x0C },
        { 0xAE, 0x00 }
OOVPA_END;

// ******************************************************************
// * DirectSound_CDirectSoundBuffer::SetI3DL2Source
// ******************************************************************
OOVPA_XREF(DirectSound_CDirectSoundBuffer_SetI3DL2Source, 4627, 11,

    XREF_DSBUFFERSETI3DL2SOURCE,
    XRefOne)

        // DirectSound_CDirectSoundBuffer_SetI3DL2Source+0x35 : call [CDirectSoundVoice::SetI3DL2Source]
        XREF_ENTRY( 0x36, XREF_DSVOICESETI3DL2SOURCE ),

        // DirectSound_CDirectSoundBuffer_SetI3DL2Source+0x21 : mov eax, 80004005h
        { 0x22, 0x05 },
        { 0x23, 0x40 },
        { 0x24, 0x00 },
        { 0x25, 0x80 },

        // DirectSound_CDirectSoundBuffer_SetI3DL2Source+0x31 : push [esp+0Ch+arg_0]
        { 0x31, 0xFF },
        { 0x32, 0x74 },
        { 0x33, 0x24 },
        { 0x34, 0x14 },

        // DirectSound_CDirectSoundBuffer_SetI3DL2Source+0x4F : retn 0Ch
        { 0x50, 0x0C },
        { 0x51, 0x00 }
OOVPA_END;

// ******************************************************************
// * IDirectSoundBuffer_SetI3DL2Source
// ******************************************************************
OOVPA_XREF(IDirectSoundBuffer_SetI3DL2Source, 4627, 10,

    XRefNoSaveIndex,
    XRefOne)

        // IDirectSoundBuffer_SetI3DL2Source+0x18 : call [CDirectSoundBuffer::SetI3DL2Source]
        XREF_ENTRY( 0x19, XREF_DSBUFFERSETI3DL2SOURCE ),

        // IDirectSoundBuffer_SetI3DL2Source+0x04 : push [esp+arg_8]
        { 0x04, 0xFF },
        { 0x05, 0x74 },
        { 0x06, 0x24 },
        { 0x07, 0x0C },

        // IDirectSoundBuffer_SetI3DL2Source+0x0E : add eax, 0FFFFFFE4h
        { 0x0E, 0x83 },
        { 0x0F, 0xC0 },
        { 0x10, 0xE4 },

        // IDirectSoundBuffer_SetI3DL2Source+0x1D : retn 0Ch
        { 0x1E, 0x0C },
        { 0x1F, 0x00 }
OOVPA_END;

// ******************************************************************
// * IDirectSoundBuffer_Stop
// ******************************************************************
OOVPA_NO_XREF(IDirectSoundBuffer_Stop, 4627, 11)

        // IDirectSoundBuffer_Stop+0x00 : mov eax, [esp+arg_0]
        { 0x00, 0x8B },
        { 0x01, 0x44 },
        { 0x02, 0x24 },
        { 0x03, 0x04 },

        // IDirectSoundBuffer_Stop+0x04 : mov ecx, eax
        { 0x04, 0x8B },
        { 0x05, 0xC8 },

        // IDirectSoundBuffer_Stop+0x06 : add eax, 0FFFFFFE4h
        { 0x06, 0x83 },
        { 0x07, 0xC0 },
        { 0x08, 0xE4 },

        // IDirectSoundBuffer_Stop+0x15 : retn 4
        { 0x16, 0x04 },
        { 0x17, 0x00 }
OOVPA_END;
// +s

// ******************************************************************
// * DirectSound::CDirectSoundVoice::SetFormat
// ******************************************************************
OOVPA_XREF(DirectSound_CDirectSoundVoice_SetFormat, 4627, 8,

    XREF_DirectSound_CDirectSoundVoice_SetFormat,
    XRefZero)

        { 0x07, 0x4E },
        { 0x10, 0xE8 },
        { 0x19, 0xD8 },
        { 0x22, 0xFF },
        { 0x2B, 0x0C },
        { 0x34, 0xFF },
        { 0x3F, 0x8B },
        { 0x46, 0x00 },
OOVPA_END;

// ******************************************************************
// * DirectSound::CDirectSoundBuffer::SetFormat
// ******************************************************************
OOVPA_XREF(DirectSound_CDirectSoundBuffer_SetFormat, 4627, 8,

    XREF_DirectSound_CDirectSoundBuffer_SetFormat,
    XRefOne)

        XREF_ENTRY( 0x32, XREF_DirectSound_CDirectSoundVoice_SetFormat ),

        { 0x0C, 0x00 },
        { 0x12, 0x85 },
        { 0x1C, 0x15 },
        { 0x26, 0xEB },
        { 0x30, 0x10 },
        { 0x3A, 0x74 },
        { 0x47, 0x8B },
OOVPA_END;

// ******************************************************************
// * IDirectSoundBuffer_SetFormat
// ******************************************************************
OOVPA_XREF(IDirectSoundBuffer_SetFormat, 4627, 8,

    XRefNoSaveIndex,
    XRefOne)

        XREF_ENTRY( 0x15, XREF_DirectSound_CDirectSoundBuffer_SetFormat ),

        { 0x02, 0x24 },
        { 0x06, 0x24 },
        { 0x0A, 0x83 },
        { 0x0E, 0xD9 },
        { 0x12, 0xC8 },
        { 0x19, 0xC2 },
        { 0x1A, 0x08 },
OOVPA_END;

// ******************************************************************
// * CMcpxStream_Pause
// ******************************************************************
OOVPA_XREF(CMcpxStream_Pause, 4928, 11,

    XREF_DSSTREAMPAUSE,
    XRefZero)

        // CMcpxStream_Pause+0x17 : and ax, 0xFFDF
        { 0x17, 0x66 }, // (Offset,Value)-Pair #1
        { 0x18, 0x25 }, // (Offset,Value)-Pair #2
        { 0x19, 0xDF }, // (Offset,Value)-Pair #3

        // CMcpxStream_Pause+0x32 : jmp +0x56
        { 0x32, 0xEB }, // (Offset,Value)-Pair #4
        { 0x33, 0x56 }, // (Offset,Value)-Pair #5

        // CMcpxStream_Pause+0x39 : movzx eax, word ptr [esi+0x12]
        { 0x39, 0x0F }, // (Offset,Value)-Pair #6
        { 0x3A, 0xB7 }, // (Offset,Value)-Pair #7
        { 0x3B, 0x46 }, // (Offset,Value)-Pair #8
        { 0x3C, 0x12 }, // (Offset,Value)-Pair #9

        // CMcpxStream_Pause+0x8B : retn 0x04
        { 0x8B, 0xC2 }, // (Offset,Value)-Pair #10
        { 0x8C, 0x04 }, // (Offset,Value)-Pair #11
OOVPA_END;

// ******************************************************************
// * DirectSound_CDirectSoundStream_SetMixBinVolumes (untested)
// ******************************************************************
OOVPA_XREF(DirectSound_CDirectSoundStream_SetMixBinVolumes, 4627, 12,	

	XRefNoSaveIndex,
	XRefOne)

		XREF_ENTRY( 0x36, XREF_DSSETMIXBINVOLUMESB ),

		{ 0x0D, 0x0F },
		{ 0x0E, 0xB6 },
		{ 0x0F, 0xF0 },
		{ 0x21, 0x8B },
		{ 0x22, 0x05 },
		{ 0x23, 0x40 },
		{ 0x24, 0x00 },
		{ 0x25, 0x80 },
		{ 0x4F, 0xC2 },
		{ 0x50, 0x08 },
		{ 0x51, 0x00 },
OOVPA_END;

// ******************************************************************
// * DirectSound::CDirectSound::EnableHeadphones (incorrect?)
// ******************************************************************
OOVPA_XREF(DirectSound_CDirectSound_EnableHeadphones, 4627, 15,

    XREF_DirectSound_CDirectSound_EnableHeadphones,
    XRefZero)

		// DirectSound_CDirectSound_EnableHeadphones+0x12 : movzx eax, al
        { 0x12, 0x0F }, // (Offset,Value)-Pair #1
        { 0x13, 0xB6 }, // (Offset,Value)-Pair #2
        { 0x14, 0xC0 }, // (Offset,Value)-Pair #3

        // DirectSound_CDirectSound_EnableHeadphones+0x29 : mov eax, 0x80004005
        { 0x29, 0xB8 }, // (Offset,Value)-Pair #4
        { 0x2A, 0x05 }, // (Offset,Value)-Pair #5
        { 0x2B, 0x40 }, // (Offset,Value)-Pair #6
        { 0x2C, 0x00 }, // (Offset,Value)-Pair #7
		{ 0x2D, 0x80 }, // (Offset,Value)-Pair #8

        // DirectSound_CDirectSound_EnableHeadphones+0x59 : and eax, 0x7FFFFFFF
        { 0x59, 0x25 }, // (Offset,Value)-Pair #9
        { 0x5A, 0xFF }, // (Offset,Value)-Pair #10
        { 0x5B, 0xFF }, // (Offset,Value)-Pair #11
		{ 0x5C, 0xFF }, // (Offset,Value)-Pair #12
		{ 0x5D, 0x7F }, // (Offset,Value)-Pair #13

        // DirectSound_CDirectSound_EnableHeadphones+0x97 : leave
        //{ 0x97, 0xC9 }, // (Offset,Value)-Pair #14
		{ 0x98, 0xC2 },
		{ 0x99, 0x08 },
OOVPA_END;

// ******************************************************************
// * IDirectSound_EnableHeadphones
// ******************************************************************
OOVPA_XREF(IDirectSound_EnableHeadphones, 4627, 9,

	XRefNoSaveIndex,
	XRefOne)

		// IDirectSound_EnableHeadphones+0x14 : call [CDirectSound::EnableHeadphones]
		XREF_ENTRY( 0x15, XREF_DirectSound_CDirectSound_EnableHeadphones ),

		// IDirectSound_EnableHeadphones+0x04 : push dword ptr [esp+8]
		{ 0x04, 0xFF },
		{ 0x05, 0x74 },
		{ 0x06, 0x24 },
		{ 0x07, 0x08 },

		// IDirectSound_EnableHeadphones+0x13 : push ecx
		{ 0x13, 0x51 },

		// IDirectSound_EnableHeadphones+0x19 : retn 8
		{ 0x19, 0xC2 },
		{ 0x1A, 0x08 },
		{ 0x1B, 0x00 },
OOVPA_END;

/*
// ******************************************************************
// * DirectSound_CDirectSoundVoice::SetHeadrom
// ******************************************************************
OOVPA_XREF(DirectSound_CDirectSoundVoice_SetHeadroom, 4627, 9,

	XREF_DirectSound_CDirectSoundVoice_SetHeadroom,
	XRefOne) // Note : This was -1, which is used nowhere else and probably an error.

		XREF_ENTRY( 0x1B, XREF_DSSTREAMSETVOLUME ),

		{ 0x0A, 0x56 },
		{ 0x0F, 0x2B },
		{ 0x10, 0xCE },
		{ 0x17, 0x8B },
		{ 0x18, 0x4A },
		{ 0x19, 0x0C },
		{ 0x20, 0xC2 },
		{ 0x21, 0x08 },
OOVPA_END;

// ******************************************************************
// * DirectSound_CDirectSoundStream::SetHeadroom
// ******************************************************************
OOVPA_NO_XREF(DirectSound_CDirectSoundStream_SetHeadroom, 4627, 12,

	XRefNoSaveIndex,
	XRefOne)

		XREF_ENTRY( 0x36, XREF_DirectSound_CDirectSoundVoice_SetHeadroom ),

		{ 0x21, 0x8B },
		{ 0x22, 0x05 },
		{ 0x23, 0x40 },
		{ 0x24, 0x00 },
		{ 0x25, 0x80 },
		{ 0x2C, 0x57 },
		{ 0x31, 0x83 },
		{ 0x32, 0xC0 },
		{ 0x33, 0x04 },
		{ 0x4F, 0xC2 },
		{ 0x50, 0x08 },
OOVPA_END;
*/

// ******************************************************************
// * DirectSound_CDirectSound::SetAllParametersA
// ******************************************************************
OOVPA_XREF(DirectSound_CDirectSound_SetAllParametersA, 4831, 10,

    XREF_DSSETALLPARAMETERSA,
    XRefZero)

        { 0x16, 0x68 }, // (Offset,Value)-Pair #1
        { 0x17, 0x08 }, // (Offset,Value)-Pair #2
        { 0x18, 0x6E }, // (Offset,Value)-Pair #3
        { 0x19, 0x18 }, // (Offset,Value)-Pair #4

        { 0x2F, 0xD9 }, // (Offset,Value)-Pair #5
        { 0x30, 0x41 }, // (Offset,Value)-Pair #6
        { 0x31, 0x04 }, // (Offset,Value)-Pair #7

        { 0x87, 0x8B }, // (Offset,Value)-Pair #8
        { 0x88, 0x50 }, // (Offset,Value)-Pair #9
        { 0x89, 0x08 }, // (Offset,Value)-Pair #10
OOVPA_END;

// ******************************************************************
// * DirectSound::CDirectSound::GetOutputLevels
// ******************************************************************
OOVPA_XREF(DirectSound_CDirectSound_GetOutputLevels, 4627, 7,

    XREF_DirectSound_CDirectSound_GetOutputLevels,
    XRefZero)

        { 0x07, 0x10 },
        { 0x10, 0xF3 },
        { 0x19, 0x5E },
        { 0x22, 0xFE },
        { 0x2B, 0x85 },
        { 0x34, 0xA6 },
        { 0x3D, 0xD0 },
OOVPA_END;

// ******************************************************************
// * IDirectSound_GetOutputLevels
// ******************************************************************
OOVPA_XREF(IDirectSound_GetOutputLevels, 4627, 9,

    XRefNoSaveIndex,
    XRefOne)

        XREF_ENTRY( 0x19, XREF_DirectSound_CDirectSound_GetOutputLevels ),

        { 0x02, 0x24 },
        { 0x06, 0x24 },
        { 0x0A, 0xFF },
        { 0x0E, 0x83 },
        { 0x12, 0xD9 },
        { 0x16, 0xC8 },
        { 0x1D, 0xC2 },
        { 0x1E, 0x0C },
OOVPA_END;

// ******************************************************************
// * DirectSound::CDirectSoundVoice::SetAllParameters
// ******************************************************************
OOVPA_XREF(DirectSound_CDirectSoundVoice_SetAllParameters, 4627, 8,

    XREF_DirectSound_CDirectSoundVoice_SetAllParameters,
    XRefZero)

        { 0x1E, 0x92 },
        { 0x3E, 0x00 },
        { 0x5E, 0x00 },
        { 0x7E, 0x89 },
        { 0x9E, 0x28 },
        { 0xBE, 0x41 },
        { 0xDE, 0x8B },
        { 0xFE, 0x10 },
OOVPA_END;

// ******************************************************************
// * DirectSound::CDirectSoundBuffer::SetAllParameters
// ******************************************************************
OOVPA_XREF(DirectSound_CDirectSoundBuffer_SetAllParameters, 4627, 8,

    XREF_DirectSound_CDirectSoundBuffer_SetAllParameters,
    XRefOne)

        XREF_ENTRY( 0x36, XREF_DirectSound_CDirectSoundVoice_SetAllParameters ),

        { 0x0C, 0x00 },
        { 0x14, 0x74 },
        { 0x21, 0xB8 },
        { 0x2A, 0x74 },
        { 0x35, 0xE8 },
        { 0x40, 0x68 },
        { 0x4B, 0x8B },
OOVPA_END;

// ******************************************************************
// * IDirectSoundBuffer_SetAllParameters
// ******************************************************************
OOVPA_XREF(IDirectSoundBuffer_SetAllParameters, 4627, 9,

    XRefNoSaveIndex,
    XRefOne)

        XREF_ENTRY( 0x19, XREF_DirectSound_CDirectSoundBuffer_SetAllParameters ),

        { 0x02, 0x24 },
        { 0x06, 0x24 },
        { 0x0A, 0xFF },
        { 0x0E, 0x83 },
        { 0x12, 0xD9 },
        { 0x16, 0xC8 },
        { 0x1D, 0xC2 },
        { 0x1E, 0x0C },
OOVPA_END;

// ******************************************************************
// * DirectSound::CMcpxBuffer::Pause
// ******************************************************************
OOVPA_XREF(DirectSound_CMcpxBuffer_Pause, 4928, 7,

    XREF_DirectSound_CMcpxBuffer_Pause,
    XRefZero)

        { 0x0D, 0x4D },
        { 0x1C, 0x44 },
        { 0x2B, 0x8B },
        { 0x3A, 0x75 },
        { 0x49, 0x7D },
        { 0x58, 0xEB },
        { 0x67, 0xE8 },
OOVPA_END;

// ******************************************************************
// * DirectSound::CDirectSoundBuffer::Pause
// ******************************************************************
OOVPA_XREF(DirectSound_CDirectSoundBuffer_Pause, 4928, 8,

    XREF_DirectSound_CDirectSoundBuffer_Pause,
    XRefOne)

        XREF_ENTRY( 0x35, XREF_DirectSound_CMcpxBuffer_Pause ),

        { 0x0C, 0x00 },
        { 0x14, 0x74 },
        { 0x21, 0xB8 },
        { 0x2A, 0x24 },
        { 0x39, 0x85 },
        { 0x44, 0xFF },
        { 0x4B, 0xC7 },
OOVPA_END;

// ******************************************************************
// * IDirectSoundBuffer_Pause
// ******************************************************************
OOVPA_XREF(IDirectSoundBuffer_Pause, 4928, 8,

    XRefNoSaveIndex,
    XRefOne)

        XREF_ENTRY( 0x15, XREF_DirectSound_CDirectSoundBuffer_Pause ),

        { 0x02, 0x24 },
        { 0x06, 0x24 },
        { 0x0A, 0x83 },
        { 0x0E, 0xD9 },
        { 0x12, 0xC8 },
        { 0x19, 0xC2 },
        { 0x1A, 0x08 },
OOVPA_END;

// ******************************************************************
// * DirectSound::CMcpxBuffer::GetStatus
// ******************************************************************
OOVPA_XREF(DirectSound_CMcpxBuffer_GetStatus, 4721, 7,

    XREF_DirectSound_CMcpxBuffer_GetStatus,
    XRefZero)

        { 0x07, 0xE1 },
        { 0x10, 0x24 },
        { 0x19, 0x0F },
        { 0x22, 0x74 },
        { 0x2B, 0x80 },
        { 0x34, 0x24 },
        { 0x3D, 0x33 },
OOVPA_END;

// ******************************************************************
// * DirectSound::CDirectSoundBuffer::GetStatus
// ******************************************************************
OOVPA_XREF(DirectSound_CDirectSoundBuffer_GetStatus, 4721, 8,

    XREF_DirectSound_CDirectSoundBuffer_GetStatus,
    XRefOne)

        XREF_ENTRY( 0x35, XREF_DirectSound_CMcpxBuffer_GetStatus ),

        { 0x0C, 0x00 },
        { 0x14, 0x74 },
        { 0x21, 0xB8 },
        { 0x2A, 0x24 },
        { 0x39, 0x85 },
        { 0x44, 0xFF },
        { 0x4B, 0xC7 },
OOVPA_END;

// ******************************************************************
// * IDirectSoundBuffer_GetStatus
// ******************************************************************
OOVPA_XREF(IDirectSoundBuffer_GetStatus, 4721, 8,

    XRefNoSaveIndex,
    XRefOne)

        XREF_ENTRY( 0x15, XREF_DirectSound_CDirectSoundBuffer_GetStatus ),

        { 0x02, 0x24 },
        { 0x06, 0x24 },
        { 0x0A, 0x83 },
        { 0x0E, 0xD9 },
        { 0x12, 0xC8 },
        { 0x19, 0xC2 },
        { 0x1A, 0x08 },
OOVPA_END;

// ******************************************************************
// * DirectSound::CDirectSoundStream::SetMixBins
// ******************************************************************
OOVPA_XREF(DirectSound_CDirectSoundStream_SetMixBins, 4627, 8,

    XRefNoSaveIndex,
    XRefOne)

        XREF_ENTRY( 0x36, XREF_DSSETMIXBINSB ),

        { 0x0C, 0x00 },
        { 0x14, 0x74 },
        { 0x21, 0xB8 },
        { 0x2A, 0x24 },
        { 0x35, 0xE8 },
        { 0x40, 0x68 },
        { 0x4B, 0x8B },
OOVPA_END;

// ******************************************************************
// * DirectSound::CMcpxVoiceClient::SetEG
// ******************************************************************
OOVPA_XREF(DirectSound_CMcpxVoiceClient_SetEG, 4627, 8,

    XREF_DirectSound_CMcpxVoiceClient_SetEG,
    XRefZero)

        { 0x1E, 0x75 },
        { 0x3E, 0x0F },
        { 0x5E, 0xE3 },
        { 0x7E, 0x4E },
        { 0x9E, 0x40 },
        { 0xBE, 0x50 },
        { 0xDE, 0x1C },
        { 0xFE, 0x1C },
OOVPA_END;

// ******************************************************************
// * DirectSound::CDirectSoundVoice::SetEG
// ******************************************************************
OOVPA_XREF(DirectSound_CDirectSoundVoice_SetEG, 4627, 7,

    XREF_DirectSound_CDirectSoundVoice_SetEG,
    XRefOne)

        XREF_ENTRY( 0x0C, XREF_DirectSound_CMcpxVoiceClient_SetEG ),

        { 0x01, 0x44 },
        { 0x04, 0xFF },
        { 0x07, 0x08 },
        { 0x0A, 0x0C },
        { 0x10, 0xC2 },
        { 0x11, 0x08 },
OOVPA_END;

// ******************************************************************
// * DirectSound::CDirectSoundStream::SetEG
// ******************************************************************
OOVPA_XREF(DirectSound_CDirectSoundStream_SetEG, 4627, 8,

    XRefNoSaveIndex,
    XRefOne)

        XREF_ENTRY( 0x36, XREF_DirectSound_CDirectSoundVoice_SetEG ),

        { 0x0C, 0x00 },
        { 0x14, 0x74 },
        { 0x21, 0xB8 },
        { 0x2A, 0x24 },
        { 0x35, 0xE8 },
        { 0x40, 0x68 },
        { 0x4B, 0x8B },
OOVPA_END;

// ******************************************************************
// * DirectSound::CDirectSoundBuffer::SetEG
// ******************************************************************
OOVPA_XREF(DirectSound_CDirectSoundBuffer_SetEG, 4627, 8,

    XREF_DirectSound_CDirectSoundBuffer_SetEG,
    XRefOne)

        XREF_ENTRY( 0x32, XREF_DirectSound_CDirectSoundVoice_SetEG ),

        { 0x0C, 0x00 },
        { 0x12, 0x85 },
        { 0x1C, 0x15 },
        { 0x26, 0xEB },
        { 0x30, 0x10 },
        { 0x3A, 0x74 },
        { 0x47, 0x8B },
OOVPA_END;

// ******************************************************************
// * IDirectSoundBuffer_SetEG
// ******************************************************************
OOVPA_XREF(IDirectSoundBuffer_SetEG, 4627, 8,

    XRefNoSaveIndex,
    XRefOne)

        XREF_ENTRY( 0x15, XREF_DirectSound_CDirectSoundBuffer_SetEG ),

        { 0x02, 0x24 },
        { 0x06, 0x24 },
        { 0x0A, 0x83 },
        { 0x0E, 0xD9 },
        { 0x12, 0xC8 },
        { 0x19, 0xC2 },
        { 0x1A, 0x08 },
OOVPA_END;

// ******************************************************************
// * DirectSound::CDirectSoundStream::FlushEx
// ******************************************************************
OOVPA_XREF(DirectSound_CDirectSoundStream_FlushEx, 4627, 7,

    XREF_DSFLUSHEX2,
    XRefZero)

        { 0x0F, 0x00 },
        { 0x18, 0x0B },
        { 0x25, 0x05 },
        { 0x32, 0x8B },
        { 0x3F, 0x75 },
        { 0x4D, 0x85 },
        { 0x59, 0x15 },
OOVPA_END;

// ******************************************************************
// * IDirectSoundStream_FlushEx
// ******************************************************************
OOVPA_XREF(IDirectSoundStream_FlushEx, 4627, 9,

    XRefNoSaveIndex,
    XRefOne)

        XREF_ENTRY( 0x11, XREF_DSFLUSHEX2 ),

        { 0x01, 0x74 },
        { 0x04, 0xFF },
        { 0x07, 0x10 },
        { 0x0A, 0x24 },
        { 0x0D, 0x74 },
        { 0x10, 0xE8 },
        { 0x15, 0xC2 },
        { 0x16, 0x10 },
OOVPA_END;

// ******************************************************************
// * XAudioDownloadEffectsImage
// ******************************************************************
OOVPA_NO_XREF(XAudioDownloadEffectsImage, 4627, 8)

        { 0x1E, 0xB6 },
        { 0x41, 0x83 },
        { 0x61, 0x8B },
        { 0x80, 0x85 },
        { 0x9E, 0x8B },
        { 0xBE, 0x6A },
        { 0xDE, 0x07 },
        { 0xFE, 0xF7 },
OOVPA_END;

// ******************************************************************
// * DirectSound::CDirectSoundVoice::SetMode
// ******************************************************************
OOVPA_XREF(DirectSound_CDirectSoundVoice_SetMode, 4627, 7,

    XREF_DSBUFFERSETMODEB,
    XRefZero)

        { 0x03, 0x0C },
        { 0x08, 0x04 },
        { 0x0D, 0x89 },
        { 0x12, 0x8B },
        { 0x17, 0x51 },
        { 0x1C, 0xE8 },
        { 0x21, 0x33 },
OOVPA_END;

// ******************************************************************
// * DirectSound::CDirectSoundBuffer::SetMode
// ******************************************************************
OOVPA_XREF(DirectSound_CDirectSoundBuffer_SetMode, 4627, 8,

    XREF_DSBUFFERSETMODEA,
    XRefOne)

        XREF_ENTRY( 0x36, XREF_DSBUFFERSETMODEB ),

        { 0x0C, 0x00 },
        { 0x14, 0x74 },
        { 0x21, 0xB8 },
        { 0x2A, 0x74 },
        { 0x35, 0xE8 },
        { 0x40, 0x68 },
        { 0x4B, 0x8B },
OOVPA_END;

// ******************************************************************
// * IDirectSoundBuffer_SetMode
// ******************************************************************
OOVPA_XREF(IDirectSoundBuffer_SetMode, 4627, 9,

    XRefNoSaveIndex,
    XRefOne)

        XREF_ENTRY( 0x19, XREF_DSBUFFERSETMODEA ),

        { 0x02, 0x24 },
        { 0x06, 0x24 },
        { 0x0A, 0xFF },
        { 0x0E, 0x83 },
        { 0x12, 0xD9 },
        { 0x16, 0xC8 },
        { 0x1D, 0xC2 },
        { 0x1E, 0x0C },
OOVPA_END;

// ******************************************************************
// * DirectSound::CMcpxVoiceClient::SetFilter
// ******************************************************************
OOVPA_XREF(DirectSound_CMcpxVoiceClient_SetFilter, 4627, 8,

    XREF_DirectSound_CMcpxVoiceClient_SetFilter,
    XRefZero)

        { 0x1E, 0xFF },
        { 0x3E, 0x73 },
        { 0x5E, 0x3E },
        { 0x7E, 0x0B },
        { 0x9E, 0xF6 },
        { 0xBE, 0x89 },
        { 0xDE, 0x0F },
        { 0xFE, 0xB7 },
OOVPA_END;

// ******************************************************************
// * DirectSound::CDirectSoundVoice::SetFilter
// ******************************************************************
OOVPA_XREF(DirectSound_CDirectSoundVoice_SetFilter, 4627, 7,

    XREF_DirectSound_CDirectSoundVoice_SetFilter,
    XRefOne)

        XREF_ENTRY( 0x0C, XREF_DirectSound_CMcpxVoiceClient_SetFilter ),

        { 0x01, 0x44 },
        { 0x04, 0xFF },
        { 0x07, 0x08 },
        { 0x0A, 0x0C },
        { 0x10, 0xC2 },
        { 0x11, 0x08 },
OOVPA_END;

// ******************************************************************
// * DirectSound::CDirectSoundBuffer::SetFilter
// ******************************************************************
OOVPA_XREF(DirectSound_CDirectSoundBuffer_SetFilter, 4627, 8,

    XREF_DirectSound_CDirectSoundBuffer_SetFilter,
    XRefOne)

        XREF_ENTRY( 0x32, XREF_DirectSound_CDirectSoundVoice_SetFilter ),

        { 0x0C, 0x00 },
        { 0x12, 0x85 },
        { 0x1C, 0x15 },
        { 0x26, 0xEB },
        { 0x30, 0x10 },
        { 0x3A, 0x74 },
        { 0x47, 0x8B },
OOVPA_END;

// ******************************************************************
// * DirectSound::CDirectSoundStream::SetFilter
// ******************************************************************
OOVPA_XREF(DirectSound_CDirectSoundStream_SetFilter, 4627, 8,

    XREF_DirectSound_CDirectSoundStream_SetFilter,
    XRefOne)

        XREF_ENTRY( 0x36, XREF_DirectSound_CDirectSoundVoice_SetFilter ),

        { 0x0C, 0x00 },
        { 0x14, 0x74 },
        { 0x21, 0xB8 },
        { 0x2A, 0x24 },
        { 0x35, 0xE8 },
        { 0x40, 0x68 },
        { 0x4B, 0x8B },
OOVPA_END;

// ******************************************************************
// * IDirectSoundBuffer_SetFilter
// ******************************************************************
OOVPA_XREF(IDirectSoundBuffer_SetFilter, 4627, 8,

    XRefNoSaveIndex,
    XRefOne)

        XREF_ENTRY( 0x15, XREF_DirectSound_CDirectSoundBuffer_SetFilter ),

        { 0x02, 0x24 },
        { 0x06, 0x24 },
        { 0x0A, 0x83 },
        { 0x0E, 0xD9 },
        { 0x12, 0xC8 },
        { 0x19, 0xC2 },
        { 0x1A, 0x08 },
OOVPA_END;

// ******************************************************************
// * DirectSound::CDirectSoundVoice::SetPitch
// ******************************************************************
OOVPA_XREF(DirectSound_CDirectSoundVoice_SetPitch, 4627, 6,

    XREF_DSBUFFERSETPITCHB,
    XRefZero)

        { 0x02, 0x24 },
        { 0x06, 0x10 },
        { 0x0A, 0x08 },
        { 0x0E, 0x8B },
        { 0x16, 0xC2 },
        { 0x17, 0x08 },
OOVPA_END;

// ******************************************************************
// * DirectSound::CDirectSoundBuffer::SetPitch
// ******************************************************************
OOVPA_XREF(DirectSound_CDirectSoundBuffer_SetPitch, 4627, 8,

    XREF_DSBUFFERSETPITCHA,
    XRefOne)

        XREF_ENTRY( 0x32, XREF_DSBUFFERSETPITCHB ),

        { 0x0C, 0x00 },
        { 0x12, 0x85 },
        { 0x1C, 0x15 },
        { 0x26, 0xEB },
        { 0x30, 0x10 },
        { 0x3A, 0x74 },
        { 0x47, 0x8B },
OOVPA_END;

// ******************************************************************
// * IDirectSoundBuffer_SetPitch
// ******************************************************************
OOVPA_XREF(IDirectSoundBuffer_SetPitch, 4627, 8,

    XRefNoSaveIndex,
    XRefOne)

        XREF_ENTRY( 0x15, XREF_DSBUFFERSETPITCHA ),

        { 0x02, 0x24 },
        { 0x06, 0x24 },
        { 0x0A, 0x83 },
        { 0x0E, 0xD9 },
        { 0x12, 0xC8 },
        { 0x19, 0xC2 },
        { 0x1A, 0x08 },
OOVPA_END;

// ******************************************************************
// * DirectSound::CDirectSoundVoice::SetHeadroom
// ******************************************************************
OOVPA_XREF(DirectSound_CDirectSoundVoice_SetHeadroom, 4627, 8,

    XREF_DirectSound_CDirectSoundVoice_SetHeadroom,
    XRefOne)

	// DirectSound_CDirectSoundVoice_SetHeadroom+0x1B : call [CMcpxVoiceClient::SetVolume]
        XREF_ENTRY( 0x1B, XREF_DSSTREAMSETVOLUME ),

        { 0x03, 0x04 },
        { 0x08, 0x48 },
        { 0x0D, 0x24 },
        { 0x12, 0x48 },
        { 0x17, 0x8B },
        { 0x1F, 0x5E },
        { 0x21, 0x08 },
OOVPA_END;

// ******************************************************************
// * DirectSound::CDirectSoundStream::SetHeadroom
// ******************************************************************
OOVPA_XREF(DirectSound_CDirectSoundStream_SetHeadroom, 4627, 8,

    XRefNoSaveIndex,
    XRefOne)

        XREF_ENTRY( 0x36, /*XREF_DirectSound_CDirectSoundVoice_SetHeadroom*/ XREF_DSBUFFERSETHEADROOMA ),

        { 0x0C, 0x00 },
        { 0x14, 0x74 },
        { 0x21, 0xB8 },
        { 0x2A, 0x24 },
        { 0x35, 0xE8 },
        { 0x40, 0x68 },
        { 0x4B, 0x8B },
OOVPA_END;

// ******************************************************************
// * DirectSound::CDirectSoundVoice::SetOutputBuffer
// ******************************************************************
OOVPA_XREF(DirectSound_CDirectSoundVoice_SetOutputBuffer, 4627, 7,

    XREF_DirectSound_CDirectSoundVoice_SetOutputBuffer,
    XRefZero)

        { 0x09, 0xF7 },
        { 0x14, 0x8B },
        { 0x1F, 0x3B },
        { 0x2A, 0xE8 },
        { 0x35, 0x8B },
        { 0x40, 0x74 },
        { 0x4B, 0xD8 },
OOVPA_END;

// ******************************************************************
// * DirectSound::CDirectSoundBuffer::SetOutputBuffer
// ******************************************************************
OOVPA_XREF(DirectSound_CDirectSoundBuffer_SetOutputBuffer, 4627, 8,

    XREF_DirectSound_CDirectSoundBuffer_SetOutputBuffer,
    XRefOne)

        XREF_ENTRY( 0x32, XREF_DirectSound_CDirectSoundVoice_SetOutputBuffer ),

        { 0x0C, 0x00 },
        { 0x12, 0x85 },
        { 0x1C, 0x15 },
        { 0x26, 0xEB },
        { 0x30, 0x10 },
        { 0x3A, 0x74 },
        { 0x47, 0x8B },
OOVPA_END;

// ******************************************************************
// * DirectSound::CDirectSoundStream::SetOutputBuffer
// ******************************************************************
OOVPA_XREF(DirectSound_CDirectSoundStream_SetOutputBuffer, 4627, 8,

    XRefNoSaveIndex,
    XRefOne)

        XREF_ENTRY( 0x36, XREF_DirectSound_CDirectSoundVoice_SetOutputBuffer ),

        { 0x0C, 0x00 },
        { 0x14, 0x74 },
        { 0x21, 0xB8 },
        { 0x2A, 0x24 },
        { 0x35, 0xE8 },
        { 0x40, 0x68 },
        { 0x4B, 0x8B },
OOVPA_END;

// ******************************************************************
// * IDirectSoundBuffer_SetOutputBuffer
// ******************************************************************
OOVPA_XREF(IDirectSoundBuffer_SetOutputBuffer, 4627, 8,

    XRefNoSaveIndex,
    XRefOne)

        XREF_ENTRY( 0x15, XREF_DirectSound_CDirectSoundBuffer_SetOutputBuffer ),

        { 0x02, 0x24 },
        { 0x06, 0x24 },
        { 0x0A, 0x83 },
        { 0x0E, 0xD9 },
        { 0x12, 0xC8 },
        { 0x19, 0xC2 },
        { 0x1A, 0x08 },
OOVPA_END;

// ******************************************************************
// * DirectSound::CDirectSoundVoice::SetRolloffCurve
// ******************************************************************
OOVPA_XREF(DirectSound_CDirectSoundVoice_SetRolloffCurve, 4627, 8,

    XREF_DSVOICESETROLLOFFCURVE,
    XRefZero)

        { 0x07, 0x8B },
        { 0x10, 0x08 },
        { 0x13, 0x70 },
        { 0x19, 0xB4 },
        { 0x22, 0x51 },
        { 0x2B, 0x00 },
        { 0x34, 0x10 },
        { 0x3E, 0x33 },
OOVPA_END;

// ******************************************************************
// * DirectSound::CDirectSoundBuffer::SetRolloffCurve
// ******************************************************************
OOVPA_XREF(DirectSound_CDirectSoundBuffer_SetRolloffCurve, 4627, 8,

    XREF_DSBUFFERSETROLLOFFCURVE,
    XRefOne)

        XREF_ENTRY( 0x3A, XREF_DSVOICESETROLLOFFCURVE ),

        { 0x0C, 0x00 },
        { 0x14, 0x74 },
        { 0x21, 0xB8 },
        { 0x2A, 0x74 },
        { 0x35, 0xFF },
        { 0x40, 0x8B },
        { 0x4F, 0x8B },
OOVPA_END;

// ******************************************************************
// * DirectSound::CDirectSoundStream::SetRolloffCurve
// ******************************************************************
OOVPA_XREF(DirectSound_CDirectSoundStream_SetRolloffCurve, 4627, 8,

    XRefNoSaveIndex,
    XRefOne)

        XREF_ENTRY( 0x3E, XREF_DSVOICESETROLLOFFCURVE ),

        { 0x0C, 0x00 },
        { 0x16, 0x68 },
        { 0x22, 0x05 },
        { 0x2E, 0x74 },
        { 0x3A, 0x24 },
        { 0x46, 0x74 },
        { 0x53, 0x8B },
OOVPA_END;

// ******************************************************************
// * IDirectSoundBuffer_SetRolloffCurve
// ******************************************************************
OOVPA_XREF(IDirectSoundBuffer_SetRolloffCurve, 4627, 8,

    XRefNoSaveIndex,
    XRefOne)

        XREF_ENTRY( 0x1D, XREF_DSBUFFERSETROLLOFFCURVE ),

        { 0x03, 0x10 },
        { 0x08, 0xFF },
        { 0x0D, 0xC8 },
        { 0x12, 0x83 },
        { 0x17, 0x1B },
        { 0x1C, 0xE8 },
        { 0x21, 0xC2 },
OOVPA_END;

// ******************************************************************
// * DirectSound::CMemoryManager::MemAlloc
// ******************************************************************
// * FOR DEBUGGING USE ONLY!
// ******************************************************************
OOVPA_NO_XREF(DirectSound_CMemoryManager_MemAlloc, 4627, 10)

		// DirectSound::CMemoryManager::PoolAlloc + 0x1B: cmp [esp+4+0xC], 0
		{ 0x1B, 0x83 },
		{ 0x1C, 0x7C },
		{ 0x1D, 0x24 },
		{ 0x1E, 0x10 },
		{ 0x1F, 0x00 },
		// DirectSound::CMemoryManager::PoolAlloc + 0x33: and ecx, 3
		{ 0x33, 0x83 },
		{ 0x34, 0xE1 },
		{ 0x35, 0x03 },
		// DirectSound::CMemoryManager::PoolAlloc + 0x65: retn 0xC
		{ 0x65, 0xC2 },
		{ 0x66, 0x0C }
OOVPA_END;

// ******************************************************************
// * XWaveFileCreateMediaObject
// ******************************************************************
OOVPA_NO_XREF(XWaveFileCreateMediaObject, 4627, 7)

        { 0x0D, 0x0B },
        { 0x1C, 0xF7 },
        { 0x2B, 0x07 },
        { 0x3A, 0xF0 },
        { 0x49, 0x10 },
        { 0x5C, 0x8B },
        { 0x67, 0x07 },
OOVPA_END;

// ******************************************************************
// * DirectSound::CDirectSoundBuffer::SetNotificationPositions
// ******************************************************************
OOVPA_XREF(DirectSound_CDirectSoundBuffer_SetNotificationPositions, 4627, 7,

    XREF_DirectSound_CDirectSoundBuffer_SetNotificationPositions,
    XRefZero)

        { 0x0C, 0x00 },
        { 0x1B, 0xFF },
        { 0x25, 0x80 },
        { 0x32, 0x74 },
        { 0x3F, 0xF8 },
        { 0x4C, 0x8B },
        { 0x5D, 0x8B },
OOVPA_END;

// ******************************************************************
// * XFileCreateMediaObjectEx
// ******************************************************************
OOVPA_NO_XREF(XFileCreateMediaObjectEx, 4627, 7)

        { 0x0A, 0xC0 },
        { 0x16, 0xF8 },
        { 0x22, 0xE6 },
        { 0x2E, 0x1C },
        { 0x3A, 0xF0 },
        { 0x46, 0x4C },
        { 0x52, 0xFF },
OOVPA_END;

// ******************************************************************
// * IDirectSoundBuffer_SetNotificationPositions
// ******************************************************************
OOVPA_XREF(IDirectSoundBuffer_SetNotificationPositions, 4627, 9,

    XRefNoSaveIndex,
    XRefOne)

        XREF_ENTRY( 0x19, XREF_DirectSound_CDirectSoundBuffer_SetNotificationPositions ),

        { 0x02, 0x24 },
        { 0x06, 0x24 },
        { 0x0A, 0xFF },
        { 0x0E, 0x83 },
        { 0x12, 0xD9 },
        { 0x16, 0xC8 },
        { 0x1D, 0xC2 },
        { 0x1E, 0x0C },
OOVPA_END;

// ******************************************************************
// * CMcpxVoiceClient::SetLFO
// ******************************************************************
OOVPA_XREF(CMcpxVoiceClient_SetLFO, 4627, 8,

    XREF_DirectSound_CMcpxVoiceClient_SetLFO,
    XRefZero)

        { 0x1E, 0x48 },
        { 0x3E, 0x31 },
        { 0x5E, 0x35 },
        { 0x7E, 0xE1 },
        { 0x9E, 0x8B },
        { 0xBE, 0x8B },
        { 0xDE, 0x05 },
        { 0xFE, 0x6C },
OOVPA_END;

// ******************************************************************
// * DirectSound_CDirectSoundVoice::SetLFO
// ******************************************************************
OOVPA_XREF(DirectSound_CDirectSoundVoice_SetLFO, 4627, 7,

    XREF_DirectSound_CDirectSoundVoice_SetLFO,
    XRefOne)

        XREF_ENTRY( 0x0C, XREF_DirectSound_CMcpxVoiceClient_SetLFO ),

        { 0x01, 0x44 },
        { 0x04, 0xFF },
        { 0x07, 0x08 },
        { 0x0A, 0x0C },
        { 0x10, 0xC2 },
        { 0x11, 0x08 },
OOVPA_END;

// ******************************************************************
// * DirectSound_CDirectSoundBuffer::SetLFO
// ******************************************************************
OOVPA_XREF(DirectSound_CDirectSoundBuffer_SetLFO, 4627, 8,

    XREF_DirectSound_CDirectSoundBuffer_SetLFO,
    XRefOne)

        XREF_ENTRY( 0x32, XREF_DirectSound_CDirectSoundVoice_SetLFO ),

        { 0x0C, 0x00 },
        { 0x12, 0x85 },
        { 0x1C, 0x15 },
        { 0x26, 0xEB },
        { 0x30, 0x10 },
        { 0x3A, 0x74 },
        { 0x47, 0x8B },
OOVPA_END;

// ******************************************************************
// * IDirectSoundBuffer_SetLFO
// ******************************************************************
OOVPA_XREF(IDirectSoundBuffer_SetLFO, 4627, 8,

    XRefNoSaveIndex,
    XRefOne)

        XREF_ENTRY( 0x15, XREF_DirectSound_CDirectSoundBuffer_SetLFO ),

        { 0x02, 0x24 },
        { 0x06, 0x24 },
        { 0x0A, 0x83 },
        { 0x0E, 0xD9 },
        { 0x12, 0xC8 },
        { 0x19, 0xC2 },
        { 0x1A, 0x08 },
OOVPA_END;

// ******************************************************************
// * DirectSound::CDirectSoundStream::SetLFO
// ******************************************************************
OOVPA_XREF(DirectSound_CDirectSoundStream_SetLFO, 4627, 10,

    XRefNoSaveIndex,
    XRefOne)

        XREF_ENTRY( 0x36, XREF_DirectSound_CDirectSoundVoice_SetLFO ),

        { 0x0C, 0x00 },
        { 0x0F, 0xF0 },
        { 0x12, 0x85 },
        { 0x15, 0x0B },
        { 0x3A, 0x85 },
        { 0x3D, 0xF8 },
        { 0x40, 0x68 },
        { 0x4F, 0xC2 },
        { 0x50, 0x08 },
OOVPA_END;

// ******************************************************************
// * DirectSound::CDirectSoundStream::SetPitch
// ******************************************************************
OOVPA_XREF(DirectSound_CDirectSoundStream_SetPitch, 4627, 12,

    XRefNoSaveIndex,
    XRefOne)

        XREF_ENTRY( 0x36, XREF_DSBUFFERSETPITCHB ),

        { 0x00, 0x56 },
        { 0x0C, 0x00 },
        { 0x14, 0x74 },
        { 0x21, 0xB8 },
        { 0x2A, 0x24 },
        { 0x35, 0xE8 },
        { 0x40, 0x68 },
        { 0x4B, 0x8B },
        { 0x4F, 0xC2 },
        { 0x50, 0x08 },
        { 0x51, 0x00 },
OOVPA_END;

// ******************************************************************
// * DirectSound_CDirectSoundBuffer::SetVolume
// ******************************************************************
#define DirectSound_CDirectSoundBuffer_SetVolume_4627 DirectSound_CDirectSoundBuffer_SetVolume_4361

// ******************************************************************
// * IDirectSoundBuffer8::SetVolume
// ******************************************************************
#define IDirectSoundBuffer_SetVolume_4627 IDirectSoundBuffer_SetVolume_4361

// ******************************************************************
// * Direct, 4627
// ******************************************************************
OOVPATable DSound_4627[] = {

	REGISTER_OOVPA(DirectSoundCreate, 4361, PATCH),
	REGISTER_OOVPA(DirectSoundDoWork, 4627, PATCH),
	REGISTER_OOVPA(DirectSoundGetSampleTime, 4627, PATCH),
	REGISTER_OOVPA(DirectSound_CDirectSound_CreateSoundBuffer, 4627, XREF),
	REGISTER_OOVPA(DirectSound_CDirectSoundBuffer_SetPlayRegion, 4361, XREF),
	REGISTER_OOVPA(IDirectSoundBuffer_SetPlayRegion, 4361, PATCH),
  REGISTER_OOVPA(DirectSound_CDirectSoundBuffer_SetLoopRegion, 4361, XREF),
	REGISTER_OOVPA(IDirectSoundBuffer_SetLoopRegion, 4361, PATCH),
	REGISTER_OOVPA(DirectSound_CDirectSound_SetI3DL2Listener, 4432, XREF),
	REGISTER_OOVPA(IDirectSound_SetI3DL2Listener, 4432, PATCH),
	REGISTER_OOVPA(DirectSound_CDirectSound_SetMixBinHeadroom, 4627, XREF),
	REGISTER_OOVPA(IDirectSound_SetMixBinHeadroom, 4627, PATCH),
	REGISTER_OOVPA(IDirectSoundBuffer_SetHeadroomA, 4928, XREF),
	REGISTER_OOVPA(IDirectSoundBuffer_SetHeadroom, 4928, PATCH),
	REGISTER_OOVPA(DirectSound_CDirectSound_SetVelocity, 4627, XREF),
	REGISTER_OOVPA(IDirectSound_SetVelocity, 3936, PATCH),
	REGISTER_OOVPA(DirectSound_CDirectSound_SetAllParametersA, 4627, XREF),
	REGISTER_OOVPA(DirectSound_CDirectSound_SetAllParametersA, 4721, XREF),
	REGISTER_OOVPA(DirectSound_CDirectSound_SetAllParametersA, 4831, XREF),
	REGISTER_OOVPA(DirectSound_CDirectSound_SetAllParameters, 4928, XREF),
	REGISTER_OOVPA(IDirectSound_SetAllParameters, 3936, PATCH),
  REGISTER_OOVPA(DirectSound_CDirectSoundVoiceSettings_SetMixBins, 4361, XREF),
	REGISTER_OOVPA(DirectSound_CDirectSoundVoice_SetMixBins, 4432, XREF),
	REGISTER_OOVPA(DirectSound_CDirectSoundBuffer_SetMixBins, 4432, XREF),
	REGISTER_OOVPA(IDirectSoundBuffer_SetMixBins, 4432, PATCH),
	REGISTER_OOVPA(DirectSound_CDirectSoundVoiceSettings_SetMixBinVolumes, 4627, XREF),
	REGISTER_OOVPA(DirectSound_CDirectSoundVoice_SetMixBinVolumes, 4627, XREF),
	REGISTER_OOVPA(DirectSound_CDirectSoundBuffer_SetMixBinVolumes, 4627, XREF),
	REGISTER_OOVPA(IDirectSoundBuffer_SetMixBinVolumes, 4627, PATCH),
	REGISTER_OOVPA(DirectSound_CDirectSound_SetPositionA, 4627, XREF),
	REGISTER_OOVPA(DirectSound_CDirectSound_SetPositionA, 4432, XREF), // TODO: Find a cure for laziness...
	REGISTER_OOVPA(IDirectSound_SetPosition, 3936, PATCH),
	REGISTER_OOVPA(DirectSoundCreateBuffer, 4627, PATCH),
	REGISTER_OOVPA(IDirectSound_CreateSoundBuffer, 4627, PATCH),
	REGISTER_OOVPA(IDirectSound_AddRef, 3936, PATCH),
	REGISTER_OOVPA(DirectSound_CDirectSoundVoice_SetFrequency, 4627, XREF),
	REGISTER_OOVPA(DirectSound_CDirectSoundBuffer_SetFrequency, 4627, XREF),
	REGISTER_OOVPA(IDirectSoundBuffer_SetFrequency, 4627, PATCH),
	REGISTER_OOVPA(CMcpxVoiceClient_SetVolume, 4627, XREF),
	REGISTER_OOVPA(DirectSound_CDirectSoundStream_SetVolume, 4627, PATCH),
	REGISTER_OOVPA(IDirectSoundBuffer_LockA, 4627, XREF),
	REGISTER_OOVPA(IDirectSoundBuffer_Lock, 3936, PATCH),
	REGISTER_OOVPA(DirectSound_CDirectSound_CreateSoundStream, 4361, XREF),
	REGISTER_OOVPA(IDirectSound_CreateSoundStream, 3936, PATCH),
	REGISTER_OOVPA(DirectSoundCreateStream, 4361, PATCH),
	REGISTER_OOVPA(CMcpxStream_Pause, 4361, XREF),
	REGISTER_OOVPA(CMcpxStream_Pause, 4928, XREF),
	REGISTER_OOVPA(DirectSound_CDirectSoundStream_Pause, 4361, PATCH),
	REGISTER_OOVPA(CMcpxBuffer_SetBufferData, 4361, XREF),
	REGISTER_OOVPA(DirectSound_CDirectSoundBuffer_SetBufferData, 4361, XREF),
	REGISTER_OOVPA(IDirectSoundBuffer_SetBufferData, 4361, PATCH),
	REGISTER_OOVPA(CMcpxBuffer_GetStatus, 4627, XREF),
	REGISTER_OOVPA(CMcpxBuffer_GetStatus, 4721, XREF),
    // REGISTER_OOVPA(CMcpxBuffer_GetStatus, 4928, XREF)
	REGISTER_OOVPA(CMcpxBuffer_GetStatusB, 4627, XREF),
	REGISTER_OOVPA(DirectSound_CDirectSoundBuffer_GetStatus, 4627, XREF),
	REGISTER_OOVPA(IDirectSoundBuffer_GetStatus, 4627, PATCH),
	REGISTER_OOVPA(CMcpxBuffer_SetCurrentPosition, 4361, XREF),
	REGISTER_OOVPA(DirectSound_CDirectSoundBuffer_SetCurrentPosition, 4361, XREF),
	REGISTER_OOVPA(IDirectSoundBuffer_SetCurrentPosition, 4361, PATCH),
	REGISTER_OOVPA(CMcpxBuffer_GetCurrentPosition, 4361, XREF),
	REGISTER_OOVPA(DirectSound_CDirectSoundBuffer_GetCurrentPosition, 4361, XREF),
	REGISTER_OOVPA(IDirectSoundBuffer_GetCurrentPosition, 3936, PATCH),
	REGISTER_OOVPA(DirectSound_CDirectSound_GetSpeakerConfig, 4627, PATCH),
	REGISTER_OOVPA(CMcpxBuffer_Play, 4361, XREF),
	REGISTER_OOVPA(CMcpxBuffer_Play, 4721, XREF),
	REGISTER_OOVPA(CMcpxBuffer_Play, 4928, XREF),
	REGISTER_OOVPA(DirectSound_CDirectSoundBuffer_Play, 4361, XREF),
	REGISTER_OOVPA(IDirectSoundBuffer_Play, 4361, PATCH),
	REGISTER_OOVPA(IDirectSound_Release, 3936, PATCH),
	REGISTER_OOVPA(IDirectSound_DownloadEffectsImage, 3936, PATCH),
	REGISTER_OOVPA(IDirectSound_SetOrientation, 3936, PATCH),
	REGISTER_OOVPA(DirectSound_CDirectSound_SetDistanceFactorA, 4531, XREF),
	REGISTER_OOVPA(DirectSound_CDirectSound_SetDistanceFactorA, 4627, XREF),
	REGISTER_OOVPA(IDirectSound_SetDistanceFactor, 4432, PATCH),
	REGISTER_OOVPA(DirectSound_CDirectSound_SetRolloffFactor, 4627, XREF),
	REGISTER_OOVPA(IDirectSound_SetRolloffFactor, 4627, PATCH),
	REGISTER_OOVPA(DirectSound_CDirectSound_SetDopplerFactor, 4531, XREF),
	REGISTER_OOVPA(DirectSound_CDirectSound_SetDopplerFactor, 4627, XREF),
	REGISTER_OOVPA(IDirectSound_SetDopplerFactor, 4627, PATCH),
	REGISTER_OOVPA(DirectSound_CDirectSound_CommitDeferredSettings, 4432, PATCH),
	REGISTER_OOVPA(DirectSound_CDirectSoundVoice_SetMaxDistance, 4432, XREF),
	REGISTER_OOVPA(DirectSound_CDirectSoundBuffer_SetMaxDistance, 4432, XREF),
	REGISTER_OOVPA(IDirectSoundBuffer_SetMaxDistance, 4432, PATCH),
	REGISTER_OOVPA(DirectSound_CDirectSoundVoice_SetMinDistance, 4432, XREF),
	REGISTER_OOVPA(DirectSound_CDirectSoundBuffer_SetMinDistance, 4432, XREF),
	REGISTER_OOVPA(IDirectSoundBuffer_SetMinDistance, 4432, PATCH),
	REGISTER_OOVPA(DirectSound_CDirectSoundVoice_SetRolloffFactor, 4627, XREF), // s+
	REGISTER_OOVPA(DirectSound_CDirectSoundBuffer_SetRolloffFactor, 4627, XREF),
	REGISTER_OOVPA(IDirectSoundBuffer_SetRolloffFactor, 4627, PATCH),
	REGISTER_OOVPA(DirectSound_CDirectSoundVoice_SetDistanceFactor, 4627, XREF),
	REGISTER_OOVPA(DirectSound_CDirectSoundBuffer_SetDistanceFactor, 4627, XREF),
	REGISTER_OOVPA(IDirectSoundBuffer_SetDistanceFactor, 4627, PATCH),
	REGISTER_OOVPA(DirectSound_CDirectSoundVoice_SetConeAngles, 4627, XREF),
	REGISTER_OOVPA(DirectSound_CDirectSoundBuffer_SetConeAngles, 4627, XREF),
	REGISTER_OOVPA(IDirectSoundBuffer_SetConeAngles, 4627, PATCH),
	REGISTER_OOVPA(DirectSound_CDirectSoundVoice_SetConeOrientation, 4627, XREF),
	REGISTER_OOVPA(DirectSound_CDirectSoundBuffer_SetConeOrientation, 4627, XREF),
	REGISTER_OOVPA(IDirectSoundBuffer_SetConeOrientation, 4627, PATCH),
	REGISTER_OOVPA(DirectSound_CDirectSoundVoice_SetConeOutsideVolume, 4627, XREF),
	REGISTER_OOVPA(DirectSound_CDirectSoundBuffer_SetConeOutsideVolume, 4627, XREF),
	REGISTER_OOVPA(IDirectSoundBuffer_SetConeOutsideVolume, 4627, PATCH),
	REGISTER_OOVPA(DirectSound_CDirectSoundVoice_SetPosition, 4627, XREF),
	REGISTER_OOVPA(DirectSound_CDirectSoundBuffer_SetPosition, 4627, XREF),
	REGISTER_OOVPA(IDirectSoundBuffer_SetPosition, 3936, PATCH),
	REGISTER_OOVPA(DirectSound_CDirectSoundVoice_SetVelocity, 4627, XREF),
	REGISTER_OOVPA(DirectSound_CDirectSoundBuffer_SetVelocity, 4627, XREF),
	REGISTER_OOVPA(IDirectSoundBuffer_SetVelocity, 3936, PATCH),
	REGISTER_OOVPA(DirectSound_CDirectSoundVoice_SetDopplerFactor, 4627, XREF),
	REGISTER_OOVPA(DirectSound_CDirectSoundBuffer_SetDopplerFactor, 4627, XREF),
	REGISTER_OOVPA(IDirectSoundBuffer_SetDopplerFactor, 4627, PATCH),
	REGISTER_OOVPA(DirectSound_CDirectSoundVoice_SetI3DL2Source, 4627, XREF),
	REGISTER_OOVPA(DirectSound_CDirectSoundBuffer_SetI3DL2Source, 4627, XREF),
	REGISTER_OOVPA(IDirectSoundBuffer_SetI3DL2Source, 4627, PATCH),
	REGISTER_OOVPA(IDirectSoundBuffer_Stop, 4627, PATCH),
	REGISTER_OOVPA(IDirectSoundBuffer_Release, 3936, PATCH), // +s
	REGISTER_OOVPA(DirectSound_CDirectSoundVoice_SetFormat, 4627, XREF),
	REGISTER_OOVPA(DirectSound_CDirectSoundBuffer_SetFormat, 4627, XREF),
	REGISTER_OOVPA(IDirectSoundBuffer_SetFormat, 4627, PATCH),
	REGISTER_OOVPA(DirectSound_CDirectSoundStream_SetMixBinVolumes, 4627, XREF),
	REGISTER_OOVPA(DirectSound_CDirectSound_EnableHeadphones, 4627, XREF),
	REGISTER_OOVPA(IDirectSound_EnableHeadphones, 4627, PATCH),
	// REGISTER_OOVPA(DirectSound_CDirectSoundVoice_SetHeadroom, 4627, XREF),
	// REGISTER_OOVPA(IDirectSoundStream_SetHeadroom, 4627, ALIAS, DirectSound_CDirectSoundStream_SetHeadroom),
	REGISTER_OOVPA(IDirectSoundBuffer_AddRef, 3936, PATCH),
	REGISTER_OOVPA(DirectSound_CDirectSound_GetOutputLevels, 4627, XREF),
	REGISTER_OOVPA(IDirectSound_GetOutputLevels, 4627, PATCH),
	REGISTER_OOVPA(DirectSound_CDirectSoundVoice_SetAllParameters, 4627, XREF),
	REGISTER_OOVPA(DirectSound_CDirectSoundBuffer_SetAllParameters, 4627, XREF),
	REGISTER_OOVPA(IDirectSound_SetAllParameters, 4627, ALIAS, IDirectSoundBuffer_SetAllParameters), // Use that for now. Okay, it's your call pal...
	REGISTER_OOVPA(DirectSound_CMcpxBuffer_Pause, 4928, XREF),
	REGISTER_OOVPA(DirectSound_CDirectSoundBuffer_Pause, 4928, XREF),
	REGISTER_OOVPA(IDirectSoundBuffer_Pause, 4928, PATCH),
	REGISTER_OOVPA(DirectSound_CMcpxBuffer_GetStatus, 4721, XREF),
	REGISTER_OOVPA(DirectSound_CDirectSoundBuffer_GetStatus, 4721, XREF),
	REGISTER_OOVPA(IDirectSoundBuffer_GetStatus, 4721, PATCH),
	REGISTER_OOVPA(DirectSound_CDirectSoundStream_SetMixBins, 4627, PATCH),
	REGISTER_OOVPA(DirectSound_CMcpxVoiceClient_SetEG, 4627, XREF),
	REGISTER_OOVPA(DirectSound_CDirectSoundVoice_SetEG, 4627, XREF),
	REGISTER_OOVPA(DirectSound_CDirectSoundStream_SetEG, 4627, PATCH),
	REGISTER_OOVPA(DirectSound_CDirectSoundBuffer_SetEG, 4627, XREF),
	REGISTER_OOVPA(IDirectSoundBuffer_SetEG, 4627, PATCH),
	REGISTER_OOVPA(DirectSound_CDirectSoundStream_FlushEx, 4627, XREF),
	REGISTER_OOVPA(IDirectSoundStream_FlushEx, 4627, PATCH),
	REGISTER_OOVPA(XAudioDownloadEffectsImage, 4627, PATCH),
	REGISTER_OOVPA(DirectSound_CDirectSoundVoice_SetMode, 4627, XREF),
	REGISTER_OOVPA(DirectSound_CDirectSoundBuffer_SetMode, 4627, XREF),
	REGISTER_OOVPA(IDirectSoundBuffer_SetMode, 4627, PATCH),
	REGISTER_OOVPA(DirectSound_CMcpxVoiceClient_SetFilter, 4627, XREF),
	REGISTER_OOVPA(DirectSound_CDirectSoundVoice_SetFilter, 4627, XREF),
	REGISTER_OOVPA(DirectSound_CDirectSoundBuffer_SetFilter, 4627, XREF),
	REGISTER_OOVPA(DirectSound_CDirectSoundStream_SetFilter, 4627, PATCH),
	REGISTER_OOVPA(IDirectSoundBuffer_SetFilter, 4627, PATCH),
	REGISTER_OOVPA(DirectSound_CDirectSoundBuffer_PlayEx, 4361, XREF),
	REGISTER_OOVPA(IDirectSoundBuffer_PlayEx, 4361, PATCH),
	REGISTER_OOVPA(CMcpxBuffer_Stop2, 4361, XREF),
	REGISTER_OOVPA(DirectSound_CDirectSoundBuffer_StopEx, 4361, XREF),
	REGISTER_OOVPA(IDirectSoundBuffer_StopEx, 4361, PATCH),
	REGISTER_OOVPA(DirectSound_CDirectSound_SetVelocity, 4432, XREF),
	REGISTER_OOVPA(DirectSound_CDirectSoundVoice_SetPosition, 4432, XREF),
	REGISTER_OOVPA(DirectSound_CDirectSoundVoice_SetPitch, 4627, XREF),
	REGISTER_OOVPA(DirectSound_CDirectSoundBuffer_SetPitch, 4627, XREF),
	REGISTER_OOVPA(IDirectSoundBuffer_SetPitch, 4627, PATCH),
	REGISTER_OOVPA(DirectSound_CDirectSoundVoice_SetHeadroom, 4627, XREF),
	REGISTER_OOVPA(IDirectSoundStream_SetHeadroom, 4627, ALIAS, DirectSound_CDirectSoundStream_SetHeadroom),
	REGISTER_OOVPA(DirectSound_CDirectSoundVoice_SetOutputBuffer, 4627, XREF),
	REGISTER_OOVPA(DirectSound_CDirectSoundBuffer_SetOutputBuffer, 4627, XREF),
	REGISTER_OOVPA(IDirectSoundBuffer_SetOutputBuffer, 4627, PATCH),
	REGISTER_OOVPA(DirectSound_CDirectSoundStream_SetOutputBuffer, 4627, PATCH),
	REGISTER_OOVPA(DirectSound_CDirectSoundVoice_SetRolloffCurve, 4627, XREF),
	REGISTER_OOVPA(DirectSound_CDirectSoundBuffer_SetRolloffCurve, 4627, XREF),
	REGISTER_OOVPA(DirectSound_CDirectSoundStream_SetRolloffCurve, 4627, XREF),
	REGISTER_OOVPA(IDirectSoundBuffer_SetRolloffCurve, 4627, PATCH),
	REGISTER_OOVPA(XFileCreateMediaObjectEx, 4627, PATCH),
	REGISTER_OOVPA(XWaveFileCreateMediaObject, 4627, PATCH),
  // REGISTER_OOVPA(DirectSound_CDirectSoundBuffer_SetNotificationPositions, 4627, XREF),
  // REGISTER_OOVPA(IDirectSoundBuffer_SetNotificationPositions, 4627, XREF),
  REGISTER_OOVPA(CMcpxVoiceClient_SetLFO, 4627, XREF),
  REGISTER_OOVPA(DirectSound_CDirectSoundVoice_SetLFO, 4627, XREF),
  REGISTER_OOVPA(DirectSound_CDirectSoundBuffer_SetLFO, 4627, XREF),
  REGISTER_OOVPA(IDirectSoundBuffer_SetLFO, 4627, PATCH),
	REGISTER_OOVPA(DirectSound_CDirectSoundStream_SetLFO, 4627, PATCH),
	REGISTER_OOVPA(DirectSound_CDirectSoundStream_SetPitch, 4627, PATCH),
	REGISTER_OOVPA(DirectSound_CDirectSoundBuffer_SetVolume, 4627, XREF),
	REGISTER_OOVPA(IDirectSoundBuffer_SetVolume, 4627, PATCH),
};

// ******************************************************************
// * DSound_4627_SIZE
// ******************************************************************
uint32 DSound_4627_SIZE = sizeof(DSound_4627);
