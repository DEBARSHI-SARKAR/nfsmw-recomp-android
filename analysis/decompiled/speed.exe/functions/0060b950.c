/* speed.exe 0060b950 FUN_0060b950; analysis pseudocode, not buildable source.
 * calls 00607200 FUN_00607200
 * calls 0060b830 FUN_0060b830
 */

void FUN_0060b950(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_c = param_1;
  local_8 = param_3;
  local_4 = param_4;
  FUN_0060b830();
  FUN_00607200(param_2,0,&local_c);
  return;
}

