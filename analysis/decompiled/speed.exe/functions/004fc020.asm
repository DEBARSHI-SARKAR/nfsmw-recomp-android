004fc020  MOV ECX,dword ptr [ESP + 0xc]
004fc024  MOV AL,byte ptr [ECX + 0x7]
004fc027  SUB ESP,0x10
004fc02a  CMP AL,0x1
004fc02c  JNZ 0x004fc254
004fc032  FLD float ptr [ESP + 0x20]
004fc036  PUSH ESI
004fc037  FSUB float ptr [ECX + 0x10]
004fc03a  MOVZX ESI,byte ptr [ECX + 0x4]
004fc03e  FABS
004fc040  FLD float ptr [ESP + 0x28]
004fc044  FSUB float ptr [ECX + 0x14]
004fc047  FABS
004fc049  FLD float ptr [ESP + 0x2c]
004fc04d  FSUB float ptr [ECX + 0x18]
004fc050  FABS
004fc052  FLD float ptr [ECX + 0x1c]
004fc055  FLD ST0
004fc057  FMUL ST1
004fc059  FSTP float ptr [ESP + 0x8]
004fc05d  FSTP ST0
004fc05f  FLD ST0
004fc061  FMUL ST1
004fc063  FLD ST2
004fc065  FMUL ST3
004fc067  FADDP
004fc069  FLD ST3
004fc06b  FMUL ST4
004fc06d  FADDP
004fc06f  FSTP float ptr [ESP + 0x4]
004fc073  FSTP ST0
004fc075  FSTP ST0
004fc077  FSTP ST0
004fc079  FLD float ptr [ESP + 0x4]
004fc07d  FCOMP float ptr [ESP + 0x8]
004fc081  FNSTSW AX
004fc083  TEST AH,0x5
004fc086  JP 0x004fc253
004fc08c  FLD float ptr [ECX + 0x30]
004fc08f  MOVZX EDX,byte ptr [ECX + 0x5]
004fc093  FLD ST0
004fc095  MOV dword ptr [ESP + 0x20],0x3f800000
004fc09d  FMULP
004fc09f  FLD float ptr [ESP + 0x4]
004fc0a3  FCOMP
004fc0a5  FNSTSW AX
004fc0a7  TEST AH,0x41
004fc0aa  JNZ 0x004fc0c4
004fc0ac  FLD float ptr [ESP + 0x4]
004fc0b0  FSUB ST0,ST1
004fc0b2  FLD float ptr [ESP + 0x8]
004fc0b6  FSUB ST0,ST2
004fc0b8  FDIVP
004fc0ba  FSUBR float ptr [0x0089096c]
004fc0c0  FSTP float ptr [ESP + 0x20]
004fc0c4  TEST ESI,ESI
004fc0c6  FSTP ST0
004fc0c8  JNZ 0x004fc211
004fc0ce  MOV EAX,dword ptr [ECX + 0xc]
004fc0d1  MOV ESI,EAX
004fc0d3  AND ESI,0xff
004fc0d9  TEST ESI,ESI
004fc0db  MOV dword ptr [ESP + 0x10],ESI
004fc0df  FILD dword ptr [ESP + 0x10]
004fc0e3  JGE 0x004fc0eb
004fc0e5  FADD float ptr [0x00891214]
004fc0eb  MOV ESI,EAX
004fc0ed  SHR ESI,0x8
004fc0f0  AND ESI,0xff
004fc0f6  TEST ESI,ESI
004fc0f8  MOV dword ptr [ESP + 0x10],ESI
004fc0fc  FILD dword ptr [ESP + 0x10]
004fc100  JGE 0x004fc108
004fc102  FADD float ptr [0x00891214]
004fc108  SHR EAX,0x10
004fc10b  FSTP float ptr [ESP + 0x8]
004fc10f  AND EAX,0xff
004fc114  TEST EAX,EAX
004fc116  MOV dword ptr [ESP + 0x10],EAX
004fc11a  FILD dword ptr [ESP + 0x10]
004fc11e  JGE 0x004fc126
004fc120  FADD float ptr [0x00891214]
004fc126  CMP EDX,0x2
004fc129  FSTP float ptr [ESP + 0xc]
004fc12d  MOV EAX,dword ptr [ECX + 0x2c]
004fc130  MOV ECX,dword ptr [ESP + 0x1c]
004fc134  MOV dword ptr [ESP + 0x10],EAX
004fc138  JNZ 0x004fc1c2
004fc13e  MOV EAX,dword ptr [ECX + 0xb4]
004fc144  CMP EAX,dword ptr [ECX + 0xb8]
004fc14a  JNC 0x004fc251
004fc150  FMUL float ptr [ESP + 0x20]
004fc154  FSTP float ptr [EAX]
004fc156  MOV EDX,dword ptr [ECX + 0xb4]
004fc15c  FLD float ptr [ESP + 0x8]
004fc160  FMUL float ptr [ESP + 0x20]
004fc164  FSTP float ptr [EDX + 0x4]
004fc167  MOV EAX,dword ptr [ECX + 0xb4]
004fc16d  FLD float ptr [ESP + 0xc]
004fc171  FMUL float ptr [ESP + 0x20]
004fc175  FSTP float ptr [EAX + 0x8]
004fc178  MOV EDX,dword ptr [ECX + 0xb4]
004fc17e  FLD float ptr [ESP + 0x10]
004fc182  FMUL float ptr [ESP + 0x20]
004fc186  FSTP float ptr [EDX + 0xc]
004fc189  FLD float ptr [ESP + 0x20]
004fc18d  FCOMP float ptr [0x00890968]
004fc193  FNSTSW AX
004fc195  TEST AH,0x41
004fc198  JNZ 0x004fc253
004fc19e  FLD float ptr [ESP + 0x20]
004fc1a2  MOV EAX,dword ptr [ECX + 0xb4]
004fc1a8  FADD float ptr [ECX + 0xbc]
004fc1ae  ADD EAX,0x10
004fc1b1  MOV dword ptr [ECX + 0xb4],EAX
004fc1b7  POP ESI
004fc1b8  FSTP float ptr [ECX + 0xbc]
004fc1be  ADD ESP,0x10
004fc1c1  RET
004fc1c2  FLD float ptr [ESP + 0x4]
004fc1c6  FCOMP float ptr [ECX + 0xc0]
004fc1cc  FNSTSW AX
004fc1ce  TEST AH,0x5
004fc1d1  JP 0x004fc251
004fc1d3  MOV EAX,dword ptr [ECX + 0xb0]
004fc1d9  FSTP float ptr [EAX]
004fc1db  MOV EDX,dword ptr [ECX + 0xb0]
004fc1e1  MOV EAX,dword ptr [ESP + 0x8]
004fc1e5  MOV dword ptr [EDX + 0x4],EAX
004fc1e8  MOV EDX,dword ptr [ECX + 0xb0]
004fc1ee  MOV EAX,dword ptr [ESP + 0xc]
004fc1f2  MOV dword ptr [EDX + 0x8],EAX
004fc1f5  MOV EDX,dword ptr [ECX + 0xb0]
004fc1fb  MOV EAX,dword ptr [ESP + 0x10]
004fc1ff  MOV dword ptr [EDX + 0xc],EAX
004fc202  MOV EDX,dword ptr [ESP + 0x4]
004fc206  MOV dword ptr [ECX + 0xc0],EDX
004fc20c  POP ESI
004fc20d  ADD ESP,0x10
004fc210  RET
004fc211  CMP ESI,0x2
004fc214  JZ 0x004fc21b
004fc216  CMP ESI,0x3
004fc219  JNZ 0x004fc253
004fc21b  MOV EAX,dword ptr [ESP + 0x1c]
004fc21f  MOV ESI,dword ptr [EAX + 0xc8]
004fc225  CMP ESI,0x18
004fc228  JGE 0x004fc253
004fc22a  MOV EDX,dword ptr [ESP + 0x18]
004fc22e  FLD float ptr [ESP + 0x20]
004fc232  MOV dword ptr [EDX + ESI*0x4],ECX
004fc235  MOV ECX,dword ptr [EAX + 0xc8]
004fc23b  FSTP float ptr [EDX + ECX*0x4 + 0x60]
004fc23f  MOV ECX,dword ptr [EAX + 0xc8]
004fc245  INC ECX
004fc246  MOV dword ptr [EAX + 0xc8],ECX
004fc24c  POP ESI
004fc24d  ADD ESP,0x10
004fc250  RET
004fc251  FSTP ST0
004fc253  POP ESI
004fc254  ADD ESP,0x10
004fc257  RET
