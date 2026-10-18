/* speed.exe 00515cc0 FUN_00515cc0; analysis pseudocode, not buildable source.
 * calls 005bcd20 FUN_005bcd20
 */

void FUN_00515cc0(int param_1,int param_2)

{
  if ((param_2 != 0) && (param_1 != 0)) {
    FUN_005bcd20(param_2);
    *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) | 0x400002;
  }
  return;
}

