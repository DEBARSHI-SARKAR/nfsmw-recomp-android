/* speed.exe 005d8c40 FUN_005d8c40; analysis pseudocode, not buildable source.
 * calls 00652ad0 _malloc
 */

undefined4 * FUN_005d8c40(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = _malloc(0x14);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = param_1;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    return puVar1;
  }
  return (undefined4 *)0x0;
}

