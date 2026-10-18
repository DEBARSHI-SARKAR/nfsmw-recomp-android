/* speed.exe 007bad10 FUN_007bad10; analysis pseudocode, not buildable source.
 * calls 007b6250 FUN_007b6250
 * calls 0058aa90 FUN_0058aa90
 * calls 00576700 FUN_00576700
 * calls 00677fe0 FUN_00677fe0
 * calls 007b60e0 FUN_007b60e0
 * calls 007a4db0 FUN_007a4db0
 * calls 007bad10 FUN_007bad10
 */

bool __thiscall FUN_007bad10(int param_1,uint param_2,undefined4 param_3)

{
  char cVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  
  uVar4 = 0;
  if (param_2 < 0x202) {
    if (param_2 == 0x201) {
      if (((char)param_3 != '\0') && (cVar1 = FUN_00677fe0(param_1 + 8,4), cVar1 == '\0')) {
        return true;
      }
      uVar3 = 8;
    }
    else {
      switch(param_2) {
      case 0x101:
        uVar3 = 0xb;
        break;
      case 0x102:
        uVar3 = 0xc;
        break;
      case 0x103:
        iVar5 = 0x702;
        do {
          cVar1 = FUN_007b60e0(iVar5,param_3);
          if (cVar1 == '\0') {
            return false;
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 < 0x70c);
        return true;
      case 0x104:
        uVar3 = 0xe;
        break;
      case 0x105:
        uVar3 = 0xf;
        break;
      default:
        goto switchD_007bad3a_default;
      }
    }
  }
  else if (param_2 < 0x302) {
    if (param_2 == 0x301) {
      uVar3 = 0x17;
    }
    else {
      switch(param_2) {
      case 0x202:
        if (((char)param_3 != '\0') && (cVar1 = FUN_00677fe0(param_1 + 8,3), cVar1 == '\0')) {
          return true;
        }
        uVar3 = 7;
        break;
      case 0x203:
        if (((char)param_3 != '\0') && (cVar1 = FUN_00677fe0(param_1 + 8,2), cVar1 == '\0')) {
          return true;
        }
        uVar3 = 6;
        break;
      case 0x204:
        if (((char)param_3 != '\0') && (cVar1 = FUN_00677fe0(param_1 + 8,6), cVar1 == '\0')) {
          return true;
        }
        uVar3 = 10;
        break;
      case 0x205:
        if (((char)param_3 != '\0') && (cVar1 = FUN_00677fe0(param_1 + 8,0), cVar1 == '\0')) {
          return true;
        }
        uVar3 = 4;
        break;
      case 0x206:
        if (((char)param_3 != '\0') && (cVar1 = FUN_00677fe0(param_1 + 8,1), cVar1 == '\0')) {
          return true;
        }
        uVar3 = 5;
        break;
      case 0x207:
        if (((char)param_3 != '\0') && (cVar1 = FUN_00677fe0(param_1 + 8,5), cVar1 == '\0')) {
          return true;
        }
        uVar3 = 9;
        break;
      default:
        return true;
      }
    }
  }
  else if (param_2 < 0x40a) {
    if (0x401 < param_2) {
      uVar2 = FUN_007b6250(param_2,param_3);
      return (bool)uVar2;
    }
    switch(param_2) {
    case 0x302:
      iVar5 = 0x402;
      do {
        cVar1 = FUN_007b6250(iVar5,param_3);
        if (cVar1 == '\0') {
          return false;
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < 0x40a);
      return true;
    case 0x303:
      uVar3 = 0x18;
      break;
    case 0x304:
      uVar3 = 0x12;
      break;
    case 0x305:
      cVar1 = FUN_007bad10(0x501,param_3);
      if ((cVar1 != '\0') && (cVar1 = FUN_007bad10(0x505,param_3), cVar1 != '\0')) {
        cVar1 = FUN_007bad10(0x503,param_3);
        return cVar1 != '\0';
      }
      return false;
    case 0x306:
      uVar3 = 0x2b;
      break;
    case 0x307:
      uVar3 = 0x11;
      break;
    default:
switchD_007bad3a_default:
      return true;
    }
  }
  else {
    if (0x70b < param_2) {
      if (param_2 == 0x801) {
        iVar5 = 0x101;
        do {
          cVar1 = FUN_007bad10(iVar5,param_3);
          if (cVar1 == '\0') {
            return false;
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 < 0x106);
        return true;
      }
      if (param_2 != 0x802) {
        if (param_2 != 0x803) {
          return true;
        }
        iVar5 = 0x301;
        do {
          cVar1 = FUN_007bad10(iVar5,param_3);
          if (cVar1 == '\0') {
            return false;
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 < 0x308);
        return true;
      }
      iVar5 = 0x201;
      do {
        cVar1 = FUN_007bad10(iVar5,param_3);
        if (cVar1 == '\0') {
          return false;
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < 0x208);
      return true;
    }
    if (0x701 < param_2) {
      uVar2 = FUN_007b60e0(param_2,param_3);
      return (bool)uVar2;
    }
    if (param_2 < 0x507) {
      if (param_2 < 0x505) {
        switch(param_2) {
        case 0x501:
        case 0x502:
          uVar4 = 1;
          uVar3 = 0x2c;
          goto LAB_007bb006;
        case 0x503:
        case 0x504:
          goto switchD_007bafc7_caseD_503;
        default:
          goto switchD_007bad3a_default;
        }
      }
      uVar4 = 3;
      uVar3 = 0x30;
    }
    else {
      if (param_2 < 0x601) {
        return true;
      }
      if (0x606 < param_2) {
        return true;
      }
switchD_007bafc7_caseD_503:
      uVar4 = 2;
      uVar3 = 0x2e;
    }
  }
LAB_007bb006:
  if ((char)param_3 != '\0') {
    uVar4 = FUN_007a4db0(uVar3,uVar4);
    cVar1 = FUN_0058aa90(uVar4);
    return cVar1 == '\0';
  }
  uVar4 = FUN_007a4db0(uVar3,uVar4,0,0);
  cVar1 = FUN_00576700(uVar4);
  return cVar1 == '\0';
}

