/* speed.exe 004f5070 FUN_004f5070; analysis pseudocode, not buildable source.
 * calls 004eaa90 FUN_004eaa90
 */

int __fastcall FUN_004f5070(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_004eaa90();
  *(undefined4 *)(param_1 + 4) = uVar1;
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}

