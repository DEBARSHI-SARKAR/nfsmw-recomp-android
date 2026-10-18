/* speed.exe 00784f40 FUN_00784f40; analysis pseudocode, not buildable source.
 * calls 00784ec0 FUN_00784ec0
 */

void __fastcall FUN_00784f40(int *param_1)

{
  int iVar1;
  
  if ((param_1[1] == 0) && (*param_1 != 0)) {
    iVar1 = FUN_00784ec0(*param_1);
    param_1[1] = iVar1;
    param_1[2] = iVar1 + 0x40;
    param_1[3] = iVar1 + 0x50;
  }
  return;
}

