/* speed.exe 006b8780 FUN_006b8780; analysis pseudocode, not buildable source.
 * calls 006a57e0 FUN_006a57e0
 */

int __fastcall FUN_006b8780(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_006a57e0();
  *(undefined4 *)(param_1 + 4) = uVar1;
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}

