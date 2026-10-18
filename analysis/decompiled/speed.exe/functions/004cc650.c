/* speed.exe 004cc650 FUN_004cc650; analysis pseudocode, not buildable source.
 * calls 004c03c0 FUN_004c03c0
 */

int __fastcall FUN_004cc650(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_004c03c0();
  *(undefined4 *)(param_1 + 4) = uVar1;
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}

