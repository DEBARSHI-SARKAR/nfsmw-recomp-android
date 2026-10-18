/* speed.exe 0065ad80 FUN_0065ad80; analysis pseudocode, not buildable source.
 * calls 004655f0 FUN_004655f0
 * calls 007edb59 FUN_007edb59
 * calls 007edabb FUN_007edabb
 * calls 007ece9e FUN_007ece9e
 * calls 00461980 FUN_00461980
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0065ad80(int *param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  
  if (param_1[0xd] != 0) {
    if (param_1[0xb] != 0) {
      FUN_007ece9e(param_1[5],param_1[10],param_1[0xd],param_1[0xb],100);
      param_1[0xb] = 0;
      param_1[10] = param_1[4];
    }
    FUN_004655f0(param_1[0xd]);
    param_1[0xd] = 0;
  }
  iVar1 = *param_1;
  piVar2 = (int *)param_1[1];
  *piVar2 = iVar1;
  *(int **)(iVar1 + 4) = piVar2;
  _DAT_00925924 = _DAT_00925924 + -1;
  if (-1 < param_1[3]) {
    if (param_1[6] == 0) {
      if (param_1[5] != 0) {
        uVar3 = FUN_007edb59(param_1[5],100,0);
        FUN_007edabb(uVar3,&LAB_0064d060);
      }
    }
    else {
      piVar2 = (int *)(param_1[6] + 8);
      *piVar2 = *piVar2 + -1;
    }
    param_1[3] = -1;
  }
  FUN_00461980(param_1[9]);
  return;
}

