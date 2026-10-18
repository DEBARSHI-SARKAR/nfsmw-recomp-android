004b4a20  PUSH -0x1
004b4a22  PUSH 0x86b576
004b4a27  MOV EAX,FS:[0x0]
004b4a2d  PUSH EAX
004b4a2e  MOV dword ptr FS:[0x0],ESP
004b4a35  PUSH ECX
004b4a36  PUSH EBX
004b4a37  PUSH EBP
004b4a38  PUSH ESI
004b4a39  MOV ESI,ECX
004b4a3b  PUSH EDI
004b4a3c  MOV dword ptr [ESP + 0x10],ESI
004b4a40  CALL 0x004d61d0
004b4a45  XOR EDI,EDI
004b4a47  MOV dword ptr [ESI + 0x24],EDI
004b4a4a  PUSH 0x5
004b4a4c  LEA EBX,[ESI + 0x4c]
004b4a4f  PUSH EBX
004b4a50  LEA ECX,[ESI + 0x44]
004b4a53  MOV dword ptr [ESP + 0x24],EDI
004b4a57  MOV dword ptr [ESI],0x896cbc
004b4a5d  CALL 0x00653770
004b4a62  LEA EBP,[ESI + 0x84]
004b4a68  PUSH 0x4
004b4a6a  MOV ECX,EBP
004b4a6c  CALL 0x0065c540
004b4a71  PUSH EDI
004b4a72  MOV ECX,EBP
004b4a74  MOV byte ptr [ESP + 0x20],0x1
004b4a79  MOV dword ptr [ESI + 0xc0],EDI
004b4a7f  MOV dword ptr [ESI + 0xc4],EDI
004b4a85  MOV dword ptr [ESI + 0xc8],EDI
004b4a8b  MOV dword ptr [ESI + 0xcc],EDI
004b4a91  CALL 0x00653bb0
004b4a96  MOV ECX,dword ptr [ESP + 0x14]
004b4a9a  MOV dword ptr [ESI + 0xb4],EDI
004b4aa0  MOV dword ptr [ESI + 0xac],EDI
004b4aa6  MOV dword ptr [ESI + 0xb0],EDI
004b4aac  MOV dword ptr [ESI + 0xd0],EDI
004b4ab2  MOV dword ptr [ESI + 0x34],EDI
004b4ab5  MOV dword ptr [ESI + 0x7c],0x46bb8000
004b4abc  MOV dword ptr [EBX],EDI
004b4abe  MOV dword ptr [EBX + 0x4],EDI
004b4ac1  MOV dword ptr [ESI + 0x54],EDI
004b4ac4  MOV dword ptr [ESI + 0x58],EDI
004b4ac7  MOV dword ptr [ESI + 0x5c],EDI
004b4aca  MOV dword ptr [ESI + 0x60],EDI
004b4acd  MOV dword ptr [ESI + 0x64],EDI
004b4ad0  MOV dword ptr [ESI + 0x68],EDI
004b4ad3  MOV dword ptr [ESI + 0x6c],EDI
004b4ad6  MOV dword ptr [ESI + 0x70],EDI
004b4ad9  MOV dword ptr [ESI + 0x74],EDI
004b4adc  MOV dword ptr [ESI + 0x78],EDI
004b4adf  MOV word ptr [ESI + 0x82],DI
004b4ae6  MOV dword ptr [ESI + 0x78],EDI
004b4ae9  POP EDI
004b4aea  MOV EAX,ESI
004b4aec  POP ESI
004b4aed  POP EBP
004b4aee  POP EBX
004b4aef  MOV dword ptr FS:[0x0],ECX
004b4af6  ADD ESP,0x10
004b4af9  RET
