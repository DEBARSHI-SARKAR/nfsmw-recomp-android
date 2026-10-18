0056fae0  SUB ESP,0x10
0056fae3  FLD float ptr [ESI + 0x10]
0056fae6  PUSH EDI
0056fae7  FSUB float ptr [ESI]
0056fae9  FMUL float ptr [0x008933d4]
0056faef  FSTP float ptr [ESP + 0x4]
0056faf3  FLD float ptr [ESI + 0x14]
0056faf6  FSUB float ptr [ESI + 0x4]
0056faf9  FMUL float ptr [0x008933d4]
0056faff  FSTP float ptr [ESP + 0x8]
0056fb03  FLD float ptr [ESI]
0056fb05  FSUB float ptr [ESP + 0x4]
0056fb09  FSUB float ptr [ESP + 0x1c]
0056fb0d  FSTP float ptr [ESI]
0056fb0f  FLD float ptr [ESI + 0x4]
0056fb12  FSUB float ptr [ESP + 0x8]
0056fb16  FSUB float ptr [ESP + 0x20]
0056fb1a  FSTP float ptr [ESI + 0x4]
0056fb1d  FLD float ptr [ESI + 0x8]
0056fb20  FSUB float ptr [ESP + 0x4]
0056fb24  FSUB float ptr [ESP + 0x1c]
0056fb28  FSTP float ptr [ESI + 0x8]
0056fb2b  FLD float ptr [ESI + 0xc]
0056fb2e  FSUB float ptr [ESP + 0x8]
0056fb32  FSUB float ptr [ESP + 0x20]
0056fb36  FSTP float ptr [ESI + 0xc]
0056fb39  FLD float ptr [ESI + 0x10]
0056fb3c  FSUB float ptr [ESP + 0x4]
0056fb40  FSUB float ptr [ESP + 0x1c]
0056fb44  FSTP float ptr [ESI + 0x10]
0056fb47  FLD float ptr [ESI + 0x14]
0056fb4a  FSUB float ptr [ESP + 0x8]
0056fb4e  FSUB float ptr [ESP + 0x20]
0056fb52  FSTP float ptr [ESI + 0x14]
0056fb55  FLD float ptr [ESI + 0x18]
0056fb58  FSUB float ptr [ESP + 0x4]
0056fb5c  FSUB float ptr [ESP + 0x1c]
0056fb60  FSTP float ptr [ESI + 0x18]
0056fb63  FLD float ptr [ESI + 0x1c]
0056fb66  FSUB float ptr [ESP + 0x8]
0056fb6a  FSUB float ptr [ESP + 0x20]
0056fb6e  FSTP float ptr [ESI + 0x1c]
0056fb71  FLD float ptr [ESP + 0x18]
0056fb75  FMUL float ptr [0x008941f0]
0056fb7b  CALL 0x007c4b80
0056fb80  XOR EDI,EDI
0056fb82  MOV DI,AX
0056fb85  PUSH EDI
0056fb86  CALL 0x0045db30
0056fb8b  FSTP float ptr [ESP + 0x1c]
0056fb8f  PUSH EDI
0056fb90  CALL 0x0045dbf0
0056fb95  FLD ST0
0056fb97  FMUL float ptr [ESI + 0x4]
0056fb9a  ADD ESP,0x8
0056fb9d  FLD float ptr [ESP + 0x18]
0056fba1  FMUL float ptr [ESI]
0056fba3  FSUBP
0056fba5  FLD ST1
0056fba7  FMUL float ptr [ESI + 0xc]
0056fbaa  FLD float ptr [ESP + 0x18]
0056fbae  FMUL float ptr [ESI + 0x8]
0056fbb1  FSUBP
0056fbb3  FLD ST2
0056fbb5  FMUL float ptr [ESI + 0x14]
0056fbb8  FLD float ptr [ESP + 0x18]
0056fbbc  FMUL float ptr [ESI + 0x10]
0056fbbf  FSUBP
0056fbc1  FSTP float ptr [ESP + 0xc]
0056fbc5  FLD ST2
0056fbc7  FMUL float ptr [ESI + 0x1c]
0056fbca  FLD float ptr [ESP + 0x18]
0056fbce  FMUL float ptr [ESI + 0x18]
0056fbd1  FSUBP
0056fbd3  FSTP float ptr [ESP + 0x10]
0056fbd7  FLD float ptr [ESP + 0x18]
0056fbdb  FMUL float ptr [ESI + 0x4]
0056fbde  POP EDI
0056fbdf  FLD ST3
0056fbe1  FMUL float ptr [ESI]
0056fbe3  FADDP
0056fbe5  FADD float ptr [ESP]
0056fbe8  FADD float ptr [ESP + 0x18]
0056fbec  FSTP float ptr [ESI]
0056fbee  FXCH
0056fbf0  FADD float ptr [ESP + 0x4]
0056fbf4  FADD float ptr [ESP + 0x1c]
0056fbf8  FSTP float ptr [ESI + 0x4]
0056fbfb  FLD ST1
0056fbfd  FMUL float ptr [ESI + 0x8]
0056fc00  FLD float ptr [ESP + 0x14]
0056fc04  FMUL float ptr [ESI + 0xc]
0056fc07  FADDP
0056fc09  FADD float ptr [ESP]
0056fc0c  FADD float ptr [ESP + 0x18]
0056fc10  FSTP float ptr [ESI + 0x8]
0056fc13  FADD float ptr [ESP + 0x4]
0056fc17  FADD float ptr [ESP + 0x1c]
0056fc1b  FSTP float ptr [ESI + 0xc]
0056fc1e  FLD ST0
0056fc20  FMUL float ptr [ESI + 0x10]
0056fc23  FLD float ptr [ESP + 0x14]
0056fc27  FMUL float ptr [ESI + 0x14]
0056fc2a  FADDP
0056fc2c  FADD float ptr [ESP]
0056fc2f  FADD float ptr [ESP + 0x18]
0056fc33  FSTP float ptr [ESI + 0x10]
0056fc36  FLD float ptr [ESP + 0x8]
0056fc3a  FADD float ptr [ESP + 0x4]
0056fc3e  FADD float ptr [ESP + 0x1c]
0056fc42  FSTP float ptr [ESI + 0x14]
0056fc45  FMUL float ptr [ESI + 0x18]
0056fc48  FLD float ptr [ESP + 0x14]
0056fc4c  FMUL float ptr [ESI + 0x1c]
0056fc4f  FADDP
0056fc51  FADD float ptr [ESP]
0056fc54  FADD float ptr [ESP + 0x18]
0056fc58  FSTP float ptr [ESI + 0x18]
0056fc5b  FLD float ptr [ESP + 0xc]
0056fc5f  FADD float ptr [ESP + 0x4]
0056fc63  FADD float ptr [ESP + 0x1c]
0056fc67  FSTP float ptr [ESI + 0x1c]
0056fc6a  ADD ESP,0x10
0056fc6d  RET
