/* speed.exe 0056a670 FUN_0056a670; analysis pseudocode, not buildable source.
 * calls 005af1c0 FUN_005af1c0
 */

bool __thiscall FUN_0056a670(int param_1,char param_2,int param_3)

{
  undefined4 uVar1;
  char *pcVar2;
  
  if (param_3 < -0x26765c5) {
    if (param_3 == -0x26765c6) {
      pcVar2 = "POS3";
    }
    else if (param_3 < -0x320c903d) {
      if (param_3 == -0x320c903e) {
        pcVar2 = "POS5";
      }
      else if (param_3 == -0x7af59b44) {
        pcVar2 = "POS6";
      }
      else {
        if (param_3 != -0x59e353dc) goto LAB_0056a703;
        pcVar2 = "POS2";
      }
    }
    else {
      if (param_3 != -0x14ba0663) goto LAB_0056a703;
      pcVar2 = "POS4";
    }
  }
  else if (param_3 < 0x4fc942cb) {
    if (param_3 == 0x4fc942ca) {
      pcVar2 = "POS00";
    }
    else if (param_3 == 0x33fa23a) {
      if (param_2 == '\0') {
        pcVar2 = "POS0";
      }
      else {
        pcVar2 = "POS7";
      }
    }
    else {
      if (param_3 != 0x2377e50d) goto LAB_0056a703;
      pcVar2 = "POS1";
    }
  }
  else {
    if (param_3 != 0x5392e4fd) {
LAB_0056a703:
      *(undefined4 *)(param_1 + 0x3c) = 0;
      return *(int *)(param_1 + 0x3c) != 0;
    }
    pcVar2 = "POS8";
  }
  uVar1 = FUN_005af1c0(pcVar2);
  *(undefined4 *)(param_1 + 0x3c) = uVar1;
  return *(int *)(param_1 + 0x3c) != 0;
}

