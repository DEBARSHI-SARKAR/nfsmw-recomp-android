/* speed.exe 00587390 FUN_00587390; analysis pseudocode, not buildable source.
 * calls 0045d3a0 FUN_0045d3a0
 */

void __thiscall FUN_00587390(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = FUN_0045d3a0(0);
  if (iVar2 != 0) {
    iVar2 = param_1[3];
    iVar3 = iVar2;
    if (param_2 == -1) {
      iVar1 = param_1[1];
      if (iVar1 == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = iVar1 + -4;
      }
      if (iVar2 != iVar4) {
        do {
          if (*(int *)(iVar3 + 8) == 0) {
            iVar3 = 0;
          }
          else {
            iVar3 = *(int *)(iVar3 + 8) + -4;
          }
          if (*(char *)(iVar3 + 0x20) == '\0') goto LAB_00587430;
          if (iVar1 == 0) {
            iVar4 = 0;
          }
          else {
            iVar4 = iVar1 + -4;
          }
        } while (iVar3 != iVar4);
      }
    }
    else if (param_2 == 1) {
      iVar1 = param_1[2];
      if (iVar1 == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = iVar1 + -4;
      }
      if (iVar2 != iVar4) {
        do {
          if (*(int *)(iVar3 + 4) == 0) {
            iVar3 = 0;
          }
          else {
            iVar3 = *(int *)(iVar3 + 4) + -4;
          }
          if (*(char *)(iVar3 + 0x20) == '\0') goto LAB_00587430;
          if (iVar1 == 0) {
            iVar4 = 0;
          }
          else {
            iVar4 = iVar1 + -4;
          }
        } while (iVar3 != iVar4);
      }
    }
    if (*(char *)(iVar3 + 0x20) == '\0') {
LAB_00587430:
      if (iVar3 != iVar2) {
        (**(code **)(*param_1 + 0x28))(iVar3);
        *(undefined1 *)((int)param_1 + 0x2a) = 1;
      }
    }
  }
  return;
}

