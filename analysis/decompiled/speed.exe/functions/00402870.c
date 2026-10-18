/* speed.exe 00402870 FUN_00402870; analysis pseudocode, not buildable source.
 * calls 00627320 FUN_00627320
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __thiscall FUN_00402870(undefined4 param_1,float param_2)

{
  int iVar1;
  
  iVar1 = FUN_00627320(param_1);
  return (float10)iVar1 * (float10)param_2 * (float10)_DAT_00890980;
}

