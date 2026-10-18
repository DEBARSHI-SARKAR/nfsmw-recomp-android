/* speed.exe 005e3d80 FUN_005e3d80; analysis pseudocode, not buildable source.
 * calls 00652ad0 _malloc
 * calls 00465a70 FUN_00465a70
 */

void __thiscall FUN_005e3d80(int param_1,int *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  
  piVar1 = param_2;
  puVar2 = _malloc(param_2[3]);
  *(undefined4 **)(param_1 + 0x28) = puVar2;
  uVar6 = param_2[3];
  puVar4 = (undefined4 *)(param_2[2] + (int)param_2);
  for (uVar5 = uVar6 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *puVar2 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar2 = puVar2 + 1;
  }
  for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined1 *)puVar2 = *(undefined1 *)puVar4;
    puVar4 = (undefined4 *)((int)puVar4 + 1);
    puVar2 = (undefined4 *)((int)puVar2 + 1);
  }
  iVar7 = param_2[1];
  *(int *)(param_1 + 0x20) = iVar7;
  uVar3 = FUN_00465a70(iVar7 << 6,0x1000);
  *(undefined4 *)(param_1 + 0x24) = uVar3;
  param_2 = (int *)0x0;
  if (*(int *)(param_1 + 0x20) != 0) {
    iVar7 = 0;
    do {
      puVar4 = (undefined4 *)(*(int *)(param_1 + 0x24) + iVar7);
      if (puVar4 != (undefined4 *)0x0) {
        puVar4[1] = piVar1[4] + *(int *)(param_1 + 0x28);
        *puVar4 = 0;
        puVar4[2] = 0;
        puVar4[3] = 0;
        puVar4[4] = piVar1[7];
        puVar4[5] = piVar1[5] + 0xfU & 0xfffffff0;
        puVar4[6] = piVar1[8];
        puVar4[7] = piVar1[6] + 0xfU & 0xfffffff0;
        puVar4[8] = 0;
        puVar4[9] = 0;
        puVar4[10] = 0;
        puVar4[0xb] = 0;
        puVar4[0xc] = 0;
        puVar4[0xd] = 0;
        puVar4[0xe] = 0;
        puVar4[0xf] = 0;
      }
      param_2 = (int *)((int)param_2 + 1);
      iVar7 = iVar7 + 0x40;
      piVar1 = piVar1 + 5;
    } while (param_2 < *(uint *)(param_1 + 0x20));
  }
  return;
}

