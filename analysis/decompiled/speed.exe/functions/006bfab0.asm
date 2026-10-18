006bfab0  PUSH EDI
006bfab1  XOR EAX,EAX
006bfab3  MOV ECX,0xe
006bfab8  MOV EDI,0x93e82c
006bfabd  STOSD.REP ES:EDI
006bfabf  MOV EAX,[0x00982bf0]
006bfac4  XOR EDI,EDI
006bfac6  CMP EAX,EDI
006bfac8  JZ 0x006bfaf3
006bfaca  MOV EAX,[0x00982bf4]
006bfacf  PUSH 0x93daa4
006bfad4  PUSH EAX
006bfad5  CALL dword ptr [0x0089038c]
006bfadb  MOV ECX,dword ptr [0x00982bf4]
006bfae1  PUSH 0x93cad0
006bfae6  PUSH ECX
006bfae7  CALL dword ptr [0x00890390]
006bfaed  MOV dword ptr [0x0093e85c],EDI
006bfaf3  MOV EDX,dword ptr [0x00982bf0]
006bfaf9  MOV EAX,dword ptr [ESP + 0x8]
006bfafd  MOV ECX,dword ptr [ESP + 0xc]
006bfb01  MOV dword ptr [0x0093e84c],EDX
006bfb07  TEST byte ptr [0x0093d928],0x20
006bfb0e  MOV [0x0093e82c],EAX
006bfb13  MOV dword ptr [0x0093e830],ECX
006bfb19  JNZ 0x006bfb2d
006bfb1b  CMP dword ptr [0x00982c04],EDI
006bfb21  MOV dword ptr [0x0093e844],0x3
006bfb2b  JZ 0x006bfb37
006bfb2d  MOV dword ptr [0x0093e844],0x1
006bfb37  MOV EDX,dword ptr [0x008f8ff0]
006bfb3d  MOV dword ptr [0x0093e834],EDX
006bfb43  MOV EDX,dword ptr [0x00982b54]
006bfb49  NEG EDX
006bfb4b  SBB EDX,EDX
006bfb4d  AND EDX,0x5
006bfb50  ADD EDX,0x4b
006bfb53  MOV dword ptr [0x0093e854],EDX
006bfb59  MOV EDX,dword ptr [0x00901824]
006bfb5f  NEG EDX
006bfb61  SBB EDX,EDX
006bfb63  AND EDX,0x80000001
006bfb69  ADD EDX,0x80000000
006bfb6f  MOV dword ptr [0x0093e860],EDX
006bfb75  MOV EDX,dword ptr [0x00982bf4]
006bfb7b  MOV dword ptr [0x0093e848],EDX
006bfb81  MOV EDX,dword ptr [0x00901808]
006bfb87  CMP EDX,EDI
006bfb89  MOV dword ptr [0x0093e850],0x1
006bfb93  MOV dword ptr [0x0093e858],EDI
006bfb99  MOV dword ptr [0x00982be8],ECX
006bfb9f  MOV [0x00982be4],EAX
006bfba4  JLE 0x006bfbb8
006bfba6  MOV dword ptr [0x0093e83c],0x1
006bfbb0  MOV dword ptr [0x0093e840],EDX
006bfbb6  POP EDI
006bfbb7  RET
006bfbb8  MOV dword ptr [0x0093e83c],EDI
006bfbbe  MOV dword ptr [0x0093e840],EDI
006bfbc4  POP EDI
006bfbc5  RET
