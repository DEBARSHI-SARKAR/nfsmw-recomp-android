/* speed.exe 0062a950 FUN_0062a950; analysis pseudocode, not buildable source.
 * calls 006206a0 FUN_006206a0
 */

int __thiscall FUN_0062a950(int param_1,byte param_2)

{
  FUN_006206a0();
  if ((param_2 & 1) != 0) {
    DAT_00920394 = DAT_00920394 + *(int *)(param_1 + 4);
  }
  return param_1;
}

