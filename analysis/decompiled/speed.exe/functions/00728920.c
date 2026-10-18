/* speed.exe 00728920 FUN_00728920; analysis pseudocode, not buildable source.
 * calls 00728850 FUN_00728850
 */

void __fastcall FUN_00728920(short *param_1)

{
  int iVar1;
  
  if ((*(int *)(&DAT_009a3bb0 + *param_1 * 4) != 0) &&
     (iVar1 = *(int *)(*(int *)(&DAT_009a3bb0 + *param_1 * 4) + 4), iVar1 != 0)) {
    FUN_00728850(iVar1);
  }
  return;
}

