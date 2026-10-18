005e8300  PUSH EBX
005e8301  XOR EBX,EBX
005e8303  PUSH ESI
005e8304  MOV ESI,ECX
005e8306  MOV dword ptr [ESI + 0x10],EBX
005e8309  MOV dword ptr [ESI + 0x14],EBX
005e830c  MOV dword ptr [ESI + 0x18],EBX
005e830f  MOV byte ptr [ESI + 0x1c],BL
005e8312  MOV byte ptr [ESI + 0x1d],BL
005e8315  MOV byte ptr [ESI + 0x1e],BL
005e8318  MOV byte ptr [ESI + 0x1f],BL
005e831b  MOV byte ptr [ESI + 0x20],BL
005e831e  MOV byte ptr [ESI + 0x21],BL
005e8321  MOV byte ptr [ESI + 0x22],BL
005e8324  MOV dword ptr [ESI + 0x24],EBX
005e8327  MOV dword ptr [ESI + 0x28],EBX
005e832a  MOV dword ptr [ESI + 0x2c],EBX
005e832d  MOV dword ptr [ESI + 0x30],EBX
005e8330  MOV dword ptr [ESI + 0x74],EBX
005e8333  MOV dword ptr [ESI + 0xf8],EBX
005e8339  MOV dword ptr [ESI + 0xfc],EBX
005e833f  MOV dword ptr [ESI + 0x100],EBX
005e8345  MOV dword ptr [ESI + 0x104],EBX
005e834b  MOV dword ptr [ESI + 0x108],EBX
005e8351  MOV dword ptr [ESI + 0x10c],EBX
005e8357  MOV dword ptr [ESI + 0x110],EBX
005e835d  MOV dword ptr [ESI + 0x120],EBX
005e8363  MOV dword ptr [ESI + 0x124],EBX
005e8369  MOV dword ptr [ESI + 0x128],EBX
005e836f  MOV dword ptr [ESI + 0x114],EBX
005e8375  MOV dword ptr [ESI + 0x118],EBX
005e837b  MOV dword ptr [ESI + 0x11c],EBX
005e8381  MOV byte ptr [ESI + 0x190],BL
005e8387  CMP byte ptr [ESI + 0x154],BL
005e838d  JZ 0x005e83a2
005e838f  CALL 0x006e8de0
005e8394  FSUB float ptr [ESI + 0x14c]
005e839a  FADD float ptr [ESI + 0x150]
005e83a0  JMP 0x005e83a8
005e83a2  FLD float ptr [ESI + 0x150]
005e83a8  FSTP float ptr [ESI + 0x150]
005e83ae  MOV byte ptr [ESI + 0x154],BL
005e83b4  MOV dword ptr [ESI + 0x150],EBX
005e83ba  CALL 0x006e8de0
005e83bf  FSTP float ptr [ESI + 0x14c]
005e83c5  CMP byte ptr [ESI + 0x160],BL
005e83cb  JZ 0x005e83e0
005e83cd  CALL 0x006e8de0
005e83d2  FSUB float ptr [ESI + 0x158]
005e83d8  FADD float ptr [ESI + 0x15c]
005e83de  JMP 0x005e83e6
005e83e0  FLD float ptr [ESI + 0x15c]
005e83e6  FSTP float ptr [ESI + 0x15c]
005e83ec  MOV byte ptr [ESI + 0x160],BL
005e83f2  MOV dword ptr [ESI + 0x15c],EBX
005e83f8  CALL 0x006e8de0
005e83fd  FSTP float ptr [ESI + 0x158]
005e8403  CMP byte ptr [ESI + 0x16c],BL
005e8409  JZ 0x005e841e
005e840b  CALL 0x006e8de0
005e8410  FSUB float ptr [ESI + 0x164]
005e8416  FADD float ptr [ESI + 0x168]
005e841c  JMP 0x005e8424
005e841e  FLD float ptr [ESI + 0x168]
005e8424  FSTP float ptr [ESI + 0x168]
005e842a  MOV byte ptr [ESI + 0x16c],BL
005e8430  MOV dword ptr [ESI + 0x168],EBX
005e8436  CALL 0x006e8de0
005e843b  FSTP float ptr [ESI + 0x164]
005e8441  XOR EAX,EAX
005e8443  MOV dword ptr [ESI + 0x34],EAX
005e8446  MOV dword ptr [ESI + 0x38],EAX
005e8449  MOV dword ptr [ESI + 0x3c],EAX
005e844c  MOV dword ptr [ESI + 0x40],EAX
005e844f  MOV dword ptr [ESI + 0x44],EAX
005e8452  MOV dword ptr [ESI + 0x48],EAX
005e8455  MOV dword ptr [ESI + 0x4c],EAX
005e8458  MOV dword ptr [ESI + 0x50],EAX
005e845b  MOV dword ptr [ESI + 0x54],EAX
005e845e  MOV dword ptr [ESI + 0x58],EAX
005e8461  MOV dword ptr [ESI + 0x5c],EAX
005e8464  MOV dword ptr [ESI + 0x60],EAX
005e8467  MOV dword ptr [ESI + 0x64],EAX
005e846a  MOV dword ptr [ESI + 0x68],EAX
005e846d  MOV dword ptr [ESI + 0x6c],EAX
005e8470  MOV dword ptr [ESI + 0x70],EAX
005e8473  LEA EAX,[ESI + 0xb8]
005e8479  MOV ECX,0x10
005e847e  MOV EDI,EDI
005e8480  MOV dword ptr [EAX + -0x40],EBX
005e8483  MOV dword ptr [EAX],0xffffffff
005e8489  ADD EAX,0x4
005e848c  DEC ECX
005e848d  JNZ 0x005e8480
005e848f  MOV dword ptr [ESI + 0x12c],EBX
005e8495  MOV dword ptr [ESI + 0x13c],EBX
005e849b  MOV dword ptr [ESI + 0x130],EBX
005e84a1  MOV dword ptr [ESI + 0x140],EBX
005e84a7  MOV dword ptr [ESI + 0x134],EBX
005e84ad  MOV dword ptr [ESI + 0x144],EBX
005e84b3  MOV dword ptr [ESI + 0x138],EBX
005e84b9  MOV dword ptr [ESI + 0x148],EBX
005e84bf  POP ESI
005e84c0  POP EBX
005e84c1  RET
