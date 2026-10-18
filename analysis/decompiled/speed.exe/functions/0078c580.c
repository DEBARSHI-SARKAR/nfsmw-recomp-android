/* speed.exe 0078c580 FUN_0078c580; analysis pseudocode, not buildable source.
 * calls 0085ce00 FUN_0085ce00
 * calls 0085cd80 FUN_0085cd80
 */

void __fastcall FUN_0078c580(int *param_1)

{
  int *piVar1;
  
  if (*param_1 != 0) {
    piVar1 = (int *)FUN_0085ce00(*param_1);
    if ((piVar1 != (int *)0x0) && (*piVar1 != 0)) {
      FUN_0085cd80(*param_1);
      param_1[3] = 0;
    }
  }
  return;
}

