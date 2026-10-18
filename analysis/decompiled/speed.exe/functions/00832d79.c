/* speed.exe 00832d79 FUN_00832d79; analysis pseudocode, not buildable source.
 */

void FUN_00832d79(void)

{
  undefined4 *puVar1;
  
  puVar1 = &DAT_009c2a24;
  do {
    *(undefined2 *)(puVar1 + -1) = 0xffff;
    *puVar1 = 0;
    puVar1 = puVar1 + 2;
  } while ((int)puVar1 < 0x9c2a64);
  return;
}

