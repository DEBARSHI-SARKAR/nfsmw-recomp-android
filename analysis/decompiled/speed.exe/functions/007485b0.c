/* speed.exe 007485b0 FUN_007485b0; analysis pseudocode, not buildable source.
 * calls 00504d20 FUN_00504d20
 * calls 00500bc0 FUN_00500bc0
 */

void FUN_007485b0(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = (int *)(param_1 + 0x54);
  iVar2 = 4;
  do {
    iVar1 = *piVar3;
    if ((iVar1 != 0) && (*(char *)(iVar1 + 0xe) == '\x02')) {
      iVar1 = FUN_00500bc0(*(undefined4 *)(iVar1 + 8));
      if ((iVar1 != 0) && (*(int *)(iVar1 + 0x14) != 0)) {
        *(int *)(param_2 + param_3 * 4) = *(int *)(iVar1 + 0x14);
        param_3 = param_3 + 1;
      }
    }
    piVar3 = piVar3 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  piVar3 = (int *)(param_1 + 100);
  iVar2 = 4;
  do {
    iVar1 = *piVar3;
    if ((iVar1 != 0) && (*(char *)(iVar1 + 0xe) == '\x02')) {
      iVar1 = FUN_00500bc0(*(undefined4 *)(iVar1 + 8));
      if ((iVar1 != 0) && (*(int *)(iVar1 + 0x14) != 0)) {
        *(int *)(param_2 + param_3 * 4) = *(int *)(iVar1 + 0x14);
        param_3 = param_3 + 1;
      }
    }
    piVar3 = piVar3 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  FUN_00504d20(param_1 + 0x20,5,param_2,param_3);
  return;
}

