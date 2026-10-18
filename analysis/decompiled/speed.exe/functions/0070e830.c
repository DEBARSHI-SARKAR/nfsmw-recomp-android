/* speed.exe 0070e830 FUN_0070e830; analysis pseudocode, not buildable source.
 * calls 00705a20 FUN_00705a20
 */

int __fastcall FUN_0070e830(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00705a20();
  *(undefined4 *)(param_1 + 4) = uVar1;
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}

