005cfa60  FLD float ptr [ESP + 0x8]
005cfa64  SUB ESP,0x10
005cfa67  FMUL float ptr [0x008a30a8]
005cfa6d  FLD float ptr [0x00890968]
005cfa73  FLD ST1
005cfa75  FUCOMPP
005cfa77  FNSTSW AX
005cfa79  TEST AH,0x44
005cfa7c  JP 0x005cfabe
005cfa7e  MOV EAX,dword ptr [ESP + 0x14]
005cfa82  FSTP ST0
005cfa84  MOV ECX,0x3f800000
005cfa89  MOV dword ptr [EAX + 0x3c],ECX
005cfa8c  MOV dword ptr [EAX + 0x28],ECX
005cfa8f  MOV dword ptr [EAX + 0x14],ECX
005cfa92  MOV dword ptr [EAX],ECX
005cfa94  XOR ECX,ECX
005cfa96  MOV dword ptr [EAX + 0x38],ECX
005cfa99  MOV dword ptr [EAX + 0x34],ECX
005cfa9c  MOV dword ptr [EAX + 0x30],ECX
005cfa9f  MOV dword ptr [EAX + 0x2c],ECX
005cfaa2  MOV dword ptr [EAX + 0x24],ECX
005cfaa5  MOV dword ptr [EAX + 0x20],ECX
005cfaa8  MOV dword ptr [EAX + 0x1c],ECX
005cfaab  MOV dword ptr [EAX + 0x18],ECX
005cfaae  MOV dword ptr [EAX + 0x10],ECX
005cfab1  MOV dword ptr [EAX + 0xc],ECX
005cfab4  MOV dword ptr [EAX + 0x8],ECX
005cfab7  MOV dword ptr [EAX + 0x4],ECX
005cfaba  ADD ESP,0x10
005cfabd  RET
005cfabe  FMUL float ptr [0x008a2f94]
005cfac4  FLD ST0
005cfac6  FSIN
005cfac8  FSTP float ptr [ESP + 0x18]
005cfacc  FCOS
005cface  FLD float ptr [ESP + 0x1c]
005cfad2  FMUL float ptr [ESP + 0x1c]
005cfad6  FLD float ptr [ESP + 0x20]
005cfada  FMUL float ptr [ESP + 0x20]
005cfade  FADDP
005cfae0  FLD float ptr [ESP + 0x24]
005cfae4  FMUL float ptr [ESP + 0x24]
005cfae8  FADDP
005cfaea  FSQRT
005cfaec  FLD float ptr [0x00890968]
005cfaf2  FLD ST1
005cfaf4  FUCOMPP
005cfaf6  FNSTSW AX
005cfaf8  TEST AH,0x44
005cfafb  JNP 0x005cfb05
005cfafd  FDIVR float ptr [0x0089096c]
005cfb03  JMP 0x005cfb0d
005cfb05  FSTP ST0
005cfb07  FLD float ptr [0x00890968]
005cfb0d  FLD float ptr [ESP + 0x1c]
005cfb11  MOV EAX,dword ptr [ESP + 0x14]
005cfb15  FMUL ST1
005cfb17  XOR ECX,ECX
005cfb19  FLD ST1
005cfb1b  MOV dword ptr [EAX + 0xc],ECX
005cfb1e  FMUL float ptr [ESP + 0x20]
005cfb22  MOV dword ptr [EAX + 0x1c],ECX
005cfb25  MOV dword ptr [EAX + 0x2c],ECX
005cfb28  MOV dword ptr [EAX + 0x30],ECX
005cfb2b  FSTP float ptr [ESP + 0x20]
005cfb2f  MOV dword ptr [EAX + 0x34],ECX
005cfb32  FXCH
005cfb34  MOV dword ptr [EAX + 0x38],ECX
005cfb37  FMUL float ptr [ESP + 0x24]
005cfb3b  MOV dword ptr [EAX + 0x3c],0x3f800000
005cfb42  FSTP float ptr [ESP + 0x24]
005cfb46  FLD float ptr [0x0089096c]
005cfb4c  FSUB ST0,ST2
005cfb4e  FLD ST0
005cfb50  FMUL ST2
005cfb52  FLD ST1
005cfb54  FMUL float ptr [ESP + 0x20]
005cfb58  FSTP float ptr [ESP]
005cfb5b  FXCH
005cfb5d  FMUL float ptr [ESP + 0x24]
005cfb61  FSTP float ptr [ESP + 0x4]
005cfb65  FLD float ptr [ESP + 0x18]
005cfb69  FMUL ST2
005cfb6b  FSTP float ptr [ESP + 0xc]
005cfb6f  FLD float ptr [ESP + 0x18]
005cfb73  FMUL float ptr [ESP + 0x20]
005cfb77  FSTP float ptr [ESP + 0x8]
005cfb7b  FLD float ptr [ESP + 0x18]
005cfb7f  FMUL float ptr [ESP + 0x24]
005cfb83  FSTP float ptr [ESP + 0x18]
005cfb87  FLD ST0
005cfb89  FMUL ST2
005cfb8b  FADD ST0,ST3
005cfb8d  FSTP float ptr [EAX]
005cfb8f  FLD float ptr [ESP + 0x20]
005cfb93  FMUL ST1
005cfb95  FADD float ptr [ESP + 0x18]
005cfb99  FSTP float ptr [EAX + 0x4]
005cfb9c  FMUL float ptr [ESP + 0x24]
005cfba0  FSUB float ptr [ESP + 0x8]
005cfba4  FSTP float ptr [EAX + 0x8]
005cfba7  FLD float ptr [ESP]
005cfbaa  FMUL ST1
005cfbac  FSUB float ptr [ESP + 0x18]
005cfbb0  FSTP float ptr [EAX + 0x10]
005cfbb3  FLD float ptr [ESP]
005cfbb6  FMUL float ptr [ESP + 0x20]
005cfbba  FADD ST0,ST2
005cfbbc  FSTP float ptr [EAX + 0x14]
005cfbbf  FLD float ptr [ESP]
005cfbc2  FMUL float ptr [ESP + 0x24]
005cfbc6  FADD float ptr [ESP + 0xc]
005cfbca  FSTP float ptr [EAX + 0x18]
005cfbcd  FLD float ptr [ESP + 0x4]
005cfbd1  FMUL ST1
005cfbd3  FADD float ptr [ESP + 0x8]
005cfbd7  FSTP float ptr [EAX + 0x20]
005cfbda  FSTP ST0
005cfbdc  FLD float ptr [ESP + 0x4]
005cfbe0  FMUL float ptr [ESP + 0x20]
005cfbe4  FSUB float ptr [ESP + 0xc]
005cfbe8  FSTP float ptr [EAX + 0x24]
005cfbeb  FLD float ptr [ESP + 0x4]
005cfbef  FMUL float ptr [ESP + 0x24]
005cfbf3  FADD ST0,ST1
005cfbf5  FSTP float ptr [EAX + 0x28]
005cfbf8  FSTP ST0
005cfbfa  ADD ESP,0x10
005cfbfd  RET
