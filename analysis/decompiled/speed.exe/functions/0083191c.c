/* speed.exe 0083191c FUN_0083191c; analysis pseudocode, not buildable source.
 */

undefined4 * FUN_0083191c(int *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(**(code **)(*param_1 + 4))(4,"CsisAlloc",1);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &PTR_LAB_008c6218;
    return puVar1;
  }
  return (undefined4 *)0x0;
}

