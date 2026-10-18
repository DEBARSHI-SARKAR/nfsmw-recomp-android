/* speed.exe 007356c0 FUN_007356c0; analysis pseudocode, not buildable source.
 * calls 0078eba0 FUN_0078eba0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __thiscall FUN_007356c0(int param_1,float param_2)

{
  char cVar1;
  
  if (*(char *)(param_1 + 0x19) == '\0') {
    cVar1 = FUN_0078eba0();
    if (cVar1 == '\0') goto LAB_00735736;
  }
  if (*(char *)(DAT_0091cf90 + 0x141) != '\0') {
    if (_DAT_008b4748 < param_2) {
      *(undefined1 *)(param_1 + 0x105) = 1;
      DAT_009b36e0 = DAT_009b36e0 + 1;
      _DAT_009b4584 = DAT_00925ae8;
      return (float10)param_2;
    }
    *(undefined1 *)(param_1 + 0x105) = 0;
    DAT_009b36e0 = 0;
  }
  _DAT_009b4584 = DAT_00925ae8;
LAB_00735736:
  return (float10)param_2;
}

