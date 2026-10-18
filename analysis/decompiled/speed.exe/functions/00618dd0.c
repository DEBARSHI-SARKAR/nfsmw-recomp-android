/* speed.exe 00618dd0 FUN_00618dd0; analysis pseudocode, not buildable source.
 * calls 006189d0 FUN_006189d0
 * calls 00452d00 FUN_00452d00
 * calls 00458660 FUN_00458660
 * calls 00612bb0 FUN_00612bb0
 * calls 00452c50 FUN_00452c50
 * calls 00457380 FUN_00457380
 * calls 00614f10 FUN_00614f10
 */

void __thiscall FUN_00618dd0(int param_1,int *param_2,undefined4 param_3)

{
  int *piVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  
  piVar1 = param_2;
  cVar2 = FUN_00452c50();
  if (cVar2 != '\0') {
    uVar3 = FUN_00452d00();
    iVar4 = FUN_00457380(uVar3);
    if (((*(byte *)(iVar4 + 0xe) & 1) != 0) && ((char)param_3 == '\0')) {
      piVar5 = (int *)FUN_00614f10(*piVar1,8);
      *piVar5 = piVar1[1];
      iVar4 = FUN_00452d00();
      piVar5[1] = iVar4;
      FUN_006189d0(*piVar1,"LuaAttribArrayInfo");
      return;
    }
    param_3 = FUN_00458660();
    FUN_00612bb0(&param_2,&param_3);
    if (param_2 != *(int **)(param_1 + 8)) {
      if ((code *)param_2[4] == (code *)0x0) {
        return;
      }
      (*(code *)param_2[4])(piVar1);
      return;
    }
  }
  iVar4 = *piVar1;
  **(undefined4 **)(iVar4 + 8) = 0;
  piVar1 = (int *)(iVar4 + 8);
  *piVar1 = *piVar1 + 8;
  return;
}

