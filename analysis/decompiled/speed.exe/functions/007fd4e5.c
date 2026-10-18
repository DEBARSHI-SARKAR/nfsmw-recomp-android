/* speed.exe 007fd4e5 FUN_007fd4e5; analysis pseudocode, not buildable source.
 * calls 007fc5f5 FUN_007fc5f5
 * calls 007fd466 FUN_007fd466
 * calls 007fd4c3 FUN_007fd4c3
 */

undefined4 * FUN_007fd4e5(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *local_8;
  
  puVar1 = (undefined4 *)FUN_007fc5f5(0x990,0);
  local_8 = (undefined4 *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar3 = puVar1;
    for (iVar2 = 0x264; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    local_8 = puVar1;
    iVar2 = FUN_007fd466();
    if (iVar2 == 0) {
      FUN_007fd4c3(&local_8);
    }
  }
  return local_8;
}

