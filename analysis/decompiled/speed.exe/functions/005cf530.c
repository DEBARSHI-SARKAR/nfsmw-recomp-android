/* speed.exe 005cf530 FUN_005cf530; analysis pseudocode, not buildable source.
 * calls 005cf530 FUN_005cf530
 */

void __thiscall FUN_005cf530(int param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  
  cVar1 = (**(code **)*param_2)(param_1);
  uVar3 = 0;
  if (cVar1 != '\0') {
    while ((iVar2 = param_2[1], *(undefined1 *)(param_2 + 1) = 0, (char)iVar2 == '\0' &&
           (uVar3 < *(uint *)(param_1 + 8)))) {
      iVar2 = *(int *)(param_1 + 0xc);
      if ((*(uint *)(param_1 + 4) & 2) != 0) {
        iVar2 = iVar2 * 0x10 + param_1;
      }
      cVar1 = (**(code **)(*param_2 + 4))
                        (param_1,((*(uint *)(param_1 + 4) >> 5) + uVar3) * 0x10 + iVar2);
      uVar3 = uVar3 + 1;
      if (cVar1 == '\0') {
        (**(code **)(*param_2 + 8))(param_1);
        return;
      }
    }
    if (cVar1 != '\0') {
      cVar1 = *(char *)((int)param_2 + 5);
      *(undefined1 *)((int)param_2 + 5) = 0;
      for (uVar3 = 0; (cVar1 == '\0' && (uVar3 < *(uint *)(param_1 + 4) >> 5)); uVar3 = uVar3 + 1) {
        FUN_005cf530(param_2);
        cVar1 = *(char *)((int)param_2 + 5);
        *(undefined1 *)((int)param_2 + 5) = 0;
      }
    }
  }
  (**(code **)(*param_2 + 8))(param_1);
  return;
}

