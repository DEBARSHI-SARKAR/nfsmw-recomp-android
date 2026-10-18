/* speed.exe 0051a2f0 FUN_0051a2f0; analysis pseudocode, not buildable source.
 * calls 007c90a0 `eh_vector_constructor_iterator'
 */

undefined1 * __fastcall FUN_0051a2f0(undefined1 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0086e3d9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  _eh_vector_constructor_iterator_
            (param_1 + 0x30,0x30,3,(_func_void_void_ptr *)&LAB_0050e0d0,
             (_func_void_void_ptr *)&DAT_0050e0f0);
  local_4 = 0;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  *(undefined4 *)(param_1 + 0xc4) = 0;
  *(undefined4 *)(param_1 + 200) = 0;
  *(undefined4 *)(param_1 + 0xcc) = 0;
  *(undefined4 *)(param_1 + 0xd0) = 0;
  *(undefined4 *)(param_1 + 0xd4) = 0;
  *(undefined4 *)(param_1 + 0xd8) = 0;
  *(undefined4 *)(param_1 + 0xdc) = 0;
  _eh_vector_constructor_iterator_
            (param_1 + 0xe0,0x30,3,(_func_void_void_ptr *)&LAB_0050e0d0,
             (_func_void_void_ptr *)&DAT_0050e0f0);
  local_4 = CONCAT31(local_4._1_3_,1);
  *(undefined4 *)(param_1 + 0x170) = 0;
  *(undefined4 *)(param_1 + 0x174) = 0;
  *(undefined4 *)(param_1 + 0x178) = 0;
  *(undefined4 *)(param_1 + 0x17c) = 0;
  *(undefined4 *)(param_1 + 0x180) = 0;
  *(undefined4 *)(param_1 + 0x184) = 0;
  *(undefined4 *)(param_1 + 0x188) = 0;
  *(undefined4 *)(param_1 + 0x18c) = 0;
  _eh_vector_constructor_iterator_
            (param_1 + 400,0x30,3,(_func_void_void_ptr *)&LAB_0050e0d0,
             (_func_void_void_ptr *)&DAT_0050e0f0);
  *(undefined4 *)(param_1 + 0x220) = 0;
  *param_1 = 0;
  ExceptionList = local_c;
  return param_1;
}

