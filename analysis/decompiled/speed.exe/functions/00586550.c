/* speed.exe 00586550 FUN_00586550; analysis pseudocode, not buildable source.
 * calls 0056be80 FUN_0056be80
 */

undefined4 * __fastcall FUN_00586550(int param_1)

{
  if (*(int *)(param_1 + 0x24) != 0) {
    FUN_0056be80(&DAT_0091d7b4,0x100,&DAT_0091d5b0);
    return &DAT_0091d7b4;
  }
  return (undefined4 *)0x0;
}

