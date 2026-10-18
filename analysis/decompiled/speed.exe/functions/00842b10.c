/* speed.exe 00842b10 FUN_00842b10; analysis pseudocode, not buildable source.
 * calls 0083a630 FUN_0083a630
 * calls 007c6380 _atoi
 */

void FUN_00842b10(int param_1,int param_2,undefined4 param_3)

{
  if (param_2 != 0) {
    FUN_0083a630(param_2,param_3,param_1 + 8);
  }
  _atoi((char *)(param_1 + 8));
  return;
}

