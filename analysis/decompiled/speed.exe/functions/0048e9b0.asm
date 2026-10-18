0048e9b0  SUB ESP,0x20
0048e9b3  MOV EAX,dword ptr [ESP + 0x2c]
0048e9b7  MOV ECX,dword ptr [EAX]
0048e9b9  MOV EDX,dword ptr [EAX + 0x4]
0048e9bc  PUSH ESI
0048e9bd  MOV ESI,dword ptr [ESP + 0x38]
0048e9c1  MOV dword ptr [ESP + 0x4],ECX
0048e9c5  MOV ECX,dword ptr [EAX + 0x8]
0048e9c8  MOV dword ptr [ESP + 0x8],EDX
0048e9cc  FLD float ptr [ESP + 0x8]
0048e9d0  MOV EDX,dword ptr [EAX + 0xc]
0048e9d3  FMUL float ptr [0x00890da8]
0048e9d9  MOV EAX,dword ptr [ESP + 0x28]
0048e9dd  PUSH ESI
0048e9de  MOV dword ptr [ESP + 0x10],ECX
0048e9e2  FSTP float ptr [ESP + 0xc]
0048e9e6  PUSH EAX
0048e9e7  LEA ECX,[ESP + 0xc]
0048e9eb  PUSH ECX
0048e9ec  MOV dword ptr [ESP + 0x1c],EDX
0048e9f0  CALL 0x0048ddf0
0048e9f5  MOV EAX,dword ptr [ESP + 0x40]
0048e9f9  FLD float ptr [EAX]
0048e9fb  LEA EDX,[ESP + 0x20]
0048e9ff  FCHS
0048ea01  PUSH EDX
0048ea02  FSTP float ptr [ESP + 0x14]
0048ea06  MOV dword ptr [ESP + 0x18],0x0
0048ea0e  FLD float ptr [EAX + 0x8]
0048ea11  LEA EAX,[ESP + 0x14]
0048ea15  PUSH EAX
0048ea16  FCHS
0048ea18  PUSH ESI
0048ea19  FSTP float ptr [ESP + 0x24]
0048ea1d  MOV dword ptr [ESP + 0x28],0x3f800000
0048ea25  CALL 0x0048dec0
0048ea2a  FLD float ptr [ESP + 0x2c]
0048ea2e  MOV ECX,dword ptr [ESP + 0x44]
0048ea32  FADD float ptr [ECX]
0048ea34  MOV EAX,dword ptr [ESP + 0x54]
0048ea38  MOV dword ptr [EAX + 0x4],0x0
0048ea3f  ADD ESP,0x18
0048ea42  FSTP float ptr [EAX]
0048ea44  POP ESI
0048ea45  FLD float ptr [ESP + 0x18]
0048ea49  FADD float ptr [ECX + 0x8]
0048ea4c  FSTP float ptr [EAX + 0x8]
0048ea4f  ADD ESP,0x20
0048ea52  RET
