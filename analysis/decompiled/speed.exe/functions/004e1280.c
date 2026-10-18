/* speed.exe 004e1280 FUN_004e1280; analysis pseudocode, not buildable source.
 */

uint __thiscall FUN_004e1280(int param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  if ((((*(char *)param_2 == 'G') && (*(char *)((int)param_2 + 1) == 'n')) &&
      (*(char *)((int)param_2 + 2) == 's')) &&
     ((*(char *)((int)param_2 + 3) == 'u' && (*(char *)((int)param_2 + 4) == '2')))) {
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)((int)param_2 + 8);
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)((int)param_2 + 0xc);
    *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)((int)param_2 + 0x10);
    *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)((int)param_2 + 0x14);
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((int)param_2 + 0x18);
    *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)((int)param_2 + 0x1c);
    *(char **)(param_1 + 0x1c) = (char *)((int)param_2 + 0x20);
    piVar1 = (int *)((int)param_2 + *(int *)(param_1 + 0xc) * 4 + 0x24);
    *(int **)(param_1 + 0x24) = piVar1 + *(int *)(param_1 + 0x10) + 1;
    param_2 = *(int **)(param_1 + 0x14);
    *(int **)(param_1 + 0x20) = piVar1;
    *(undefined4 *)(param_1 + 0xac) = 0xffffffff;
    if (0 < *(int *)(param_1 + 0x10)) {
      iVar3 = *(int *)(param_1 + 0x10);
      piVar2 = piVar1;
      do {
        piVar1 = (int *)(piVar2[1] - *piVar2);
        if ((int)piVar1 < (int)param_2) {
          param_2 = piVar1;
        }
        piVar2 = piVar2 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    *(float *)(param_1 + 0x28) = (float)(int)param_2;
    return CONCAT31((int3)((uint)piVar1 >> 8),1);
  }
  return (uint)param_2 & 0xffffff00;
}

