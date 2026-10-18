/* speed.exe 00515b90 FUN_00515b90; analysis pseudocode, not buildable source.
 */

void FUN_00515b90(int param_1,int param_2)

{
  if ((param_1 != 0) && (*(int *)(param_1 + 0x24) != param_2)) {
    *(int *)(param_1 + 0x24) = param_2;
    *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) | 0x2400000;
  }
  return;
}

