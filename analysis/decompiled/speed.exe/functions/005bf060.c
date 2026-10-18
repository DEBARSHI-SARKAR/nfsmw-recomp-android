/* speed.exe 005bf060 FUN_005bf060; analysis pseudocode, not buildable source.
 * calls 005b2bb0 FUN_005b2bb0
 * calls 005bcd20 FUN_005bcd20
 * calls 005b91c0 FUN_005b91c0
 */

void __thiscall FUN_005bf060(int param_1,ushort *param_2)

{
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = *(int *)(param_1 + 0xc);
  uVar1 = *param_2;
  if (uVar1 < 0x6a54) {
    if (uVar1 == 0x6a53) {
      *(undefined4 *)(iVar2 + 0x6c) = *(undefined4 *)(param_2 + 2);
      return;
    }
    if (uVar1 == 0x4853) {
      uVar3 = *(undefined4 *)(param_2 + 2);
      *(uint *)(iVar2 + 0x1c) = *(uint *)(iVar2 + 0x1c) | 0x400000;
      *(undefined4 *)(iVar2 + 0x60) = uVar3;
      if (DAT_0091dd08 != (undefined4 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x005bf0da. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)*DAT_0091dd08)();
        return;
      }
    }
    else if (uVar1 == 0x4c53) {
      if (*(char *)(param_1 + 9) != '\0') {
        FUN_005b2bb0(param_2 + 2);
        return;
      }
    }
    else if (uVar1 == 0x6253) {
      FUN_005b91c0();
      return;
    }
  }
  else if (uVar1 == 0x6c53) {
    *(undefined4 *)(iVar2 + 0x70) = *(undefined4 *)(param_2 + 2);
  }
  else {
    if (uVar1 == 0x7453) {
      FUN_005bcd20(param_2 + 2);
      return;
    }
    if (uVar1 == 0x7753) {
      *(undefined4 *)(iVar2 + 0x74) = *(undefined4 *)(param_2 + 2);
      return;
    }
  }
  return;
}

