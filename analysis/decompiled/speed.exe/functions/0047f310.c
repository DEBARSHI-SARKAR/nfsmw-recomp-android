/* speed.exe 0047f310 FUN_0047f310; analysis pseudocode, not buildable source.
 * calls 00652ad0 _malloc
 * calls 007c90a0 `eh_vector_constructor_iterator'
 */

void __fastcall FUN_0047f310(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0086a4f0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = _malloc(0x1404);
  local_4 = 0;
  if (puVar1 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = puVar1 + 1;
    *puVar1 = 0x100;
    _eh_vector_constructor_iterator_
              (puVar2,0x14,0x100,(_func_void_void_ptr *)&LAB_0047cac0,
               (_func_void_void_ptr *)&LAB_0047cae0);
  }
  local_4 = 0xffffffff;
  *param_1 = puVar2;
  puVar1 = _malloc(0xcc);
  local_4 = 1;
  if (puVar1 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = puVar1 + 1;
    *puVar1 = 10;
    _eh_vector_constructor_iterator_
              (puVar2,0x14,10,(_func_void_void_ptr *)&LAB_0047cac0,
               (_func_void_void_ptr *)&LAB_0047cae0);
  }
  local_4 = 0xffffffff;
  param_1[1] = puVar2;
  puVar1 = _malloc(0x3ec);
  local_4 = 2;
  if (puVar1 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = puVar1 + 1;
    *puVar1 = 0x32;
    _eh_vector_constructor_iterator_
              (puVar2,0x14,0x32,(_func_void_void_ptr *)&LAB_0047cac0,
               (_func_void_void_ptr *)&LAB_0047cae0);
  }
  local_4 = 0xffffffff;
  param_1[2] = puVar2;
  puVar1 = _malloc(0x3ec);
  local_4 = 3;
  if (puVar1 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = puVar1 + 1;
    *puVar1 = 0x32;
    _eh_vector_constructor_iterator_
              (puVar2,0x14,0x32,(_func_void_void_ptr *)&LAB_0047cac0,
               (_func_void_void_ptr *)&LAB_0047cae0);
  }
  local_4 = 0xffffffff;
  param_1[3] = puVar2;
  puVar1 = _malloc(0xc);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
    puVar2 = puVar1 + 1;
    *puVar2 = puVar2;
    puVar1[2] = puVar2;
    param_1[4] = puVar1;
    ExceptionList = local_c;
    return;
  }
  param_1[4] = 0;
  ExceptionList = local_c;
  return;
}

