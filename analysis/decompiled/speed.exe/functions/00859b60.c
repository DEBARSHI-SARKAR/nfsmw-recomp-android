/* speed.exe 00859b60 FUN_00859b60; analysis pseudocode, not buildable source.
 * calls 0078af30 FUN_0078af30
 */

undefined4 * FUN_00859b60(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  
  puVar1 = (undefined4 *)FUN_0078af30(0x124);
  if (puVar1 != (undefined4 *)0x0) {
    puVar3 = puVar1;
    for (iVar2 = 0x49; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
  }
  return puVar1;
}

