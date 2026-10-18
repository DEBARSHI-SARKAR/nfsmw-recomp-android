/* speed.exe 0083ed50 FUN_0083ed50; analysis pseudocode, not buildable source.
 * calls 0078af30 FUN_0078af30
 */

undefined4 * FUN_0083ed50(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  
  puVar1 = (undefined4 *)FUN_0078af30(0x108);
  if (puVar1 != (undefined4 *)0x0) {
    puVar3 = puVar1;
    for (iVar2 = 0x42; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
  }
  puVar1[0x34] = 0x20;
  puVar1[0x33] = 0x20;
  puVar1[0x32] = 0xfe;
  return puVar1;
}

