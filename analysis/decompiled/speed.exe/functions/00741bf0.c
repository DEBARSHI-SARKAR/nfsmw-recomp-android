/* speed.exe 00741bf0 FUN_00741bf0; analysis pseudocode, not buildable source.
 * calls 00735b30 FUN_00735b30
 * calls 00740fa0 FUN_00740fa0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00741bf0(int param_1)

{
  int iVar1;
  
  if (((*(char *)(DAT_0091cf90 + 0x141) != '\0') || (DAT_00926064 != 0)) && (DAT_009b10a5 == '\0'))
  {
    iVar1 = *(int *)(param_1 + 0xcc);
    if ((iVar1 != 0) && (iVar1 != 0x7fffffff)) {
      if (_DAT_008933d4 <
          ABS((float)(DAT_00925ae8 - *(int *)(param_1 + 200)) * _DAT_00890984 -
              (float)(DAT_00925b14 - iVar1) * _DAT_00890984)) {
        iVar1 = FUN_00735b30();
        if (iVar1 != 0) {
          FUN_00740fa0(1);
        }
      }
    }
    *(int *)(param_1 + 0xcc) = DAT_00925b14;
    *(int *)(param_1 + 200) = DAT_00925ae8;
  }
  return;
}

