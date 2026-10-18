/* speed.exe 004fb710 FUN_004fb710; analysis pseudocode, not buildable source.
 */

void __thiscall FUN_004fb710(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  
  iVar1 = *(int *)(param_1 + 0x14);
  if ((((*(int *)(param_1 + 0x10) != 0) && (*(int *)(param_1 + 0xc) != 0)) && (iVar1 != 0)) &&
     (iVar4 = 0, 0 < iVar1)) {
    puVar5 = (undefined4 *)(*(int *)(param_1 + 0x10) + 8);
    do {
      puVar2 = *(undefined4 **)(param_2 + iVar4 * 4);
      if (puVar2 != (undefined4 *)0x0) {
        uVar3 = *puVar2;
        *puVar2 = *puVar5;
        *puVar5 = uVar3;
      }
      puVar5 = puVar5 + 3;
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar1);
  }
  return;
}

