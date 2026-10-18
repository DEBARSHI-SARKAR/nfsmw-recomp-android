/* speed.exe 006d7660 FUN_006d7660; analysis pseudocode, not buildable source.
 * calls 006c7420 FUN_006c7420
 * calls 006c6d10 FUN_006c6d10
 * calls 006c7f50 FUN_006c7f50
 * calls 006c76e0 FUN_006c76e0
 * calls 006c8000 FUN_006c8000
 * calls 006be590 FUN_006be590
 * calls 0045f2e0 FUN_0045f2e0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_006d7660(int *param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  
  FUN_006c6d10(param_1 + 9,param_1[3]);
  FUN_006c8000(param_1[7],DAT_00982a20[1]);
  iVar4 = 0;
  if (param_1[1] == 0) {
    iVar4 = *(int *)param_1[2];
    switch(*(undefined4 *)(DAT_00982c80 + 4)) {
    case 0:
    case 1:
    case 3:
    case 4:
    case 5:
    case 0x12:
      if (0 < DAT_00901830) {
        (**(code **)(**(int **)(DAT_00982c80 + 0x48) + 0x78))
                  (*(int **)(DAT_00982c80 + 0x48),
                   *(undefined4 *)(*(int *)(DAT_00982c80 + 0x44) + 0x86c),
                   _DAT_00982ba8 + (_DAT_0089096c - _DAT_008fae68));
      }
    }
  }
  if (param_1[5] != 0) {
    FUN_006c7420(param_1[5],param_1[7]);
  }
  if (param_1[6] != 0) {
    FUN_006c76e0(param_1[6],param_1[3]);
  }
  if (param_1[1] != 0) {
    piVar2 = (int *)*param_1;
    (**(code **)(*DAT_00982bdc + 0xe4))(DAT_00982bdc,0xe,0);
    DAT_00982ca0 = 0;
    iVar4 = *(int *)(param_1[4] + 0x14);
    piVar3 = *(int **)(param_1[4] + 0x48);
    (**(code **)(*piVar3 + 0x104))(piVar3);
    if (0 < iVar4) {
      do {
        (**(code **)(*DAT_00982bdc + 0x14c))(DAT_00982bdc,5,*piVar2 + -2,piVar2 + 1,0x18);
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    (**(code **)(*DAT_00982bdc + 0xe4))(DAT_00982bdc,0xe,1);
    _DAT_00987b04 = _DAT_00987b04 + 1;
    FUN_0045f2e0(piVar2);
    return;
  }
  iVar1 = *param_1;
  if (param_1[8] != 0) {
    FUN_006c7f50(param_1[8],iVar1);
  }
  if ((*(int *)(iVar1 + 0x54) == 0) && (*(int *)(iVar1 + 0x3c) != 0)) {
    if (2 < DAT_00982ce4) {
      return;
    }
    if (*(int *)(iVar4 + 0x28) == 0) {
      return;
    }
    FUN_006be590();
    DAT_00982ce4 = DAT_00982ce4 + 1;
  }
  if (*(int *)(iVar1 + 0x54) != DAT_00982ca0) {
    (**(code **)(*DAT_00982bdc + 400))
              (DAT_00982bdc,0,*(int *)(iVar1 + 0x54),0,*(undefined4 *)(DAT_00982c80 + 8));
    DAT_00982ca0 = *(int *)(iVar1 + 0x54);
    _DAT_00987b08 = _DAT_00987b08 + 1;
  }
  if (*(int *)(iVar4 + 0x28) != DAT_00982ca4) {
    (**(code **)(*DAT_00982bdc + 0x1a0))(DAT_00982bdc,*(int *)(iVar4 + 0x28));
    DAT_00982ca4 = *(int *)(iVar4 + 0x28);
    _DAT_00987b0c = _DAT_00987b0c + 1;
  }
  if ((*(int *)(iVar4 + 0x2c) != 0) && (*(uint *)(iVar1 + 0x3c) < 0xffff)) {
    iVar4 = *(int *)(param_1[4] + 0x14);
    iVar5 = *(int *)(DAT_00982c80 + 4);
    if (((iVar5 == 0x13) && (DAT_00982bad != '\0')) ||
       ((((DAT_00982b25 == '\0' || (*DAT_00982a20 != 0)) && (*(char *)(DAT_00982c80 + 0x40) != '\0')
         ) && (((iVar5 == 0 || (iVar5 == 4)) || (iVar5 == 2)))))) {
      iVar4 = 1;
    }
    if (0 < iVar4) {
      iVar5 = 0;
      do {
        if (0 < iVar5) {
          (**(code **)(**(int **)(param_1[4] + 0x48) + 0x108))(*(int **)(param_1[4] + 0x48));
          (**(code **)(**(int **)(param_1[4] + 0x48) + 0x100))(*(int **)(param_1[4] + 0x48),iVar5);
        }
        (**(code **)(**(int **)(param_1[4] + 0x48) + 0x104))(*(int **)(param_1[4] + 0x48));
        (**(code **)(*DAT_00982bdc + 0x148))
                  (DAT_00982bdc,4,0,0,*(undefined4 *)(iVar1 + 0x58),*(undefined4 *)(iVar1 + 0x44),
                   *(undefined4 *)(iVar1 + 0x40));
        DAT_00987b00 = DAT_00987b00 + 1;
        iVar5 = iVar5 + 1;
      } while (iVar5 < iVar4);
    }
    DAT_00987b10 = DAT_00987b10 + *(uint *)(iVar1 + 0x3c) / 3;
  }
  return;
}

