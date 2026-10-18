/* speed.exe 0078c490 FUN_0078c490; analysis pseudocode, not buildable source.
 * calls 0083ff00 FUN_0083ff00
 * calls 0085ce00 FUN_0085ce00
 */

void __fastcall FUN_0078c490(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  param_1[3] = 0;
  FUN_0083ff00();
  piVar1 = (int *)FUN_0085ce00(*param_1);
  if ((piVar1 != (int *)0x0) && (0 < *piVar1)) {
    piVar3 = piVar1 + 0x24;
    iVar2 = 0;
    do {
      if (*piVar3 == 3) {
        param_1[3] = param_1[3] + 1;
      }
      iVar2 = iVar2 + 1;
      piVar3 = piVar3 + 0x2c;
    } while (iVar2 < *piVar1);
  }
  return;
}

