/* speed.exe 00851950 FUN_00851950; analysis pseudocode, not buildable source.
 * calls 0084bcb0 GetTickCount
 * calls 0078af30 FUN_0078af30
 */

undefined4 * FUN_00851950(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  
  if (DAT_009c3d00 == 0) {
    DAT_009c3d00 = GetTickCount();
  }
  puVar1 = (undefined4 *)FUN_0078af30(0x2f0);
  if (puVar1 != (undefined4 *)0x0) {
    puVar3 = puVar1;
    for (iVar2 = 0xbc; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    *puVar1 = 0;
    puVar1[0x17] = 0;
    *(undefined2 *)((int)puVar1 + 0x8e) = 0;
  }
  return puVar1;
}

