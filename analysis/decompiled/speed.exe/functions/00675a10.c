/* speed.exe 00675a10 FUN_00675a10; analysis pseudocode, not buildable source.
 * calls 005d29d0 FUN_005d29d0
 */

void FUN_00675a10(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_005d29d0(0x18,0);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
  }
  if (puVar1 + 1 != (undefined4 *)0x0) {
    puVar1[1] = 0;
  }
  if (puVar1 + 2 != (undefined4 *)0x0) {
    puVar1[2] = 0;
  }
  *(undefined1 *)(puVar1 + 5) = 1;
  *(undefined1 *)((int)puVar1 + 0x15) = 0;
  return;
}

