004dde10  MOV EAX,dword ptr [ESP + 0x8]
004dde14  CMP EAX,dword ptr [0x008ef998]
004dde1a  JGE 0x004dde27
004dde1c  MOV EAX,dword ptr [EAX*0x4 + 0x9142d0]
004dde23  TEST EAX,EAX
004dde25  JNZ 0x004dde2a
004dde27  XOR AL,AL
004dde29  RET
004dde2a  MOV EAX,dword ptr [EAX + 0x34]
004dde2d  FLD float ptr [EAX + 0xa4]
004dde33  FCOMP float ptr [ESP + 0x4]
004dde37  FNSTSW AX
004dde39  TEST AH,0x41
004dde3c  JNZ 0x004dde44
004dde3e  MOV EAX,0x1
004dde43  RET
004dde44  XOR EAX,EAX
004dde46  RET
