/* speed.exe 0081c771 FUN_0081c771; analysis pseudocode, not buildable source.
 * calls 0081c218 FUN_0081c218
 * calls 00862b92 FUN_00862b92
 * calls 0081c675 FUN_0081c675
 */

undefined4 FUN_0081c771(int param_1,int *param_2)

{
  if (*param_2 == 0x6c444353) {
    FUN_0081c675((undefined4 *)(&DAT_009c1b68)[param_1]);
  }
  else {
    if (*param_2 == 0x6c484353) {
      FUN_0081c218(param_1);
      return 0;
    }
    FUN_00862b92(*(undefined4 *)(&DAT_009c1b68)[param_1],param_2);
  }
  return 1;
}

