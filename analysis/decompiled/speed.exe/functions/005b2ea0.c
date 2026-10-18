/* speed.exe 005b2ea0 FUN_005b2ea0; analysis pseudocode, not buildable source.
 */

void __thiscall FUN_005b2ea0(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar1 = param_1[2];
  iVar2 = param_3[2];
  iVar3 = param_1[1];
  iVar4 = param_3[1];
  iVar5 = param_1[3];
  iVar6 = param_3[3];
  *param_2 = *param_1 - *param_3;
  param_2[1] = iVar3 - iVar4;
  param_2[2] = iVar1 - iVar2;
  param_2[3] = iVar5 - iVar6;
  return;
}

