/* speed.exe 00592680 FUN_00592680; analysis pseudocode, not buildable source.
 * calls 00589870 FUN_00589870
 * calls 00586ca0 FUN_00586ca0
 */

void __fastcall FUN_00592680(int param_1)

{
  undefined4 uVar1;
  
  if (*(char *)(param_1 + 0xa0) != '\0') {
    uVar1 = FUN_00586ca0(*(undefined4 *)(param_1 + 0x24));
    FUN_00589870(*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c),
                 *(undefined4 *)(param_1 + 0x20),uVar1);
  }
  return;
}

