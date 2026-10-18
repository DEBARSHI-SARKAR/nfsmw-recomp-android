/* speed.exe 005e40f0 FUN_005e40f0; analysis pseudocode, not buildable source.
 * calls 00465a70 FUN_00465a70
 */

void __fastcall FUN_005e40f0(int param_1)

{
  uint *puVar1;
  undefined4 *puVar2;
  uint *puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint local_8;
  uint local_4;
  
  uVar5 = 0;
  uVar7 = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  local_8 = 0;
  if (*(int *)(param_1 + 0x20) != 0) {
    puVar1 = (uint *)(*(int *)(param_1 + 0x24) + 0x34);
    do {
      uVar6 = *puVar1;
      if ((puVar1[-0xb] & 1) == 0) {
        local_4 = uVar6;
        puVar3 = &local_4;
        if (uVar6 <= uVar5) {
          puVar3 = &local_8;
        }
        uVar5 = *puVar3;
        local_8 = uVar5;
      }
      else {
        *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + uVar6;
      }
      uVar7 = uVar7 + 1;
      puVar1 = puVar1 + 0x10;
    } while (uVar7 < *(uint *)(param_1 + 0x20));
  }
  uVar6 = *(int *)(param_1 + 100) + uVar5 * 2;
  uVar5 = (uVar6 >> 1) + uVar6;
  uVar7 = 0x100;
  *(uint *)(param_1 + 100) = uVar6;
  if (0x100 < uVar5) {
    do {
      uVar7 = uVar7 << 1;
    } while (uVar7 < uVar5);
  }
  *(uint *)(param_1 + 0x6c) = uVar7;
  *(uint *)(param_1 + 0x70) = uVar7 - 1;
  puVar2 = (undefined4 *)FUN_00465a70(uVar7 * 8,0);
  *(undefined4 **)(param_1 + 0x78) = puVar2;
  for (iVar4 = (uVar7 & 0x1fffffff) << 1; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  for (iVar4 = 0; iVar4 != 0; iVar4 = iVar4 + -1) {
    *(undefined1 *)puVar2 = 0;
    puVar2 = (undefined4 *)((int)puVar2 + 1);
  }
  return;
}

