/* speed.exe 006022f0 FUN_006022f0; analysis pseudocode, not buildable source.
 * calls 00465a70 FUN_00465a70
 * calls 00600b20 FUN_00600b20
 */

void __fastcall FUN_006022f0(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_00465a70(*param_1 << 4,0x800);
  param_1[0xf] = iVar1;
  FUN_00600b20();
  return;
}

