/* speed.exe 004e2f40 FUN_004e2f40; analysis pseudocode, not buildable source.
 */

void __thiscall FUN_004e2f40(int param_1,int *param_2,uint *param_3,int param_4,uint param_5)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (param_4 == 0) {
    *param_2 = *(int *)(param_1 + 0xec) * 0x10 + *(int *)(param_1 + 0x134);
    *(int *)(param_1 + 0xec) = *(int *)(param_1 + 0xec) + 1;
  }
  else {
    uVar1 = *param_3;
    iVar2 = *(int *)(param_1 + 0x3c);
    iVar4 = 0;
    if (0 < *(int *)(param_1 + 0xec)) {
      iVar3 = 0;
      do {
        if (*(uint *)(*(int *)(param_1 + 0x134) + 4 + iVar3) ==
            ((int)uVar1 >> 0x10 & 0xe000U | iVar2 << 8 | uVar1 & 0xfff0000 | param_5)) {
          *param_2 = *(int *)(param_1 + 0x134) + iVar3;
        }
        iVar4 = iVar4 + 1;
        iVar3 = iVar3 + 0x10;
      } while (iVar4 < *(int *)(param_1 + 0xec));
    }
  }
  param_2[1] = *(int *)(param_1 + 0x138) + *(int *)(param_1 + 0xf0) * 0xc;
  *(int *)(param_1 + 0xf0) = *(int *)(param_1 + 0xf0) + 1;
  return;
}

