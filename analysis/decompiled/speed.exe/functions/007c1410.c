/* speed.exe 007c1410 FUN_007c1410; analysis pseudocode, not buildable source.
 * calls 00586290 FUN_00586290
 * calls 007bf460 FUN_007bf460
 * calls 0055a280 FUN_0055a280
 */

undefined4 * __thiscall FUN_007c1410(undefined4 *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00883ac1;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00586290(param_2);
  local_4 = 0;
  *param_1 = &PTR_FUN_008b7e2c;
  FUN_0055a280();
  puVar1 = param_1 + 0x3f;
  *puVar1 = puVar1;
  param_1[0x40] = puVar1;
  local_4 = CONCAT31(local_4._1_3_,2);
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  FUN_007bf460();
  ExceptionList = local_c;
  return param_1;
}

