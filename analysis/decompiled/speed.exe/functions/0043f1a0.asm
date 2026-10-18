0043f1a0  PUSH -0x1
0043f1a2  PUSH 0x8695a8
0043f1a7  MOV EAX,FS:[0x0]
0043f1ad  PUSH EAX
0043f1ae  MOV dword ptr FS:[0x0],ESP
0043f1b5  SUB ESP,0x40
0043f1b8  PUSH ESI
0043f1b9  MOV ESI,ECX
0043f1bb  PUSH EDI
0043f1bc  MOV dword ptr [ESP + 0xc],ESI
0043f1c0  CALL 0x0043f120
0043f1c5  MOV ECX,dword ptr [ESP + 0x5c]
0043f1c9  MOV dword ptr [ESI],0x892f0c
0043f1cf  MOV EAX,dword ptr [ECX]
0043f1d1  MOV dword ptr [ESP + 0x50],0x0
0043f1d9  CALL dword ptr [EAX + 0x8]
0043f1dc  MOV EAX,dword ptr [EAX + 0x1c]
0043f1df  TEST EAX,EAX
0043f1e1  JZ 0x0043f24a
0043f1e3  MOV ECX,dword ptr [EAX + 0x4]
0043f1e6  PUSH 0x4037e0
0043f1eb  CALL 0x005d59f0
0043f1f0  TEST EAX,EAX
0043f1f2  SETNZ CL
0043f1f5  TEST CL,CL
0043f1f7  JZ 0x0043f24a
0043f1f9  MOV EDX,dword ptr [EAX]
0043f1fb  MOV ECX,EAX
0043f1fd  CALL dword ptr [EDX + 0x10]
0043f200  MOV EDI,EAX
0043f202  TEST EDI,EDI
0043f204  JZ 0x0043f24a
0043f206  PUSH 0x0
0043f208  PUSH 0x67a15750
0043f20d  MOV ECX,EDI
0043f20f  CALL 0x00454810
0043f214  TEST EAX,EAX
0043f216  JNZ 0x0043f222
0043f218  PUSH 0x4
0043f21a  CALL 0x006269b0
0043f21f  ADD ESP,0x4
0043f222  MOV EAX,dword ptr [EAX]
0043f224  PUSH 0x0
0043f226  PUSH 0x858b1097
0043f22b  MOV ECX,EDI
0043f22d  MOV dword ptr [ESI + 0x20],EAX
0043f230  CALL 0x00454810
0043f235  TEST EAX,EAX
0043f237  JNZ 0x0043f243
0043f239  PUSH 0x4
0043f23b  CALL 0x006269b0
0043f240  ADD ESP,0x4
0043f243  MOV ECX,dword ptr [EAX]
0043f245  MOV dword ptr [ESI + 0x24],ECX
0043f248  JMP 0x0043f258
0043f24a  MOV dword ptr [ESI + 0x20],0x3f000000
0043f251  MOV dword ptr [ESI + 0x24],0x40000000
0043f258  FLD float ptr [ESI + 0x20]
0043f25b  PUSH 0x892f00
0043f260  FMUL float ptr [0x00890634]
0043f266  MOV dword ptr [ESP + 0x14],0x0
0043f26e  MOV dword ptr [ESP + 0x18],0x0
0043f276  MOV dword ptr [ESP + 0x1c],0x41600000
0043f27e  FSUBR float ptr [0x0089107c]
0043f284  FSTP float ptr [ESP + 0xc]
0043f288  FLD float ptr [ESP + 0xc]
0043f28c  FMUL float ptr [0x00890968]
0043f292  FST float ptr [ESP + 0x60]
0043f296  FST float ptr [ESP + 0x20]
0043f29a  FSTP float ptr [ESP + 0x24]
0043f29e  FLD float ptr [ESI + 0x20]
0043f2a1  FMUL float ptr [0x00890da4]
0043f2a7  FSUBR float ptr [0x00890d3c]
0043f2ad  FSTP float ptr [ESP + 0x28]
0043f2b1  CALL 0x005cc240
0043f2b6  MOV EDX,dword ptr [ESP + 0x14]
0043f2ba  MOV ECX,dword ptr [ESP + 0x18]
0043f2be  MOV dword ptr [ESP + 0x2c],EDX
0043f2c2  MOV EDX,dword ptr [ESP + 0x1c]
0043f2c6  MOV dword ptr [ESP + 0x30],ECX
0043f2ca  MOV ECX,dword ptr [ESP + 0x20]
0043f2ce  MOV dword ptr [ESP + 0x34],EDX
0043f2d2  MOV EDX,dword ptr [ESP + 0x24]
0043f2d6  MOV dword ptr [ESP + 0x38],ECX
0043f2da  MOV ECX,dword ptr [ESP + 0x28]
0043f2de  MOV dword ptr [ESP + 0x3c],EDX
0043f2e2  ADD ESP,0x4
0043f2e5  LEA EDX,[ESP + 0x28]
0043f2e9  MOV dword ptr [ESP + 0x3c],ECX
0043f2ed  LEA EDI,[ESI + 0x10]
0043f2f0  PUSH EDX
0043f2f1  MOV ECX,EDI
0043f2f3  MOV dword ptr [ESP + 0x44],0x1
0043f2fb  MOV dword ptr [ESP + 0x48],EAX
0043f2ff  CALL 0x004393f0
0043f304  FLD float ptr [ESP + 0x8]
0043f308  MOV EAX,dword ptr [ESP + 0x5c]
0043f30c  FMUL float ptr [0x008918cc]
0043f312  MOV ECX,EAX
0043f314  PUSH 0x892f00
0043f319  FSTP float ptr [ESP + 0x20]
0043f31d  MOV dword ptr [ESP + 0x14],0xc0600000
0043f325  MOV dword ptr [ESP + 0x18],0x0
0043f32d  MOV dword ptr [ESP + 0x1c],0x0
0043f335  MOV dword ptr [ESP + 0x24],EAX
0043f339  MOV dword ptr [ESP + 0x28],ECX
0043f33d  CALL 0x005cc240
0043f342  MOV EDX,dword ptr [ESP + 0x14]
0043f346  MOV ECX,dword ptr [ESP + 0x18]
0043f34a  MOV dword ptr [ESP + 0x2c],EDX
0043f34e  MOV EDX,dword ptr [ESP + 0x1c]
0043f352  MOV dword ptr [ESP + 0x30],ECX
0043f356  MOV ECX,dword ptr [ESP + 0x20]
0043f35a  MOV dword ptr [ESP + 0x34],EDX
0043f35e  MOV EDX,dword ptr [ESP + 0x24]
0043f362  MOV dword ptr [ESP + 0x38],ECX
0043f366  MOV ECX,dword ptr [ESP + 0x28]
0043f36a  MOV dword ptr [ESP + 0x3c],EDX
0043f36e  ADD ESP,0x4
0043f371  LEA EDX,[ESP + 0x28]
0043f375  MOV dword ptr [ESP + 0x3c],ECX
0043f379  PUSH EDX
0043f37a  MOV ECX,EDI
0043f37c  MOV dword ptr [ESP + 0x44],0x2
0043f384  MOV dword ptr [ESP + 0x48],EAX
0043f388  CALL 0x004393f0
0043f38d  FLD float ptr [ESP + 0x8]
0043f391  MOV EAX,dword ptr [ESP + 0x5c]
0043f395  FMUL float ptr [0x008908e8]
0043f39b  MOV ECX,EAX
0043f39d  PUSH 0x892f00
0043f3a2  FSTP float ptr [ESP + 0x20]
0043f3a6  MOV dword ptr [ESP + 0x14],0x40600000
0043f3ae  MOV dword ptr [ESP + 0x18],0x0
0043f3b6  MOV dword ptr [ESP + 0x1c],0x0
0043f3be  MOV dword ptr [ESP + 0x24],EAX
0043f3c2  MOV dword ptr [ESP + 0x28],ECX
0043f3c6  CALL 0x005cc240
0043f3cb  MOV EDX,dword ptr [ESP + 0x14]
0043f3cf  MOV ECX,dword ptr [ESP + 0x18]
0043f3d3  MOV dword ptr [ESP + 0x2c],EDX
0043f3d7  MOV EDX,dword ptr [ESP + 0x1c]
0043f3db  MOV dword ptr [ESP + 0x30],ECX
0043f3df  MOV ECX,dword ptr [ESP + 0x20]
0043f3e3  MOV dword ptr [ESP + 0x34],EDX
0043f3e7  MOV EDX,dword ptr [ESP + 0x24]
0043f3eb  MOV dword ptr [ESP + 0x38],ECX
0043f3ef  MOV ECX,dword ptr [ESP + 0x28]
0043f3f3  MOV dword ptr [ESP + 0x3c],EDX
0043f3f7  ADD ESP,0x4
0043f3fa  LEA EDX,[ESP + 0x28]
0043f3fe  MOV dword ptr [ESP + 0x3c],ECX
0043f402  PUSH EDX
0043f403  MOV ECX,EDI
0043f405  MOV dword ptr [ESP + 0x44],0x2
0043f40d  MOV dword ptr [ESP + 0x48],EAX
0043f411  CALL 0x004393f0
0043f416  FLD float ptr [ESP + 0x8]
0043f41a  MOV EAX,dword ptr [ESP + 0x5c]
0043f41e  FMUL float ptr [0x008918c8]
0043f424  MOV ECX,EAX
0043f426  PUSH 0x892f00
0043f42b  FSTP float ptr [ESP + 0x28]
0043f42f  MOV dword ptr [ESP + 0x14],0x0
0043f437  MOV dword ptr [ESP + 0x18],0x0
0043f43f  MOV dword ptr [ESP + 0x1c],0xc0f00000
0043f447  MOV dword ptr [ESP + 0x20],EAX
0043f44b  MOV dword ptr [ESP + 0x24],ECX
0043f44f  CALL 0x005cc240
0043f454  MOV EDX,dword ptr [ESP + 0x14]
0043f458  MOV ECX,dword ptr [ESP + 0x18]
0043f45c  MOV dword ptr [ESP + 0x2c],EDX
0043f460  MOV EDX,dword ptr [ESP + 0x1c]
0043f464  MOV dword ptr [ESP + 0x30],ECX
0043f468  MOV ECX,dword ptr [ESP + 0x20]
0043f46c  MOV dword ptr [ESP + 0x34],EDX
0043f470  MOV EDX,dword ptr [ESP + 0x24]
0043f474  MOV dword ptr [ESP + 0x38],ECX
0043f478  MOV ECX,dword ptr [ESP + 0x28]
0043f47c  MOV dword ptr [ESP + 0x3c],EDX
0043f480  ADD ESP,0x4
0043f483  LEA EDX,[ESP + 0x28]
0043f487  MOV dword ptr [ESP + 0x3c],ECX
0043f48b  PUSH EDX
0043f48c  MOV ECX,EDI
0043f48e  MOV dword ptr [ESP + 0x44],0x4
0043f496  MOV dword ptr [ESP + 0x48],EAX
0043f49a  CALL 0x004393f0
0043f49f  MOV ECX,dword ptr [ESP + 0x48]
0043f4a3  MOV dword ptr [ESI + 0x4],0x4
0043f4aa  MOV dword ptr [ESI + 0x8],0x2
0043f4b1  MOV byte ptr [ESI + 0xc],0x1
0043f4b5  POP EDI
0043f4b6  MOV EAX,ESI
0043f4b8  MOV dword ptr FS:[0x0],ECX
0043f4bf  POP ESI
0043f4c0  ADD ESP,0x4c
0043f4c3  RET 0x8
