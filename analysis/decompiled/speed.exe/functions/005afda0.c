/* speed.exe 005afda0 FUN_005afda0; analysis pseudocode, not buildable source.
 * calls 005afb20 FUN_005afb20
 */

void FUN_005afda0(undefined1 *param_1,short *param_2)

{
  short sVar1;
  
  if ((param_2 != (short *)0x0) && (sVar1 = *param_2, sVar1 != 0)) {
    do {
      if ((sVar1 < 0x1f) || (0x7f < sVar1)) {
        *param_1 = 0x5c;
        param_1 = (undefined1 *)FUN_005afb20();
        *param_1 = 0x5c;
      }
      else {
        *param_1 = (char)*param_2;
      }
      param_2 = param_2 + 1;
      param_1 = param_1 + 1;
      sVar1 = *param_2;
    } while (sVar1 != 0);
    *param_1 = 0;
    return;
  }
  *param_1 = 0;
  return;
}

