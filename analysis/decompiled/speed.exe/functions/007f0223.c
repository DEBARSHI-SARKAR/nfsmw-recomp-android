/* speed.exe 007f0223 FUN_007f0223; analysis pseudocode, not buildable source.
 * calls 007edc56 FUN_007edc56
 * calls 007edca5 FUN_007edca5
 */

void FUN_007f0223(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 local_18 [3];
  undefined4 local_c;
  
  local_c = 0;
  local_18[0] = param_1;
  uVar1 = FUN_007edca5(param_1,100,local_18);
  FUN_007edc56(FUN_007f01b5,uVar1);
  return;
}

