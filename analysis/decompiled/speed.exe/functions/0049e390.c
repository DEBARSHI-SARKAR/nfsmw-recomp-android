/* speed.exe 0049e390 FUN_0049e390; analysis pseudocode, not buildable source.
 */

void __thiscall FUN_0049e390(int param_1,uint *param_2,uint *param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  uint *puVar4;
  uint local_20 [8];
  
  if (param_2 == param_3) {
    puVar4 = local_20;
    for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *param_2;
      param_2 = param_2 + 1;
      puVar4 = puVar4 + 1;
    }
    *param_3 = 0;
    param_3[1] = 0;
    param_3[2] = 0;
    param_3[3] = 0;
    param_3[4] = 0;
    param_3[5] = 0;
    param_3[6] = 0;
    param_3[7] = 0;
    iVar2 = 0;
    if (0 < *(int *)(param_1 + 8)) {
      piVar3 = (int *)(param_1 + 0x3c);
      do {
        if ((local_20[iVar2 >> 5] & 1 << ((byte)iVar2 & 0x1f)) != 0) {
          iVar1 = *piVar3 >> 5;
          param_3[iVar1] = param_3[iVar1] | 1 << ((byte)*piVar3 & 0x1f);
        }
        iVar2 = iVar2 + 1;
        piVar3 = piVar3 + 0x1c;
      } while (iVar2 < *(int *)(param_1 + 8));
      return;
    }
  }
  else {
    *param_3 = 0;
    param_3[1] = 0;
    param_3[2] = 0;
    param_3[3] = 0;
    param_3[4] = 0;
    param_3[5] = 0;
    param_3[6] = 0;
    param_3[7] = 0;
    iVar2 = 0;
    if (0 < *(int *)(param_1 + 8)) {
      piVar3 = (int *)(param_1 + 0x3c);
      do {
        if ((param_2[iVar2 >> 5] & 1 << ((byte)iVar2 & 0x1f)) != 0) {
          iVar1 = *piVar3 >> 5;
          param_3[iVar1] = param_3[iVar1] | 1 << ((byte)*piVar3 & 0x1f);
        }
        iVar2 = iVar2 + 1;
        piVar3 = piVar3 + 0x1c;
      } while (iVar2 < *(int *)(param_1 + 8));
    }
  }
  return;
}

