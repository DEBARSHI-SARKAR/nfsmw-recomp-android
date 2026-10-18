/* speed.exe 008348da FUN_008348da; analysis pseudocode, not buildable source.
 * calls 00832d5e FUN_00832d5e
 * calls 0083215e FUN_0083215e
 * calls 00832d6d FUN_00832d6d
 * calls 00831d15 FUN_00831d15
 */

void FUN_008348da(undefined4 *param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 *puVar5;
  
  iVar2 = FUN_00831d15(&param_2);
  if (iVar2 != 0) {
    cVar1 = *(char *)(iVar2 + 0xb);
    puVar3 = (undefined4 *)FUN_00832d5e(cVar1 * 4 + 4);
    if (puVar3 != (undefined4 *)0x0) {
      *puVar3 = param_2;
      puVar5 = puVar3;
      for (uVar4 = (int)cVar1 & 0x3fffffff; puVar5 = puVar5 + 1, uVar4 != 0; uVar4 = uVar4 - 1) {
        *puVar5 = *param_1;
        param_1 = param_1 + 1;
      }
      for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
        *(undefined1 *)puVar5 = *(undefined1 *)param_1;
        param_1 = (undefined4 *)((int)param_1 + 1);
        puVar5 = (undefined4 *)((int)puVar5 + 1);
      }
      iVar2 = FUN_0083215e(puVar3);
      if (iVar2 == 0) {
        FUN_00832d6d(puVar3);
      }
    }
  }
  return;
}

