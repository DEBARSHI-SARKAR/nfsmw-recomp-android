004fad80  MOV EAX,[0x00915f94]
004fad85  TEST EAX,EAX
004fad87  JZ 0x004fad9b
004fad89  MOV EAX,[0x00915f98]
004fad8e  CMP EAX,dword ptr [0x00915f9c]
004fad94  JBE 0x004fad9b
004fad96  MOV [0x00915f9c],EAX
004fad9b  MOV EDX,dword ptr [0x00915128]
004fada1  MOV EAX,[0x00915f84]
004fada6  MOV ECX,dword ptr [0x0091512c]
004fadac  PUSH EDI
004fadad  MOV EDI,dword ptr [0x00915fa0]
004fadb3  SUB EAX,EDX
004fadb5  CMP EAX,EDI
004fadb7  MOV dword ptr [0x00915f94],0x0
004fadc1  MOV dword ptr [0x00915f98],0x0
004fadcb  JLE 0x004fadd2
004fadcd  MOV [0x00915fa0],EAX
004fadd2  MOV EDI,dword ptr [0x00915120]
004fadd8  MOV [0x00915fa4],EAX
004faddd  MOV [0x00915120],EAX
004fade2  MOV EAX,[0x00915f7c]
004fade7  ADD EAX,ECX
004fade9  MOV dword ptr [0x00915124],EDI
004fadef  MOV dword ptr [0x00915128],ECX
004fadf5  MOV dword ptr [0x0091512c],EDX
004fadfb  MOV dword ptr [0x00915f80],ECX
004fae01  MOV dword ptr [0x00915f84],ECX
004fae07  MOV [0x00915f88],EAX
004fae0c  MOV dword ptr [0x00915f90],0x0
004fae16  POP EDI
004fae17  RET
