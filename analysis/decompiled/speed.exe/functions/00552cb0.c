/* speed.exe 00552cb0 FUN_00552cb0; analysis pseudocode, not buildable source.
 * calls 00530c10 FUN_00530c10
 * calls 00651550 FUN_00651550
 * calls 005488b0 FUN_005488b0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00552cb0(int param_1,float param_2)

{
  int iVar1;
  int iVar2;
  float local_8;
  float local_4;
  
  iVar1 = *(int *)(param_1 + 0x168);
  if (param_2 == -NAN) {
    iVar2 = iVar1 + -1;
    if (iVar1 + -1 < 1) {
      iVar2 = 0;
    }
  }
  else {
    iVar2 = iVar1;
    if ((param_2 == 1.4013e-45) && (iVar2 = iVar1 + 1, 2 < iVar2)) {
      iVar2 = 3;
    }
  }
  if (iVar2 != iVar1) {
    *(int *)(param_1 + 0x168) = iVar2;
    FUN_005488b0();
    param_2 = 1.0;
    if (iVar2 == 1) {
      param_2 = 2.0;
    }
    else if (iVar2 == 2) {
      param_2 = 3.3;
    }
    else if (iVar2 == 3) {
      param_2 = 5.0;
    }
    local_8 = _DAT_0089096c / param_2;
    local_4 = local_8;
    FUN_00651550(&local_8);
    FUN_00530c10(param_2);
    if (*(uint *)(param_1 + 0x164) < 2) {
      *(undefined1 *)(*(int *)(DAT_0091cf90 + 0x10) + 0x44) = *(undefined1 *)(param_1 + 0x168);
    }
    else if (*(uint *)(param_1 + 0x164) == 3) {
      *(undefined1 *)(*(int *)(DAT_0091cf90 + 0x10) + 0x45) = *(undefined1 *)(param_1 + 0x168);
      return;
    }
  }
  return;
}

