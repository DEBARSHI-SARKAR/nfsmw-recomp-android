/* speed.exe 0057f2e0 FUN_0057f2e0; analysis pseudocode, not buildable source.
 * calls 0056be80 FUN_0056be80
 * calls 004611c0 FUN_004611c0
 * calls 0056bfc0 FUN_0056bfc0
 */

void __fastcall FUN_0057f2e0(int param_1)

{
  int iVar1;
  
  iVar1 = param_1 + 0x100;
  if (DAT_0091cf84 == 0) {
    FUN_004611c0(iVar1);
  }
  else {
    FUN_0056bfc0(iVar1,0x200,param_1);
  }
  FUN_0056be80(param_1 + 0x304,0x100,iVar1);
  return;
}

