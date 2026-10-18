/* speed.exe 00568030 FUN_00568030; analysis pseudocode, not buildable source.
 * calls 00514da0 FUN_00514da0
 * calls 00524920 FUN_00524920
 * calls 00515b90 FUN_00515b90
 * calls 00514d10 FUN_00514d10
 * calls 00524a10 FUN_00524a10
 * calls 005252d0 FUN_005252d0
 * calls 00460cd0 FUN_00460cd0
 */

undefined4 __thiscall
FUN_00568030(int param_1,int param_2,undefined1 param_3,int param_4,int param_5,int param_6,
            int param_7)

{
  char cVar1;
  undefined4 uVar2;
  
  if (param_7 < *(int *)(param_1 + 0x14)) {
    return 0;
  }
  cVar1 = FUN_00524a10(*(undefined4 *)(param_1 + -0x20),0xe0ba07ec,0x1744b3);
  if (cVar1 == '\0') {
    FUN_00524920(*(undefined4 *)(param_1 + -0x20),0xe0ba07ec,0x1744b3,1);
  }
  *(int *)(param_1 + 0x14) = param_7;
  *(int *)(param_1 + 0x5c) = param_4;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined1 *)(param_1 + 0x60) = param_3;
  if (param_2 != 0) {
    FUN_00460cd0(param_1 + 0x1c,param_2,0x40);
    if (param_4 != 0) {
      if (*(char *)(param_1 + 0x60) == '\0') {
        uVar2 = *(undefined4 *)(param_1 + 8);
      }
      else {
        cVar1 = FUN_00514da0(*(undefined4 *)(param_1 + 8),param_4);
        if (cVar1 != '\0') goto LAB_005680dc;
        uVar2 = *(undefined4 *)(param_1 + 8);
      }
      FUN_00514d10(uVar2,param_4,1);
    }
LAB_005680dc:
    FUN_005252d0(*(undefined4 *)(param_1 + -0x20),0x32a7a521,&DAT_008941f8,param_1 + 0x1c);
  }
  if ((param_6 == 0) || (param_5 == 0)) {
    cVar1 = FUN_00514da0(*(undefined4 *)(param_1 + 0x10),0x16a259);
    if (cVar1 == '\0') {
      FUN_00514d10(*(undefined4 *)(param_1 + 0x10),0x16a259,1);
    }
    return 1;
  }
  if (*(char *)(param_1 + 0x60) == '\0') {
    uVar2 = *(undefined4 *)(param_1 + 0x10);
  }
  else {
    cVar1 = FUN_00514da0(*(undefined4 *)(param_1 + 0x10),param_6);
    if (cVar1 != '\0') goto LAB_00568133;
    uVar2 = *(undefined4 *)(param_1 + 0x10);
  }
  FUN_00514d10(uVar2,param_6,1);
LAB_00568133:
  FUN_00515b90(*(undefined4 *)(param_1 + 0x10),param_5);
  return 1;
}

