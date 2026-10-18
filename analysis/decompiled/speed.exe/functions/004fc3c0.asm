004fc3c0  PUSH ECX
004fc3c1  FLD float ptr [ESP + 0xc]
004fc3c5  MOV EAX,dword ptr [ESP + 0x10]
004fc3c9  FMUL float ptr [ESP + 0xc]
004fc3cd  MOV ECX,dword ptr [ESP + 0xc]
004fc3d1  FLD float ptr [ESP + 0x10]
004fc3d5  PUSH EAX
004fc3d6  FMUL float ptr [ESP + 0x14]
004fc3da  PUSH ECX
004fc3db  FADDP
004fc3dd  FLD float ptr [ESP + 0x1c]
004fc3e1  FMUL float ptr [ESP + 0x1c]
004fc3e5  FADDP
004fc3e7  FSQRT
004fc3e9  FSTP float ptr [ESP + 0x8]
004fc3ed  CALL 0x0045ded0
004fc3f2  MOVZX EDX,AX
004fc3f5  MOV dword ptr [ESP + 0x18],EDX
004fc3f9  ADD ESP,0x4
004fc3fc  FILD dword ptr [ESP + 0x14]
004fc400  FSTP float ptr [ESP + 0x10]
004fc404  FLD float ptr [ESP + 0x18]
004fc408  FDIV float ptr [ESP + 0x4]
004fc40c  FSTP float ptr [ESP]
004fc40f  CALL 0x0045dd10
004fc414  MOV ECX,0x4000
004fc419  SUB ECX,EAX
004fc41b  MOV EAX,dword ptr [ESP + 0xc]
004fc41f  MOVZX EDX,CX
004fc422  MOV ECX,dword ptr [ESP + 0x4]
004fc426  MOV dword ptr [ESP + 0x14],EDX
004fc42a  MOV dword ptr [EAX + 0x8],ECX
004fc42d  FILD dword ptr [ESP + 0x14]
004fc431  FLD float ptr [ESP + 0x10]
004fc435  FSTP float ptr [EAX]
004fc437  FSTP float ptr [EAX + 0x4]
004fc43a  ADD ESP,0x8
004fc43d  RET
