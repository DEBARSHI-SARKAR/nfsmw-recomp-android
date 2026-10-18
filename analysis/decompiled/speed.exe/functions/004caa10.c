/* speed.exe 004caa10 FUN_004caa10; analysis pseudocode, not buildable source.
 * calls 004662e0 FUN_004662e0
 * calls 007c90a0 `eh_vector_constructor_iterator'
 */

undefined4 * __fastcall FUN_004caa10(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0086c14e;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_0089766c;
  _eh_vector_constructor_iterator_
            (param_1 + 1,8,3,(_func_void_void_ptr *)&LAB_004c78c0,FUN_004c78d0);
  local_4 = CONCAT31(local_4._1_3_,1);
  DAT_009120c4 = FUN_004662e0(0x1c,0x81,"SampleWrapper SlotPool",DAT_008ee558);
  *(uint *)(DAT_009120c4 + 0x14) = *(uint *)(DAT_009120c4 + 0x14) | 1;
  *(uint *)(DAT_009120c4 + 0x14) = *(uint *)(DAT_009120c4 + 0x14) | 4;
  DAT_009120c8 = FUN_004662e0(0x6c,0x2d,"Stitch SlotPool",DAT_008ee558);
  *(uint *)(DAT_009120c8 + 0x14) = *(uint *)(DAT_009120c8 + 0x14) | 1;
  *(uint *)(DAT_009120c8 + 0x14) = *(uint *)(DAT_009120c8 + 0x14) | 4;
  ExceptionList = local_c;
  return param_1;
}

