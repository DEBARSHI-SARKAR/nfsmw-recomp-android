/* speed.exe 00613770 FUN_00613770; analysis pseudocode, not buildable source.
 * calls 0060c820 FUN_0060c820
 */

int __fastcall FUN_00613770(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0060c820();
  *(undefined4 *)(param_1 + 4) = uVar1;
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}

