/* speed.exe 0066a6a0 FUN_0066a6a0; analysis pseudocode, not buildable source.
 */

int __thiscall FUN_0066a6a0(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  if (-1 < *(short *)(param_2 + 0x1e)) {
    iVar1 = 0;
    if (*(byte *)(param_2 + 0x16) != 0) {
      param_1 = *(short *)(param_2 + 0x1e) * 0x30 + 0x10 + param_1;
      do {
        if (*(int *)(param_1 + 0x28) == param_3) {
          return param_1;
        }
        iVar1 = iVar1 + 1;
        param_1 = param_1 + 0x30;
      } while (iVar1 < (int)(uint)*(byte *)(param_2 + 0x16));
    }
  }
  return 0;
}

