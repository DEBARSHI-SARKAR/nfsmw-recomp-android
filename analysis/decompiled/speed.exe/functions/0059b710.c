/* speed.exe 0059b710 FUN_0059b710; analysis pseudocode, not buildable source.
 * calls 00589870 FUN_00589870
 * calls 00586ca0 FUN_00586ca0
 */

uint __thiscall FUN_0059b710(int *param_1,char param_2)

{
  int *piVar1;
  int iVar2;
  undefined3 uVar4;
  undefined4 uVar3;
  undefined3 extraout_var;
  
  piVar1 = (int *)param_1[2];
  if (piVar1 != param_1 + 2) {
    if (piVar1 == (int *)0x0) {
      piVar1 = (int *)0x0;
    }
    else {
      piVar1 = piVar1 + -1;
    }
    param_1[0xb] = (int)piVar1;
    if (param_1[4] == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = param_1[4] + -4;
    }
    param_1[9] = iVar2;
    param_1[10] = iVar2;
    uVar4 = (undefined3)((uint)iVar2 >> 8);
    if (param_2 != '\0') {
      uVar3 = (**(code **)(*param_1 + 4))();
      uVar4 = (undefined3)((uint)uVar3 >> 8);
      if ((char)param_1[0x28] != '\0') {
        uVar3 = FUN_00586ca0(param_1[9]);
        FUN_00589870(param_1[6],param_1[7],param_1[8],uVar3);
        uVar4 = extraout_var;
      }
    }
    return CONCAT31(uVar4,1);
  }
  return (uint)(param_1 + 2) & 0xffffff00;
}

