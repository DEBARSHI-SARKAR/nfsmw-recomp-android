/* speed.exe 008335d2 FUN_008335d2; analysis pseudocode, not buildable source.
 */

int FUN_008335d2(byte param_1)

{
  return (param_1 & 0x1f) * *(int *)(&DAT_0090d250 + (uint)(param_1 >> 5) * 4);
}

