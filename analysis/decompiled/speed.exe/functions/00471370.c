/* speed.exe 00471370 FUN_00471370; analysis pseudocode, not buildable source.
 * calls 00456050 FUN_00456050
 * calls 0045a760 FUN_0045a760
 * calls 00739940 FUN_00739940
 * calls 004549b0 FUN_004549b0
 */

void __thiscall FUN_00471370(int param_1,int param_2)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 0x90) != param_2) {
    puVar1 = (undefined1 *)FUN_00739940(param_2);
    if (puVar1 == (undefined1 *)0x0) {
      puVar1 = &DAT_00890978;
    }
    *(int *)(param_1 + 0x90) = param_2;
    uVar2 = FUN_004549b0(puVar1);
    uVar2 = FUN_00456050(0xa5b543b7,uVar2);
    FUN_0045a760(uVar2);
  }
  return;
}

