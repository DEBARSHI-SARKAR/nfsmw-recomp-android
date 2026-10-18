/* speed.exe 0084af90 FUN_0084af90; analysis pseudocode, not buildable source.
 * calls 00862164 Ordinal_22
 */

undefined4 FUN_0084af90(int param_1,undefined4 param_2)

{
  *(ushort *)(param_1 + 0x16) = *(ushort *)(param_1 + 0x16) | (ushort)param_2;
  Ordinal_22(*(undefined4 *)(param_1 + 0x18),param_2);
  return 0;
}

