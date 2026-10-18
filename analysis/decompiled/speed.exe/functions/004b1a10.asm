004b1a10  MOV EAX,FS:[0x0]
004b1a16  PUSH -0x1
004b1a18  PUSH 0x86b448
004b1a1d  PUSH EAX
004b1a1e  MOV EAX,[0x00911fa8]
004b1a23  MOV dword ptr FS:[0x0],ESP
004b1a2a  SUB ESP,0x10
004b1a2d  TEST EAX,EAX
004b1a2f  PUSH ESI
004b1a30  MOV ESI,ECX
004b1a32  JZ 0x004b1b76
004b1a38  MOV EAX,dword ptr [ESI + 0x1c]
004b1a3b  TEST EAX,EAX
004b1a3d  JZ 0x004b1b76
004b1a43  MOV dword ptr [ESP + 0x8],0x896860
004b1a4b  MOV dword ptr [ESP + 0xc],0x0
004b1a53  MOV dword ptr [ESP + 0x10],0x0
004b1a5b  LEA EAX,[ESP + 0x8]
004b1a5f  PUSH EAX
004b1a60  MOV dword ptr [ESP + 0x20],0x0
004b1a68  CALL 0x006e9e40
004b1a6d  TEST AL,AL
004b1a6f  JNZ 0x004b1a8c
004b1a71  MOV ECX,dword ptr [ESI + 0x14]
004b1a74  MOV byte ptr [ECX + 0x94],AL
004b1a7a  POP ESI
004b1a7b  MOV ECX,dword ptr [ESP + 0x10]
004b1a7f  MOV dword ptr FS:[0x0],ECX
004b1a86  ADD ESP,0x1c
004b1a89  RET 0x4
004b1a8c  MOV byte ptr [0x009120d8],0x0
004b1a93  MOV EDX,dword ptr [ESI + 0x14]
004b1a96  MOV byte ptr [EDX + 0x94],0x1
004b1a9d  MOV EAX,dword ptr [ESI + 0x1c]
004b1aa0  MOV ECX,dword ptr [ESI + 0x14]
004b1aa3  PUSH EAX
004b1aa4  PUSH ECX
004b1aa5  CALL 0x00444fe0
004b1aaa  MOV EAX,dword ptr [ESI + 0x14]
004b1aad  FLD float ptr [EAX + 0x44]
004b1ab0  MOV EDX,dword ptr [EAX + 0x40]
004b1ab3  FLD float ptr [EAX + 0x48]
004b1ab6  MOV dword ptr [EAX + 0x50],EDX
004b1ab9  FXCH
004b1abb  ADD ESP,0x8
004b1abe  FSTP float ptr [EAX + 0x54]
004b1ac1  FSTP float ptr [EAX + 0x58]
004b1ac4  MOV ECX,dword ptr [ESI + 0x20]
004b1ac7  FLD float ptr [ECX + 0x4]
004b1aca  MOV EAX,dword ptr [ESI + 0x14]
004b1acd  FLD float ptr [ECX + 0x8]
004b1ad0  MOV ECX,dword ptr [ECX]
004b1ad2  MOV dword ptr [EAX + 0x40],ECX
004b1ad5  FXCH
004b1ad7  FSTP float ptr [EAX + 0x44]
004b1ada  ADD EAX,0x40
004b1add  FSTP float ptr [EAX + 0x8]
004b1ae0  MOV EAX,dword ptr [ESI + 0x14]
004b1ae3  FLD float ptr [EAX + 0x44]
004b1ae6  MOV EDX,dword ptr [EAX + 0x58]
004b1ae9  FLD float ptr [EAX + 0x48]
004b1aec  MOV dword ptr [ESP + 0x4],EDX
004b1af0  FLD float ptr [EAX + 0x54]
004b1af3  FLD float ptr [EAX + 0x40]
004b1af6  FSUB float ptr [EAX + 0x50]
004b1af9  FSTP float ptr [EAX + 0x60]
004b1afc  FXCH ST2
004b1afe  FSUB ST0,ST2
004b1b00  FSTP float ptr [EAX + 0x64]
004b1b03  FSTP ST1
004b1b05  FSUB float ptr [ESP + 0x4]
004b1b09  FSTP float ptr [EAX + 0x68]
004b1b0c  MOV EAX,dword ptr [ESI + 0x14]
004b1b0f  FLD float ptr [0x0089096c]
004b1b15  MOV ECX,dword ptr [EAX + 0x68]
004b1b18  FDIV float ptr [ESP + 0x24]
004b1b1c  MOV dword ptr [ESP + 0x24],ECX
004b1b20  FLD float ptr [EAX + 0x64]
004b1b23  FLD ST1
004b1b25  FMUL float ptr [EAX + 0x60]
004b1b28  FSTP float ptr [EAX + 0x60]
004b1b2b  FMUL ST1
004b1b2d  FSTP float ptr [EAX + 0x64]
004b1b30  FLD float ptr [ESP + 0x24]
004b1b34  FMUL ST1
004b1b36  FSTP float ptr [EAX + 0x68]
004b1b39  MOV EAX,dword ptr [ESI + 0x20]
004b1b3c  MOV EDX,dword ptr [ESI + 0x14]
004b1b3f  FSTP ST0
004b1b41  POP ESI
004b1b42  FLD float ptr [EAX + 0x8]
004b1b45  FLD float ptr [EAX + 0x4]
004b1b48  FLD float ptr [EAX]
004b1b4a  FLD ST0
004b1b4c  FMUL ST1
004b1b4e  FLD ST2
004b1b50  FMUL ST3
004b1b52  FADDP
004b1b54  FLD ST3
004b1b56  FMUL ST4
004b1b58  FADDP
004b1b5a  FSQRT
004b1b5c  FSTP ST3
004b1b5e  FSTP ST0
004b1b60  FSTP ST0
004b1b62  FSTP float ptr [EDX + 0x70]
004b1b65  MOV ECX,dword ptr [ESP + 0x10]
004b1b69  MOV dword ptr FS:[0x0],ECX
004b1b70  ADD ESP,0x1c
004b1b73  RET 0x4
004b1b76  MOV AL,[0x009120d8]
004b1b7b  TEST AL,AL
004b1b7d  JNZ 0x004b1b86
004b1b7f  MOV byte ptr [0x009120d8],0x1
004b1b86  MOV ECX,dword ptr [ESP + 0x14]
004b1b8a  POP ESI
004b1b8b  MOV dword ptr FS:[0x0],ECX
004b1b92  ADD ESP,0x1c
004b1b95  RET 0x4
