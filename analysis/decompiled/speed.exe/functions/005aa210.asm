005aa210  MOV EAX,FS:[0x0]
005aa216  PUSH -0x1
005aa218  PUSH 0x873cc8
005aa21d  PUSH EAX
005aa21e  MOV EAX,dword ptr [ESP + 0x14]
005aa222  MOV dword ptr FS:[0x0],ESP
005aa229  SUB ESP,0x48
005aa22c  PUSH EBP
005aa22d  MOV EBP,ECX
005aa22f  MOV CL,byte ptr [EAX + 0x11]
005aa232  TEST CL,CL
005aa234  PUSH ESI
005aa235  JZ 0x005aa283
005aa237  PUSH 0x1b
005aa239  XOR ESI,ESI
005aa23b  PUSH 0x892920
005aa240  LEA ECX,[ESP + 0x14]
005aa244  MOV dword ptr [ESP + 0x2c],0xf
005aa24c  MOV dword ptr [ESP + 0x28],ESI
005aa250  MOV byte ptr [ESP + 0x18],0x0
005aa255  CALL 0x004303b0
005aa25a  LEA EAX,[ESP + 0xc]
005aa25e  PUSH EAX
005aa25f  LEA ECX,[ESP + 0x2c]
005aa263  MOV dword ptr [ESP + 0x5c],ESI
005aa267  CALL 0x00432d50
005aa26c  PUSH 0x8c9f78
005aa271  LEA ECX,[ESP + 0x2c]
005aa275  PUSH ECX
005aa276  MOV dword ptr [ESP + 0x30],0x8bf2c0
005aa27e  CALL 0x007c56b0
005aa283  PUSH EBX
005aa284  MOV EBX,EAX
005aa286  PUSH EDI
005aa287  LEA ECX,[ESP + 0x6c]
005aa28b  MOV dword ptr [ESP + 0x10],EBX
005aa28f  CALL 0x00578b30
005aa294  MOV EAX,dword ptr [EBX]
005aa296  MOV CL,byte ptr [EAX + 0x11]
005aa299  TEST CL,CL
005aa29b  JZ 0x005aa2a2
005aa29d  MOV EDI,dword ptr [EBX + 0x8]
005aa2a0  JMP 0x005aa2bb
005aa2a2  MOV EDX,dword ptr [EBX + 0x8]
005aa2a5  MOV CL,byte ptr [EDX + 0x11]
005aa2a8  TEST CL,CL
005aa2aa  JZ 0x005aa2b0
005aa2ac  MOV EDI,EAX
005aa2ae  JMP 0x005aa2bb
005aa2b0  MOV ECX,dword ptr [ESP + 0x6c]
005aa2b4  CMP ECX,EBX
005aa2b6  MOV EDI,dword ptr [ECX + 0x8]
005aa2b9  JNZ 0x005aa329
005aa2bb  MOV AL,byte ptr [EDI + 0x11]
005aa2be  TEST AL,AL
005aa2c0  MOV ESI,dword ptr [EBX + 0x4]
005aa2c3  JNZ 0x005aa2c8
005aa2c5  MOV dword ptr [EDI + 0x4],ESI
005aa2c8  MOV EAX,dword ptr [EBP + 0x4]
005aa2cb  CMP dword ptr [EAX + 0x4],EBX
005aa2ce  JNZ 0x005aa2d5
005aa2d0  MOV dword ptr [EAX + 0x4],EDI
005aa2d3  JMP 0x005aa2e0
005aa2d5  CMP dword ptr [ESI],EBX
005aa2d7  JNZ 0x005aa2dd
005aa2d9  MOV dword ptr [ESI],EDI
005aa2db  JMP 0x005aa2e0
005aa2dd  MOV dword ptr [ESI + 0x8],EDI
005aa2e0  MOV EBX,dword ptr [EBP + 0x4]
005aa2e3  MOV EAX,dword ptr [EBX]
005aa2e5  CMP EAX,dword ptr [ESP + 0x10]
005aa2e9  JNZ 0x005aa301
005aa2eb  MOV AL,byte ptr [EDI + 0x11]
005aa2ee  TEST AL,AL
005aa2f0  JZ 0x005aa2f6
005aa2f2  MOV EAX,ESI
005aa2f4  JMP 0x005aa2ff
005aa2f6  PUSH EDI
005aa2f7  CALL 0x005784a0
005aa2fc  ADD ESP,0x4
005aa2ff  MOV dword ptr [EBX],EAX
005aa301  MOV EBX,dword ptr [EBP + 0x4]
005aa304  MOV ECX,dword ptr [ESP + 0x10]
005aa308  CMP dword ptr [EBX + 0x8],ECX
005aa30b  JNZ 0x005aa381
005aa30d  MOV AL,byte ptr [EDI + 0x11]
005aa310  TEST AL,AL
005aa312  JZ 0x005aa31b
005aa314  MOV EAX,ESI
005aa316  MOV dword ptr [EBX + 0x8],EAX
005aa319  JMP 0x005aa381
005aa31b  PUSH EDI
005aa31c  CALL 0x00578480
005aa321  ADD ESP,0x4
005aa324  MOV dword ptr [EBX + 0x8],EAX
005aa327  JMP 0x005aa381
005aa329  MOV dword ptr [EAX + 0x4],ECX
005aa32c  MOV EDX,dword ptr [EBX]
005aa32e  MOV dword ptr [ECX],EDX
005aa330  CMP ECX,dword ptr [EBX + 0x8]
005aa333  JNZ 0x005aa339
005aa335  MOV ESI,ECX
005aa337  JMP 0x005aa354
005aa339  MOV AL,byte ptr [EDI + 0x11]
005aa33c  TEST AL,AL
005aa33e  MOV ESI,dword ptr [ECX + 0x4]
005aa341  JNZ 0x005aa346
005aa343  MOV dword ptr [EDI + 0x4],ESI
005aa346  MOV dword ptr [ESI],EDI
005aa348  MOV EAX,dword ptr [EBX + 0x8]
005aa34b  MOV dword ptr [ECX + 0x8],EAX
005aa34e  MOV EDX,dword ptr [EBX + 0x8]
005aa351  MOV dword ptr [EDX + 0x4],ECX
005aa354  MOV EAX,dword ptr [EBP + 0x4]
005aa357  CMP dword ptr [EAX + 0x4],EBX
005aa35a  JNZ 0x005aa361
005aa35c  MOV dword ptr [EAX + 0x4],ECX
005aa35f  JMP 0x005aa36f
005aa361  MOV EAX,dword ptr [EBX + 0x4]
005aa364  CMP dword ptr [EAX],EBX
005aa366  JNZ 0x005aa36c
005aa368  MOV dword ptr [EAX],ECX
005aa36a  JMP 0x005aa36f
005aa36c  MOV dword ptr [EAX + 0x8],ECX
005aa36f  MOV EAX,dword ptr [EBX + 0x4]
005aa372  MOV dword ptr [ECX + 0x4],EAX
005aa375  MOV DL,byte ptr [EBX + 0x10]
005aa378  MOV AL,byte ptr [ECX + 0x10]
005aa37b  MOV byte ptr [ECX + 0x10],DL
005aa37e  MOV byte ptr [EBX + 0x10],AL
005aa381  MOV EAX,dword ptr [ESP + 0x10]
005aa385  MOV CL,byte ptr [EAX + 0x10]
005aa388  MOV BL,0x1
005aa38a  CMP CL,BL
005aa38c  JNZ 0x005aa491
005aa392  MOV ECX,dword ptr [EBP + 0x4]
005aa395  CMP EDI,dword ptr [ECX + 0x4]
005aa398  JZ 0x005aa48e
005aa39e  MOV EDI,EDI
005aa3a0  CMP byte ptr [EDI + 0x10],BL
005aa3a3  JNZ 0x005aa48e
005aa3a9  MOV EAX,dword ptr [ESI]
005aa3ab  CMP EDI,EAX
005aa3ad  JNZ 0x005aa416
005aa3af  MOV EAX,dword ptr [ESI + 0x8]
005aa3b2  MOV CL,byte ptr [EAX + 0x10]
005aa3b5  TEST CL,CL
005aa3b7  JNZ 0x005aa3cb
005aa3b9  MOV byte ptr [EAX + 0x10],BL
005aa3bc  PUSH ESI
005aa3bd  MOV ECX,EBP
005aa3bf  MOV byte ptr [ESI + 0x10],0x0
005aa3c3  CALL 0x0058b4f0
005aa3c8  MOV EAX,dword ptr [ESI + 0x8]
005aa3cb  MOV CL,byte ptr [EAX + 0x11]
005aa3ce  TEST CL,CL
005aa3d0  JNZ 0x005aa448
005aa3d2  MOV EDX,dword ptr [EAX]
005aa3d4  CMP byte ptr [EDX + 0x10],BL
005aa3d7  JNZ 0x005aa3e1
005aa3d9  MOV ECX,dword ptr [EAX + 0x8]
005aa3dc  CMP byte ptr [ECX + 0x10],BL
005aa3df  JZ 0x005aa444
005aa3e1  MOV ECX,dword ptr [EAX + 0x8]
005aa3e4  CMP byte ptr [ECX + 0x10],BL
005aa3e7  JNZ 0x005aa3fd
005aa3e9  MOV EDX,dword ptr [EAX]
005aa3eb  MOV byte ptr [EDX + 0x10],BL
005aa3ee  PUSH EAX
005aa3ef  MOV ECX,EBP
005aa3f1  MOV byte ptr [EAX + 0x10],0x0
005aa3f5  CALL 0x0058b550
005aa3fa  MOV EAX,dword ptr [ESI + 0x8]
005aa3fd  MOV CL,byte ptr [ESI + 0x10]
005aa400  MOV byte ptr [EAX + 0x10],CL
005aa403  MOV byte ptr [ESI + 0x10],BL
005aa406  MOV EDX,dword ptr [EAX + 0x8]
005aa409  PUSH ESI
005aa40a  MOV ECX,EBP
005aa40c  MOV byte ptr [EDX + 0x10],BL
005aa40f  CALL 0x0058b4f0
005aa414  JMP 0x005aa48e
005aa416  MOV CL,byte ptr [EAX + 0x10]
005aa419  TEST CL,CL
005aa41b  JNZ 0x005aa42e
005aa41d  MOV byte ptr [EAX + 0x10],BL
005aa420  PUSH ESI
005aa421  MOV ECX,EBP
005aa423  MOV byte ptr [ESI + 0x10],0x0
005aa427  CALL 0x0058b550
005aa42c  MOV EAX,dword ptr [ESI]
005aa42e  MOV CL,byte ptr [EAX + 0x11]
005aa431  TEST CL,CL
005aa433  JNZ 0x005aa448
005aa435  MOV EDX,dword ptr [EAX + 0x8]
005aa438  CMP byte ptr [EDX + 0x10],BL
005aa43b  JNZ 0x005aa45d
005aa43d  MOV ECX,dword ptr [EAX]
005aa43f  CMP byte ptr [ECX + 0x10],BL
005aa442  JNZ 0x005aa45d
005aa444  MOV byte ptr [EAX + 0x10],0x0
005aa448  MOV EDX,dword ptr [EBP + 0x4]
005aa44b  MOV EAX,dword ptr [EDX + 0x4]
005aa44e  MOV EDI,ESI
005aa450  CMP EDI,EAX
005aa452  MOV ESI,dword ptr [ESI + 0x4]
005aa455  JNZ 0x005aa3a0
005aa45b  JMP 0x005aa48e
005aa45d  MOV ECX,dword ptr [EAX]
005aa45f  CMP byte ptr [ECX + 0x10],BL
005aa462  JNZ 0x005aa478
005aa464  MOV EDX,dword ptr [EAX + 0x8]
005aa467  MOV byte ptr [EDX + 0x10],BL
005aa46a  PUSH EAX
005aa46b  MOV ECX,EBP
005aa46d  MOV byte ptr [EAX + 0x10],0x0
005aa471  CALL 0x0058b4f0
005aa476  MOV EAX,dword ptr [ESI]
005aa478  MOV CL,byte ptr [ESI + 0x10]
005aa47b  MOV byte ptr [EAX + 0x10],CL
005aa47e  MOV byte ptr [ESI + 0x10],BL
005aa481  MOV EDX,dword ptr [EAX]
005aa483  PUSH ESI
005aa484  MOV ECX,EBP
005aa486  MOV byte ptr [EDX + 0x10],BL
005aa489  CALL 0x0058b550
005aa48e  MOV byte ptr [EDI + 0x10],BL
005aa491  MOV EAX,dword ptr [ESP + 0x10]
005aa495  PUSH 0x890f10
005aa49a  PUSH 0x14
005aa49c  PUSH EAX
005aa49d  MOV ECX,0x925b30
005aa4a2  CALL 0x005d0370
005aa4a7  MOV EAX,dword ptr [EBP + 0x8]
005aa4aa  TEST EAX,EAX
005aa4ac  POP EDI
005aa4ad  POP EBX
005aa4ae  JBE 0x005aa4b4
005aa4b0  DEC EAX
005aa4b1  MOV dword ptr [EBP + 0x8],EAX
005aa4b4  MOV ECX,dword ptr [ESP + 0x64]
005aa4b8  MOV EAX,dword ptr [ESP + 0x60]
005aa4bc  MOV dword ptr [EAX],ECX
005aa4be  MOV ECX,dword ptr [ESP + 0x50]
005aa4c2  POP ESI
005aa4c3  POP EBP
005aa4c4  MOV dword ptr FS:[0x0],ECX
005aa4cb  ADD ESP,0x54
005aa4ce  RET 0x8
