0043d9d0  SUB ESP,0x20
0043d9d3  MOV EAX,dword ptr [ESP + 0x24]
0043d9d7  MOV EDX,dword ptr [EAX]
0043d9d9  MOV dword ptr [ESP],EDX
0043d9dc  MOV EDX,dword ptr [EAX + 0x4]
0043d9df  MOV EAX,dword ptr [EAX + 0x8]
0043d9e2  MOV dword ptr [ESP + 0x4],EDX
0043d9e6  MOV EDX,dword ptr [ESP + 0x30]
0043d9ea  MOV dword ptr [ESP + 0x8],EAX
0043d9ee  MOV EAX,dword ptr [EDX]
0043d9f0  MOV dword ptr [ESP + 0xc],EAX
0043d9f4  MOV EAX,dword ptr [EDX + 0x4]
0043d9f7  MOV EDX,dword ptr [EDX + 0x8]
0043d9fa  MOV dword ptr [ESP + 0x10],EAX
0043d9fe  MOV EAX,dword ptr [ESP + 0x28]
0043da02  MOV dword ptr [ESP + 0x18],EAX
0043da06  MOV dword ptr [ESP + 0x14],EDX
0043da0a  MOV EDX,dword ptr [ESP + 0x2c]
0043da0e  LEA EAX,[ESP]
0043da11  PUSH EAX
0043da12  ADD ECX,0x10
0043da15  MOV dword ptr [ESP + 0x20],EDX
0043da19  CALL 0x004393f0
0043da1e  ADD ESP,0x20
0043da21  RET 0x10
