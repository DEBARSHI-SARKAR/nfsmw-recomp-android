/* speed.exe 0068bb60 FUN_0068bb60; analysis pseudocode, not buildable source.
 */

uint __fastcall FUN_0068bb60(int *param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  cVar1 = (**(code **)(param_1[2] + 0x10))();
  if (cVar1 == '\0') {
    return 0;
  }
  piVar2 = (int *)(**(code **)(*param_1 + 4))();
  cVar1 = (**(code **)(*piVar2 + 0x24))();
  uVar4 = 0x40;
  piVar2 = (int *)(**(code **)(*param_1 + 4))();
  iVar3 = (**(code **)(*piVar2 + 4))();
  if (iVar3 == 3) {
    uVar4 = 0x50;
  }
  piVar2 = (int *)(**(code **)(*param_1 + 4))();
  iVar3 = (**(code **)(*piVar2 + 4))();
  if (iVar3 == 4) {
    uVar5 = uVar4 | 0x10000;
    if (cVar1 == '\0') {
      return uVar4 | 0x10008;
    }
  }
  else {
    uVar5 = uVar4;
    if (cVar1 == '\0') {
      return uVar4;
    }
  }
  return uVar5 | 4;
}

