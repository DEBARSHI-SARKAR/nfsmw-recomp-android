0044da10  MOV EAX,FS:[0x0]
0044da16  PUSH -0x1
0044da18  PUSH 0x869a8b
0044da1d  PUSH EAX
0044da1e  MOV EAX,[0x0092cd84]
0044da23  MOV dword ptr FS:[0x0],ESP
0044da2a  SUB ESP,0x368
0044da30  TEST EAX,EAX
0044da32  JZ 0x0044da3d
0044da34  MOV EAX,[0x0092cd7c]
0044da39  MOV ECX,dword ptr [EAX]
0044da3b  JMP 0x0044da3f
0044da3d  XOR ECX,ECX
0044da3f  MOV EDX,dword ptr [ECX]
0044da41  CALL dword ptr [EDX + 0x4]
0044da44  TEST EAX,EAX
0044da46  JZ 0x0044dc51
0044da4c  MOV EDX,dword ptr [EAX]
0044da4e  PUSH ESI
0044da4f  LEA ECX,[ESP + 0x44]
0044da53  PUSH ECX
0044da54  MOV ECX,EAX
0044da56  CALL dword ptr [EDX + 0x64]
0044da59  MOV ECX,dword ptr [ESP + 0x4c]
0044da5d  MOV EAX,dword ptr [ESP + 0x44]
0044da61  MOV EDX,dword ptr [ESP + 0x48]
0044da65  PUSH ECX
0044da66  PUSH EAX
0044da67  MOV dword ptr [ESP + 0x34],EAX
0044da6b  MOV dword ptr [ESP + 0x38],EDX
0044da6f  MOV dword ptr [ESP + 0x3c],ECX
0044da73  CALL 0x005cb5d0
0044da78  FSUBR float ptr [0x0089096c]
0044da7e  MOV EAX,dword ptr [ESP + 0x388]
0044da85  MOV ESI,dword ptr [ESP + 0x384]
0044da8c  FADD float ptr [0x008910f0]
0044da92  MOV EDX,dword ptr [ESP + 0x7c]
0044da96  MOV ECX,ESI
0044da98  ADD ESP,0x8
0044da9b  FSTP float ptr [EAX]
0044da9d  MOV EAX,dword ptr [ESP + 0x78]
0044daa1  MOV dword ptr [ECX],EDX
0044daa3  MOV EDX,dword ptr [ESP + 0x7c]
0044daa7  MOV dword ptr [ECX + 0x4],EAX
0044daaa  MOV dword ptr [ECX + 0x8],EDX
0044daad  LEA ECX,[ESP + 0x84]
0044dab4  CALL 0x0077b9e0
0044dab9  PUSH 0x1
0044dabb  LEA ECX,[ESP + 0x88]
0044dac2  MOV dword ptr [ESP + 0x378],0x0
0044dacd  CALL 0x0076e2d0
0044dad2  PUSH 0x0
0044dad4  LEA ECX,[ESP + 0x88]
0044dadb  CALL 0x007658a0
0044dae0  PUSH 0x0
0044dae2  PUSH 0x1
0044dae4  LEA EAX,[ESP + 0x34]
0044dae8  PUSH EAX
0044dae9  PUSH ESI
0044daea  LEA ECX,[ESP + 0x94]
0044daf1  MOV dword ptr [ESP + 0x10c],0x2
0044dafc  CALL 0x007862d0
0044db01  MOV AL,byte ptr [ESP + 0xd4]
0044db08  TEST AL,AL
0044db0a  JNZ 0x0044db3b
0044db0c  LEA ECX,[ESP + 0x84]
0044db13  MOV dword ptr [ESP + 0x374],0xffffffff
0044db1e  CALL 0x0076e220
0044db23  XOR AL,AL
0044db25  POP ESI
0044db26  MOV ECX,dword ptr [ESP + 0x368]
0044db2d  MOV dword ptr FS:[0x0],ECX
0044db34  ADD ESP,0x374
0044db3a  RET
0044db3b  MOV ECX,dword ptr [ESP + 0x134]
0044db42  MOV EDX,dword ptr [ESP + 0x138]
0044db49  MOV EAX,dword ptr [ESP + 0x13c]
0044db50  MOV dword ptr [ESP + 0x10],ECX
0044db54  FLD float ptr [ESP + 0x10]
0044db58  MOV ECX,dword ptr [ESP + 0x128]
0044db5f  MOV dword ptr [ESP + 0x14],EDX
0044db63  MOV EDX,dword ptr [ESP + 0x12c]
0044db6a  MOV dword ptr [ESP + 0x1c],ECX
0044db6e  FADD float ptr [ESP + 0x1c]
0044db72  FLD float ptr [ESP + 0x14]
0044db76  MOV dword ptr [ESP + 0x20],EDX
0044db7a  FADD float ptr [ESP + 0x20]
0044db7e  MOV dword ptr [ESP + 0x18],EAX
0044db82  MOV EAX,dword ptr [ESP + 0x130]
0044db89  MOV dword ptr [ESP + 0x24],EAX
0044db8d  FSTP float ptr [ESP + 0x8]
0044db91  FLD float ptr [ESP + 0x18]
0044db95  FADD float ptr [ESP + 0x24]
0044db99  FSTP float ptr [ESP + 0xc]
0044db9d  FMUL float ptr [0x008933d4]
0044dba3  FLD float ptr [ESP + 0x8]
0044dba7  FMUL float ptr [0x008933d4]
0044dbad  FLD float ptr [ESP + 0xc]
0044dbb1  FMUL float ptr [0x008933d4]
0044dbb7  FSTP float ptr [ESP + 0x40]
0044dbbb  MOV ECX,dword ptr [ESP + 0x40]
0044dbbf  FXCH
0044dbc1  MOV dword ptr [ESP + 0xc],ECX
0044dbc5  FSTP float ptr [ESP + 0x4]
0044dbc9  FSTP float ptr [ESP + 0x8]
0044dbcd  FLD float ptr [ESP + 0x1c]
0044dbd1  FSUB float ptr [ESP + 0x10]
0044dbd5  FLD float ptr [ESP + 0x20]
0044dbd9  FSUB float ptr [ESP + 0x14]
0044dbdd  FLD float ptr [ESP + 0x24]
0044dbe1  FSUB float ptr [ESP + 0x18]
0044dbe5  FLD ST0
0044dbe7  FMUL ST1
0044dbe9  FLD ST2
0044dbeb  FMUL ST3
0044dbed  FADDP
0044dbef  FLD ST3
0044dbf1  FMUL ST4
0044dbf3  FADDP
0044dbf5  FSTP float ptr [ESP + 0x28]
0044dbf9  MOV EDX,dword ptr [ESP + 0x28]
0044dbfd  FSTP ST0
0044dbff  PUSH EDX
0044dc00  FSTP ST0
0044dc02  FSTP ST0
0044dc04  CALL 0x005c5e80
0044dc09  MOV EAX,dword ptr [ESP + 0x8]
0044dc0d  FSTP ST0
0044dc0f  MOV ECX,dword ptr [ESP + 0xc]
0044dc13  MOV EDX,dword ptr [ESP + 0x10]
0044dc17  MOV dword ptr [ESI],EAX
0044dc19  MOV dword ptr [ESI + 0x4],ECX
0044dc1c  ADD ESP,0x4
0044dc1f  LEA ECX,[ESP + 0x84]
0044dc26  MOV dword ptr [ESI + 0x8],EDX
0044dc29  MOV dword ptr [ESP + 0x374],0xffffffff
0044dc34  CALL 0x0076e220
0044dc39  MOV AL,0x1
0044dc3b  POP ESI
0044dc3c  MOV ECX,dword ptr [ESP + 0x368]
0044dc43  MOV dword ptr FS:[0x0],ECX
0044dc4a  ADD ESP,0x374
0044dc50  RET
0044dc51  MOV ECX,dword ptr [ESP + 0x368]
0044dc58  XOR AL,AL
0044dc5a  MOV dword ptr FS:[0x0],ECX
0044dc61  ADD ESP,0x374
0044dc67  RET
