/* speed.exe 00587ab0 FUN_00587ab0; analysis pseudocode, not buildable source.
 * calls 0045d3a0 FUN_0045d3a0
 */

void __thiscall FUN_00587ab0(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = FUN_0045d3a0(0);
  if (0 < iVar1 - param_1[0x30]) {
    iVar1 = param_1[3];
    iVar2 = iVar1;
    if (param_2 == -1) {
      do {
        if (*(int *)(param_1[0xb] + 4) == 0) {
          iVar3 = 0;
        }
        else {
          iVar3 = *(int *)(param_1[0xb] + 4) + -4;
        }
        if (iVar2 == iVar3) {
          iVar2 = param_1[0xc];
        }
        if (*(int *)(iVar2 + 8) == 0) {
          iVar2 = 0;
        }
        else {
          iVar2 = *(int *)(iVar2 + 8) + -4;
        }
      } while (*(char *)(iVar2 + 0x20) != '\0');
    }
    else if (param_2 == 1) {
      do {
        if (*(int *)(param_1[0xc] + 8) == 0) {
          iVar3 = 0;
        }
        else {
          iVar3 = *(int *)(param_1[0xc] + 8) + -4;
        }
        if (iVar2 == iVar3) {
          iVar2 = param_1[0xb];
        }
        if (*(int *)(iVar2 + 4) == 0) {
          iVar2 = 0;
        }
        else {
          iVar2 = *(int *)(iVar2 + 4) + -4;
        }
      } while (*(char *)(iVar2 + 0x20) != '\0');
    }
    if ((*(char *)(iVar2 + 0x20) == '\0') && (iVar2 != iVar1)) {
      (**(code **)(*param_1 + 0x28))(iVar2);
      *(undefined1 *)((int)param_1 + 0x2a) = 1;
    }
  }
  return;
}

