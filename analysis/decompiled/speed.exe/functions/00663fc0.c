/* speed.exe 00663fc0 FUN_00663fc0; analysis pseudocode, not buildable source.
 * calls 00454830 FUN_00454830
 * calls 0065ec70 FUN_0065ec70
 * calls 00663570 FUN_00663570
 */

undefined4 FUN_00663fc0(undefined4 param_1)

{
  undefined4 local_8;
  uint local_4;
  
  local_8 = FUN_00454830(param_1);
  FUN_0065ec70(&local_4,&local_8);
  if (*(int *)(local_4 + 0x10) != 0) {
    return 0;
  }
  FUN_00663570(&local_4,local_4);
  return 1;
}

