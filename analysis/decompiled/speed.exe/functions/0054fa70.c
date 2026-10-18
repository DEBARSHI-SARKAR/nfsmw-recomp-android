/* speed.exe 0054fa70 FUN_0054fa70; analysis pseudocode, not buildable source.
 * calls 005b8550 FUN_005b8550
 * calls 00527790 FUN_00527790
 * calls 00516af0 FUN_00516af0
 * calls 005b1360 FUN_005b1360
 * calls 0054f9a0 FUN_0054f9a0
 * calls 00527740 FUN_00527740
 * calls 005b8400 FUN_005b8400
 */

void __thiscall FUN_0054fa70(int param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  
  if (param_2 != 0) {
    FUN_00527740(param_2);
    puVar1 = (uint *)(*(int *)(param_1 + 0x30) + 0x1c);
    *puVar1 = *puVar1 | 2;
    if ((((*(int *)(param_1 + 0x10) != 0) &&
         (iVar2 = FUN_00516af0(*(int *)(param_1 + 0x10)), iVar2 != 0)) &&
        (iVar2 = FUN_005b8550(0x47ff4e7c), iVar2 != 0)) &&
       (iVar2 = FUN_005b1360(0xe18da018), iVar2 != 0)) {
      FUN_005b8400(iVar2,0);
      *(undefined4 *)(iVar2 + 0x10) = 0;
    }
    return;
  }
  FUN_00527790(&DAT_00890978);
  FUN_0054f9a0();
  return;
}

