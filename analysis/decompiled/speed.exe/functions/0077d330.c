/* speed.exe 0077d330 FUN_0077d330; analysis pseudocode, not buildable source.
 * calls 00771600 FUN_00771600
 */

int __fastcall FUN_0077d330(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00771600();
  *(undefined4 *)(param_1 + 4) = uVar1;
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}

