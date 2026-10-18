/* speed.exe 00708910 FUN_00708910; analysis pseudocode, not buildable source.
 */

void __fastcall FUN_00708910(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1[3];
  iVar2 = iVar1;
  if (0 < iVar1) {
    do {
      iVar2 = iVar2 + -1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    param_1[3] = iVar2;
  }
  if (param_1[1] != 0) {
    (**(code **)(*param_1 + 8))(param_1[1],param_1[2]);
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
  }
  return;
}

