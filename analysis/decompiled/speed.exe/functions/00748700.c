/* speed.exe 00748700 FUN_00748700; analysis pseudocode, not buildable source.
 * calls 004fb420 FUN_004fb420
 * calls 00500bc0 FUN_00500bc0
 */

int FUN_00748700(int param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  if (*(int *)(*(int *)(param_1 + 0x18) + 0x14) != 0) {
    param_3 = FUN_004fb420(param_2,param_3);
  }
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x20)) {
    piVar2 = (int *)(param_1 + 0x24);
    do {
      iVar1 = *piVar2;
      if ((iVar1 != 0) && (*(char *)(iVar1 + 0xe) == '\x02')) {
        iVar1 = FUN_00500bc0(*(undefined4 *)(iVar1 + 8));
        if ((iVar1 != 0) && (*(int *)(iVar1 + 0x14) != 0)) {
          *(int *)(param_2 + param_3 * 4) = *(int *)(iVar1 + 0x14);
          param_3 = param_3 + 1;
        }
      }
      iVar3 = iVar3 + 1;
      piVar2 = piVar2 + 1;
    } while (iVar3 < *(int *)(param_1 + 0x20));
  }
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x180)) {
    piVar2 = (int *)(param_1 + 0x184);
    do {
      iVar1 = *piVar2;
      if ((iVar1 != 0) && (*(char *)(iVar1 + 0xe) == '\x02')) {
        iVar1 = FUN_00500bc0(*(undefined4 *)(iVar1 + 8));
        if ((iVar1 != 0) && (*(int *)(iVar1 + 0x14) != 0)) {
          *(int *)(param_2 + param_3 * 4) = *(int *)(iVar1 + 0x14);
          param_3 = param_3 + 1;
        }
      }
      iVar3 = iVar3 + 1;
      piVar2 = piVar2 + 1;
    } while (iVar3 < *(int *)(param_1 + 0x180));
  }
  return param_3;
}

