/* speed.exe 00551e90 FUN_00551e90; analysis pseudocode, not buildable source.
 * calls 005b8550 FUN_005b8550
 * calls 00516af0 FUN_00516af0
 * calls 0052fa50 FUN_0052fa50
 * calls 00514c70 FUN_00514c70
 * calls 00530240 FUN_00530240
 */

void __fastcall FUN_00551e90(int param_1)

{
  int iVar1;
  
  if ((((*(int *)(param_1 + 0x10) == 0) ||
       (iVar1 = FUN_00516af0(*(int *)(param_1 + 0x10)), iVar1 == 0)) ||
      (iVar1 = FUN_005b8550(0xc1f62308), iVar1 == 0)) || (*(int *)(iVar1 + 0x18) != 1)) {
    iVar1 = 0;
  }
  *(int *)(param_1 + 0x30) = iVar1;
  if (((*(int *)(param_1 + 0x10) == 0) ||
      (iVar1 = FUN_00516af0(*(int *)(param_1 + 0x10)), iVar1 == 0)) ||
     ((iVar1 = FUN_005b8550(0xf5a2a087), iVar1 == 0 || (*(int *)(iVar1 + 0x18) != 1)))) {
    iVar1 = 0;
  }
  *(int *)(param_1 + 0x34) = iVar1;
  if (((*(int *)(param_1 + 0x10) == 0) ||
      (iVar1 = FUN_00516af0(*(int *)(param_1 + 0x10)), iVar1 == 0)) ||
     ((iVar1 = FUN_005b8550(0x2cbe1dd0), iVar1 == 0 || (*(int *)(iVar1 + 0x18) != 1)))) {
    iVar1 = 0;
  }
  *(int *)(param_1 + 0x38) = iVar1;
  *(undefined4 *)(param_1 + 0x4c) = DAT_0091ca3c;
  *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)(param_1 + 0x6c) = *(undefined4 *)(param_1 + 0x34);
  *(int *)(param_1 + 0x70) = iVar1;
  FUN_00514c70(*(undefined4 *)(param_1 + 0x30));
  FUN_00514c70(*(undefined4 *)(param_1 + 0x6c));
  FUN_00514c70(*(undefined4 *)(param_1 + 0x70));
  if (*(char *)(param_1 + 0x54) == '\0') {
    FUN_00530240();
  }
  FUN_0052fa50();
  return;
}

