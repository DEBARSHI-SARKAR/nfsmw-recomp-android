/* speed.exe 004dce50 FUN_004dce50; analysis pseudocode, not buildable source.
 * calls 004b8db0 FUN_004b8db0
 * calls 00831667 FUN_00831667
 * calls 0083198b FUN_0083198b
 * calls 00831a8a FUN_00831a8a
 */

void __fastcall FUN_004dce50(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0086cbdb;
  local_c = ExceptionList;
  if (param_1[0x12] == 0) {
    ExceptionList = &local_c;
    FUN_004b8db0(param_1);
    iVar2 = FUN_00831667(0x2c);
    local_4 = 0;
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      puVar1 = (undefined4 *)(iVar2 + 4);
      *puVar1 = 0;
      *(undefined4 *)(iVar2 + 8) = 0;
      *(undefined4 *)(iVar2 + 0xc) = 0;
      *(undefined4 *)(iVar2 + 0x10) = 0;
      *(undefined4 *)(iVar2 + 0x14) = 0;
      *(undefined4 *)(iVar2 + 0x18) = 0;
      *(undefined4 *)(iVar2 + 0x1c) = 25000;
      *(undefined4 *)(iVar2 + 0x20) = 0;
      *(undefined4 *)(iVar2 + 0x24) = 0x7fff;
      *(undefined4 *)(iVar2 + 0x28) = 0;
      iVar3 = FUN_00831a8a(&DAT_009147e4,puVar1,iVar2);
      if (iVar3 < 0) {
        FUN_0083198b(&PTR_s_FX_Weather_008f0318);
        FUN_00831a8a(&DAT_009147e4,puVar1,iVar2);
      }
    }
    param_1[0x12] = iVar2;
    *(undefined1 *)(param_1 + 0x11) = 0;
    ExceptionList = local_c;
    return;
  }
  ExceptionList = &local_c;
  (**(code **)(*param_1 + 0x20))();
  *(undefined1 *)(param_1 + 0x11) = 0;
  ExceptionList = local_c;
  return;
}

