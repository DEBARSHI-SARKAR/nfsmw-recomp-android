/* speed.exe 00682a90 FUN_00682a90; analysis pseudocode, not buildable source.
 * calls 00675650 FUN_00675650
 */

int __fastcall FUN_00682a90(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00675650();
  *(undefined4 *)(param_1 + 4) = uVar1;
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}

