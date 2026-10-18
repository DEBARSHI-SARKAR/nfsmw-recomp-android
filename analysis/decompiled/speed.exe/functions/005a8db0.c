/* speed.exe 005a8db0 FUN_005a8db0; analysis pseudocode, not buildable source.
 * calls 00515960 FUN_00515960
 * calls 00516c50 FUN_00516c50
 * calls 005a5d40 FUN_005a5d40
 * calls 00515e90 FUN_00515e90
 * calls 005882b0 FUN_005882b0
 * calls 00524ee0 FUN_00524ee0
 * calls 00524850 FUN_00524850
 * calls 0059bfb0 FUN_0059bfb0
 * calls 0054e760 FUN_0054e760
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_005a8db0(int param_1)

{
  int *piVar1;
  char cVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  FUN_00515960(&local_c,&local_10);
  uVar3 = FUN_00524850(*(undefined4 *)(param_1 + 0x10),0x78b4e2a9);
  FUN_00524ee0(uVar3,&local_8,&local_4);
  local_c = local_c - local_8;
  local_10 = local_10 - local_4;
  if (DAT_00987f71 == '\0') {
    if (DAT_00987f6c == 0) {
      if ((DAT_00987f64 != 0) || (DAT_00987f68 != 0)) {
        iVar5 = FUN_005882b0(local_c,local_10);
        if (iVar5 == 0) {
          cVar2 = FUN_0054e760(local_c,local_10,*(undefined4 *)(param_1 + 0x4c));
          if ((cVar2 != '\0') && (*(char *)(param_1 + 0x120) != '\0')) {
            if (*(int **)(param_1 + 0x34) != (int *)0x0) {
              (**(code **)(**(int **)(param_1 + 0x34) + 0x28))();
              *(undefined4 *)(param_1 + 0x34) = 0;
            }
            FUN_00515e90(*(undefined4 *)(param_1 + 0x10),
                         *(undefined4 *)(*(int *)(param_1 + 0x4c) + 0x10));
          }
        }
      }
    }
    else {
      if (_DAT_00890968 < (float)DAT_00987f6c) {
        FUN_005a5d40(0xffffffff);
        return;
      }
      if ((float)DAT_00987f6c < _DAT_00890968) {
        FUN_005a5d40(1);
        return;
      }
    }
  }
  else {
    piVar4 = (int *)FUN_005882b0(local_c,local_10);
    if ((piVar4 != (int *)0x0) && ((char)piVar4[10] != '\0')) {
      piVar1 = *(int **)(param_1 + 0x34);
      if ((piVar1 != (int *)0x0) && (piVar4 == piVar1)) {
        (**(code **)(*piVar1 + 8))(*(undefined4 *)(param_1 + 0x10),local_c,local_10);
        return;
      }
      FUN_0059bfb0(piVar4);
      return;
    }
    if (*(char *)(param_1 + 0x120) != '\0') {
      cVar2 = FUN_0054e760(local_c,local_10,*(undefined4 *)(param_1 + 0x4c));
      if (cVar2 != '\0') {
        FUN_00516c50(0x406415e3,*(undefined4 *)(param_1 + 0x10),0xff);
        return;
      }
    }
  }
  return;
}

