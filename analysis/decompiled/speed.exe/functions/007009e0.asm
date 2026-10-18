007009e0  PUSH ESI
007009e1  MOV ESI,ECX
007009e3  MOV EAX,dword ptr [ESI]
007009e5  PUSH -0x1
007009e7  CALL dword ptr [EAX + 0xc]
007009ea  XOR EAX,EAX
007009ec  MOV dword ptr [ESI + 0xc],EAX
007009ef  MOV dword ptr [ESI + 0x28],EAX
007009f2  MOV dword ptr [ESI + 0x2c],EAX
007009f5  MOV dword ptr [ESI + 0x30],EAX
007009f8  MOV dword ptr [ESI + 0x34],EAX
007009fb  MOV dword ptr [ESI + 0x38],EAX
007009fe  MOV dword ptr [ESI + 0x3c],EAX
00700a01  MOV dword ptr [ESI + 0x50],EAX
00700a04  MOV dword ptr [ESI + 0x40],EAX
00700a07  MOV dword ptr [ESI + 0x44],EAX
00700a0a  MOV dword ptr [ESI + 0x4c],EAX
00700a0d  MOV byte ptr [ESI + 0x58],AL
00700a10  MOV byte ptr [ESI + 0x59],AL
00700a13  MOV dword ptr [ESI + 0x60],EAX
00700a16  MOV dword ptr [ESI + 0x64],EAX
00700a19  MOV dword ptr [ESI + 0x68],EAX
00700a1c  MOV dword ptr [ESI + 0x54],0x2
00700a23  MOV EDX,dword ptr [0x008a2fb4]
00700a29  LEA ECX,[ESI + 0x6c]
00700a2c  MOV dword ptr [ECX],EDX
00700a2e  MOV EAX,[0x008a2fb8]
00700a33  MOV dword ptr [ECX + 0x4],EAX
00700a36  MOV EDX,dword ptr [0x008a2fbc]
00700a3c  MOV dword ptr [ECX + 0x8],EDX
00700a3f  MOV ECX,dword ptr [0x008a2fb4]
00700a45  LEA EAX,[ESI + 0x78]
00700a48  MOV dword ptr [EAX],ECX
00700a4a  MOV EDX,dword ptr [0x008a2fb8]
00700a50  MOV dword ptr [EAX + 0x4],EDX
00700a53  MOV ECX,dword ptr [0x008a2fbc]
00700a59  MOV dword ptr [EAX + 0x8],ECX
00700a5c  MOV EDX,dword ptr [0x008a2fb4]
00700a62  ADD ESI,0x84
00700a68  MOV dword ptr [ESI],EDX
00700a6a  MOV EAX,[0x008a2fb8]
00700a6f  MOV dword ptr [ESI + 0x4],EAX
00700a72  MOV ECX,dword ptr [0x008a2fbc]
00700a78  MOV dword ptr [ESI + 0x8],ECX
00700a7b  POP ESI
00700a7c  RET
