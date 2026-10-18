006ec5c0  SUB ESP,0x34
006ec5c3  MOV EDX,dword ptr [ESP + 0x3c]
006ec5c7  PUSH EBX
006ec5c8  PUSH EBP
006ec5c9  PUSH ESI
006ec5ca  MOV ESI,dword ptr [ESP + 0x4c]
006ec5ce  PUSH EDI
006ec5cf  MOV EDI,dword ptr [ESP + 0x48]
006ec5d3  FLD float ptr [EDI]
006ec5d5  MOV EAX,dword ptr [EDI + 0xa0]
006ec5db  FSUB float ptr [EDX]
006ec5dd  MOV dword ptr [ESP + 0x48],EAX
006ec5e1  MOV EAX,[0x008a2fd0]
006ec5e6  ADD ESI,0x70
006ec5e9  FSTP float ptr [ESP + 0x34]
006ec5ed  MOV ECX,ESI
006ec5ef  FLD float ptr [EDI + 0x4]
006ec5f2  LEA EBP,[EDX + 0xa0]
006ec5f8  FSUB float ptr [EDX + 0x4]
006ec5fb  LEA EBX,[EDX + 0x18]
006ec5fe  FSTP float ptr [ESP + 0x38]
006ec602  FLD float ptr [EDI + 0x8]
006ec605  FSUB float ptr [EDX + 0x8]
006ec608  MOV dword ptr [ECX],EAX
006ec60a  MOV EAX,[0x008a2fd4]
006ec60f  MOV dword ptr [ECX + 0x4],EAX
006ec612  MOV EAX,[0x008a2fd8]
006ec617  FSTP float ptr [ESP + 0x3c]
006ec61b  MOV dword ptr [ECX + 0x8],EAX
006ec61e  MOV EAX,[0x008a2fdc]
006ec623  MOV dword ptr [ECX + 0xc],EAX
006ec626  XOR ECX,ECX
006ec628  JMP 0x006ec630
006ec630  FLD float ptr [ESP + 0x38]
006ec634  MOV EAX,dword ptr [EBP]
006ec637  FMUL float ptr [EBX + -0x4]
006ec63a  MOV dword ptr [ESP + 0x4c],EAX
006ec63e  FLD float ptr [ESP + 0x34]
006ec642  FMUL float ptr [EBX + -0x8]
006ec645  FADDP
006ec647  FLD float ptr [ESP + 0x3c]
006ec64b  FMUL float ptr [EBX]
006ec64d  FADDP
006ec64f  FCOM float ptr [0x00890968]
006ec655  FST float ptr [ESP + ECX*0x1 + 0x28]
006ec659  FNSTSW AX
006ec65b  TEST AH,0x5
006ec65e  JP 0x006ec662
006ec660  FCHS
006ec662  FST float ptr [ESP + ECX*0x1 + 0x1c]
006ec666  FLD float ptr [ESP + 0x4c]
006ec66a  FADD float ptr [ESP + 0x48]
006ec66e  FLD ST1
006ec670  FCOMP
006ec672  FNSTSW AX
006ec674  TEST AH,0x1
006ec677  JZ 0x006ec71f
006ec67d  FXCH
006ec67f  ADD ECX,0x4
006ec682  FSUB ST0,ST1
006ec684  ADD EBX,0x10
006ec687  ADD EBP,0x4
006ec68a  CMP ECX,0xc
006ec68d  FSTP float ptr [ESP + ECX*0x1 + 0xc]
006ec691  FSTP ST0
006ec693  JL 0x006ec630
006ec695  FLD float ptr [ESP + 0x1c]
006ec699  FCOMP float ptr [EDX + 0xa0]
006ec69f  FNSTSW AX
006ec6a1  TEST AH,0x5
006ec6a4  JP 0x006ec782
006ec6aa  FLD float ptr [ESP + 0x20]
006ec6ae  FCOMP float ptr [EDX + 0xa4]
006ec6b4  FNSTSW AX
006ec6b6  TEST AH,0x5
006ec6b9  JP 0x006ec782
006ec6bf  FLD float ptr [ESP + 0x24]
006ec6c3  FCOMP float ptr [EDX + 0xa8]
006ec6c9  FNSTSW AX
006ec6cb  TEST AH,0x5
006ec6ce  JP 0x006ec782
006ec6d4  FLD float ptr [ESP + 0x14]
006ec6d8  XOR EBX,EBX
006ec6da  FCOMP float ptr [ESP + 0x10]
006ec6de  FNSTSW AX
006ec6e0  TEST AH,0x41
006ec6e3  JNZ 0x006ec6ea
006ec6e5  MOV EBX,0x1
006ec6ea  FLD float ptr [ESP + 0x18]
006ec6ee  FCOMP float ptr [ESP + EBX*0x4 + 0x10]
006ec6f2  FNSTSW AX
006ec6f4  TEST AH,0x41
006ec6f7  JNZ 0x006ec6fe
006ec6f9  MOV EBX,0x2
006ec6fe  FLD float ptr [ESP + EBX*0x4 + 0x28]
006ec702  LEA ECX,[EBX + 0x1]
006ec705  FCOMP float ptr [0x00890968]
006ec70b  SHL ECX,0x4
006ec70e  ADD ECX,EDX
006ec710  FNSTSW AX
006ec712  TEST AH,0x41
006ec715  JNZ 0x006ec72d
006ec717  FLD float ptr [0x00890da8]
006ec71d  JMP 0x006ec733
006ec71f  FSTP ST0
006ec721  FSTP ST0
006ec723  POP EDI
006ec724  POP ESI
006ec725  POP EBP
006ec726  XOR AL,AL
006ec728  POP EBX
006ec729  ADD ESP,0x34
006ec72c  RET
006ec72d  FLD float ptr [0x0089096c]
006ec733  MOV EDX,dword ptr [ESP + 0x50]
006ec737  FLD ST0
006ec739  LEA EAX,[ESP + EBX*0x4 + 0x10]
006ec73d  MOV EBX,dword ptr [EAX]
006ec73f  MOV dword ptr [EDX + 0x90],EBX
006ec745  FMUL float ptr [ECX]
006ec747  LEA EBX,[EDX + 0x80]
006ec74d  FSTP float ptr [EBX]
006ec74f  FLD ST0
006ec751  FMUL float ptr [ECX + 0x4]
006ec754  FSTP float ptr [EBX + 0x4]
006ec757  FLD ST0
006ec759  FMUL float ptr [ECX + 0x8]
006ec75c  FSTP float ptr [EBX + 0x8]
006ec75f  FLD float ptr [ESP + 0x48]
006ec763  FADD float ptr [EAX]
006ec765  FMULP
006ec767  FLD ST0
006ec769  FMUL float ptr [ECX]
006ec76b  FADD float ptr [EDI]
006ec76d  FSTP float ptr [ESI]
006ec76f  FLD ST0
006ec771  FMUL float ptr [ECX + 0x4]
006ec774  FADD float ptr [EDI + 0x4]
006ec777  FSTP float ptr [ESI + 0x4]
006ec77a  FMUL float ptr [ECX + 0x8]
006ec77d  JMP 0x006ec915
006ec782  FLD float ptr [ESP + 0x1c]
006ec786  FCOMP float ptr [EDX + 0xa0]
006ec78c  FNSTSW AX
006ec78e  TEST AH,0x1
006ec791  JNZ 0x006ec7d9
006ec793  FLD float ptr [ESP + 0x28]
006ec797  FCOMP float ptr [0x00890968]
006ec79d  FNSTSW AX
006ec79f  TEST AH,0x41
006ec7a2  JNZ 0x006ec7ac
006ec7a4  FLD float ptr [0x00890da8]
006ec7aa  JMP 0x006ec7b2
006ec7ac  FLD float ptr [0x0089096c]
006ec7b2  FLD float ptr [ESP + 0x10]
006ec7b6  FADD float ptr [ESP + 0x48]
006ec7ba  FMULP
006ec7bc  FLD ST0
006ec7be  FMUL float ptr [EDX + 0x10]
006ec7c1  FADD float ptr [ESI]
006ec7c3  FSTP float ptr [ESI]
006ec7c5  FLD ST0
006ec7c7  FMUL float ptr [EDX + 0x14]
006ec7ca  FADD float ptr [ESI + 0x4]
006ec7cd  FSTP float ptr [ESI + 0x4]
006ec7d0  FMUL float ptr [EDX + 0x18]
006ec7d3  FADD float ptr [ESI + 0x8]
006ec7d6  FSTP float ptr [ESI + 0x8]
006ec7d9  FLD float ptr [ESP + 0x20]
006ec7dd  FCOMP float ptr [EDX + 0xa4]
006ec7e3  FNSTSW AX
006ec7e5  TEST AH,0x1
006ec7e8  JNZ 0x006ec830
006ec7ea  FLD float ptr [ESP + 0x2c]
006ec7ee  FCOMP float ptr [0x00890968]
006ec7f4  FNSTSW AX
006ec7f6  TEST AH,0x41
006ec7f9  JNZ 0x006ec803
006ec7fb  FLD float ptr [0x00890da8]
006ec801  JMP 0x006ec809
006ec803  FLD float ptr [0x0089096c]
006ec809  FLD float ptr [ESP + 0x14]
006ec80d  FADD float ptr [ESP + 0x48]
006ec811  FMULP
006ec813  FLD ST0
006ec815  FMUL float ptr [EDX + 0x20]
006ec818  FADD float ptr [ESI]
006ec81a  FSTP float ptr [ESI]
006ec81c  FLD ST0
006ec81e  FMUL float ptr [EDX + 0x24]
006ec821  FADD float ptr [ESI + 0x4]
006ec824  FSTP float ptr [ESI + 0x4]
006ec827  FMUL float ptr [EDX + 0x28]
006ec82a  FADD float ptr [ESI + 0x8]
006ec82d  FSTP float ptr [ESI + 0x8]
006ec830  FLD float ptr [ESP + 0x24]
006ec834  FCOMP float ptr [EDX + 0xa8]
006ec83a  FNSTSW AX
006ec83c  TEST AH,0x1
006ec83f  JNZ 0x006ec887
006ec841  FLD float ptr [ESP + 0x30]
006ec845  FCOMP float ptr [0x00890968]
006ec84b  FNSTSW AX
006ec84d  TEST AH,0x41
006ec850  JNZ 0x006ec85a
006ec852  FLD float ptr [0x00890da8]
006ec858  JMP 0x006ec860
006ec85a  FLD float ptr [0x0089096c]
006ec860  FLD float ptr [ESP + 0x18]
006ec864  FADD float ptr [ESP + 0x48]
006ec868  FMULP
006ec86a  FLD ST0
006ec86c  FMUL float ptr [EDX + 0x30]
006ec86f  FADD float ptr [ESI]
006ec871  FSTP float ptr [ESI]
006ec873  FLD ST0
006ec875  FMUL float ptr [EDX + 0x34]
006ec878  FADD float ptr [ESI + 0x4]
006ec87b  FSTP float ptr [ESI + 0x4]
006ec87e  FMUL float ptr [EDX + 0x38]
006ec881  FADD float ptr [ESI + 0x8]
006ec884  FSTP float ptr [ESI + 0x8]
006ec887  FLD float ptr [ESI + 0x8]
006ec88a  FLD float ptr [ESI + 0x4]
006ec88d  FLD float ptr [ESI]
006ec88f  FLD ST0
006ec891  FMUL ST1
006ec893  FLD ST2
006ec895  FMUL ST3
006ec897  FADDP
006ec899  FLD ST3
006ec89b  FMUL ST4
006ec89d  FADDP
006ec89f  FSTP float ptr [ESP + 0x4c]
006ec8a3  MOV ECX,dword ptr [ESP + 0x4c]
006ec8a7  FSTP ST0
006ec8a9  PUSH ECX
006ec8aa  FSTP ST0
006ec8ac  FSTP ST0
006ec8ae  CALL 0x005c5e80
006ec8b3  FST float ptr [ESP + 0x50]
006ec8b7  ADD ESP,0x4
006ec8ba  FCOMP float ptr [ESP + 0x48]
006ec8be  FNSTSW AX
006ec8c0  TEST AH,0x41
006ec8c3  JZ 0x006ec723
006ec8c9  FLD float ptr [0x00890968]
006ec8cf  FLD float ptr [ESP + 0x4c]
006ec8d3  FUCOMPP
006ec8d5  FNSTSW AX
006ec8d7  TEST AH,0x44
006ec8da  JNP 0x006ec723
006ec8e0  FLD float ptr [ESP + 0x4c]
006ec8e4  MOV EBX,dword ptr [ESP + 0x50]
006ec8e8  FSUB float ptr [ESP + 0x48]
006ec8ec  ADD EBX,0x80
006ec8f2  PUSH EBX
006ec8f3  PUSH ESI
006ec8f4  FSTP float ptr [EBX + 0x10]
006ec8f7  CALL 0x004884a0
006ec8fc  FLD float ptr [EDI]
006ec8fe  MOV EDX,dword ptr [ESP + 0x58]
006ec902  FADD float ptr [ESI]
006ec904  ADD ESP,0x8
006ec907  FSTP float ptr [ESI]
006ec909  FLD float ptr [ESI + 0x4]
006ec90c  FADD float ptr [EDI + 0x4]
006ec90f  FSTP float ptr [ESI + 0x4]
006ec912  FLD float ptr [ESI + 0x8]
006ec915  CMP EDX,EDI
006ec917  FADD float ptr [EDI + 0x8]
006ec91a  FSTP float ptr [ESI + 0x8]
006ec91d  JZ 0x006ec941
006ec91f  FLD float ptr [EBX]
006ec921  FMUL float ptr [0x00890da8]
006ec927  FSTP float ptr [EBX]
006ec929  FLD float ptr [EBX + 0x4]
006ec92c  FMUL float ptr [0x00890da8]
006ec932  FSTP float ptr [EBX + 0x4]
006ec935  FLD float ptr [EBX + 0x8]
006ec938  FMUL float ptr [0x00890da8]
006ec93e  FSTP float ptr [EBX + 0x8]
006ec941  POP EDI
006ec942  POP ESI
006ec943  POP EBP
006ec944  MOV AL,0x1
006ec946  POP EBX
006ec947  ADD ESP,0x34
006ec94a  RET
