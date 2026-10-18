/* speed.exe 00515bb0 FUN_00515bb0; analysis pseudocode, not buildable source.
 * calls 0056bb20 FUN_0056bb20
 */

void FUN_00515bb0(int param_1,int param_2)

{
  int iVar1;
  
  if (param_1 != 0) {
    if (param_2 == 0x1bb3c514) {
      iVar1 = FUN_0056bb20();
      if (iVar1 != 1) {
        if (*(int *)(param_1 + 0x24) == 0x1bb3c514) {
          return;
        }
        *(undefined4 *)(param_1 + 0x24) = 0x1bb3c514;
        *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) | 0x2400000;
        return;
      }
      param_2 = -0x139e8d97;
    }
    if (*(int *)(param_1 + 0x24) != param_2) {
      *(int *)(param_1 + 0x24) = param_2;
      *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) | 0x2400000;
    }
  }
  return;
}

