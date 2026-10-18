/* speed.exe 00669020 FUN_00669020; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __fastcall FUN_00669020(int *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x20))();
  if ((cVar1 == '\0') && (_DAT_00890968 < (float)param_1[0x2d])) {
    return (float10)(float)param_1[0x2e];
  }
  return (float10)_DAT_00890968;
}

