/* speed.exe 00577740 FUN_00577740; analysis pseudocode, not buildable source.
 */

void FUN_00577740(void)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)((int)&DAT_0091cd14 + 1);
  do {
    puVar1[-4] = 0xff;
    *puVar1 = 0xff;
    puVar1 = puVar1 + 8;
  } while ((int)puVar1 < 0x91cedd);
  return;
}

