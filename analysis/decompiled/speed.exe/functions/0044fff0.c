/* speed.exe 0044fff0 FUN_0044fff0; analysis pseudocode, not buildable source.
 * calls 00444fe0 FUN_00444fe0
 * calls 0045d3a0 FUN_0045d3a0
 * calls 0045da70 FUN_0045da70
 * calls 0044c140 FUN_0044c140
 * calls 00446c90 FUN_00446c90
 * calls 0044eb20 FUN_0044eb20
 * calls 00652b10 thunk_FUN_007c7250
 * calls 00652ad0 _malloc
 * calls 007477a0 FUN_007477a0
 * calls 0044f6e0 FUN_0044f6e0
 * calls 00466340 FUN_00466340
 */

int __thiscall FUN_0044fff0(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  int local_a4;
  undefined4 local_a0;
  int *local_94;
  undefined4 *local_8c;
  undefined4 auStack_80 [4];
  undefined4 uStack_70;
  undefined4 uStack_6c;
  int iStack_54;
  
  if ((DAT_009260d8 == 0) && (DAT_0090d9ec == '\0')) {
    if (*(uint *)(param_2 + 0x38) != 0) {
      iVar6 = DAT_00904fb8 % 100;
      if ((iVar6 < (int)(uint)*(byte *)(param_2 + 0x39)) ||
         ((int)(*(uint *)(param_2 + 0x38) & 0xff) < iVar6)) {
        if (iVar6 < (int)(uint)*(byte *)(param_2 + 0x3b)) {
          return 0;
        }
        if ((int)(uint)*(byte *)(param_2 + 0x3a) < iVar6) {
          return 0;
        }
      }
    }
    iVar6 = FUN_0044eb20(*(undefined4 *)(param_2 + 4));
    if (iVar6 != 0) {
      DAT_0090d9f8 = DAT_0090d9f8 + 1;
      if (DAT_0090d9fc < DAT_0090d9f8) {
        DAT_0090d9fc = DAT_0090d9f8;
      }
      iVar1 = FUN_00466340(DAT_0090db54);
      if (iVar1 == 0) {
        local_a4 = 0;
      }
      else {
        local_a4 = FUN_0044f6e0();
      }
      *(undefined4 *)(local_a4 + 0xc) = *(undefined4 *)(iVar6 + 0xc);
      *(int *)(local_a4 + 0x24) = param_2;
      *(undefined4 *)(local_a4 + 0x28) = 0xffffffff;
      uVar2 = FUN_0045d3a0(0);
      puVar3 = _malloc(uVar2 * 4);
      puVar8 = puVar3;
      for (uVar2 = uVar2 & 0x3fffffff; uVar2 != 0; uVar2 = uVar2 - 1) {
        *puVar8 = 0;
        puVar8 = puVar8 + 1;
      }
      for (iVar1 = 0; iVar1 != 0; iVar1 = iVar1 + -1) {
        *(undefined1 *)puVar8 = 0;
        puVar8 = (undefined4 *)((int)puVar8 + 1);
      }
      if ((*(uint *)(param_2 + 0xc) & 0x400) != 0) {
        FUN_0045da70(0x3f800000);
      }
      if ((*(uint *)(param_2 + 0xc) & 0x200) != 0) {
        FUN_0045da70(0x3f800000);
      }
      piVar4 = *(int **)(iVar6 + 0x10);
      local_94 = (int *)0x0;
      local_8c = puVar3;
      if (piVar4 != (int *)(iVar6 + 0x10)) {
        do {
          puVar8 = (undefined4 *)piVar4[2];
          local_a0 = 0;
          if (*(char *)((int)puVar8 + 0x29) != -1) {
            (**(code **)(*(int *)puVar3[*(char *)((int)puVar8 + 0x29)] + 0x10))();
            local_a0 = (**(code **)(*(int *)puVar3[*(char *)((int)puVar8 + 0x29)] + 0x10))();
          }
          DAT_0090d9f0 = DAT_0090d9f0 + 1;
          if (DAT_0090d9f4 < DAT_0090d9f0) {
            DAT_0090d9f4 = DAT_0090d9f0;
          }
          iVar1 = FUN_00466340(DAT_0090db50);
          if (iVar1 == 0) {
            piVar5 = (int *)0x0;
          }
          else {
            piVar5 = (int *)FUN_00446c90();
          }
          *local_8c = piVar5;
          piVar5[8] = local_a4;
          local_8c = local_8c + 1;
          puVar7 = puVar8;
          puVar9 = auStack_80;
          for (iVar1 = 0x1c; iVar1 != 0; iVar1 = iVar1 + -1) {
            *puVar9 = *puVar7;
            puVar7 = puVar7 + 1;
            puVar9 = puVar9 + 1;
          }
          if (*(int *)(param_2 + 0x30) != 0) {
            *(uint *)(param_2 + 0xc) = *(uint *)(param_2 + 0xc) | 0x40;
          }
          uStack_70 = *(undefined4 *)(param_2 + 0x28);
          iVar1 = *(int *)(param_2 + 0x20);
          uStack_6c = *(undefined4 *)(param_2 + 0x2c);
          *(int *)(local_a4 + 0x1c) = iVar1;
          iStack_54 = param_2;
          *(undefined4 *)(local_a4 + 0x20) = *(undefined4 *)(param_2 + 0x24);
          if (iVar1 == 0) {
            if (*(short *)(param_2 + 0x3c) != 0) {
              *(undefined4 *)(local_a4 + 0x28) = 2;
            }
          }
          else {
            *(undefined4 *)(local_a4 + 0x28) = 0;
          }
          (**(code **)(*piVar5 + 4))(auStack_80,local_a0);
          if (puVar8[1] == *(int *)(iVar6 + 0xc)) {
            iVar1 = (**(code **)(*piVar5 + 0x10))();
            FUN_00444fe0(iVar1 + 0x60,param_2 + 0x40);
            local_94 = piVar5;
            if (*(int *)(iVar1 + 0xf4) == 0) {
              FUN_007477a0();
            }
          }
          FUN_0044c140(piVar5);
          if (((*(int *)(param_2 + 0x20) == 0) && (*(short *)(param_2 + 0x3c) == 0)) &&
             (piVar5[5] != 0)) {
            *(undefined4 *)(piVar5[5] + 0x10) = 1;
          }
          piVar4 = (int *)*piVar4;
        } while (piVar4 != (int *)(iVar6 + 0x10));
      }
      *(int **)(local_a4 + 0x10) = local_94;
      piVar5 = *(int **)(param_1 + 0x14);
      piVar4 = (int *)(local_a4 + 4);
      *piVar5 = (int)piVar4;
      *(int **)(param_1 + 0x14) = piVar4;
      *(int **)(local_a4 + 8) = piVar5;
      *piVar4 = param_1 + 0x10;
      thunk_FUN_007c7250(puVar3);
      return local_a4;
    }
  }
  return 0;
}

