0074a320  PUSH EBP
0074a321  MOV EBP,ESP
0074a323  AND ESP,0xfffffff0
0074a326  SUB ESP,0x4c
0074a329  PUSH ESI
0074a32a  MOV ESI,ECX
0074a32c  MOV EAX,dword ptr [ESI + 0x3870]
0074a332  PUSH EAX
0074a333  CALL 0x0045da70
0074a338  FSTP float ptr [ESP + 0xc]
0074a33c  MOV ECX,dword ptr [0x009031f0]
0074a342  PUSH ECX
0074a343  CALL 0x0045da70
0074a348  FSTP float ptr [ESP + 0x14]
0074a34c  PUSH 0x41200000
0074a351  CALL 0x0045da70
0074a356  FSTP float ptr [ESP + 0x10]
0074a35a  FLD float ptr [ESI + 0x3840]
0074a360  LEA EAX,[ESP + 0x1c]
0074a364  FSUB float ptr [ESI + 0x3830]
0074a36a  PUSH EAX
0074a36b  FLD float ptr [ESI + 0x3844]
0074a371  MOV ECX,EAX
0074a373  FSUB float ptr [ESI + 0x3834]
0074a379  PUSH ECX
0074a37a  FLD float ptr [ESI + 0x3848]
0074a380  FSUB float ptr [ESI + 0x3838]
0074a386  FSTP float ptr [ESP + 0x4c]
0074a38a  MOV EDX,dword ptr [ESP + 0x4c]
0074a38e  FXCH
0074a390  MOV dword ptr [ESP + 0x2c],EDX
0074a394  FSTP float ptr [ESP + 0x24]
0074a398  FSTP float ptr [ESP + 0x28]
0074a39c  CALL 0x0045f490
0074a3a1  FLD float ptr [ESP + 0x18]
0074a3a5  MOV EAX,dword ptr [ESI + 0x298]
0074a3ab  FMUL float ptr [ESI + 0x250]
0074a3b1  MOV ECX,dword ptr [EBP + 0x8]
0074a3b4  FLD float ptr [ESP + 0x18]
0074a3b8  SHL EAX,0x4
0074a3bb  FMUL float ptr [ESI + 0x254]
0074a3c1  ADD EAX,ECX
0074a3c3  ADD ESP,0x14
0074a3c6  FSTP float ptr [ESP + 0x34]
0074a3ca  FLD float ptr [ESP + 0x4]
0074a3ce  FMUL float ptr [ESI + 0x258]
0074a3d4  FSTP float ptr [ESP + 0x38]
0074a3d8  FLD float ptr [ESP + 0x10]
0074a3dc  FMUL float ptr [ESP + 0x8]
0074a3e0  FLD float ptr [ESP + 0x14]
0074a3e4  FMUL float ptr [ESP + 0x8]
0074a3e8  FLD float ptr [ESP + 0x18]
0074a3ec  FMUL float ptr [ESP + 0x8]
0074a3f0  FSTP float ptr [ESP + 0x48]
0074a3f4  FXCH
0074a3f6  FADD float ptr [ESI + 0x3830]
0074a3fc  FSTP float ptr [ESP + 0x20]
0074a400  FADD float ptr [ESI + 0x3834]
0074a406  FSTP float ptr [ESP + 0x24]
0074a40a  FLD float ptr [ESP + 0x48]
0074a40e  FADD float ptr [ESI + 0x3838]
0074a414  FSTP float ptr [ESP + 0x28]
0074a418  FADD float ptr [ESP + 0x20]
0074a41c  FLD float ptr [ESP + 0x24]
0074a420  FADD float ptr [ESP + 0x34]
0074a424  FLD float ptr [ESP + 0x28]
0074a428  FADD float ptr [ESP + 0x38]
0074a42c  FSTP float ptr [ESP + 0x48]
0074a430  MOV EDX,dword ptr [ESP + 0x48]
0074a434  MOV dword ptr [EAX + 0x8],EDX
0074a437  FXCH
0074a439  FSTP float ptr [EAX]
0074a43b  FSTP float ptr [EAX + 0x4]
0074a43e  MOV EAX,dword ptr [ESI + 0x298]
0074a444  SHL EAX,0x4
0074a447  FLD float ptr [EAX + ECX*0x1 + 0x8]
0074a44b  LEA EAX,[EAX + ECX*0x1 + 0x8]
0074a44f  FSUB float ptr [ESP + 0xc]
0074a453  FSTP float ptr [EAX]
0074a455  MOV EAX,dword ptr [ESI + 0x298]
0074a45b  MOV ESI,dword ptr [ESI + 0x29c]
0074a461  SHL EAX,0x4
0074a464  SHL ESI,0x4
0074a467  ADD EAX,ECX
0074a469  ADD ESI,ECX
0074a46b  FLD float ptr [EAX + 0x4]
0074a46e  MOV ECX,dword ptr [EAX]
0074a470  FLD float ptr [EAX + 0x8]
0074a473  MOV dword ptr [ESI],ECX
0074a475  FXCH
0074a477  FSTP float ptr [ESI + 0x4]
0074a47a  FSTP float ptr [ESI + 0x8]
0074a47d  POP ESI
0074a47e  MOV ESP,EBP
0074a480  POP EBP
0074a481  RET 0x4
