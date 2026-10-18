004bea70  PUSH ESI
004bea71  MOV ESI,ECX
004bea73  MOV EAX,dword ptr [ESI + 0x74]
004bea76  MOV dword ptr [ESI + 0x70],EAX
004bea79  MOV ECX,dword ptr [0x00914a90]
004bea7f  XOR EAX,EAX
004bea81  TEST ECX,ECX
004bea83  JZ 0x004beac6
004bea85  MOV ECX,dword ptr [ESI + 0x18]
004bea88  TEST ECX,ECX
004bea8a  JZ 0x004beac6
004bea8c  CMP byte ptr [ESI + 0x22],0x2
004bea90  JNZ 0x004beac6
004bea92  MOV ECX,dword ptr [ECX + 0x34]
004bea95  TEST ECX,ECX
004bea97  JZ 0x004beac6
004bea99  MOV EDX,dword ptr [ECX + 0x44]
004bea9c  MOV EAX,dword ptr [ECX + 0x40]
004bea9f  PUSH EDX
004beaa0  PUSH EAX
004beaa1  MOV ECX,0x914a84
004beaa6  CALL 0x0074b640
004beaab  PUSH 0x0
004beaad  MOV ECX,0x914a84
004beab2  CALL 0x0073d810
004beab7  PUSH 0x2
004beab9  MOV ECX,0x914a84
004beabe  MOV dword ptr [ESI + 0x74],EAX
004beac1  CALL 0x0073d810
004beac6  MOV ECX,dword ptr [ESI + 0x74]
004beac9  CMP ECX,0xc
004beacc  JGE 0x004bead2
004beace  TEST ECX,ECX
004bead0  JGE 0x004beae6
004bead2  MOV ECX,dword ptr [0x00911fa8]
004bead8  MOV EDX,dword ptr [ECX + 0x70]
004beadb  DEC EDX
004beadc  NEG EDX
004beade  SBB EDX,EDX
004beae0  AND EDX,0x9
004beae3  MOV dword ptr [ESI + 0x74],EDX
004beae6  MOV EDX,dword ptr [ESI + 0x74]
004beae9  MOV ECX,dword ptr [EDX*0x4 + 0x8efc90]
004beaf0  CMP ECX,0xc
004beaf3  JL 0x004beafa
004beaf5  MOV ECX,0x9
004beafa  CMP EDX,dword ptr [ESI + 0x70]
004beafd  JZ 0x004beb13
004beaff  MOV DL,byte ptr [ESI + 0x28]
004beb02  TEST DL,DL
004beb04  JNZ 0x004beb13
004beb06  PUSH EAX
004beb07  PUSH ECX
004beb08  MOV ECX,ESI
004beb0a  CALL 0x004b57e0
004beb0f  POP ESI
004beb10  RET 0x4
004beb13  PUSH EAX
004beb14  MOV ECX,ESI
004beb16  CALL 0x004b5750
004beb1b  POP ESI
004beb1c  RET 0x4
