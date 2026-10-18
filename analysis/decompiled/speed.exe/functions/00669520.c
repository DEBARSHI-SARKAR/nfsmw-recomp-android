/* speed.exe 00669520 FUN_00669520; analysis pseudocode, not buildable source.
 */

void __thiscall FUN_00669520(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  
  if (*(int **)(param_1 + 0x4c) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x4c) + 0x40))(param_2);
    puVar3 = (undefined4 *)(**(code **)(**(int **)(param_1 + 0x4c) + 0x20))();
    uVar1 = puVar3[1];
    uVar2 = puVar3[2];
    param_2[0xc] = *puVar3;
    param_2[0xd] = uVar1;
    param_2[0xe] = uVar2;
    param_2[0xf] = 0x3f800000;
    return;
  }
  puVar3 = &DAT_008a3028;
  for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
    *param_2 = *puVar3;
    puVar3 = puVar3 + 1;
    param_2 = param_2 + 1;
  }
  return;
}

