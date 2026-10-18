00598ae0  SUB ESP,0x240
00598ae6  LEA ECX,[ESP]
00598ae9  CALL 0x0056c5e0
00598aee  MOV EAX,dword ptr [ESP + 0x270]
00598af5  MOV ECX,dword ptr [ESP + 0x26c]
00598afc  PUSH EAX
00598afd  PUSH ECX
00598afe  LEA EDX,[ESP + 0x8]
00598b02  PUSH EDX
00598b03  CALL 0x004643d0
00598b08  MOV ECX,dword ptr [ESP + 0x25c]
00598b0f  MOV EAX,dword ptr [ESP + 0x258]
00598b16  MOV EDX,dword ptr [ESP + 0x264]
00598b1d  MOV dword ptr [ESP + 0x210],ECX
00598b24  MOV ECX,dword ptr [ESP + 0x268]
00598b2b  MOV dword ptr [ESP + 0x20c],EAX
00598b32  MOV EAX,dword ptr [ESP + 0x260]
00598b39  MOV dword ptr [ESP + 0x21c],ECX
00598b40  MOV ECX,dword ptr [ESP + 0x250]
00598b47  MOV dword ptr [ESP + 0x214],EDX
00598b4e  MOV EDX,dword ptr [ESP + 0x26c]
00598b55  MOV dword ptr [ESP + 0x218],EAX
00598b5c  MOV EAX,dword ptr [ESP + 0x274]
00598b63  MOV dword ptr [ESP + 0x230],ECX
00598b6a  MOV dword ptr [ESP + 0x228],EDX
00598b71  MOV EDX,dword ptr [ESP + 0x254]
00598b78  MOV dword ptr [ESP + 0x22c],EAX
00598b7f  MOV AL,byte ptr [ESP + 0x270]
00598b86  LEA ECX,[ESP + 0xc]
00598b8a  PUSH ECX
00598b8b  MOV dword ptr [ESP + 0x23c],0x2
00598b96  MOV dword ptr [ESP + 0x238],EDX
00598b9d  MOV byte ptr [ESP + 0x240],AL
00598ba4  CALL 0x005983c0
00598ba9  ADD ESP,0x250
00598baf  RET
