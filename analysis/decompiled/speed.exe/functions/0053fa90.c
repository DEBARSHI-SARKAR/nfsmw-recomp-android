/* speed.exe 0053fa90 FUN_0053fa90; analysis pseudocode, not buildable source.
 * calls 005b8550 FUN_005b8550
 * calls 0053f560 FUN_0053f560
 * calls 00516af0 FUN_00516af0
 * calls 005b1360 FUN_005b1360
 * calls 005b8400 FUN_005b8400
 * calls 00513b50 FUN_00513b50
 */

void __thiscall FUN_0053fa90(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  
  FUN_0053f560(0);
  if (param_3 == 0) {
    if ((((*(int *)(param_1 + 0x10) != 0) &&
         (iVar1 = FUN_00516af0(*(int *)(param_1 + 0x10)), iVar1 != 0)) &&
        (iVar1 = FUN_005b8550(0x47ff4e7c), iVar1 != 0)) &&
       (iVar1 = FUN_005b1360(0xde6eff34), iVar1 != 0)) {
      FUN_005b8400(iVar1,0);
      *(undefined4 *)(iVar1 + 0x10) = 0;
    }
  }
  else if ((*(char *)(param_1 + 0xf6) == '\0') || (param_3 != -0x6c)) {
    FUN_00513b50(*(undefined4 *)(param_1 + 0x10),param_3);
    DAT_0091ca90 = 1;
    return;
  }
  DAT_0091ca90 = 1;
  return;
}

