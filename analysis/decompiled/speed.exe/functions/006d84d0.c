/* speed.exe 006d84d0 FUN_006d84d0; analysis pseudocode, not buildable source.
 * calls 006d8310 FUN_006d8310
 */

void __fastcall FUN_006d84d0(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  
  iVar2 = 0;
  piVar1 = param_1 + 0x111c;
  do {
    if (*piVar1 != 0) {
      FUN_006d8310(iVar2);
    }
    iVar2 = iVar2 + 1;
    piVar1 = piVar1 + 1;
  } while (iVar2 < 2);
  puVar3 = param_1 + 0x88a;
  for (iVar2 = 0x88; iVar2 != 0; iVar2 = iVar2 + -1) {
    *param_1 = *puVar3;
    puVar3 = puVar3 + 1;
    param_1 = param_1 + 1;
  }
  return;
}

