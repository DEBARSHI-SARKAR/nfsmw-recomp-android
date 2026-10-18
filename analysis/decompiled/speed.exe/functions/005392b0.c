/* speed.exe 005392b0 FUN_005392b0; analysis pseudocode, not buildable source.
 * calls 005b8550 FUN_005b8550
 * calls 005b8400 FUN_005b8400
 * calls 005b1360 FUN_005b1360
 * calls 00516af0 FUN_00516af0
 */

void __thiscall FUN_005392b0(int param_1,int param_2)

{
  int iVar1;
  
  if (param_2 != 1) {
    if (((((*(int *)(param_1 + 0x10) != 0) &&
          (iVar1 = FUN_00516af0(*(int *)(param_1 + 0x10)), iVar1 != 0)) &&
         (iVar1 = FUN_005b8550(*(undefined4 *)(&stack0xffffffec + param_2 * 4)), iVar1 != 0)) &&
        ((iVar1 = *(int *)(iVar1 + 0x54), iVar1 != 0 && (*(int *)(iVar1 + 0x30) == 0x16a259)))) &&
       (*(int *)(iVar1 + 0x10) <= *(int *)(iVar1 + 0xc))) {
      return;
    }
    if (((*(int *)(param_1 + 0x10) != 0) &&
        (iVar1 = FUN_00516af0(*(int *)(param_1 + 0x10)), iVar1 != 0)) &&
       ((iVar1 = FUN_005b8550(*(undefined4 *)(&stack0xffffffec + param_2 * 4)), iVar1 != 0 &&
        (iVar1 = FUN_005b1360(0x16a259), iVar1 != 0)))) {
      FUN_005b8400(iVar1,0);
      *(undefined4 *)(iVar1 + 0x10) = 0;
    }
  }
  return;
}

