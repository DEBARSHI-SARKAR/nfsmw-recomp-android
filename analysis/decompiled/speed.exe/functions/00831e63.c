/* speed.exe 00831e63 FUN_00831e63; analysis pseudocode, not buildable source.
 * calls 00832d6d FUN_00832d6d
 */

void FUN_00831e63(void)

{
  undefined4 *puVar1;
  undefined2 *puVar2;
  
  puVar1 = &DAT_009c2ac0;
  do {
    puVar1[-8] = 0;
    *puVar1 = 0xffffffff;
    puVar1 = puVar1 + 1;
  } while ((int)puVar1 < 0x9c2ae0);
  puVar2 = &DAT_009c2ae4;
  do {
    *(undefined1 *)(puVar2 + 1) = 0;
    *puVar2 = 0;
    *(undefined4 *)(puVar2 + -2) = 0;
    *(undefined4 *)(puVar2 + 2) = 0;
    *(undefined1 *)((int)puVar2 + 3) = 0xff;
    if (*(int *)(puVar2 + 4) != 0) {
      FUN_00832d6d(*(int *)(puVar2 + 4));
    }
    *(undefined4 *)(puVar2 + 4) = 0;
    puVar2 = puVar2 + 8;
  } while ((int)puVar2 < 0x9c2be4);
  DAT_009c2a1c = 0;
  DAT_009c29f0 = 0;
  return;
}

