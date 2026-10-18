/* speed.exe 0062d060 FUN_0062d060; analysis pseudocode, not buildable source.
 * calls 005d59f0 FUN_005d59f0
 */

undefined4 * __thiscall FUN_0062d060(undefined4 *param_1,int *param_2)

{
  int *piVar1;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00877b68;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  param_1[1] = 0x10;
  *param_1 = &PTR_LAB_008a7ac4;
  param_1[2] = param_2;
  local_4 = 0;
  (**(code **)(*param_2 + 0x20))();
  piVar1 = (int *)FUN_005d59f0(&LAB_00565040);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))();
  }
  ExceptionList = pvStack_c;
  return param_1;
}

