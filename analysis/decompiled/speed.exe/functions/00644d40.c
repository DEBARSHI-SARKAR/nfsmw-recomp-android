/* speed.exe 00644d40 FUN_00644d40; analysis pseudocode, not buildable source.
 * calls 006351a0 FUN_006351a0
 */

int __fastcall FUN_00644d40(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_006351a0();
  *(undefined4 *)(param_1 + 4) = uVar1;
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}

