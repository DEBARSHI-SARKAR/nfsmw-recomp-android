004bc150  PUSH ECX
004bc151  MOV EAX,dword ptr [ECX + 0x28]
004bc154  MOV EDX,dword ptr [EAX + 0x30]
004bc157  MOV EAX,dword ptr [EDX + 0x8c]
004bc15d  CMP EAX,0x7
004bc160  JGE 0x004bc270
004bc166  CMP EAX,0x3
004bc169  FLD float ptr [0x0089096c]
004bc16f  JNZ 0x004bc179
004bc171  FSTP ST0
004bc173  FLD float ptr [0x0089642c]
004bc179  CMP EAX,0x4
004bc17c  JNZ 0x004bc186
004bc17e  FSTP ST0
004bc180  FLD float ptr [0x0089644c]
004bc186  CMP EAX,0x5
004bc189  JNZ 0x004bc193
004bc18b  FSTP ST0
004bc18d  FLD float ptr [0x00896434]
004bc193  CMP EAX,0x6
004bc196  JNZ 0x004bc1a0
004bc198  FSTP ST0
004bc19a  FLD float ptr [0x00896438]
004bc1a0  MOV EAX,dword ptr [ECX + 0x34]
004bc1a3  MOV dword ptr [ECX + 0x148],0x1
004bc1ad  MOV EAX,dword ptr [EAX + 0x8]
004bc1b0  MOV EDX,dword ptr [EAX + 0x18]
004bc1b3  FILD dword ptr [EAX + 0x18]
004bc1b6  TEST EDX,EDX
004bc1b8  JGE 0x004bc1c0
004bc1ba  FADD float ptr [0x00891214]
004bc1c0  FMULP
004bc1c2  FILD dword ptr [EAX + 0x28]
004bc1c5  FMUL float ptr [0x00890d60]
004bc1cb  FST float ptr [ECX + 0x114]
004bc1d1  FCOMP float ptr [0x00890968]
004bc1d7  FNSTSW AX
004bc1d9  TEST AH,0x41
004bc1dc  JP 0x004bc1e8
004bc1de  MOV dword ptr [ECX + 0x114],0x3c23d70a
004bc1e8  XOR EDX,EDX
004bc1ea  FST float ptr [ECX + 0x118]
004bc1f0  FSTP float ptr [ECX + 0x124]
004bc1f6  MOV dword ptr [ECX + 0x11c],EDX
004bc1fc  MOV dword ptr [ECX + 0x120],EDX
004bc202  MOV byte ptr [ECX + 0x128],DL
004bc208  MOV dword ptr [ECX + 0x110],EDX
004bc20e  MOV EAX,dword ptr [ECX + 0x34]
004bc211  MOV EAX,dword ptr [EAX + 0x8]
004bc214  FILD dword ptr [EAX + 0x1c]
004bc217  PUSH EDI
004bc218  MOV EDI,dword ptr [EAX + 0x1c]
004bc21b  TEST EDI,EDI
004bc21d  JGE 0x004bc225
004bc21f  FADD float ptr [0x00891214]
004bc225  FILD dword ptr [EAX + 0x54]
004bc228  POP EDI
004bc229  FMUL float ptr [0x00890d60]
004bc22f  FST float ptr [ECX + 0x130]
004bc235  FCOMP float ptr [0x00890968]
004bc23b  FNSTSW AX
004bc23d  TEST AH,0x41
004bc240  JP 0x004bc24c
004bc242  MOV dword ptr [ECX + 0x130],0x3c23d70a
004bc24c  FST float ptr [ECX + 0x134]
004bc252  MOV dword ptr [ECX + 0x138],EDX
004bc258  FSTP float ptr [ECX + 0x140]
004bc25e  MOV dword ptr [ECX + 0x13c],EDX
004bc264  MOV byte ptr [ECX + 0x144],DL
004bc26a  MOV dword ptr [ECX + 0x12c],EDX
004bc270  POP ECX
004bc271  RET
