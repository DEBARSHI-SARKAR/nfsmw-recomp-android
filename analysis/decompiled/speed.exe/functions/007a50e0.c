/* speed.exe 007a50e0 FUN_007a50e0; analysis pseudocode, not buildable source.
 * calls 007a50e0 FUN_007a50e0
 * calls 00576800 FUN_00576800
 * calls 00575b00 FUN_00575b00
 */

bool FUN_007a50e0(uint param_1)

{
  char cVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  
  if (param_1 < 0x202) {
    if (param_1 == 0x201) {
      uVar5 = 8;
    }
    else {
      switch(param_1) {
      case 0x101:
        uVar5 = 0xb;
        break;
      case 0x102:
        uVar5 = 0xc;
        break;
      case 0x103:
        iVar4 = 0x702;
        do {
          cVar1 = FUN_007a50e0(iVar4);
          if (cVar1 != '\0') {
            return true;
          }
          iVar4 = iVar4 + 1;
        } while (iVar4 < 0x70c);
        return false;
      case 0x104:
        uVar5 = 0xe;
        break;
      case 0x105:
        uVar5 = 0xf;
        break;
      default:
        goto switchD_007a50ff_default;
      }
    }
  }
  else if (param_1 < 0x302) {
    if (param_1 == 0x301) {
      uVar5 = 0x17;
    }
    else {
      switch(param_1) {
      case 0x202:
        uVar5 = 7;
        break;
      case 0x203:
        uVar5 = 6;
        break;
      case 0x204:
        uVar5 = 10;
        break;
      case 0x205:
        uVar5 = 4;
        break;
      case 0x206:
        uVar5 = 5;
        break;
      case 0x207:
        uVar5 = 9;
        break;
      default:
        goto switchD_007a50ff_default;
      }
    }
  }
  else if (param_1 < 0x403) {
    if (param_1 == 0x402) {
      uVar5 = 0x23;
    }
    else {
      switch(param_1) {
      case 0x302:
        iVar4 = 0x402;
        do {
          cVar1 = FUN_007a50e0(iVar4);
          if (cVar1 != '\0') {
            return true;
          }
          iVar4 = iVar4 + 1;
        } while (iVar4 < 0x40a);
        return false;
      case 0x303:
        uVar5 = 0x18;
        break;
      case 0x304:
        uVar5 = 0x12;
        break;
      case 0x305:
        cVar1 = FUN_007a50e0(0x501);
        if (cVar1 != '\0') {
          return true;
        }
        cVar1 = FUN_007a50e0(0x505);
        if (cVar1 == '\0') {
          cVar1 = FUN_007a50e0(0x503);
          return cVar1 != '\0';
        }
        return true;
      case 0x306:
        uVar5 = 0x2b;
        break;
      case 0x307:
        uVar5 = 0x11;
        break;
      default:
        goto switchD_007a50ff_default;
      }
    }
  }
  else if (param_1 < 0x503) {
    if (param_1 < 0x501) {
      switch(param_1) {
      case 0x403:
        uVar5 = 0x24;
        break;
      case 0x404:
        uVar5 = 0x25;
        break;
      case 0x405:
        uVar5 = 0x26;
        break;
      case 0x406:
        uVar5 = 0x27;
        break;
      case 0x407:
        uVar5 = 0x28;
        break;
      case 0x408:
        uVar5 = 0x29;
        break;
      case 0x409:
        uVar5 = 0x2a;
        break;
      default:
        goto switchD_007a50ff_default;
      }
    }
    else {
      uVar5 = 0x2c;
    }
  }
  else if (param_1 < 0x708) {
    if (param_1 == 0x707) {
      uVar5 = 0x1e;
    }
    else if (param_1 < 0x704) {
      if (param_1 == 0x703) {
        uVar5 = 0x1a;
      }
      else if (param_1 < 0x607) {
        if (param_1 < 0x601) {
          switch(param_1) {
          case 0x503:
          case 0x504:
            break;
          case 0x505:
          case 0x506:
            uVar5 = 0x30;
            goto LAB_007a5437;
          default:
            goto switchD_007a50ff_default;
          }
        }
        uVar5 = 0x2e;
      }
      else {
        if (param_1 != 0x702) {
          return true;
        }
        uVar5 = 0x19;
      }
    }
    else if (param_1 == 0x704) {
      uVar5 = 0x1b;
    }
    else if (param_1 == 0x705) {
      uVar5 = 0x1c;
    }
    else {
      if (param_1 != 0x706) {
        return true;
      }
      uVar5 = 0x1d;
    }
  }
  else {
    switch(param_1) {
    case 0x708:
      uVar5 = 0x1f;
      break;
    case 0x709:
      uVar5 = 0x20;
      break;
    case 0x70a:
      uVar5 = 0x21;
      break;
    case 0x70b:
      uVar5 = 0x22;
      break;
    default:
switchD_007a50ff_default:
      return true;
    case 0x801:
      iVar4 = 0x101;
      do {
        cVar1 = FUN_007a50e0(iVar4);
        if (cVar1 != '\0') {
          return true;
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < 0x106);
      return false;
    case 0x802:
      iVar4 = 0x201;
      do {
        cVar1 = FUN_007a50e0(iVar4);
        if (cVar1 != '\0') {
          return true;
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < 0x208);
      return false;
    case 0x803:
      iVar4 = 0x301;
      do {
        cVar1 = FUN_007a50e0(iVar4);
        if (cVar1 != '\0') {
          return true;
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < 0x308);
      return false;
    }
  }
LAB_007a5437:
  if ((*(byte *)(DAT_0091cf90 + 300) & 1) != 0) {
    cVar1 = FUN_00575b00();
    uVar2 = FUN_00576800((-(cVar1 != '\0') & 8U) + 2,uVar5,0xfffffffe);
    return (bool)uVar2;
  }
  if (((*(uint *)(DAT_0091cf90 + 300) & 8) == 0) ||
     (uVar3 = 4, (*(uint *)(DAT_0091cf90 + 300) & 0x20) == 0)) {
    uVar3 = 1;
  }
  uVar2 = FUN_00576800(uVar3,uVar5,0xfffffffe);
  return (bool)uVar2;
}

