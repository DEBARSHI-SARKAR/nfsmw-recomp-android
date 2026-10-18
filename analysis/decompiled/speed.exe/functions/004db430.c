/* speed.exe 004db430 FUN_004db430; analysis pseudocode, not buildable source.
 * calls 004b8db0 FUN_004b8db0
 * calls 00831667 FUN_00831667
 * calls 0083198b FUN_0083198b
 * calls 00831a8a FUN_00831a8a
 * calls 0045ce40 FUN_0045ce40
 */

void __fastcall FUN_004db430(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0086cadb;
  local_c = ExceptionList;
  if (DAT_008f86f8 != 0) {
    ExceptionList = &local_c;
    if (*(int *)(param_1 + 0x10) != 0) {
      ExceptionList = &local_c;
      *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x3c) = 1;
    }
    *(undefined1 *)(param_1 + 0x28) = 1;
    uVar2 = FUN_0045ce40();
    *(undefined4 *)(param_1 + 0xf0) = uVar2;
    *(undefined1 *)(param_1 + 0x29) = 0;
    FUN_004b8db0(param_1);
    iVar3 = FUN_00831667(0x3c);
    local_4 = 0;
    if (iVar3 == 0) {
      iVar3 = 0;
    }
    else {
      puVar1 = (undefined4 *)(iVar3 + 4);
      *puVar1 = 0x1000;
      *(undefined4 *)(iVar3 + 8) = 0;
      *(undefined4 *)(iVar3 + 0xc) = 0;
      *(undefined4 *)(iVar3 + 0x10) = 0;
      *(undefined4 *)(iVar3 + 0x14) = 0;
      *(undefined4 *)(iVar3 + 0x18) = 0;
      *(undefined4 *)(iVar3 + 0x1c) = 0;
      *(undefined4 *)(iVar3 + 0x20) = 0;
      *(undefined4 *)(iVar3 + 0x24) = 0;
      *(undefined4 *)(iVar3 + 0x28) = 25000;
      *(undefined4 *)(iVar3 + 0x2c) = 0;
      *(undefined4 *)(iVar3 + 0x30) = 0x7fff;
      *(undefined4 *)(iVar3 + 0x34) = 0;
      *(undefined4 *)(iVar3 + 0x38) = 0xf;
      iVar4 = FUN_00831a8a(&DAT_009147fc,puVar1,iVar3);
      if (iVar4 < 0) {
        FUN_0083198b(&PTR_s_FX_WIND_008f0298);
        FUN_00831a8a(&DAT_009147fc,puVar1,iVar3);
      }
    }
    *(int *)(param_1 + 0x104) = iVar3;
    local_4 = 0xffffffff;
    (**(code **)(**(int **)(param_1 + 0x118) + 0x38))(param_1 + 0x90);
    (**(code **)(**(int **)(param_1 + 0x118) + 0x3c))(0);
    (**(code **)(**(int **)(param_1 + 0x11c) + 0x38))(param_1 + 0xa0);
    (**(code **)(**(int **)(param_1 + 0x11c) + 0x3c))(0);
    *(undefined1 *)(param_1 + 8) = 1;
  }
  ExceptionList = local_c;
  return;
}

