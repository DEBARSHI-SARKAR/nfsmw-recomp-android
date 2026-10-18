/* speed.exe 007afdb0 FUN_007afdb0; analysis pseudocode, not buildable source.
 * calls 007afae0 FUN_007afae0
 */

int FUN_007afdb0(int param_1)

{
  char cVar1;
  
  if (param_1 < 0x202) {
    if (param_1 == 0x201) {
      return 0x2f3ec04d;
    }
    switch(param_1) {
    case 0x101:
      return 0x7c50498c;
    case 0x102:
      return 0x52012995;
    case 0x103:
      return -0x75b4040e;
    case 0x104:
      return -0x75b9661f;
    case 0x105:
      return -0x7cfeff10;
    }
  }
  else if (param_1 < 0x302) {
    if (param_1 == 0x301) {
      return -0x2c5d2b2d;
    }
    switch(param_1) {
    case 0x202:
      return -0x2e18835f;
    case 0x203:
      return -0x48340332;
    case 0x204:
      return -0x3ed6a9d5;
    case 0x205:
      return -0x2c104102;
    case 0x206:
      return 0x2884658f;
    case 0x207:
      cVar1 = FUN_007afae0();
      return (-(uint)(cVar1 != '\0') & 0x70513881) + 0x63a51aa2;
    }
  }
  else if (param_1 < 0x607) {
    if (0x600 < param_1) {
      return -0x2d343af0;
    }
    if (param_1 < 0x308) {
      if (param_1 == 0x307) {
        return -0x3dac136e;
      }
      if (param_1 == 0x302) {
        return -0x2bec1e77;
      }
      if (param_1 == 0x305) {
        return -0x2d343af0;
      }
    }
    else if (param_1 < 0x507) {
      if (0x500 < param_1) {
        return -0x2d343af0;
      }
      if ((0x401 < param_1) && (param_1 < 0x40a)) {
        return -0x2bec1e77;
      }
    }
  }
  else if (param_1 < 0x803) {
    if (param_1 == 0x802) {
      return 0x3c27a989;
    }
    if (0x701 < param_1) {
      if (param_1 < 0x70c) {
        return -0x75b4040e;
      }
      if (param_1 == 0x801) {
        return -0x2c5d041f;
      }
    }
  }
  else if (param_1 == 0x803) {
    return 0x5692be6b;
  }
  return 0;
}

