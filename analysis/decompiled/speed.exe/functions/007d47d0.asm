007d47d0  PUSH EBP
007d47d1  MOV EBP,ESP
007d47d3  SUB ESP,0x14
007d47d6  CMP dword ptr [EBP + 0xc],0x0
007d47da  JNZ 0x007d47fa
007d47dc  PUSH 0x8b8ad0
007d47e1  PUSH 0x0
007d47e3  PUSH 0x66
007d47e5  PUSH 0x8bd18c
007d47ea  PUSH 0x2
007d47ec  CALL 0x007d2670
007d47f1  ADD ESP,0x14
007d47f4  CMP EAX,0x1
007d47f7  JNZ 0x007d47fa
007d47f9  INT3
007d47fa  MOV ECX,dword ptr [EBP + 0xc]
007d47fd  MOV dword ptr [EBP + -0x8],ECX
007d4800  MOV EDX,dword ptr [EBP + -0x8]
007d4803  MOV EAX,dword ptr [EDX + 0x10]
007d4806  MOV dword ptr [EBP + -0x10],EAX
007d4809  MOV ECX,dword ptr [EBP + -0x8]
007d480c  MOV EDX,dword ptr [ECX + 0xc]
007d480f  AND EDX,0x82
007d4815  JZ 0x007d4822
007d4817  MOV EAX,dword ptr [EBP + -0x8]
007d481a  MOV ECX,dword ptr [EAX + 0xc]
007d481d  AND ECX,0x40
007d4820  JZ 0x007d4839
007d4822  MOV EDX,dword ptr [EBP + -0x8]
007d4825  MOV EAX,dword ptr [EDX + 0xc]
007d4828  OR EAX,0x20
007d482b  MOV ECX,dword ptr [EBP + -0x8]
007d482e  MOV dword ptr [ECX + 0xc],EAX
007d4831  OR EAX,0xffffffff
007d4834  JMP 0x007d4a1d
007d4839  MOV EDX,dword ptr [EBP + -0x8]
007d483c  MOV EAX,dword ptr [EDX + 0xc]
007d483f  AND EAX,0x1
007d4842  JZ 0x007d488c
007d4844  MOV ECX,dword ptr [EBP + -0x8]
007d4847  MOV dword ptr [ECX + 0x4],0x0
007d484e  MOV EDX,dword ptr [EBP + -0x8]
007d4851  MOV EAX,dword ptr [EDX + 0xc]
007d4854  AND EAX,0x10
007d4857  JZ 0x007d4875
007d4859  MOV ECX,dword ptr [EBP + -0x8]
007d485c  MOV EDX,dword ptr [EBP + -0x8]
007d485f  MOV EAX,dword ptr [EDX + 0x8]
007d4862  MOV dword ptr [ECX],EAX
007d4864  MOV ECX,dword ptr [EBP + -0x8]
007d4867  MOV EDX,dword ptr [ECX + 0xc]
007d486a  AND EDX,0xfffffffe
007d486d  MOV EAX,dword ptr [EBP + -0x8]
007d4870  MOV dword ptr [EAX + 0xc],EDX
007d4873  JMP 0x007d488c
007d4875  MOV ECX,dword ptr [EBP + -0x8]
007d4878  MOV EDX,dword ptr [ECX + 0xc]
007d487b  OR EDX,0x20
007d487e  MOV EAX,dword ptr [EBP + -0x8]
007d4881  MOV dword ptr [EAX + 0xc],EDX
007d4884  OR EAX,0xffffffff
007d4887  JMP 0x007d4a1d
007d488c  MOV ECX,dword ptr [EBP + -0x8]
007d488f  MOV EDX,dword ptr [ECX + 0xc]
007d4892  OR EDX,0x2
007d4895  MOV EAX,dword ptr [EBP + -0x8]
007d4898  MOV dword ptr [EAX + 0xc],EDX
007d489b  MOV ECX,dword ptr [EBP + -0x8]
007d489e  MOV EDX,dword ptr [ECX + 0xc]
007d48a1  AND EDX,0xffffffef
007d48a4  MOV EAX,dword ptr [EBP + -0x8]
007d48a7  MOV dword ptr [EAX + 0xc],EDX
007d48aa  MOV ECX,dword ptr [EBP + -0x8]
007d48ad  MOV dword ptr [ECX + 0x4],0x0
007d48b4  MOV dword ptr [EBP + -0x4],0x0
007d48bb  MOV EDX,dword ptr [EBP + -0x4]
007d48be  MOV dword ptr [EBP + -0xc],EDX
007d48c1  MOV EAX,dword ptr [EBP + -0x8]
007d48c4  MOV ECX,dword ptr [EAX + 0xc]
007d48c7  AND ECX,0x10c
007d48cd  JNZ 0x007d48fd
007d48cf  CMP dword ptr [EBP + -0x8],0x906350
007d48d6  JZ 0x007d48e1
007d48d8  CMP dword ptr [EBP + -0x8],0x906370
007d48df  JNZ 0x007d48f1
007d48e1  MOV EDX,dword ptr [EBP + -0x10]
007d48e4  PUSH EDX
007d48e5  CALL 0x007df010
007d48ea  ADD ESP,0x4
007d48ed  TEST EAX,EAX
007d48ef  JNZ 0x007d48fd
007d48f1  MOV EAX,dword ptr [EBP + -0x8]
007d48f4  PUSH EAX
007d48f5  CALL 0x007dbb00
007d48fa  ADD ESP,0x4
007d48fd  MOV ECX,dword ptr [EBP + -0x8]
007d4900  MOV EDX,dword ptr [ECX + 0xc]
007d4903  AND EDX,0x108
007d4909  JZ 0x007d49db
007d490f  MOV EAX,dword ptr [EBP + -0x8]
007d4912  MOV ECX,dword ptr [EBP + -0x8]
007d4915  MOV EDX,dword ptr [EAX]
007d4917  SUB EDX,dword ptr [ECX + 0x8]
007d491a  JNS 0x007d493d
007d491c  PUSH 0x8bd14c
007d4921  PUSH 0x0
007d4923  PUSH 0x9d
007d4928  PUSH 0x8bd18c
007d492d  PUSH 0x2
007d492f  CALL 0x007d2670
007d4934  ADD ESP,0x14
007d4937  CMP EAX,0x1
007d493a  JNZ 0x007d493d
007d493c  INT3
007d493d  MOV ECX,dword ptr [EBP + -0x8]
007d4940  MOV EDX,dword ptr [EBP + -0x8]
007d4943  MOV EAX,dword ptr [ECX]
007d4945  SUB EAX,dword ptr [EDX + 0x8]
007d4948  MOV dword ptr [EBP + -0x4],EAX
007d494b  MOV ECX,dword ptr [EBP + -0x8]
007d494e  MOV EDX,dword ptr [ECX + 0x8]
007d4951  ADD EDX,0x1
007d4954  MOV EAX,dword ptr [EBP + -0x8]
007d4957  MOV dword ptr [EAX],EDX
007d4959  MOV ECX,dword ptr [EBP + -0x8]
007d495c  MOV EDX,dword ptr [ECX + 0x18]
007d495f  SUB EDX,0x1
007d4962  MOV EAX,dword ptr [EBP + -0x8]
007d4965  MOV dword ptr [EAX + 0x4],EDX
007d4968  CMP dword ptr [EBP + -0x4],0x0
007d496c  JLE 0x007d498a
007d496e  MOV ECX,dword ptr [EBP + -0x4]
007d4971  PUSH ECX
007d4972  MOV EDX,dword ptr [EBP + -0x8]
007d4975  MOV EAX,dword ptr [EDX + 0x8]
007d4978  PUSH EAX
007d4979  MOV ECX,dword ptr [EBP + -0x10]
007d497c  PUSH ECX
007d497d  CALL 0x007dbbc0
007d4982  ADD ESP,0xc
007d4985  MOV dword ptr [EBP + -0xc],EAX
007d4988  JMP 0x007d49ce
007d498a  CMP dword ptr [EBP + -0x10],-0x1
007d498e  JZ 0x007d49ab
007d4990  MOV EDX,dword ptr [EBP + -0x10]
007d4993  SAR EDX,0x5
007d4996  MOV EAX,dword ptr [EBP + -0x10]
007d4999  AND EAX,0x1f
007d499c  IMUL EAX,EAX,0x24
007d499f  ADD EAX,dword ptr [EDX*0x4 + 0x9c5340]
007d49a6  MOV dword ptr [EBP + -0x14],EAX
007d49a9  JMP 0x007d49b2
007d49ab  MOV dword ptr [EBP + -0x14],0x906808
007d49b2  MOV ECX,dword ptr [EBP + -0x14]
007d49b5  MOVSX EDX,byte ptr [ECX + 0x4]
007d49b9  AND EDX,0x20
007d49bc  JZ 0x007d49ce
007d49be  PUSH 0x2
007d49c0  PUSH 0x0
007d49c2  MOV EAX,dword ptr [EBP + -0x10]
007d49c5  PUSH EAX
007d49c6  CALL 0x007e3a80
007d49cb  ADD ESP,0xc
007d49ce  MOV ECX,dword ptr [EBP + -0x8]
007d49d1  MOV EDX,dword ptr [ECX + 0x8]
007d49d4  MOV AL,byte ptr [EBP + 0x8]
007d49d7  MOV byte ptr [EDX],AL
007d49d9  JMP 0x007d49f9
007d49db  MOV dword ptr [EBP + -0x4],0x1
007d49e2  MOV ECX,dword ptr [EBP + -0x4]
007d49e5  PUSH ECX
007d49e6  LEA EDX,[EBP + 0x8]
007d49e9  PUSH EDX
007d49ea  MOV EAX,dword ptr [EBP + -0x10]
007d49ed  PUSH EAX
007d49ee  CALL 0x007dbbc0
007d49f3  ADD ESP,0xc
007d49f6  MOV dword ptr [EBP + -0xc],EAX
007d49f9  MOV ECX,dword ptr [EBP + -0xc]
007d49fc  CMP ECX,dword ptr [EBP + -0x4]
007d49ff  JZ 0x007d4a15
007d4a01  MOV EDX,dword ptr [EBP + -0x8]
007d4a04  MOV EAX,dword ptr [EDX + 0xc]
007d4a07  OR EAX,0x20
007d4a0a  MOV ECX,dword ptr [EBP + -0x8]
007d4a0d  MOV dword ptr [ECX + 0xc],EAX
007d4a10  OR EAX,0xffffffff
007d4a13  JMP 0x007d4a1d
007d4a15  MOV EAX,dword ptr [EBP + 0x8]
007d4a18  AND EAX,0xff
007d4a1d  MOV ESP,EBP
007d4a1f  POP EBP
007d4a20  RET
