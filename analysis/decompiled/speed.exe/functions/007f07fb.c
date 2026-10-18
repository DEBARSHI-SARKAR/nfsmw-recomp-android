/* speed.exe 007f07fb FUN_007f07fb; analysis pseudocode, not buildable source.
 * calls 007edc56 FUN_007edc56
 * calls 007edca5 FUN_007edca5
 */

bool FUN_007f07fb(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  local_c = 0;
  local_14 = param_2;
  local_10 = param_3;
  local_18 = param_1;
  uVar1 = FUN_007edca5(param_1,100,&local_18);
  iVar2 = FUN_007edc56(FUN_007f076a,uVar1);
  return iVar2 == 1;
}

