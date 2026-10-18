/* speed.exe 004e6a00 FUN_004e6a00; analysis pseudocode, not buildable source.
 * calls 004b8db0 FUN_004b8db0
 * calls 00831667 FUN_00831667
 * calls 0083198b FUN_0083198b
 * calls 00831782 FUN_00831782
 * calls 00831682 FUN_00831682
 * calls 00831a8a FUN_00831a8a
 */

void __fastcall FUN_004e6a00(int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0086cefb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined1 *)(*(int *)(*(int *)(param_1 + 0x14) + 0x34) + 0xb0) = 0;
  piVar2 = *(int **)(param_1 + 0x2c);
  if (piVar2 != (int *)0x0) {
    if (*piVar2 != 0) {
      FUN_00831782();
    }
    FUN_00831682(piVar2);
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  FUN_004b8db0(param_1);
  iVar3 = FUN_00831667(0x24);
  local_4 = 0;
  if (iVar3 == 0) {
    iVar3 = 0;
  }
  else {
    puVar1 = (undefined4 *)(iVar3 + 4);
    *puVar1 = 0;
    *(undefined4 *)(iVar3 + 8) = 0;
    *(undefined4 *)(iVar3 + 0xc) = 0;
    *(undefined4 *)(iVar3 + 0x10) = 0;
    *(undefined4 *)(iVar3 + 0x14) = 25000;
    *(undefined4 *)(iVar3 + 0x18) = 0;
    *(undefined4 *)(iVar3 + 0x1c) = 0x7fff;
    *(undefined4 *)(iVar3 + 0x20) = 0;
    iVar4 = FUN_00831a8a(&DAT_00914894,puVar1,iVar3);
    if (iVar4 < 0) {
      FUN_0083198b(&PTR_s_FX_PURGE_008f02e0);
      FUN_00831a8a(&DAT_00914894,puVar1,iVar3);
    }
  }
  *(int *)(param_1 + 0x2c) = iVar3;
  if (DAT_009885c8 == 0) {
    *(undefined4 *)(*(int *)(param_1 + 0xc) + 8) = 0x7fff;
    ExceptionList = local_c;
    return;
  }
  *(undefined4 *)(*(int *)(param_1 + 0xc) + 8) = 0;
  ExceptionList = local_c;
  return;
}

