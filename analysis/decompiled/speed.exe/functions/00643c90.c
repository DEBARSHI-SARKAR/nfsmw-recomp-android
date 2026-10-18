/* speed.exe 00643c90 FUN_00643c90; analysis pseudocode, not buildable source.
 * calls 006407d0 FUN_006407d0
 */

int __thiscall FUN_00643c90(int param_1,byte param_2)

{
  FUN_006407d0();
  if ((param_2 & 1) != 0) {
    DAT_00920394 = DAT_00920394 + *(int *)(param_1 + 4);
  }
  return param_1;
}

