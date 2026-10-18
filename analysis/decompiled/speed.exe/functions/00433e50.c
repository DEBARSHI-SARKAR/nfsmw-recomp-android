/* speed.exe 00433e50 FUN_00433e50; analysis pseudocode, not buildable source.
 * calls 007c57d0 exception
 * calls 00430080 FUN_00430080
 */

exception * __thiscall FUN_00433e50(exception *param_1,exception *param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00868898;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  exception::exception(param_1,param_2);
  *(undefined ***)param_1 = &PTR_FUN_008bf29c;
  *(undefined4 *)(param_1 + 0x24) = 0xf;
  *(undefined4 *)(param_1 + 0x20) = 0;
  local_4 = 0;
  param_1[0x10] = (exception)0x0;
  FUN_00430080(param_2 + 0xc,0,0xffffffff);
  ExceptionList = local_c;
  return param_1;
}

