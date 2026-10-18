/* speed.exe 004b1d90 FUN_004b1d90; analysis pseudocode, not buildable source.
 */

void __thiscall FUN_004b1d90(int param_1,int param_2,byte param_3)

{
  *(undefined1 *)(param_2 + 0x18) = 1;
  if (param_3 != 0xff) {
    *(int *)(param_1 + 0x1c + (uint)param_3 * 4) = param_2;
    return;
  }
  *(int *)(param_1 + 0x1c + (uint)*(byte *)(param_1 + 0x3a) * 4) = param_2;
  *(char *)(param_1 + 0x3a) = *(char *)(param_1 + 0x3a) + '\x01';
  return;
}

