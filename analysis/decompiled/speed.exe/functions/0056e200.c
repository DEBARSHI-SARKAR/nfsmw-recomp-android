/* speed.exe 0056e200 FUN_0056e200; analysis pseudocode, not buildable source.
 * calls 00634370 FUN_00634370
 * calls 00628cb0 FUN_00628cb0
 * calls 00628cc0 FUN_00628cc0
 * calls 0063cd80 FUN_0063cd80
 * calls 00634da0 FUN_00634da0
 */

int * __thiscall FUN_0056e200(int param_1,int *param_2,int *param_3)

{
  int *piVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  int local_4;
  
  FUN_00634370();
  piVar6 = param_2 + 1;
  local_4 = param_1;
  if (piVar6 <= param_3) {
    local_4 = *param_2;
  }
  param_2 = (int *)0x0;
  do {
    uVar2 = FUN_00628cc0();
    piVar3 = (int *)FUN_00628cb0(param_2);
    piVar1 = (int *)(uVar2 + (int)piVar6);
    if (piVar1 <= param_3) {
      for (uVar5 = uVar2 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *piVar3 = *piVar6;
        piVar6 = piVar6 + 1;
        piVar3 = piVar3 + 1;
      }
      for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
        *(char *)piVar3 = (char)*piVar6;
        piVar6 = (int *)((int)piVar6 + 1);
        piVar3 = (int *)((int)piVar3 + 1);
      }
    }
    param_2 = (int *)((int)param_2 + 1);
    piVar6 = piVar1;
  } while ((int)param_2 < 0x13);
  iVar4 = FUN_00634da0(3);
  if ((local_4 != iVar4) && (iVar4 != 0)) {
    FUN_0063cd80();
  }
  return piVar1;
}

