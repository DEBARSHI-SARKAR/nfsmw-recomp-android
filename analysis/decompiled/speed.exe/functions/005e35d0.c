/* speed.exe 005e35d0 FUN_005e35d0; analysis pseudocode, not buildable source.
 * calls 00454810 FUN_00454810
 * calls 006269b0 FUN_006269b0
 */

int __thiscall FUN_005e35d0(int param_1,undefined4 *param_2)

{
  undefined2 *puVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  
  *param_2 = *(undefined4 *)(param_1 + 0x20);
  puVar4 = param_2 + 1;
  uVar3 = 0;
  if (*(int *)(param_1 + 0x20) != 0) {
    iVar2 = 0;
    do {
      puVar1 = (undefined2 *)FUN_00454810(0x6ce23062,0);
      if (puVar1 == (undefined2 *)0x0) {
        puVar1 = (undefined2 *)FUN_006269b0(4);
      }
      *(undefined2 *)puVar4 = *puVar1;
      puVar1 = (undefined2 *)((int)puVar4 + 2);
      puVar4[1] = *(undefined4 *)(*(int *)(param_1 + 0x24) + 0x18 + iVar2);
      puVar4 = puVar4 + 2;
      *puVar1 = 4;
      uVar3 = uVar3 + 1;
      iVar2 = iVar2 + 0x1c;
    } while (uVar3 < *(uint *)(param_1 + 0x20));
  }
  return (int)puVar4 - (int)param_2;
}

