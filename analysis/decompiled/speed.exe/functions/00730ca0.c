/* speed.exe 00730ca0 FUN_00730ca0; analysis pseudocode, not buildable source.
 * calls 00730bf0 FUN_00730bf0
 */

void __fastcall FUN_00730ca0(int param_1)

{
  undefined4 uVar1;
  code *pcVar2;
  
  FUN_00730bf0(*(undefined4 *)(param_1 + 0x868),1);
  uVar1 = *(undefined4 *)(param_1 + 0x864);
  pcVar2 = *(code **)(param_1 + 0x860);
  *(undefined4 *)(param_1 + 0x860) = 0;
  *(undefined4 *)(param_1 + 0x864) = 0;
  *(undefined4 *)(param_1 + 0x868) = 0;
  (*pcVar2)(uVar1);
  return;
}

