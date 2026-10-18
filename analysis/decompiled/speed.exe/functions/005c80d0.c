/* speed.exe 005c80d0 FUN_005c80d0; analysis pseudocode, not buildable source.
 * calls 004655f0 FUN_004655f0
 * calls 00460af0 FUN_00460af0
 * calls 00465a70 FUN_00465a70
 */

void __fastcall FUN_005c80d0(int param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  if (*(int *)(param_1 + 0xc) != 0) {
    uVar2 = FUN_00460af0(*(int *)(param_1 + 0xc));
    iVar4 = (*(uint *)(param_1 + 4) >> 5) + *(int *)(param_1 + 8);
    if (iVar4 * 0x20 + 8U < uVar2) {
      puVar1 = *(undefined4 **)(param_1 + 0xc);
      uVar2 = iVar4 * 0x10 + 0x40;
      puVar3 = (undefined4 *)FUN_00465a70(uVar2,0);
      puVar5 = puVar1;
      puVar6 = puVar3;
      for (uVar2 = uVar2 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
        *puVar6 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + 1;
      }
      for (iVar4 = 0; iVar4 != 0; iVar4 = iVar4 + -1) {
        *(undefined1 *)puVar6 = *(undefined1 *)puVar5;
        puVar5 = (undefined4 *)((int)puVar5 + 1);
        puVar6 = (undefined4 *)((int)puVar6 + 1);
      }
      FUN_004655f0(puVar1);
      *(undefined4 **)(param_1 + 0xc) = puVar3;
    }
  }
  return;
}

