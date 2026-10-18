/* speed.exe 00658dd0 FUN_00658dd0; analysis pseudocode, not buildable source.
 * calls 00658a00 FUN_00658a00
 * calls 006589a0 FUN_006589a0
 * calls 00465a70 FUN_00465a70
 * calls 0064a9c0 FUN_0064a9c0
 * calls 004655f0 FUN_004655f0
 * calls 0064ab00 FUN_0064ab00
 */

undefined4 FUN_00658dd0(int *param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = *param_1;
  iVar2 = *param_2;
  if ((iVar1 != 0) && (iVar2 != 0)) {
    iVar3 = FUN_0064a9c0(0,iVar1,iVar2,0,0,0);
    iVar4 = FUN_0064a9c0(1,iVar1,iVar2,0,0,0);
    if (iVar4 == 0) {
      FUN_006589a0(iVar1,iVar2,param_4);
      return 0;
    }
    iVar4 = FUN_00465a70(iVar3,param_3);
    FUN_0064a9c0(0,iVar1,iVar2,iVar4,0,0);
    FUN_0064ab00(iVar1,iVar2);
    FUN_006589a0(iVar1,iVar2,param_4);
    FUN_006589a0(iVar4,iVar3,param_4);
    FUN_00658a00(iVar1,iVar2,param_4);
    FUN_004655f0(iVar1);
    *param_2 = iVar3;
    *param_1 = iVar4;
    return 1;
  }
  return 0;
}

