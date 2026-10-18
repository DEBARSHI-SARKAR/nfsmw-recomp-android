/* speed.exe 004e6ed0 FUN_004e6ed0; analysis pseudocode, not buildable source.
 * calls 00831667 FUN_00831667
 * calls 0083198b FUN_0083198b
 * calls 004ae980 FUN_004ae980
 * calls 00831782 FUN_00831782
 * calls 004b02b0 FUN_004b02b0
 * calls 00831682 FUN_00831682
 * calls 00831a8a FUN_00831a8a
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_004e6ed0(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0086cf9b;
  local_c = ExceptionList;
  piVar1 = *(int **)(param_1 + 0x2c);
  ExceptionList = &local_c;
  if (piVar1 != (int *)0x0) {
    ExceptionList = &local_c;
    if (*piVar1 != 0) {
      ExceptionList = &local_c;
      FUN_00831782();
    }
    FUN_00831682(piVar1);
  }
  *(undefined4 *)(param_1 + 0x2c) = 0;
  FUN_004ae980("AUD: Traffic Horn");
  iVar2 = FUN_00831667(0x28);
  local_4 = 0;
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    if (param_2 < 0) {
      param_2 = 0;
    }
    else if (0x32 < param_2) {
      param_2 = 0x32;
    }
    piVar1 = (int *)(iVar2 + 4);
    *piVar1 = param_2;
    *(undefined4 *)(iVar2 + 8) = 0;
    *(undefined4 *)(iVar2 + 0xc) = 0;
    *(undefined4 *)(iVar2 + 0x10) = 0;
    *(undefined4 *)(iVar2 + 0x14) = 0;
    *(undefined4 *)(iVar2 + 0x18) = 25000;
    *(undefined4 *)(iVar2 + 0x1c) = 0;
    *(undefined4 *)(iVar2 + 0x20) = 0x7fff;
    *(undefined4 *)(iVar2 + 0x24) = 0;
    iVar3 = FUN_00831a8a(&DAT_00914924,piVar1,iVar2);
    if (iVar3 < 0) {
      FUN_0083198b(&PTR_s_ENV_STATIC_008f0288);
      FUN_00831a8a(&DAT_00914924,piVar1,iVar2);
    }
  }
  *(int *)(param_1 + 0x2c) = iVar2;
  _DAT_00914324 = *(undefined4 *)(*(int *)(param_1 + 0x14) + 0x3c);
  local_4 = 0xffffffff;
  *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(*(int *)(param_1 + 0x14) + 0x3c);
  FUN_004b02b0(0x3f800000,0x3f800000,1,0);
  *(undefined1 *)(param_1 + 100) = 0;
  ExceptionList = local_c;
  return;
}

