005beaa0  PUSH EBX
005beaa1  MOV EBX,dword ptr [ESP + 0x10]
005beaa5  PUSH EBP
005beaa6  MOV EBP,dword ptr [ESP + 0x10]
005beaaa  PUSH ESI
005beaab  MOV ESI,dword ptr [ESP + 0x10]
005beaaf  CMP dword ptr [ESI + 0x18],0x4
005beab3  PUSH EDI
005beab4  MOV EDI,ECX
005beab6  JNZ 0x005beac4
005beab8  PUSH EBX
005beab9  PUSH EBP
005beaba  PUSH ESI
005beabb  CALL 0x005b7a70
005beac0  TEST AL,AL
005beac2  JNZ 0x005beb06
005beac4  CMP dword ptr [ESI + 0x18],0x6
005beac8  JNZ 0x005bead8
005beaca  PUSH EBX
005beacb  PUSH EBP
005beacc  PUSH ESI
005beacd  MOV ECX,EDI
005beacf  CALL 0x005bbb90
005bead4  TEST AL,AL
005bead6  JNZ 0x005beb06
005bead8  MOV EAX,dword ptr [ESI + 0x3c]
005beadb  TEST EAX,EAX
005beadd  JZ 0x005beb06
005beadf  NOP
005beae0  CMP dword ptr [EAX + 0xc],EBX
005beae3  JZ 0x005beaf3
005beae5  MOV EAX,dword ptr [EAX + 0x4]
005beae8  TEST EAX,EAX
005beaea  JNZ 0x005beae0
005beaec  POP EDI
005beaed  POP ESI
005beaee  POP EBP
005beaef  POP EBX
005beaf0  RET 0x10
005beaf3  TEST EAX,EAX
005beaf5  JZ 0x005beb06
005beaf7  MOV ECX,dword ptr [ESP + 0x20]
005beafb  PUSH ECX
005beafc  PUSH EBP
005beafd  PUSH ESI
005beafe  PUSH EAX
005beaff  MOV ECX,EDI
005beb01  CALL 0x005bbc00
005beb06  POP EDI
005beb07  POP ESI
005beb08  POP EBP
005beb09  POP EBX
005beb0a  RET 0x10
