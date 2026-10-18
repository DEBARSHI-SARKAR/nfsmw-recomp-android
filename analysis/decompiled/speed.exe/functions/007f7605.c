/* speed.exe 007f7605 FUN_007f7605; analysis pseudocode, not buildable source.
 * calls 007f5fe3 FUN_007f5fe3
 * calls 007f5e04 FUN_007f5e04
 */

undefined2 * __fastcall FUN_007f7605(int param_1)

{
  undefined2 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined2 *puVar4;
  
  (**(code **)(**(int **)(param_1 + 0x14) + 0xc))();
  puVar3 = (undefined4 *)&DAT_009bdd60;
  for (iVar2 = 0x20; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  puVar1 = (undefined2 *)FUN_007f5e04(6,0);
  iVar2 = FUN_007f5fe3(puVar1);
  puVar4 = &DAT_009bdd60;
  for (; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar1;
    puVar1 = puVar1 + 1;
    puVar4 = puVar4 + 1;
  }
  (**(code **)(**(int **)(param_1 + 0x14) + 0x10))();
  return &DAT_009bdd60;
}

