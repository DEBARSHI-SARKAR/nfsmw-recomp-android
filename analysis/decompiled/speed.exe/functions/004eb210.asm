004eb210  SUB ESP,0x24
004eb213  MOV ECX,dword ptr [ESP + 0x28]
004eb217  MOV EDX,dword ptr [ESP + 0x2c]
004eb21b  XOR EAX,EAX
004eb21d  MOV dword ptr [ESP],EAX
004eb220  MOV dword ptr [ESP + 0x4],EAX
004eb224  MOV dword ptr [ESP + 0x8],EAX
004eb228  MOV dword ptr [ESP + 0xc],EAX
004eb22c  MOV dword ptr [ESP + 0x10],EAX
004eb230  MOV dword ptr [ESP + 0x14],0x0
004eb238  MOV dword ptr [ESP + 0x14],EAX
004eb23c  MOV dword ptr [ESP + 0x18],EAX
004eb240  MOV dword ptr [ESP + 0x1c],EAX
004eb244  MOV dword ptr [ESP + 0x20],EAX
004eb248  LEA EAX,[ESP + 0x28]
004eb24c  PUSH EAX
004eb24d  MOV dword ptr [ESP + 0x8],ECX
004eb251  MOV dword ptr [ESP + 0x4],EDX
004eb255  MOV dword ptr [ESP + 0x14],0x4e4bb0
004eb25d  CALL 0x004080d0
004eb262  MOV ECX,dword ptr [EAX]
004eb264  MOV EAX,[0x008f831c]
004eb269  MOV EDX,dword ptr [ESP + 0x38]
004eb26d  MOV dword ptr [ESP + 0x1c],EAX
004eb271  INC EAX
004eb272  MOV dword ptr [ESP + 0x18],ECX
004eb276  MOV ECX,dword ptr [ESP + 0x34]
004eb27a  MOV [0x008f831c],EAX
004eb27f  MOV EAX,ESP
004eb281  MOV dword ptr [ESP + 0x20],EDX
004eb285  MOV dword ptr [EAX],ECX
004eb287  LEA ECX,[ESP + 0x4]
004eb28b  CALL 0x00665390
004eb290  ADD ESP,0x24
004eb293  RET
