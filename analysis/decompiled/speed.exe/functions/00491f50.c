/* speed.exe 00491f50 FUN_00491f50; analysis pseudocode, not buildable source.
 * calls 00491e90 FUN_00491e90
 */

undefined4 FUN_00491f50(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  char cVar1;
  undefined1 local_10 [8];
  undefined4 local_8;
  
  local_8 = 0;
  cVar1 = FUN_00491e90(param_1,param_2,local_10);
  if (cVar1 != '\0') {
    *param_3 = local_8;
    return 1;
  }
  return 0;
}

