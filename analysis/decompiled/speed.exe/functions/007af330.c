/* speed.exe 007af330 FUN_007af330; analysis pseudocode, not buildable source.
 * calls 005821e0 FUN_005821e0
 * calls 005820c0 FUN_005820c0
 * calls 005825d0 FUN_005825d0
 * calls 00582390 FUN_00582390
 * calls 00582270 FUN_00582270
 * calls 00582030 FUN_00582030
 * calls 005824b0 FUN_005824b0
 * calls 00582420 FUN_00582420
 * calls 00582150 FUN_00582150
 * calls 00582540 FUN_00582540
 * calls 00575b00 FUN_00575b00
 */

void FUN_007af330(int param_1,int param_2)

{
  int iVar1;
  char cVar2;
  
  iVar1 = param_1;
  if (param_1 != 0) {
    if (((param_2 != 0) && (*(char *)(param_1 + 0x1c) == '\0')) &&
       (((*(byte *)(DAT_0091cf90 + 300) & 1) != 0 || (DAT_009b9e8d != '\0')))) {
      cVar2 = FUN_00575b00();
      param_1 = 0x3f400000;
      if (cVar2 == '\0') {
        param_1 = 0x3f800000;
      }
      switch(*(undefined4 *)(iVar1 + 0x10)) {
      case 0x17:
      case 0x69:
        FUN_005821e0(param_1);
        return;
      case 0x2c:
        FUN_00582540(param_1);
        return;
      case 0x3e:
        FUN_005824b0(param_1);
        return;
      case 0x3f:
        FUN_00582270(param_1);
        return;
      case 0x42:
        FUN_00582390(param_1);
        return;
      case 0x4c:
        FUN_005820c0(param_1);
        return;
      case 0x4d:
        FUN_00582150(param_1);
        return;
      case 0x4e:
        FUN_00582420(param_1);
        return;
      case 0x53:
      case 0x5b:
      case 99:
      case 100:
      case 0x65:
      case 0x66:
      case 0x67:
      case 0x68:
      case 0x6b:
      case 0x6c:
      case 0x6d:
      case 0x6e:
      case 0x6f:
      case 0x70:
      case 0x73:
      case 0x7b:
        FUN_00582030(param_1);
        break;
      case 0x83:
        FUN_005825d0(param_1);
        return;
      }
    }
  }
  return;
}

