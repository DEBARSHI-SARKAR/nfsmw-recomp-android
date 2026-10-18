/* speed.exe 004fc7b0 FUN_004fc7b0; analysis pseudocode, not buildable source.
 */

void FUN_004fc7b0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (DAT_0091c190 == 0) {
    DAT_0091c190 = 1;
    puVar1 = &DAT_00916a78;
    do {
      puVar2 = puVar1 + 0x30;
      puVar1[0x2d] = 0;
      *(undefined4 *)(puVar1 + 0x20) = 0;
      *(undefined4 *)(puVar1 + 0x24) = 0;
      *(undefined4 *)(puVar1 + 0x28) = 0xbf800000;
      *(undefined4 *)(puVar1 + 0x1c) = 0x4479c000;
      puVar1 = puVar2;
    } while ((int)puVar2 < 0x9173d8);
  }
  return;
}

