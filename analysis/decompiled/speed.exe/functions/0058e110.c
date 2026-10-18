/* speed.exe 0058e110 FUN_0058e110; analysis pseudocode, not buildable source.
 * calls 007c8f50 `eh_vector_destructor_iterator'
 * calls 0079d750 FUN_0079d750
 * calls 0078bba0 FUN_0078bba0
 * calls 0079ca30 FUN_0079ca30
 * calls 0078b260 FUN_0078b260
 * calls 0056c6e0 FUN_0056c6e0
 * calls 00572360 FUN_00572360
 * calls 00794f80 FUN_00794f80
 * calls 00527a60 FUN_00527a60
 */

void __fastcall FUN_0058e110(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_0087255c;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_008a1708;
  local_4 = 2;
  if (((*(uint *)(DAT_0091cf90 + 300) >> 3 & 1) != 0) ||
     ((*(uint *)(DAT_0091cf90 + 300) >> 6 & 1) != 0)) {
    uVar3 = 0;
    uVar2 = 0;
    FUN_0079ca30(0,0);
    FUN_0078bba0(uVar2,uVar3);
    iVar1 = FUN_0078b260();
    if ((iVar1 == 0) && (1 < *(int *)(DAT_0091cf90 + 0x19c))) {
      FUN_00794f80();
      FUN_0079d750();
    }
    if (param_1[0x71] != 0) {
      FUN_0056c6e0(param_1[0x71]);
      param_1[0x71] = 0;
    }
    *(undefined4 *)(DAT_00919690 + 0xcc) = 0x3f800000;
  }
  local_4._0_1_ = 1;
  param_1[0x6b] = &PTR_FUN_008a15bc;
  FUN_00527a60();
  local_4 = (uint)local_4._1_3_ << 8;
  _eh_vector_destructor_iterator_(param_1 + 0xb,0x18,0x10,FUN_0058c610);
  local_4 = 0xffffffff;
  FUN_00572360();
  ExceptionList = pvStack_c;
  return;
}

