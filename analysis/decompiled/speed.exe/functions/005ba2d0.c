/* speed.exe 005ba2d0 FUN_005ba2d0; analysis pseudocode, not buildable source.
 * calls 00652ad0 _malloc
 * calls 007c90a0 `eh_vector_constructor_iterator'
 */

undefined4 * __thiscall FUN_005ba2d0(undefined4 *param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00874066;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_008a2d50;
  piVar2 = (int *)0x0;
  param_1[3] = &PTR_LAB_008a2c18;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[4] = 0;
  local_4 = 0;
  param_1[1] = param_2;
  piVar1 = _malloc(param_2 * 0x10 + 4);
  local_4 = CONCAT31(local_4._1_3_,1);
  if (piVar1 != (int *)0x0) {
    piVar2 = piVar1 + 1;
    *piVar1 = param_2;
    _eh_vector_constructor_iterator_
              (piVar2,0x10,param_2,(_func_void_void_ptr *)&LAB_005ad390,FUN_005b9540);
  }
  param_1[2] = piVar2;
  ExceptionList = local_c;
  return param_1;
}

