/* speed.exe 00622b60 FUN_00622b60; analysis pseudocode, not buildable source.
 * calls 00447390 FUN_00447390
 */

undefined4 * __thiscall
FUN_00622b60(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00877008;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  param_1[1] = 0x20;
  param_1[3] = param_3;
  local_4 = 0;
  *param_1 = &PTR_LAB_008a6ef8;
  param_1[2] = param_2;
  param_1[4] = param_4;
  param_1[5] = param_5;
  if ((-1 < param_2) && (param_2 < 4)) {
    FUN_00447390(param_2,param_3,param_4,param_5);
  }
  ExceptionList = local_c;
  return param_1;
}

