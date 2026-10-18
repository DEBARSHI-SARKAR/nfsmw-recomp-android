004bf2e0  PUSH EBP
004bf2e1  MOV EBP,ESP
004bf2e3  AND ESP,0xfffffff0
004bf2e6  SUB ESP,0x2c
004bf2e9  MOV EAX,[0x00911fe8]
004bf2ee  TEST AL,0x3b
004bf2f0  PUSH ESI
004bf2f1  MOV ESI,ECX
004bf2f3  JNZ 0x004bf4da
004bf2f9  TEST EAX,0x34800
004bf2fe  JNZ 0x004bf4da
004bf304  MOV ECX,dword ptr [ESI + 0x30]
004bf307  TEST ECX,ECX
004bf309  JZ 0x004bf4da
004bf30f  MOV EAX,dword ptr [ESI + 0x44]
004bf312  FLD float ptr [ECX]
004bf314  SHL EAX,0x4
004bf317  FSUB float ptr [EAX + 0x914520]
004bf31d  MOV EDX,dword ptr [ESI + 0x28]
004bf320  PUSH EDX
004bf321  FSTP float ptr [ESP + 0x14]
004bf325  FLD float ptr [ECX + 0x4]
004bf328  FSUB float ptr [EAX + 0x914524]
004bf32e  FSTP float ptr [ESP + 0x18]
004bf332  FLD float ptr [ECX + 0x8]
004bf335  FSUB float ptr [EAX + 0x914528]
004bf33b  FSTP float ptr [ESP + 0x1c]
004bf33f  FLD float ptr [ECX]
004bf341  FSUB float ptr [EAX + 0x914540]
004bf347  FSTP float ptr [ESP + 0x24]
004bf34b  FLD float ptr [ECX + 0x4]
004bf34e  FSUB float ptr [EAX + 0x914544]
004bf354  FSTP float ptr [ESP + 0x28]
004bf358  FLD float ptr [ECX + 0x8]
004bf35b  MOV ECX,dword ptr [ESI + 0x34]
004bf35e  FSUB float ptr [EAX + 0x914548]
004bf364  LEA EAX,[EAX + 0x914560]
004bf36a  PUSH EAX
004bf36b  MOV dword ptr [ESI + 0x38],ECX
004bf36e  FSTP float ptr [ESP + 0x30]
004bf372  CALL 0x0045f340
004bf377  MOV EAX,dword ptr [ESI + 0x44]
004bf37a  FSTP float ptr [ESI + 0x34]
004bf37d  MOV EDX,dword ptr [ESI + 0x28]
004bf380  MOV ECX,dword ptr [ESI + 0x3c]
004bf383  SHL EAX,0x4
004bf386  PUSH EDX
004bf387  ADD EAX,0x914430
004bf38c  PUSH EAX
004bf38d  MOV dword ptr [ESI + 0x40],ECX
004bf390  CALL 0x0045f340
004bf395  FST float ptr [ESI + 0x3c]
004bf398  FLD float ptr [ESP + 0x24]
004bf39c  MOV ECX,dword ptr [ESI + 0x4c]
004bf39f  FMUL float ptr [ESP + 0x24]
004bf3a3  MOV EDX,dword ptr [ESI + 0x54]
004bf3a6  FLD float ptr [ESP + 0x28]
004bf3aa  ADD ESP,0x10
004bf3ad  FMUL float ptr [ESP + 0x18]
004bf3b1  MOV dword ptr [ESI + 0x50],ECX
004bf3b4  MOV dword ptr [ESI + 0x58],EDX
004bf3b7  FADDP
004bf3b9  FLD float ptr [ESP + 0x10]
004bf3bd  FMUL float ptr [ESP + 0x10]
004bf3c1  FADDP
004bf3c3  FSQRT
004bf3c5  FST float ptr [ESI + 0x4c]
004bf3c8  FLD float ptr [ESP + 0x28]
004bf3cc  FMUL float ptr [ESP + 0x28]
004bf3d0  FLD float ptr [ESP + 0x24]
004bf3d4  FMUL float ptr [ESP + 0x24]
004bf3d8  FADDP
004bf3da  FLD float ptr [ESP + 0x20]
004bf3de  FMUL float ptr [ESP + 0x20]
004bf3e2  FADDP
004bf3e4  FSQRT
004bf3e6  FST float ptr [ESP + 0xc]
004bf3ea  FSTP float ptr [ESI + 0x54]
004bf3ed  FLD float ptr [ESI + 0x38]
004bf3f0  FCOMP float ptr [ESI + 0x34]
004bf3f3  FNSTSW AX
004bf3f5  TEST AH,0x41
004bf3f8  JNZ 0x004bf405
004bf3fa  FMUL float ptr [0x00890da8]
004bf400  FSTP float ptr [ESI + 0x4c]
004bf403  JMP 0x004bf407
004bf405  FSTP ST0
004bf407  FCOMP float ptr [ESI + 0x40]
004bf40a  FNSTSW AX
004bf40c  TEST AH,0x5
004bf40f  JP 0x004bf41e
004bf411  FLD float ptr [ESP + 0xc]
004bf415  FMUL float ptr [0x00890da8]
004bf41b  FSTP float ptr [ESI + 0x54]
004bf41e  FLD float ptr [ESI + 0x50]
004bf421  FCOMP float ptr [0x00890968]
004bf427  FNSTSW AX
004bf429  TEST AH,0x5
004bf42c  JP 0x004bf43e
004bf42e  FLD float ptr [ESI + 0x4c]
004bf431  FCOMP float ptr [0x00890968]
004bf437  FNSTSW AX
004bf439  TEST AH,0x41
004bf43c  JZ 0x004bf45e
004bf43e  FLD float ptr [ESI + 0x50]
004bf441  FCOMP float ptr [0x00890968]
004bf447  FNSTSW AX
004bf449  TEST AH,0x41
004bf44c  JNZ 0x004bf468
004bf44e  FLD float ptr [ESI + 0x4c]
004bf451  FCOMP float ptr [0x00890968]
004bf457  FNSTSW AX
004bf459  TEST AH,0x5
004bf45c  JP 0x004bf468
004bf45e  MOV EAX,dword ptr [ESI + 0xc]
004bf461  OR dword ptr [EAX + 0x3c],0x80000000
004bf468  FLD float ptr [ESI + 0x58]
004bf46b  FCOMP float ptr [0x00890968]
004bf471  FNSTSW AX
004bf473  TEST AH,0x5
004bf476  JP 0x004bf488
004bf478  FLD float ptr [ESI + 0x54]
004bf47b  FCOMP float ptr [0x00890968]
004bf481  FNSTSW AX
004bf483  TEST AH,0x41
004bf486  JZ 0x004bf4a8
004bf488  FLD float ptr [ESI + 0x58]
004bf48b  FCOMP float ptr [0x00890968]
004bf491  FNSTSW AX
004bf493  TEST AH,0x41
004bf496  JNZ 0x004bf4b2
004bf498  FLD float ptr [ESI + 0x54]
004bf49b  FCOMP float ptr [0x00890968]
004bf4a1  FNSTSW AX
004bf4a3  TEST AH,0x5
004bf4a6  JP 0x004bf4b2
004bf4a8  MOV EAX,dword ptr [ESI + 0xc]
004bf4ab  OR dword ptr [EAX + 0x3c],0x40000000
004bf4b2  FLD float ptr [ESI + 0x4c]
004bf4b5  FMUL float ptr [0x00890fc8]
004bf4bb  CALL 0x007c4b80
004bf4c0  MOV ECX,dword ptr [ESI + 0xc]
004bf4c3  MOV dword ptr [ECX + 0x34],EAX
004bf4c6  FLD float ptr [ESI + 0x54]
004bf4c9  FMUL float ptr [0x00890fc8]
004bf4cf  CALL 0x007c4b80
004bf4d4  MOV EDX,dword ptr [ESI + 0xc]
004bf4d7  MOV dword ptr [EDX + 0x38],EAX
004bf4da  POP ESI
004bf4db  MOV ESP,EBP
004bf4dd  POP EBP
004bf4de  RET 0x8
