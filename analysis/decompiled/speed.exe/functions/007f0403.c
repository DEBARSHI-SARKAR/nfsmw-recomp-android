/* speed.exe 007f0403 FUN_007f0403; analysis pseudocode, not buildable source.
 * calls 007edc56 FUN_007edc56
 * calls 007edca5 FUN_007edca5
 */

void FUN_007f0403(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_14 = param_2;
  local_10 = param_3;
  local_8 = param_4;
  local_18 = param_1;
  local_c = 1;
  uVar1 = FUN_007edca5(param_1,100,&local_18);
  FUN_007edc56(FUN_007f03b7,uVar1);
  return;
}

