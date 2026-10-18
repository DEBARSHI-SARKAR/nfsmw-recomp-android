/* speed.exe 005e41a0 FUN_005e41a0; analysis pseudocode, not buildable source.
 * calls 00452430 FUN_00452430
 */

void __thiscall FUN_005e41a0(int param_1,uint param_2)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  
  uVar3 = param_2;
  uVar4 = FUN_00452430();
  uVar4 = uVar4 >> ((byte)*(undefined4 *)(param_1 + 0x60) & 0x1f);
  param_2 = 0;
  if (*(int *)(param_1 + 0x6c) != 0) {
    iVar2 = *(int *)(param_1 + 0x78);
    uVar5 = uVar4;
    while (uVar5 = *(uint *)(param_1 + 0x70) & uVar5, *(int *)(iVar2 + 4 + uVar5 * 8) != 0) {
      uVar5 = uVar5 + 1;
      param_2 = param_2 + 1;
      if (*(uint *)(param_1 + 0x6c) <= param_2) {
        return;
      }
    }
    puVar1 = (uint *)(param_1 + 0x74);
    puVar6 = &param_2;
    if (param_2 <= *puVar1) {
      puVar6 = puVar1;
    }
    *puVar1 = *puVar6;
    *(uint *)(iVar2 + uVar5 * 8) = uVar4;
    *(uint *)(iVar2 + 4 + uVar5 * 8) = uVar3;
  }
  return;
}

