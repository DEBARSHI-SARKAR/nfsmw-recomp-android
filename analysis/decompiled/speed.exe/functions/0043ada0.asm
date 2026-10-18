0043ada0  PUSH -0x1
0043ada2  PUSH 0x868ed2
0043ada7  MOV EAX,FS:[0x0]
0043adad  PUSH EAX
0043adae  MOV dword ptr FS:[0x0],ESP
0043adb5  PUSH ECX
0043adb6  MOV EAX,dword ptr [ESP + 0x20]
0043adba  MOV EDX,dword ptr [ESP + 0x18]
0043adbe  PUSH EBX
0043adbf  PUSH ESI
0043adc0  PUSH EDI
0043adc1  MOV ESI,ECX
0043adc3  MOV ECX,dword ptr [ESP + 0x28]
0043adc7  PUSH EAX
0043adc8  MOV EAX,dword ptr [ESP + 0x24]
0043adcc  PUSH ECX
0043adcd  PUSH EDX
0043adce  PUSH EAX
0043adcf  MOV ECX,ESI
0043add1  MOV dword ptr [ESP + 0x1c],ESI
0043add5  CALL 0x0043a9a0
0043adda  XOR EBX,EBX
0043addc  PUSH EBX
0043addd  PUSH 0x84
0043ade2  MOV ECX,0x925b30
0043ade7  MOV dword ptr [ESP + 0x20],EBX
0043adeb  MOV dword ptr [ESI],0x891bb8
0043adf1  MOV dword ptr [ESI + 0x8],0x891bb0
0043adf8  MOV dword ptr [ESI + 0x4c],0x891ad8
0043adff  MOV dword ptr [ESI + 0x54],0x891ad0
0043ae06  MOV dword ptr [ESI + 0x750],EBX
0043ae0c  MOV dword ptr [ESI + 0x754],EBX
0043ae12  CALL 0x005d29d0
0043ae17  MOV dword ptr [ESP + 0x2c],EAX
0043ae1b  CMP EAX,EBX
0043ae1d  MOV byte ptr [ESP + 0x18],0x1
0043ae22  JZ 0x0043ae36
0043ae24  PUSH 0x41f00000
0043ae29  PUSH 0x5
0043ae2b  PUSH 0x5
0043ae2d  MOV ECX,EAX
0043ae2f  CALL 0x00403e50
0043ae34  JMP 0x0043ae38
0043ae36  XOR EAX,EAX
0043ae38  PUSH EBX
0043ae39  PUSH 0x84
0043ae3e  MOV ECX,0x925b30
0043ae43  MOV byte ptr [ESP + 0x20],BL
0043ae47  MOV dword ptr [ESI + 0x73c],EAX
0043ae4d  CALL 0x005d29d0
0043ae52  MOV dword ptr [ESP + 0x2c],EAX
0043ae56  CMP EAX,EBX
0043ae58  MOV byte ptr [ESP + 0x18],0x2
0043ae5d  JZ 0x0043ae71
0043ae5f  PUSH 0x41f00000
0043ae64  PUSH 0x5
0043ae66  PUSH 0x5
0043ae68  MOV ECX,EAX
0043ae6a  CALL 0x00403e50
0043ae6f  JMP 0x0043ae73
0043ae71  XOR EAX,EAX
0043ae73  PUSH EBX
0043ae74  PUSH 0x84
0043ae79  MOV ECX,0x925b30
0043ae7e  MOV byte ptr [ESP + 0x20],BL
0043ae82  MOV dword ptr [ESI + 0x740],EAX
0043ae88  CALL 0x005d29d0
0043ae8d  MOV dword ptr [ESP + 0x2c],EAX
0043ae91  CMP EAX,EBX
0043ae93  MOV byte ptr [ESP + 0x18],0x3
0043ae98  JZ 0x0043aeb6
0043ae9a  MOV ECX,dword ptr [0x008eb290]
0043aea0  MOV EDX,dword ptr [0x008eb28c]
0043aea6  PUSH 0x41f00000
0043aeab  PUSH ECX
0043aeac  PUSH EDX
0043aead  MOV ECX,EAX
0043aeaf  CALL 0x00403e50
0043aeb4  JMP 0x0043aeb8
0043aeb6  XOR EAX,EAX
0043aeb8  PUSH EBX
0043aeb9  PUSH 0xb8
0043aebe  MOV ECX,0x925b30
0043aec3  MOV byte ptr [ESP + 0x20],BL
0043aec7  MOV dword ptr [ESI + 0x744],EAX
0043aecd  CALL 0x005d29d0
0043aed2  MOV EDI,EAX
0043aed4  MOV dword ptr [ESP + 0x2c],EDI
0043aed8  CMP EDI,EBX
0043aeda  MOV byte ptr [ESP + 0x18],0x4
0043aedf  JZ 0x0043af08
0043aee1  PUSH 0x3dcccccd
0043aee6  PUSH EBX
0043aee7  MOV ECX,EDI
0043aee9  CALL 0x004099e0
0043aeee  MOV dword ptr [EDI],0x890df4
0043aef4  MOV dword ptr [EDI + 0xac],EBX
0043aefa  MOV dword ptr [EDI + 0xb0],EBX
0043af00  MOV dword ptr [EDI + 0xb4],EBX
0043af06  JMP 0x0043af0a
0043af08  XOR EDI,EDI
0043af0a  PUSH EBX
0043af0b  PUSH 0x130
0043af10  MOV ECX,0x925b30
0043af15  MOV byte ptr [ESP + 0x20],BL
0043af19  MOV dword ptr [ESI + 0x748],EDI
0043af1f  CALL 0x005d29d0
0043af24  MOV dword ptr [ESP + 0x2c],EAX
0043af28  CMP EAX,EBX
0043af2a  MOV byte ptr [ESP + 0x18],0x5
0043af2f  JZ 0x0043af4e
0043af31  MOV ECX,dword ptr [0x008eb290]
0043af37  MOV EDX,dword ptr [0x008eb28c]
0043af3d  PUSH ECX
0043af3e  PUSH EDX
0043af3f  PUSH 0x3dcccccd
0043af44  PUSH EBX
0043af45  MOV ECX,EAX
0043af47  CALL 0x00409d20
0043af4c  JMP 0x0043af50
0043af4e  XOR EAX,EAX
0043af50  MOV dword ptr [ESI + 0x74c],EAX
0043af56  MOV dword ptr [EAX + 0x20],0x3dcccccd
0043af5d  MOV ECX,dword ptr [ESI + 0x74c]
0043af63  MOV EAX,0x36a7c5ac
0043af68  MOV dword ptr [ECX + 0x48],EAX
0043af6b  MOV EDX,dword ptr [ESI + 0x74c]
0043af71  MOV dword ptr [EDX + 0x4c],EAX
0043af74  MOV ECX,dword ptr [ESI + 0x74c]
0043af7a  MOV dword ptr [ECX + 0x50],EAX
0043af7d  MOV EDX,dword ptr [ESI + 0x74c]
0043af83  MOV ECX,0x3c23d70a
0043af88  MOV dword ptr [EDX + 0x3c],ECX
0043af8b  MOV EAX,dword ptr [ESI + 0x74c]
0043af91  MOV dword ptr [EAX + 0x40],ECX
0043af94  MOV EDX,dword ptr [ESI + 0x74c]
0043af9a  MOV dword ptr [EDX + 0x44],ECX
0043af9d  MOV EAX,dword ptr [ESI + 0x74c]
0043afa3  MOV dword ptr [EAX + 0x24],0xbecccccd
0043afaa  MOV dword ptr [EAX + 0x28],EBX
0043afad  MOV EAX,dword ptr [ESI + 0x74c]
0043afb3  MOV dword ptr [EAX + 0x2c],0xbf19999a
0043afba  MOV dword ptr [EAX + 0x30],EBX
0043afbd  MOV EAX,dword ptr [ESI + 0x74c]
0043afc3  MOV dword ptr [EAX + 0x34],0xbc23d70a
0043afca  MOV dword ptr [EAX + 0x38],EBX
0043afcd  MOV EAX,dword ptr [ESI + 0x748]
0043afd3  MOV dword ptr [EAX + 0x20],0x3dcccccd
0043afda  MOV EDX,dword ptr [ESI + 0x748]
0043afe0  MOV EAX,0x3727c5ac
0043afe5  MOV dword ptr [EDX + 0x48],EAX
0043afe8  MOV EDX,dword ptr [ESI + 0x748]
0043afee  MOV dword ptr [EDX + 0x4c],EAX
0043aff1  MOV EDX,dword ptr [ESI + 0x748]
0043aff7  MOV dword ptr [EDX + 0x50],EAX
0043affa  MOV EAX,dword ptr [ESI + 0x748]
0043b000  MOV dword ptr [EAX + 0x3c],ECX
0043b003  MOV EDX,dword ptr [ESI + 0x748]
0043b009  MOV dword ptr [EDX + 0x40],ECX
0043b00c  MOV EAX,dword ptr [ESI + 0x748]
0043b012  MOV dword ptr [EAX + 0x44],ECX
0043b015  MOV EDI,dword ptr [ESI + 0x48]
0043b018  CMP EDI,EBX
0043b01a  MOV byte ptr [ESP + 0x18],BL
0043b01e  JZ 0x0043b061
0043b020  MOV EDX,dword ptr [EDI]
0043b022  MOV ECX,EDI
0043b024  CALL dword ptr [EDX + 0x30]
0043b027  CMP EAX,0x1
0043b02a  JNZ 0x0043b061
0043b02c  MOV EAX,dword ptr [EDI]
0043b02e  MOV ECX,EDI
0043b030  CALL dword ptr [EAX + 0x58]
0043b033  TEST EAX,EAX
0043b035  JNZ 0x0043b061
0043b037  FLD float ptr [0x00892b64]
0043b03d  MOV dword ptr [ESP + 0x2c],0x3f19999a
0043b045  FLD float ptr [0x0089062c]
0043b04b  MOV dword ptr [ESP + 0x28],0x3f99999a
0043b053  FLD float ptr [0x00890ea8]
0043b059  FLD float ptr [0x00890634]
0043b05f  JMP 0x0043b089
0043b061  FLD float ptr [0x00890cd4]
0043b067  MOV dword ptr [ESP + 0x2c],0x3ecccccd
0043b06f  FLD float ptr [0x00891054]
0043b075  MOV dword ptr [ESP + 0x28],0x3f800000
0043b07d  FLD float ptr [0x00890dc4]
0043b083  FLD float ptr [0x00890cd4]
0043b089  MOV EAX,dword ptr [ESI + 0x748]
0043b08f  FXCH
0043b091  MOV ECX,dword ptr [ESP + 0x2c]
0043b095  MOV EDX,dword ptr [ESP + 0x28]
0043b099  MOV dword ptr [EAX + 0x24],ECX
0043b09c  MOV ECX,dword ptr [ESP + 0x10]
0043b0a0  MOV dword ptr [EAX + 0x28],EDX
0043b0a3  MOV EAX,dword ptr [ESI + 0x748]
0043b0a9  FSTP float ptr [EAX + 0x2c]
0043b0ac  POP EDI
0043b0ad  FSTP float ptr [EAX + 0x30]
0043b0b0  MOV EAX,dword ptr [ESI + 0x748]
0043b0b6  FXCH
0043b0b8  FSTP float ptr [EAX + 0x34]
0043b0bb  FSTP float ptr [EAX + 0x38]
0043b0be  MOV EAX,ESI
0043b0c0  POP ESI
0043b0c1  POP EBX
0043b0c2  MOV dword ptr FS:[0x0],ECX
0043b0c9  ADD ESP,0x10
0043b0cc  RET 0x10
