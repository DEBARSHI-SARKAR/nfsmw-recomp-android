/* speed.exe 005da350 FUN_005da350; analysis pseudocode, not buildable source.
 * calls 00454810 FUN_00454810
 */

undefined4 FUN_005da350(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)FUN_00454810(0x39bf8002,0);
  if (puVar2 != (undefined4 *)0x0) {
    uVar1 = *puVar2;
    *param_1 = uVar1;
    return CONCAT31((int3)((uint)uVar1 >> 8),1);
  }
  return 0;
}

