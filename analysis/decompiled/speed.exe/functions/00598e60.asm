00598e60  SUB ESP,0x240
00598e66  LEA ECX,[ESP]
00598e69  CALL 0x0056c5e0
00598e6e  MOV EAX,dword ptr [ESP + 0x274]
00598e75  MOV ECX,dword ptr [ESP + 0x270]
00598e7c  PUSH EAX
00598e7d  PUSH ECX
00598e7e  LEA EDX,[ESP + 0x8]
00598e82  PUSH EDX
00598e83  CALL 0x004643d0
00598e88  MOV EDX,dword ptr [ESP + 0x268]
00598e8f  MOV EAX,dword ptr [ESP + 0x258]
00598e96  MOV ECX,dword ptr [ESP + 0x25c]
00598e9d  MOV dword ptr [ESP + 0x214],EDX
00598ea4  MOV EDX,dword ptr [ESP + 0x264]
00598eab  MOV dword ptr [ESP + 0x20c],EAX
00598eb2  MOV EAX,dword ptr [ESP + 0x260]
00598eb9  MOV dword ptr [ESP + 0x210],ECX
00598ec0  MOV ECX,dword ptr [ESP + 0x26c]
00598ec7  MOV dword ptr [ESP + 0x220],EDX
00598ece  MOV EDX,dword ptr [ESP + 0x278]
00598ed5  MOV dword ptr [ESP + 0x218],EAX
00598edc  MOV EAX,dword ptr [ESP + 0x270]
00598ee3  MOV dword ptr [ESP + 0x21c],ECX
00598eea  MOV ECX,dword ptr [ESP + 0x274]
00598ef1  MOV dword ptr [ESP + 0x22c],EDX
00598ef8  MOV dword ptr [ESP + 0x224],EAX
00598eff  MOV EAX,dword ptr [ESP + 0x250]
00598f06  MOV dword ptr [ESP + 0x228],ECX
00598f0d  MOV ECX,dword ptr [ESP + 0x254]
00598f14  LEA EDX,[ESP + 0xc]
00598f18  PUSH EDX
00598f19  MOV dword ptr [ESP + 0x23c],0x3
00598f24  MOV dword ptr [ESP + 0x234],EAX
00598f2b  MOV dword ptr [ESP + 0x238],ECX
00598f32  MOV byte ptr [ESP + 0x240],0x1
00598f3a  CALL 0x005983c0
00598f3f  ADD ESP,0x250
00598f45  RET
