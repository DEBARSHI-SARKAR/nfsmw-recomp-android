/* speed.exe 00832289 FUN_00832289; analysis pseudocode, not buildable source.
 * calls 00832d5e FUN_00832d5e
 * calls 0083215e FUN_0083215e
 * calls 00832d6d FUN_00832d6d
 */

int FUN_00832289(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  
  iVar1 = param_2;
  iVar4 = 0;
  puVar2 = (undefined4 *)FUN_00832d5e(param_2 * 4 + 4);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = param_1;
    iVar4 = 1;
    if (0 < iVar1) {
      puVar3 = &param_2;
      do {
        puVar3 = puVar3 + 1;
        puVar2[iVar4] = *puVar3;
        iVar4 = iVar4 + 1;
      } while (iVar4 <= iVar1);
    }
    iVar4 = FUN_0083215e(puVar2);
    if (iVar4 == 0) {
      FUN_00832d6d(puVar2);
    }
  }
  return iVar4;
}

