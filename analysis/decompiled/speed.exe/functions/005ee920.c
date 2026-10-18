/* speed.exe 005ee920 FUN_005ee920; analysis pseudocode, not buildable source.
 * calls 004258d0 FUN_004258d0
 * calls 005d5a50 FUN_005d5a50
 * calls 005d0370 FUN_005d0370
 * calls 005d59e0 FUN_005d59e0
 * calls 00753650 FUN_00753650
 * calls 005094c0 FUN_005094c0
 * calls 004ff180 FUN_004ff180
 * calls 007c8f50 `eh_vector_destructor_iterator'
 * calls 00463ca0 FUN_00463ca0
 */

void __fastcall FUN_005ee920(undefined4 *param_1)

{
  int iVar1;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_00875606;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_008a3a60;
  iVar1 = param_1[0x664];
  local_4 = 3;
  if (iVar1 != 0) {
    FUN_00753650();
    FUN_00463ca0(DAT_009b0a2c,iVar1);
    param_1[0x664] = 0;
  }
  if (param_1[0x665] != 0) {
    FUN_004ff180();
    iVar1 = param_1[0x665];
    if (iVar1 != 0) {
      FUN_005094c0();
      FUN_00463ca0(DAT_00916068,iVar1);
    }
    param_1[0x665] = 0;
  }
  iVar1 = param_1[0x66b];
  local_4._0_1_ = 2;
  if (iVar1 != 0) {
    FUN_005d0370(iVar1,(param_1[0x66d] - iVar1 >> 2) * 4,0);
  }
  param_1[0x66b] = 0;
  param_1[0x66c] = 0;
  param_1[0x66d] = 0;
  local_4._0_1_ = 1;
  _eh_vector_destructor_iterator_(param_1 + 6,0x194,0x10,(_func_void_void_ptr *)&DAT_005e3010);
  local_4 = (uint)local_4._1_3_ << 8;
  *param_1 = &PTR_FUN_0089187c;
  FUN_004258d0();
  *param_1 = &PTR_FUN_00890970;
  FUN_005d5a50(param_1);
  local_4 = 0xffffffff;
  FUN_005d59e0();
  ExceptionList = pvStack_c;
  return;
}

