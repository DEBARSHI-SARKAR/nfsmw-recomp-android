/* speed.exe 0083193c FUN_0083193c; analysis pseudocode, not buildable source.
 */

undefined4 * FUN_0083193c(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_10 = 0;
  local_c = 0;
  local_8 = 0;
  puVar1 = (undefined4 *)(**(code **)*param_1)(4,&local_10);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &PTR_FUN_008c622c;
    return puVar1;
  }
  return (undefined4 *)0x0;
}

