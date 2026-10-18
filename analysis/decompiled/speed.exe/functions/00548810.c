/* speed.exe 00548810 FUN_00548810; analysis pseudocode, not buildable source.
 * calls 005b8550 FUN_005b8550
 * calls 00516af0 FUN_00516af0
 * calls 00531350 FUN_00531350
 * calls 00514c70 FUN_00514c70
 * calls 005486a0 FUN_005486a0
 * calls 00531060 FUN_00531060
 */

void __fastcall FUN_00548810(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x10) == 0) {
LAB_0054883a:
    iVar1 = 0;
  }
  else {
    iVar1 = FUN_00516af0(*(int *)(param_1 + 0x10));
    if (iVar1 == 0) goto LAB_0054883a;
    iVar1 = FUN_005b8550(0xa808e057);
    if (iVar1 == 0) goto LAB_0054883a;
  }
  FUN_00514c70(iVar1);
  if (*(int *)(param_1 + 0x10) != 0) {
    iVar1 = FUN_00516af0(*(int *)(param_1 + 0x10));
    if (iVar1 != 0) {
      iVar1 = FUN_005b8550(0x95fdfc4e);
      if (iVar1 != 0) goto LAB_0054886e;
    }
  }
  iVar1 = 0;
LAB_0054886e:
  FUN_00514c70(iVar1);
  FUN_005486a0(8);
  FUN_005486a0(0xc);
  FUN_005486a0(0xb);
  FUN_00531060();
  FUN_00531350();
  return;
}

