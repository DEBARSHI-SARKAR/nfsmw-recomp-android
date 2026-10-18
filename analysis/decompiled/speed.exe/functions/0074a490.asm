0074a490  PUSH EBP
0074a491  MOV EBP,ESP
0074a493  AND ESP,0xfffffff0
0074a496  SUB ESP,0x4c
0074a499  PUSH ESI
0074a49a  MOV ESI,ECX
0074a49c  MOV EAX,dword ptr [ESI + 0x3870]
0074a4a2  PUSH EAX
0074a4a3  CALL 0x0045da70
0074a4a8  FSTP float ptr [ESP + 0x10]
0074a4ac  PUSH 0x41200000
0074a4b1  CALL 0x0045da70
0074a4b6  FSTP float ptr [ESP + 0x10]
0074a4ba  FLD float ptr [ESI + 0x3840]
0074a4c0  LEA EDX,[ESP + 0x18]
0074a4c4  FSUB float ptr [ESI + 0x3830]
0074a4ca  PUSH EDX
0074a4cb  FLD float ptr [ESI + 0x3844]
0074a4d1  MOV EAX,EDX
0074a4d3  FSUB float ptr [ESI + 0x3834]
0074a4d9  PUSH EAX
0074a4da  FLD float ptr [ESI + 0x3848]
0074a4e0  FSUB float ptr [ESI + 0x3838]
0074a4e6  FSTP float ptr [ESP + 0x48]
0074a4ea  MOV ECX,dword ptr [ESP + 0x48]
0074a4ee  FXCH
0074a4f0  MOV dword ptr [ESP + 0x28],ECX
0074a4f4  FSTP float ptr [ESP + 0x20]
0074a4f8  FSTP float ptr [ESP + 0x24]
0074a4fc  CALL 0x0045f490
0074a501  FLD float ptr [ESP + 0x18]
0074a505  MOV EAX,dword ptr [ESI + 0x298]
0074a50b  FMUL float ptr [ESI + 0x250]
0074a511  MOV ECX,dword ptr [EBP + 0x8]
0074a514  FLD float ptr [ESP + 0x18]
0074a518  SHL EAX,0x4
0074a51b  FMUL float ptr [ESI + 0x254]
0074a521  ADD EAX,ECX
0074a523  ADD ESP,0x10
0074a526  FSTP float ptr [ESP + 0x34]
0074a52a  FLD float ptr [ESP + 0x8]
0074a52e  FMUL float ptr [ESI + 0x258]
0074a534  FSTP float ptr [ESP + 0x38]
0074a538  FLD float ptr [ESP + 0x10]
0074a53c  FMUL float ptr [ESP + 0xc]
0074a540  FLD float ptr [ESP + 0x14]
0074a544  FMUL float ptr [ESP + 0xc]
0074a548  FLD float ptr [ESP + 0x18]
0074a54c  FMUL float ptr [ESP + 0xc]
0074a550  FSTP float ptr [ESP + 0x48]
0074a554  FXCH
0074a556  FADD float ptr [ESI + 0x3830]
0074a55c  FSTP float ptr [ESP + 0x20]
0074a560  FADD float ptr [ESI + 0x3834]
0074a566  FSTP float ptr [ESP + 0x24]
0074a56a  FLD float ptr [ESP + 0x48]
0074a56e  FADD float ptr [ESI + 0x3838]
0074a574  FSTP float ptr [ESP + 0x28]
0074a578  FADD float ptr [ESP + 0x20]
0074a57c  FLD float ptr [ESP + 0x24]
0074a580  FADD float ptr [ESP + 0x34]
0074a584  FLD float ptr [ESP + 0x28]
0074a588  FADD float ptr [ESP + 0x38]
0074a58c  FSTP float ptr [ESP + 0x48]
0074a590  MOV EDX,dword ptr [ESP + 0x48]
0074a594  MOV dword ptr [EAX + 0x8],EDX
0074a597  FXCH
0074a599  FSTP float ptr [EAX]
0074a59b  FSTP float ptr [EAX + 0x4]
0074a59e  MOV EAX,dword ptr [ESI + 0x298]
0074a5a4  MOV ESI,dword ptr [ESI + 0x29c]
0074a5aa  SHL EAX,0x4
0074a5ad  FLD float ptr [EAX + ECX*0x1 + 0x4]
0074a5b1  ADD EAX,ECX
0074a5b3  FLD float ptr [EAX + 0x8]
0074a5b6  MOV EAX,dword ptr [EAX]
0074a5b8  SHL ESI,0x4
0074a5bb  FXCH
0074a5bd  ADD ESI,ECX
0074a5bf  FSTP float ptr [ESI + 0x4]
0074a5c2  MOV dword ptr [ESI],EAX
0074a5c4  FSTP float ptr [ESI + 0x8]
0074a5c7  POP ESI
0074a5c8  MOV ESP,EBP
0074a5ca  POP EBP
0074a5cb  RET 0x4
