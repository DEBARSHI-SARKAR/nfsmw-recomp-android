/* speed.exe 00857490 FUN_00857490; analysis pseudocode, not buildable source.
 * calls 008572d0 FUN_008572d0
 */

void __fastcall FUN_00857490(int param_1)

{
  int iVar1;
  int *in_EAX;
  
  if ((*in_EAX == 0) && (in_EAX[3] == *(int *)(param_1 + 0xd4))) {
    iVar1 = in_EAX[2];
    if (iVar1 == 1) {
      in_EAX[2] = 2;
      FUN_008572d0();
      return;
    }
    if (iVar1 == 2) {
      if (*(int *)(param_1 + 0xd0) == 2) {
        *(undefined4 *)(param_1 + 0xd0) = 4;
        return;
      }
    }
    else if ((iVar1 == 3) && (*(int *)(param_1 + 0xd0) == 4)) {
      *(undefined4 *)(param_1 + 0xd0) = 7;
    }
  }
  return;
}

