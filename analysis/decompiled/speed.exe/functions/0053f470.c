/* speed.exe 0053f470 FUN_0053f470; analysis pseudocode, not buildable source.
 * calls 005b8550 FUN_005b8550
 * calls 00516af0 FUN_00516af0
 * calls 005b1360 FUN_005b1360
 * calls 0057e8c0 FUN_0057e8c0
 * calls 005b8400 FUN_005b8400
 */

void __fastcall FUN_0053f470(int param_1)

{
  int iVar1;
  
  if ((((*(int *)(param_1 + 0x10) != 0) &&
       (iVar1 = FUN_00516af0(*(int *)(param_1 + 0x10)), iVar1 != 0)) &&
      (iVar1 = FUN_005b8550(0x6042a783), iVar1 != 0)) &&
     (iVar1 = FUN_005b1360(0x1ca7c0), iVar1 != 0)) {
    FUN_005b8400(iVar1,0);
    *(undefined4 *)(iVar1 + 0x10) = 0;
  }
  if (((*(int *)(param_1 + 0x10) == 0) ||
      (iVar1 = FUN_00516af0(*(int *)(param_1 + 0x10)), iVar1 == 0)) ||
     ((iVar1 = FUN_005b8550(0x5b9d88b9), iVar1 == 0 || (*(int *)(iVar1 + 0x18) != 2)))) {
    iVar1 = 0;
  }
  FUN_0057e8c0(&DAT_00890978);
  *(uint *)(iVar1 + 0x1c) = *(uint *)(iVar1 + 0x1c) | 0x400000;
  return;
}

