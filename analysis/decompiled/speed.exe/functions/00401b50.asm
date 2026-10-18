00401b50  MOV EAX,dword ptr [ESP + 0x4]
00401b54  FLD float ptr [EAX]
00401b56  FCHS
00401b58  FSTP float ptr [EAX]
00401b5a  FLD float ptr [EAX + 0x4]
00401b5d  FCHS
00401b5f  FSTP float ptr [EAX + 0x4]
00401b62  FLD float ptr [EAX + 0x8]
00401b65  FCHS
00401b67  FSTP float ptr [EAX + 0x8]
00401b6a  RET
