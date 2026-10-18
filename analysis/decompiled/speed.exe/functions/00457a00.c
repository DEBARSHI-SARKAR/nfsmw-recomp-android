/* speed.exe 00457a00 FUN_00457a00; analysis pseudocode, not buildable source.
 * calls 004556d0 FUN_004556d0
 */

void FUN_00457a00(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  
  iVar3 = param_2 - (int)param_1 >> 3;
  if (1 < iVar3) {
    puVar4 = (undefined4 *)(param_2 + -4);
    if (iVar3 < 2) goto LAB_00457a59;
    do {
      uVar1 = puVar4[-1];
      uVar2 = *puVar4;
      puVar4[-1] = *param_1;
      *puVar4 = param_1[1];
      FUN_004556d0(param_1,0,(-4 - (int)param_1) + (int)puVar4 >> 3,uVar1,uVar2);
LAB_00457a59:
      puVar4 = puVar4 + -2;
    } while (1 < (int)puVar4 + (4 - (int)param_1) >> 3);
  }
  return;
}

