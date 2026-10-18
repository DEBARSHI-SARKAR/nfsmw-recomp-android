/* speed.exe 005e8bf0 FUN_005e8bf0; analysis pseudocode, not buildable source.
 * calls 0056bc10 FUN_0056bc10
 * calls 005e84d0 FUN_005e84d0
 * calls 006e8df0 FUN_006e8df0
 * calls 0056db00 FUN_0056db00
 */

int * __thiscall FUN_005e8bf0(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  piVar1 = (int *)(*(int *)(param_1 + 0x1958) * 0x194 + 0x18 + param_1);
  *(int *)(param_1 + 0x1958) = *(int *)(param_1 + 0x1958) + 1;
  FUN_005e84d0();
  if (param_2 == (int *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = param_2[2];
  }
  *piVar1 = iVar2;
  piVar1[3] = *(int *)(param_1 + 0x1958) + -1;
  iVar2 = FUN_006e8df0();
  if (iVar2 == 1) {
    if (*(int *)(param_1 + 0x1958) == 1) {
      iVar2 = FUN_0056bc10(0x7b070984);
      piVar1[2] = iVar2;
      return piVar1;
    }
    iVar2 = FUN_0056bc10(0x7b070985);
    piVar1[2] = iVar2;
    return piVar1;
  }
  piVar3 = (int *)(**(code **)(*param_2 + 0x20))();
  iVar2 = (**(code **)(*piVar3 + 0x1c))();
  if (*(int *)(DAT_0091cf90 + 0x10 + iVar2 * 4) != 0) {
    iVar2 = FUN_0056db00();
    piVar1[2] = iVar2;
    return piVar1;
  }
  iVar2 = FUN_0056bc10(0xf760eabe);
  piVar1[2] = iVar2;
  return piVar1;
}

