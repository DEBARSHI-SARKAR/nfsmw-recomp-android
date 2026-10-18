/* speed.exe 006446d0 FUN_006446d0; analysis pseudocode, not buildable source.
 * calls 006351a0 FUN_006351a0
 */

int __fastcall FUN_006446d0(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_006351a0();
  *(undefined4 *)(param_1 + 4) = uVar1;
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}

