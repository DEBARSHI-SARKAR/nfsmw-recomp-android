/* speed.exe 00514530 FUN_00514530; analysis pseudocode, not buildable source.
 */

uint FUN_00514530(int param_1,uint *param_2,int *param_3)

{
  uint uVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  
  *param_2 = 0;
  *param_3 = 0;
  iVar4 = 0;
  piVar3 = &DAT_0089a508;
  do {
    uVar1 = 0;
    piVar2 = piVar3;
    do {
      if (*piVar2 == param_1) {
        *param_2 = uVar1;
        *param_3 = iVar4;
        return CONCAT31((int3)(uVar1 >> 8),1);
      }
      uVar1 = uVar1 + 1;
      piVar2 = piVar2 + 1;
    } while ((int)uVar1 < 6);
    piVar3 = piVar3 + 6;
    iVar4 = iVar4 + 1;
  } while ((int)piVar3 < 0x89a610);
  return uVar1 & 0xffffff00;
}

