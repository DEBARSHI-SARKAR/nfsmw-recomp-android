/* speed.exe 00545c50 FUN_00545c50; analysis pseudocode, not buildable source.
 * calls 005b8550 FUN_005b8550
 * calls 00529310 FUN_00529310
 * calls 00516af0 FUN_00516af0
 * calls 00527df0 FUN_00527df0
 * calls 005295f0 FUN_005295f0
 * calls 00588c90 FUN_00588c90
 * calls 00514c70 FUN_00514c70
 * calls 00529c10 FUN_00529c10
 * calls 00529f10 FUN_00529f10
 * calls 0052a290 FUN_0052a290
 * calls 005a5ea0 FUN_005a5ea0
 */

void __fastcall FUN_00545c50(int param_1)

{
  int iVar1;
  
  FUN_00588c90();
  *(undefined1 *)(param_1 + 0x125) = 0;
  *(undefined1 *)(param_1 + 0x126) = *(undefined1 *)(*(int *)(DAT_0091cf90 + 0x10) + 0x38);
  if (((*(int *)(param_1 + 0x10) == 0) ||
      (iVar1 = FUN_00516af0(*(int *)(param_1 + 0x10)), iVar1 == 0)) ||
     (iVar1 = FUN_005b8550(0xe54c30be), iVar1 == 0)) {
    iVar1 = 0;
  }
  FUN_00514c70(iVar1);
  if (((*(int *)(param_1 + 0x10) == 0) ||
      (iVar1 = FUN_00516af0(*(int *)(param_1 + 0x10)), iVar1 == 0)) ||
     (iVar1 = FUN_005b8550(0x8e1bea84), iVar1 == 0)) {
    iVar1 = 0;
  }
  FUN_00514c70(iVar1);
  if (((*(int *)(param_1 + 0x10) == 0) ||
      (iVar1 = FUN_00516af0(*(int *)(param_1 + 0x10)), iVar1 == 0)) ||
     (iVar1 = FUN_005b8550(0x608bb8c8), iVar1 == 0)) {
    iVar1 = 0;
  }
  FUN_00514c70(iVar1);
  if (((*(int *)(param_1 + 0x10) == 0) ||
      (iVar1 = FUN_00516af0(*(int *)(param_1 + 0x10)), iVar1 == 0)) ||
     (iVar1 = FUN_005b8550(0x444969fd), iVar1 == 0)) {
    iVar1 = 0;
  }
  FUN_00514c70(iVar1);
  if (((*(int *)(param_1 + 0x10) == 0) ||
      (iVar1 = FUN_00516af0(*(int *)(param_1 + 0x10)), iVar1 == 0)) ||
     (iVar1 = FUN_005b8550(0x444969fe), iVar1 == 0)) {
    iVar1 = 0;
  }
  FUN_00514c70(iVar1);
  switch(*(undefined4 *)(*(int *)(DAT_0091cf90 + 0x10) + 0x24)) {
  case 0:
    FUN_00529310();
    FUN_005a5ea0(0);
    return;
  case 1:
    FUN_005295f0();
    FUN_005a5ea0(0);
    return;
  case 3:
    FUN_00529c10();
    FUN_005a5ea0(0);
    return;
  case 4:
    FUN_00529f10();
    FUN_00527df0(*(undefined4 *)(param_1 + 0x10),0x444969fd);
    FUN_00527df0(*(undefined4 *)(param_1 + 0x10),0x444969fe);
    FUN_005a5ea0(0);
    return;
  case 9:
    FUN_0052a290();
  }
  FUN_005a5ea0(0);
  return;
}

