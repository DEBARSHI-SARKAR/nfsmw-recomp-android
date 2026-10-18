/* speed.exe 0062b890 FUN_0062b890; analysis pseudocode, not buildable source.
 * calls 00629a90 FUN_00629a90
 */

undefined4 * __thiscall
FUN_0062b890(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  undefined4 uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00877958;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  param_1[1] = 0x20;
  local_4 = 0;
  *param_1 = &PTR_LAB_008a7aac;
  uVar1 = FUN_00629a90(param_1,param_2);
  param_1[2] = uVar1;
  param_1[3] = param_3;
  param_1[5] = param_5;
  param_1[4] = param_4;
  ExceptionList = local_c;
  return param_1;
}

