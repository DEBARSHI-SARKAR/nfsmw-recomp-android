/* speed.exe 007f0737 FUN_007f0737; analysis pseudocode, not buildable source.
 * calls 007edc56 FUN_007edc56
 * calls 007edca5 FUN_007edca5
 */

void FUN_007f0737(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 local_18 [2];
  undefined4 local_10;
  undefined4 local_c;
  
  local_c = 0;
  local_10 = param_2;
  local_18[0] = param_1;
  uVar1 = FUN_007edca5(param_1,100,local_18);
  FUN_007edc56(&LAB_007f058d,uVar1);
  return;
}

