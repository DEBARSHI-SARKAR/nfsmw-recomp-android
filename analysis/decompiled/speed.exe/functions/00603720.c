/* speed.exe 00603720 FUN_00603720; analysis pseudocode, not buildable source.
 * calls 00602bb0 FUN_00602bb0
 * calls 0042e340 FUN_0042e340
 * calls 007c90a0 `eh_vector_constructor_iterator'
 * calls 005d8660 FUN_005d8660
 * calls 006e8de0 FUN_006e8de0
 * calls 005dc1a0 FUN_005dc1a0
 * calls 005fe3e0 FUN_005fe3e0
 * calls 005e3980 FUN_005e3980
 * calls 005ffd80 FUN_005ffd80
 */

undefined4 * __fastcall FUN_00603720(undefined4 *param_1)

{
  undefined1 uVar1;
  undefined4 uVar2;
  float10 fVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_008762fa;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_005d8660(1);
  local_4 = 0;
  FUN_0042e340(-(uint)(param_1 != (undefined4 *)0x0) & (uint)(param_1 + 2));
  local_4._0_1_ = 1;
  *param_1 = &PTR_FUN_008a3a60;
  _eh_vector_constructor_iterator_
            (param_1 + 6,0x194,0x10,FUN_005eb460,(_func_void_void_ptr *)&DAT_005e3010);
  local_4._0_1_ = 2;
  param_1[0x65d] = 0;
  fVar3 = (float10)FUN_006e8de0();
  param_1[0x65c] = (float)fVar3;
  param_1[0x66b] = 0;
  param_1[0x66c] = 0;
  param_1[0x66d] = 0;
  uVar1 = *(undefined1 *)(*(int *)(DAT_0091cf90 + 0x10) + 0xb0);
  param_1[0x66e] = 0;
  param_1[0x664] = 0;
  param_1[0x665] = 0;
  *(undefined1 *)(param_1 + 0x657) = 0;
  *(undefined1 *)((int)param_1 + 0x198a) = 0;
  param_1[0x65a] = 0;
  param_1[0x656] = 0;
  param_1[0x1141] = 0;
  param_1[0x659] = 2;
  local_4 = CONCAT31(local_4._1_3_,3);
  uVar2 = FUN_005e3980(uVar1);
  param_1[0x65b] = uVar2;
  *(undefined1 *)(param_1 + 0x666) = 0;
  param_1[0x668] = 0;
  param_1[0x1121] = 0;
  param_1[0x1122] = 0;
  param_1[0x1123] = 0;
  *(undefined1 *)(param_1 + 0x1152) = 0;
  *(undefined1 *)((int)param_1 + 0x4549) = 0;
  param_1[0x1153] = 0;
  param_1[0x1154] = 0;
  *(undefined1 *)(param_1 + 0x669) = 0;
  *(undefined1 *)(param_1 + 0x1155) = 0;
  param_1[0x658] = 1;
  *(undefined1 *)((int)param_1 + 0x19a5) = 0;
  param_1[0x667] = 0;
  *(undefined1 *)(param_1 + 0x1124) = 0;
  FUN_005ffd80();
  FUN_005dc1a0();
  param_1[0x1125] = 0x3851b717;
  param_1[0x1126] = 0x3a83126f;
  param_1[0x1129] = 2;
  param_1[0x112b] = 0x3e4ccccd;
  param_1[0x112a] = 0x3e4ccccd;
  param_1[0x1135] = 2;
  param_1[0x1137] = 0x447a0000;
  param_1[0x1136] = 0x447a0000;
  if (*(int *)(DAT_0091e004 + 0x2c) == 0) {
    FUN_00602bb0(uVar1);
    FUN_005fe3e0();
  }
  ExceptionList = local_c;
  return param_1;
}

