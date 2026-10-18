007e3a80  PUSH EBP
007e3a81  MOV EBP,ESP
007e3a83  PUSH -0x1
007e3a85  PUSH 0x8beed8
007e3a8a  PUSH 0x7cd5e4
007e3a8f  MOV EAX,FS:[0x0]
007e3a95  PUSH EAX
007e3a96  MOV dword ptr FS:[0x0],ESP
007e3a9d  ADD ESP,-0xc
007e3aa0  PUSH EBX
007e3aa1  PUSH ESI
007e3aa2  PUSH EDI
007e3aa3  MOV EAX,dword ptr [EBP + 0x8]
007e3aa6  CMP EAX,dword ptr [0x009c5320]
007e3aac  JNC 0x007e3ace
007e3aae  MOV ECX,dword ptr [EBP + 0x8]
007e3ab1  SAR ECX,0x5
007e3ab4  MOV EDX,dword ptr [EBP + 0x8]
007e3ab7  AND EDX,0x1f
007e3aba  IMUL EDX,EDX,0x24
007e3abd  MOV EAX,dword ptr [ECX*0x4 + 0x9c5340]
007e3ac4  MOVSX ECX,byte ptr [EAX + EDX*0x1 + 0x4]
007e3ac9  AND ECX,0x1
007e3acc  JNZ 0x007e3aec
007e3ace  CALL 0x007cb270
007e3ad3  MOV dword ptr [EAX],0x9
007e3ad9  CALL 0x007cb280
007e3ade  MOV dword ptr [EAX],0x0
007e3ae4  OR EAX,0xffffffff
007e3ae7  JMP 0x007e3b73
007e3aec  MOV EDX,dword ptr [EBP + 0x8]
007e3aef  PUSH EDX
007e3af0  CALL 0x007e4670
007e3af5  ADD ESP,0x4
007e3af8  MOV dword ptr [EBP + -0x4],0x0
007e3aff  MOV EAX,dword ptr [EBP + 0x8]
007e3b02  SAR EAX,0x5
007e3b05  MOV ECX,dword ptr [EBP + 0x8]
007e3b08  AND ECX,0x1f
007e3b0b  IMUL ECX,ECX,0x24
007e3b0e  MOV EDX,dword ptr [EAX*0x4 + 0x9c5340]
007e3b15  MOVSX EAX,byte ptr [EDX + ECX*0x1 + 0x4]
007e3b1a  AND EAX,0x1
007e3b1d  JZ 0x007e3b38
007e3b1f  MOV ECX,dword ptr [EBP + 0x10]
007e3b22  PUSH ECX
007e3b23  MOV EDX,dword ptr [EBP + 0xc]
007e3b26  PUSH EDX
007e3b27  MOV EAX,dword ptr [EBP + 0x8]
007e3b2a  PUSH EAX
007e3b2b  CALL 0x007e3b90
007e3b30  ADD ESP,0xc
007e3b33  MOV dword ptr [EBP + -0x1c],EAX
007e3b36  JMP 0x007e3b55
007e3b38  CALL 0x007cb270
007e3b3d  MOV dword ptr [EAX],0x9
007e3b43  CALL 0x007cb280
007e3b48  MOV dword ptr [EAX],0x0
007e3b4e  MOV dword ptr [EBP + -0x1c],0xffffffff
007e3b55  MOV dword ptr [EBP + -0x4],0xffffffff
007e3b5c  CALL 0x007e3b63
007e3b61  JMP 0x007e3b70
