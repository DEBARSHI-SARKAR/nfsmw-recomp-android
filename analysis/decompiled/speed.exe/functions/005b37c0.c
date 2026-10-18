/* speed.exe 005b37c0 FUN_005b37c0; analysis pseudocode, not buildable source.
 */

void FUN_005b37c0(short *param_1,short *param_2)

{
  short sVar1;
  
  if (param_1 != (short *)0x0) {
    if (param_2 != (short *)0x0) {
      sVar1 = *param_2;
      while (sVar1 != 0) {
        *param_1 = sVar1;
        param_2 = param_2 + 1;
        param_1 = param_1 + 1;
        sVar1 = *param_2;
      }
    }
    *param_1 = 0;
  }
  return;
}

