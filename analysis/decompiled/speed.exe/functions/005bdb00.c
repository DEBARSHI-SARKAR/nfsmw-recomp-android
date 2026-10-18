/* speed.exe 005bdb00 FUN_005bdb00; analysis pseudocode, not buildable source.
 * calls 005b98f0 FUN_005b98f0
 * calls 005b42d0 FUN_005b42d0
 * calls 00652b10 thunk_FUN_007c7250
 */

void __thiscall FUN_005bdb00(int param_1,uint param_2)

{
  short sVar1;
  int iVar2;
  undefined2 *puVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  short *psVar7;
  int iVar8;
  short *psVar9;
  
  iVar4 = param_2;
  *(uint *)(param_1 + 0x68) = *(uint *)(param_1 + 0x68) | *(uint *)(param_2 + 0x68) & 0xe;
  *(undefined4 *)(param_1 + 0x84) = *(undefined4 *)(param_2 + 0x84);
  *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(param_2 + 0x88);
  *(undefined4 *)(param_1 + 0x6c) = *(undefined4 *)(param_2 + 0x6c);
  *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_2 + 0x70);
  FUN_005b98f0(*(undefined4 *)(param_2 + 0x60),*(undefined4 *)(param_2 + 100));
  if (*(int *)(param_1 + 0xa0) != 0) {
    thunk_FUN_007c7250(*(int *)(param_1 + 0xa0));
    *(undefined4 *)(param_1 + 0xa0) = 0;
  }
  if (*(int *)(param_1 + 0x9c) != 0) {
    thunk_FUN_007c7250(*(int *)(param_1 + 0x9c));
    *(undefined4 *)(param_1 + 0x9c) = 0;
  }
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined4 *)(param_1 + 0x98) = 0;
  *(undefined4 *)(param_1 + 0x94) = 0;
  FUN_005b42d0(*(undefined4 *)(param_2 + 0x90),*(undefined4 *)(param_2 + 0x94));
  uVar5 = *(int *)(param_1 + 100) * *(int *)(param_1 + 0x60);
  param_2 = 0;
  if (uVar5 != 0) {
    iVar6 = 0;
    do {
      *(undefined4 *)(iVar6 + *(int *)(param_1 + 0x8c)) =
           *(undefined4 *)(iVar6 + *(int *)(iVar4 + 0x8c));
      *(undefined4 *)(iVar6 + 0x18 + *(int *)(param_1 + 0x8c)) =
           *(undefined4 *)(iVar6 + 0x18 + *(int *)(iVar4 + 0x8c));
      iVar8 = *(int *)(iVar4 + 0x8c);
      iVar2 = *(int *)(param_1 + 0x8c);
      *(undefined4 *)(iVar6 + 4 + iVar2) = *(undefined4 *)(iVar6 + 4 + iVar8);
      *(undefined4 *)(iVar6 + 8 + iVar2) = *(undefined4 *)(iVar6 + iVar8 + 8);
      *(undefined4 *)(iVar6 + 0xc + *(int *)(param_1 + 0x8c)) =
           *(undefined4 *)(iVar6 + 0xc + *(int *)(iVar4 + 0x8c));
      *(undefined4 *)(iVar6 + 0x14 + *(int *)(param_1 + 0x8c)) =
           *(undefined4 *)(iVar6 + 0x14 + *(int *)(iVar4 + 0x8c));
      *(undefined4 *)(iVar6 + 0x10 + *(int *)(param_1 + 0x8c)) =
           *(undefined4 *)(iVar6 + 0x10 + *(int *)(iVar4 + 0x8c));
      *(undefined4 *)(iVar6 + 0x1c + *(int *)(param_1 + 0x8c)) =
           *(undefined4 *)(iVar6 + 0x1c + *(int *)(iVar4 + 0x8c));
      if (*(int *)(iVar6 + 0x18 + *(int *)(param_1 + 0x8c)) == 2) {
        psVar9 = *(short **)(iVar6 + 0x20 + *(int *)(iVar4 + 0x8c));
        if (psVar9 == (short *)0x0) {
          return;
        }
        puVar3 = *(undefined2 **)(*(int *)(param_1 + 0x9c) + *(int *)(param_1 + 0x98) * 4);
        *(int *)(param_1 + 0x98) = *(int *)(param_1 + 0x98) + 1;
        *puVar3 = 0;
        *(undefined2 **)(iVar6 + 0x20 + *(int *)(param_1 + 0x8c)) = puVar3;
        psVar7 = *(short **)(iVar6 + 0x20 + *(int *)(param_1 + 0x8c));
        if (psVar7 != (short *)0x0) {
          sVar1 = *psVar9;
          while (sVar1 != 0) {
            *psVar7 = sVar1;
            psVar9 = psVar9 + 1;
            psVar7 = psVar7 + 1;
            sVar1 = *psVar9;
          }
          *psVar7 = 0;
        }
      }
      iVar8 = *(int *)(param_1 + 0x8c) + iVar6;
      if (*(int *)(*(int *)(param_1 + 0x8c) + 0x18 + iVar6) == 1) {
        iVar2 = iVar6 + 0x20 + *(int *)(iVar4 + 0x8c);
        *(undefined4 *)(iVar8 + 0x20) = *(undefined4 *)(iVar6 + 0x20 + *(int *)(iVar4 + 0x8c));
        *(undefined4 *)(iVar8 + 0x24) = *(undefined4 *)(iVar2 + 4);
        *(undefined4 *)(iVar8 + 0x28) = *(undefined4 *)(iVar2 + 8);
        *(undefined4 *)(iVar8 + 0x2c) = *(undefined4 *)(iVar2 + 0xc);
      }
      param_2 = param_2 + 1;
      iVar6 = iVar6 + 0x30;
    } while (param_2 < uVar5);
  }
  return;
}

