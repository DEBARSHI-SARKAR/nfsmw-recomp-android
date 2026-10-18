/* speed.exe 006b8d90 FUN_006b8d90; analysis pseudocode, not buildable source.
 * calls 006a5fe0 FUN_006a5fe0
 */

int __fastcall FUN_006b8d90(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_006a5fe0();
  *(undefined4 *)(param_1 + 4) = uVar1;
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}

