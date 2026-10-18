/* speed.exe 007f2f93 FUN_007f2f93; analysis pseudocode, not buildable source.
 */

void __fastcall FUN_007f2f93(int *param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)param_1[0x1e];
  if (piVar2 != (int *)0x0) {
    iVar1 = (**(code **)(*piVar2 + 0x1c))(piVar2,1,0);
    if (((iVar1 == -0x7ff8fff4) || (iVar1 == -0x7ff8ffe2)) || (iVar1 == -0x7ffbfdfb)) {
      piVar2 = (int *)(**(code **)(*param_1 + 0x10))();
      iVar1 = (**(code **)(*piVar2 + 8))();
      if (iVar1 != 0) {
        return;
      }
      iVar1 = (**(code **)(*(int *)param_1[0x1e] + 0x1c))((int *)param_1[0x1e],1,0);
    }
    if (iVar1 == 0) {
      param_1[0x1c] = 1;
    }
  }
  return;
}

