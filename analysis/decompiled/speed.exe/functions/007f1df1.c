/* speed.exe 007f1df1 FUN_007f1df1; analysis pseudocode, not buildable source.
 */

uint __thiscall FUN_007f1df1(int param_1,int param_2)

{
  uint in_EAX;
  int *piVar1;
  int iVar2;
  
  if (param_2 != 0) {
    in_EAX = *(uint *)(param_1 + 0xa0);
    iVar2 = 0;
    piVar1 = (int *)(param_1 + 0x20);
    if (0 < (int)in_EAX) {
      do {
        if (*piVar1 == param_2) {
          *(uint *)(param_1 + 0xa0) = in_EAX - 1;
          *piVar1 = *(int *)(param_1 + 0x20 + (in_EAX - 1) * 4);
          if (param_2 == *(int *)(param_1 + 0xac)) {
            *(int *)(param_1 + 0xac) = 0;
          }
          if (param_2 == *(int *)(param_1 + 0xa8)) {
            *(int *)(param_1 + 0xa8) = 0;
          }
          piVar1 = (int *)(param_1 + 0xa4);
          if (param_2 == *piVar1) {
            *piVar1 = 0;
          }
          return CONCAT31((int3)((uint)piVar1 >> 8),1);
        }
        iVar2 = iVar2 + 1;
        piVar1 = piVar1 + 1;
      } while (iVar2 < *(int *)(param_1 + 0xa0));
    }
  }
  return in_EAX & 0xffffff00;
}

