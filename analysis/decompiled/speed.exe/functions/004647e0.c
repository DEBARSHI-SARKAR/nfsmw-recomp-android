/* speed.exe 004647e0 FUN_004647e0; analysis pseudocode, not buildable source.
 * calls 00462a80 FUN_00462a80
 */

undefined4 FUN_004647e0(undefined4 param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 local_10;
  int local_c;
  undefined1 local_8;
  undefined4 local_4;
  
  if (param_2 < 1) {
    return 0;
  }
  local_c = param_2;
  local_8 = 0;
  local_4 = 0;
  local_10 = param_1;
  uVar1 = FUN_00462a80(&local_10,param_3,&stack0x00000010);
  return uVar1;
}

