/* speed.exe 0077cf00 FUN_0077cf00; analysis pseudocode, not buildable source.
 * calls 00771580 FUN_00771580
 */

int __fastcall FUN_0077cf00(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00771580();
  *(undefined4 *)(param_1 + 4) = uVar1;
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}

