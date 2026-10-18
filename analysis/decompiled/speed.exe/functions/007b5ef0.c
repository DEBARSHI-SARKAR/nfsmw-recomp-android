/* speed.exe 007b5ef0 FUN_007b5ef0; analysis pseudocode, not buildable source.
 * calls 007afae0 FUN_007afae0
 * calls 0056bc00 FUN_0056bc00
 * calls 00515e20 FUN_00515e20
 * calls 00573140 FUN_00573140
 */

undefined4 FUN_007b5ef0(int param_1,int param_2)

{
  char cVar1;
  char *pcVar2;
  undefined4 uVar3;
  undefined1 local_64 [100];
  
  if (param_1 < 0x208) {
    if (param_1 == 0x207) {
      cVar1 = FUN_007afae0();
      if (cVar1 == '\0') {
        pcVar2 = "PERF_SUPERCHARGER";
      }
      else {
        pcVar2 = "PERF_TURBO";
      }
    }
    else if (param_1 < 0x203) {
      if (param_1 == 0x202) {
        pcVar2 = "PERF_TRANSMISSION";
      }
      else if (param_1 < 0x105) {
        if (param_1 == 0x104) {
          pcVar2 = "PARTS_HOODS";
        }
        else if (param_1 == 0x101) {
          pcVar2 = "PARTS_BODYKITS";
        }
        else {
          if (param_1 != 0x102) {
            return 0x9bb9ccc3;
          }
          pcVar2 = "PARTS_SPOILERS";
        }
      }
      else if (param_1 == 0x105) {
        pcVar2 = "PARTS_ROOFSCOOPS";
      }
      else {
        if (param_1 != 0x201) {
          return 0x9bb9ccc3;
        }
        pcVar2 = "PERF_ENGINE";
      }
    }
    else {
      switch(param_1) {
      case 0x203:
        pcVar2 = "PERF_SUSPENSION";
        break;
      case 0x204:
        pcVar2 = "PERF_NITROUS";
        break;
      case 0x205:
        pcVar2 = "PERF_TIRES";
        break;
      case 0x206:
        pcVar2 = "PERF_BRAKES";
        break;
      default:
        goto switchD_007b5fbf_default;
      }
    }
  }
  else if (param_1 < 0x40a) {
    if (param_1 < 0x402) {
      switch(param_1) {
      case 0x301:
        pcVar2 = "VISUAL_PAINT";
        break;
      default:
        goto switchD_007b5fbf_default;
      case 0x303:
        pcVar2 = "VISUAL_RIMPAINT";
        break;
      case 0x304:
        pcVar2 = "VISUAL_WINDOWTINT";
        break;
      case 0x306:
        pcVar2 = "VISUAL_NUMBERS";
        break;
      case 0x307:
        pcVar2 = "VISUAL_HUDS";
      }
    }
    else {
      pcVar2 = "VISUAL_VINYLS";
    }
  }
  else if (param_1 < 0x607) {
    if (param_1 < 0x601) {
      if (param_1 < 0x501) {
        return 0x9bb9ccc3;
      }
      if (0x506 < param_1) {
        return 0x9bb9ccc3;
      }
    }
    pcVar2 = "VISUAL_DECALS";
  }
  else {
    if (param_1 < 0x701) {
      return 0x9bb9ccc3;
    }
    if (0x70b < param_1) {
      return 0x9bb9ccc3;
    }
    pcVar2 = "PARTS_RIMS";
  }
  if (param_2 != 0) {
    FUN_00515e20(local_64,100,"CUSTOMIZATION_%s_%d",pcVar2,param_2);
    uVar3 = FUN_00573140(local_64);
    cVar1 = FUN_0056bc00(uVar3);
    if (cVar1 != '\x01') {
      uVar3 = 0x9bb9ccc3;
    }
    return uVar3;
  }
switchD_007b5fbf_default:
  return 0x9bb9ccc3;
}

