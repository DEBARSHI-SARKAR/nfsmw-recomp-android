/* speed.exe 005014c0 FUN_005014c0; analysis pseudocode, not buildable source.
 */

void __thiscall FUN_005014c0(int *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  
  if ((param_1[2] != 0) && (param_2 != param_1[3])) {
    iVar1 = *param_1;
    piVar2 = (int *)param_1[1];
    *piVar2 = iVar1;
    *(int **)(iVar1 + 4) = piVar2;
    if (param_2 != 0) {
      puVar3 = *(undefined4 **)(param_2 + 0x8c);
      *puVar3 = param_1;
      *(int **)(param_2 + 0x8c) = param_1;
      param_1[3] = param_2;
      param_1[1] = (int)puVar3;
      *param_1 = param_2 + 0x88;
      return;
    }
    *DAT_00917404 = (int)param_1;
    piVar2 = param_1;
    param_1[1] = (int)DAT_00917404;
    DAT_00917404 = piVar2;
    *param_1 = (int)&DAT_00917400;
    param_1[3] = 0;
  }
  return;
}

