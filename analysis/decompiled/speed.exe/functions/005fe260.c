/* speed.exe 005fe260 FUN_005fe260; analysis pseudocode, not buildable source.
 * calls 005d51f0 FUN_005d51f0
 * calls 005fe110 FUN_005fe110
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_005fe260(int param_1,int param_2,float param_3)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  
  iVar6 = 0;
  iVar3 = param_2;
  if (0 < *(int *)(param_1 + 0x1958)) {
    param_2 = param_2 + -1;
    piVar5 = (int *)(param_1 + 0x18);
    do {
      iVar3 = iVar6;
      if (iVar6 == param_2) break;
      if (((*piVar5 != 0) &&
          (iVar3 = FUN_005d51f0(DAT_0092feb4,DAT_0092feb4 + DAT_0092febc * 8,*piVar5), iVar3 != 0))
         && (piVar1 = *(int **)(iVar3 + 4), piVar1 != (int *)0x0)) {
        cVar2 = (**(code **)(*piVar1 + 0x24))();
        if (cVar2 == '\0') {
          FUN_005fe110(piVar1,iVar6,param_3 - _DAT_00899124);
        }
        else {
          param_2 = param_2 + 1;
        }
      }
      iVar6 = iVar6 + 1;
      piVar5 = piVar5 + 0x65;
      iVar3 = param_2;
    } while (iVar6 < *(int *)(param_1 + 0x1958));
  }
  param_2 = iVar3;
  if (DAT_0092d884 == 0) {
    piVar5 = (int *)0x0;
  }
  else {
    piVar5 = (int *)*DAT_0092d87c;
  }
  uVar4 = (**(code **)(*piVar5 + 4))(param_2,param_3);
  FUN_005fe110(uVar4,param_2,param_3);
  return;
}

