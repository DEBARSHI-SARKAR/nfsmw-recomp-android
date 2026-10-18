/* speed.exe 008322de FUN_008322de; analysis pseudocode, not buildable source.
 * calls 00832d5e FUN_00832d5e
 * calls 0083215e FUN_0083215e
 * calls 00832d6d FUN_00832d6d
 */

int FUN_008322de(undefined4 param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  
  iVar3 = 0;
  puVar1 = (undefined4 *)FUN_00832d5e(param_2 * 4 + 4);
  if (puVar1 != (undefined4 *)0x0) {
    iVar3 = 1;
    *puVar1 = param_1;
    if (0 < param_2) {
      puVar2 = (undefined4 *)(param_3 + -4);
      do {
        puVar2 = puVar2 + 1;
        puVar1[iVar3] = *puVar2;
        iVar3 = iVar3 + 1;
      } while (iVar3 <= param_2);
    }
    iVar3 = FUN_0083215e(puVar1);
    if (iVar3 == 0) {
      FUN_00832d6d(puVar1);
    }
  }
  return iVar3;
}

