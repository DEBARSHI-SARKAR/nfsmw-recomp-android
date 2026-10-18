/* speed.exe 006edd10 FUN_006edd10; analysis pseudocode, not buildable source.
 * calls 006edc90 FUN_006edc90
 * calls 006e9aa0 FUN_006e9aa0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined2 __fastcall FUN_006edd10(int param_1)

{
  char cVar1;
  
  cVar1 = FUN_006edc90();
  if (cVar1 == '\0') {
    if (*(char *)(param_1 + 0x34) != '\0') {
LAB_006edd32:
      FUN_006e9aa0(0);
      return 1;
    }
  }
  else {
    if (*(char *)(param_1 + 0x34) != '\0') goto LAB_006edd32;
    if (_DAT_00890968 < *(float *)(param_1 + 0x38)) {
      FUN_006e9aa0(1);
      return 1;
    }
  }
  return 0;
}

