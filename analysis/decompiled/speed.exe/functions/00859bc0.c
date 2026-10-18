/* speed.exe 00859bc0 FUN_00859bc0; analysis pseudocode, not buildable source.
 * calls 0084af40 FUN_0084af40
 * calls 0084b0b0 FUN_0084b0b0
 * calls 0078af30 FUN_0078af30
 */

int * FUN_00859bc0(undefined4 *param_1,int param_2,int *param_3,uint *param_4)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  
  if (param_2 != 0) {
    return (int *)0x0;
  }
  iVar1 = FUN_0084b0b0(*param_1,param_3,param_4);
  if (iVar1 != 0) {
    piVar2 = (int *)FUN_0078af30(0x124);
    if (piVar2 != (int *)0x0) {
      piVar6 = piVar2;
      for (iVar3 = 0x49; iVar3 != 0; iVar3 = iVar3 + -1) {
        *piVar6 = 0;
        piVar6 = piVar6 + 1;
      }
      *piVar2 = iVar1;
      uVar5 = *param_4;
      piVar6 = piVar2 + 0x42;
      for (uVar4 = uVar5 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *piVar6 = *param_3;
        param_3 = param_3 + 1;
        piVar6 = piVar6 + 1;
      }
      for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(char *)piVar6 = (char)*param_3;
        param_3 = (int *)((int)param_3 + 1);
        piVar6 = (int *)((int)piVar6 + 1);
      }
      piVar2[0x46] = 0x14;
      return piVar2;
    }
    FUN_0084af40(iVar1);
  }
  return (int *)0x0;
}

