/* speed.exe 00408060 FUN_00408060; analysis pseudocode, not buildable source.
 * calls 00786330 FUN_00786330
 * calls 00407ff0 FUN_00407ff0
 */

void __fastcall FUN_00408060(int param_1)

{
  char cVar1;
  int iVar2;
  
  cVar1 = FUN_00407ff0();
  if (cVar1 != '\0') {
    iVar2 = (**(code **)(*(int *)(param_1 + -0x780) + 0x48))();
    if (iVar2 != 0) {
      FUN_00786330();
      return;
    }
  }
  return;
}

