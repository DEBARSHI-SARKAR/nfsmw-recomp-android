/* speed.exe 005d5e20 FUN_005d5e20; analysis pseudocode, not buildable source.
 * calls 005d3910 FUN_005d3910
 */

void FUN_005d5e20(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  
  iVar3 = param_2 - (int)param_1 >> 3;
  if (1 < iVar3) {
    puVar4 = (undefined4 *)(param_2 + -8);
    if (iVar3 < 2) goto LAB_005d5e72;
    do {
      uVar1 = *puVar4;
      uVar2 = puVar4[1];
      *puVar4 = *param_1;
      puVar4[1] = param_1[1];
      FUN_005d3910(param_1,0,-(int)param_1 + (int)puVar4 >> 3,uVar1,uVar2);
LAB_005d5e72:
      puVar4 = puVar4 + -2;
    } while (1 < -(int)param_1 + 8 + (int)puVar4 >> 3);
  }
  return;
}

