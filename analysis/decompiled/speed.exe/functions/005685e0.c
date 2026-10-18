/* speed.exe 005685e0 FUN_005685e0; analysis pseudocode, not buildable source.
 * calls 00514fb0 FUN_00514fb0
 * calls 00514da0 FUN_00514da0
 * calls 005af1c0 FUN_005af1c0
 * calls 00514d10 FUN_00514d10
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_005685e0(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (*(char *)(param_1 + 0x3c) == '\0') {
    return;
  }
  *(undefined1 *)(param_1 + 0x3c) = 0;
  if (*(int *)(param_1 + 0x44) != 0) {
    FUN_00514fb0(*(int *)(param_1 + 0x44),*(float *)(param_1 + 0x38) * _DAT_008a0534 - _DAT_008a0534
                );
    if (*(float *)(param_1 + 0x38) <= _DAT_008f3c40) {
      uVar2 = FUN_005af1c0(&DAT_008a051c);
      cVar1 = FUN_00514da0(*(undefined4 *)(param_1 + 0x44),uVar2);
      if (cVar1 != '\0') goto LAB_00568691;
      uVar3 = FUN_005af1c0(&DAT_008a051c,1);
      uVar2 = *(undefined4 *)(param_1 + 0x44);
    }
    else {
      uVar2 = FUN_005af1c0("OVERHEAT_PULSE");
      cVar1 = FUN_00514da0(*(undefined4 *)(param_1 + 0x44),uVar2);
      if (cVar1 != '\0') goto LAB_00568691;
      uVar3 = FUN_005af1c0("OVERHEAT_PULSE",1);
      uVar2 = *(undefined4 *)(param_1 + 0x44);
    }
    FUN_00514d10(uVar2,uVar3);
  }
LAB_00568691:
  if (*(int *)(param_1 + 0x40) != 0) {
    if (*(float *)(param_1 + 0x38) <= _DAT_008f3c40) {
      if (*(float *)(param_1 + 0x38) <= _DAT_0089f24c) {
        uVar2 = FUN_005af1c0(&DAT_008a051c);
        cVar1 = FUN_00514da0(*(undefined4 *)(param_1 + 0x40),uVar2);
        if (cVar1 == '\0') {
          uVar2 = FUN_005af1c0(&DAT_008a051c,1);
          FUN_00514d10(*(undefined4 *)(param_1 + 0x40),uVar2);
        }
      }
      else {
        uVar2 = FUN_005af1c0("ACTIVATE");
        cVar1 = FUN_00514da0(*(undefined4 *)(param_1 + 0x40),uVar2);
        if (cVar1 == '\0') {
          uVar2 = FUN_005af1c0("ACTIVATE",1);
          FUN_00514d10(*(undefined4 *)(param_1 + 0x40),uVar2);
          return;
        }
      }
    }
    else {
      uVar2 = FUN_005af1c0("OVERHEAT_PULSE");
      cVar1 = FUN_00514da0(*(undefined4 *)(param_1 + 0x40),uVar2);
      if (cVar1 == '\0') {
        uVar2 = FUN_005af1c0("OVERHEAT_PULSE",1);
        FUN_00514d10(*(undefined4 *)(param_1 + 0x40),uVar2);
        return;
      }
    }
  }
  return;
}

