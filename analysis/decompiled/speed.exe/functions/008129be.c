/* speed.exe 008129be FUN_008129be; analysis pseudocode, not buildable source.
 */

void FUN_008129be(void)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  
  puVar2 = &DAT_009c64e2;
  puVar1 = DAT_009c67e0;
  do {
    puVar2[-1] = *puVar1;
    *puVar2 = *puVar1;
    puVar2[1] = *puVar1;
    puVar2[2] = *puVar1;
    puVar2 = puVar2 + 4;
    puVar1 = puVar1 + 2;
  } while ((int)puVar2 < 0x9c66e2);
  return;
}

