/* speed.exe 004fc780 FUN_004fc780; analysis pseudocode, not buildable source.
 */

undefined * FUN_004fc780(undefined4 param_1)

{
  int iVar1;
  
  if (DAT_00916018 == 0x32) {
    return (undefined *)0x0;
  }
  (&DAT_00915aa8)[DAT_00916018] = param_1;
  iVar1 = DAT_00916018 * 0x30;
  DAT_00916018 = DAT_00916018 + 1;
  return &DAT_00916a78 + iVar1;
}

