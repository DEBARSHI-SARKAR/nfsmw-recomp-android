006cf0a0  PUSH EBP
006cf0a1  MOV EBP,ESP
006cf0a3  AND ESP,0xfffffff0
006cf0a6  SUB ESP,0x8c
006cf0ac  MOV EAX,dword ptr [EBP + 0x10]
006cf0af  FLD float ptr [EAX]
006cf0b1  PUSH ESI
006cf0b2  MOV ESI,dword ptr [EBP + 0xc]
006cf0b5  FSUB float ptr [ESI]
006cf0b7  LEA ECX,[ESP + 0x20]
006cf0bb  FLD float ptr [EAX + 0x4]
006cf0be  PUSH ECX
006cf0bf  FSUB float ptr [ESI + 0x4]
006cf0c2  MOV EDX,ECX
006cf0c4  FLD float ptr [EAX + 0x8]
006cf0c7  PUSH EDX
006cf0c8  FSUB float ptr [ESI + 0x8]
006cf0cb  FSTP float ptr [ESP + 0x40]
006cf0cf  MOV EAX,dword ptr [ESP + 0x40]
006cf0d3  FXCH
006cf0d5  MOV dword ptr [ESP + 0x30],EAX
006cf0d9  FSTP float ptr [ESP + 0x28]
006cf0dd  FSTP float ptr [ESP + 0x2c]
006cf0e1  CALL 0x0045f490
006cf0e6  MOV EAX,dword ptr [EBP + 0x14]
006cf0e9  FLD float ptr [EAX]
006cf0eb  LEA ECX,[ESP + 0x28]
006cf0ef  FCHS
006cf0f1  PUSH ECX
006cf0f2  FLD float ptr [EAX + 0x4]
006cf0f5  LEA EDX,[ESP + 0x1c]
006cf0f9  FCHS
006cf0fb  PUSH EDX
006cf0fc  FLD float ptr [EAX + 0x8]
006cf0ff  FCHS
006cf101  FSTP float ptr [ESP + 0x58]
006cf105  MOV EAX,dword ptr [ESP + 0x58]
006cf109  FXCH
006cf10b  MOV dword ptr [ESP + 0x28],EAX
006cf10f  FSTP float ptr [ESP + 0x20]
006cf113  LEA EAX,[ESP + 0x40]
006cf117  PUSH EAX
006cf118  FSTP float ptr [ESP + 0x28]
006cf11c  CALL 0x0045f7c0
006cf121  LEA ECX,[ESP + 0x44]
006cf125  PUSH ECX
006cf126  LEA EDX,[ESP + 0x38]
006cf12a  PUSH EDX
006cf12b  LEA EAX,[ESP + 0x2c]
006cf12f  PUSH EAX
006cf130  CALL 0x0045f7c0
006cf135  LEA ECX,[ESP + 0x50]
006cf139  PUSH ECX
006cf13a  MOV EDX,ECX
006cf13c  PUSH EDX
006cf13d  CALL 0x0045f490
006cf142  LEA EAX,[ESP + 0x38]
006cf146  PUSH EAX
006cf147  MOV ECX,EAX
006cf149  PUSH ECX
006cf14a  CALL 0x0045f490
006cf14f  FLD float ptr [ESP + 0x60]
006cf153  MOV EAX,dword ptr [EBP + 0x8]
006cf156  MOV EDX,dword ptr [ESP + 0x40]
006cf15a  FSTP float ptr [EAX]
006cf15c  MOV ECX,dword ptr [ESP + 0x50]
006cf160  MOV dword ptr [EAX + 0x4],EDX
006cf163  MOV EDX,dword ptr [ESP + 0x64]
006cf167  MOV dword ptr [EAX + 0x10],EDX
006cf16a  MOV EDX,dword ptr [ESP + 0x44]
006cf16e  MOV dword ptr [EAX + 0x14],EDX
006cf171  MOV EDX,dword ptr [ESP + 0x54]
006cf175  MOV dword ptr [EAX + 0x18],EDX
006cf178  MOV EDX,dword ptr [ESP + 0x68]
006cf17c  MOV dword ptr [EAX + 0x20],EDX
006cf17f  MOV EDX,dword ptr [ESP + 0x48]
006cf183  ADD ESP,0x30
006cf186  MOV dword ptr [EAX + 0x8],ECX
006cf189  XOR ECX,ECX
006cf18b  MOV dword ptr [EAX + 0x24],EDX
006cf18e  MOV EDX,dword ptr [ESP + 0x28]
006cf192  MOV dword ptr [EAX + 0xc],ECX
006cf195  MOV dword ptr [EAX + 0x1c],ECX
006cf198  MOV dword ptr [EAX + 0x28],EDX
006cf19b  MOV dword ptr [EAX + 0x2c],ECX
006cf19e  MOV dword ptr [EAX + 0x30],ECX
006cf1a1  MOV dword ptr [EAX + 0x34],ECX
006cf1a4  MOV dword ptr [EAX + 0x38],ECX
006cf1a7  MOV dword ptr [EAX + 0x3c],0x3f800000
006cf1ae  FLD float ptr [ESI]
006cf1b0  FCHS
006cf1b2  MOV dword ptr [ESP + 0x54],ECX
006cf1b6  FSTP float ptr [ESP + 0x80]
006cf1bd  MOV dword ptr [ESP + 0x58],ECX
006cf1c1  FLD float ptr [ESI + 0x4]
006cf1c4  MOV dword ptr [ESP + 0x5c],ECX
006cf1c8  FCHS
006cf1ca  MOV dword ptr [ESP + 0x60],ECX
006cf1ce  FSTP float ptr [ESP + 0x84]
006cf1d5  MOV dword ptr [ESP + 0x68],ECX
006cf1d9  FLD float ptr [ESI + 0x8]
006cf1dc  MOV dword ptr [ESP + 0x6c],ECX
006cf1e0  MOV dword ptr [ESP + 0x70],ECX
006cf1e4  FCHS
006cf1e6  MOV dword ptr [ESP + 0x74],ECX
006cf1ea  FSTP float ptr [ESP + 0x88]
006cf1f1  MOV dword ptr [ESP + 0x7c],ECX
006cf1f5  PUSH EAX
006cf1f6  LEA ECX,[ESP + 0x54]
006cf1fa  PUSH ECX
006cf1fb  PUSH EAX
006cf1fc  MOV dword ptr [ESP + 0x5c],0x3f800000
006cf204  MOV dword ptr [ESP + 0x70],0x3f800000
006cf20c  MOV dword ptr [ESP + 0x84],0x3f800000
006cf217  MOV dword ptr [ESP + 0x98],0x3f800000
006cf222  CALL 0x007e7d5e
006cf227  POP ESI
006cf228  MOV ESP,EBP
006cf22a  POP EBP
006cf22b  RET
