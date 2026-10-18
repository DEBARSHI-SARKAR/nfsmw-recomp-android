/* speed.exe 007a57a0 FUN_007a57a0; analysis pseudocode, not buildable source.
 */

undefined4 FUN_007a57a0(int param_1)

{
  if (param_1 < 0x202) {
    if (param_1 == 0x201) {
      return 2;
    }
    switch(param_1) {
    case 0x101:
      return 8;
    case 0x102:
      return 10;
    case 0x103:
      return 0xb;
    case 0x104:
      return 9;
    case 0x105:
      return 0xc;
    }
  }
  else if (param_1 < 0x302) {
    if (param_1 == 0x301) {
switchD_007a583a_caseD_303:
      return 0x10;
    }
    switch(param_1) {
    case 0x202:
      return 7;
    case 0x203:
      return 5;
    case 0x204:
      return 3;
    case 0x205:
      return 6;
    case 0x206:
      return 1;
    case 0x207:
      return 4;
    }
  }
  else {
    if (param_1 < 0x40a) {
      if (0x401 < param_1) {
switchD_007a583a_caseD_302:
        return 0xe;
      }
      switch(param_1) {
      case 0x302:
        goto switchD_007a583a_caseD_302;
      case 0x303:
        goto switchD_007a583a_caseD_303;
      default:
        goto switchD_007a57bb_default;
      case 0x305:
        return 0xf;
      case 0x307:
        return 0xd;
      }
    }
    if (param_1 < 0x607) {
      if (0x600 < param_1) {
        return 0xf;
      }
      if ((0x500 < param_1) && (param_1 < 0x507)) {
        return 0xf;
      }
    }
    else if ((0x701 < param_1) && (param_1 < 0x70c)) {
      return 0xb;
    }
  }
switchD_007a57bb_default:
  return 0;
}

