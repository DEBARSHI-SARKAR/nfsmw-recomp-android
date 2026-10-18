/* speed.exe 005d9860 FUN_005d9860; analysis pseudocode, not buildable source.
 * calls 00454810 FUN_00454810
 */

undefined4 FUN_005d9860(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)FUN_00454810(0x9a4a020a,0);
  if (puVar2 != (undefined4 *)0x0) {
    *param_1 = *puVar2;
    uVar1 = puVar2[1];
    param_1[1] = uVar1;
    return CONCAT31((int3)((uint)uVar1 >> 8),1);
  }
  return 0;
}

