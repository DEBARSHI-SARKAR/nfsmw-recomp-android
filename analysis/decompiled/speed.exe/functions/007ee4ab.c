/* speed.exe 007ee4ab FUN_007ee4ab; analysis pseudocode, not buildable source.
 */

undefined1 __thiscall FUN_007ee4ab(int *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = *param_1;
  if (param_2 == iVar2) {
    param_1[2] = param_1[2] + -1;
    if (param_2 == param_1[1]) {
      *param_1 = 0;
      param_1[1] = 0;
    }
    else {
      if (*(int *)(param_2 + 8) == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = *(int *)(param_2 + 8) + -8;
      }
      *param_1 = iVar2;
    }
  }
  else {
    if (iVar2 == 0) {
      return 0;
    }
    if (*(int *)(iVar2 + 8) != 0) {
      do {
        uVar1 = *(uint *)(iVar2 + 8);
        if (uVar1 == (-(uint)(param_2 != 0) & param_2 + 8U)) break;
        if (uVar1 == 0) {
          iVar2 = 0;
        }
        else {
          iVar2 = uVar1 - 8;
        }
      } while (*(int *)(iVar2 + 8) != 0);
    }
    if (*(uint *)(iVar2 + 8) == 0) {
      return 0;
    }
    if (*(uint *)(iVar2 + 8) != (-(uint)(param_2 != 0) & param_2 + 8U)) {
      return 0;
    }
    param_1[2] = param_1[2] + -1;
    *(undefined4 *)(iVar2 + 8) = *(undefined4 *)(param_2 + 8U);
    if (param_2 == param_1[1]) {
      param_1[1] = iVar2;
    }
  }
  *(undefined4 *)(param_2 + 8) = 0;
  return 1;
}

