/* speed.exe 00706a30 FUN_00706a30; analysis pseudocode, not buildable source.
 * calls 007c4840 FID_conflict:_memcpy
 */

void FUN_00706a30(void *param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = param_2 - (int)param_1 >> 2;
  FID_conflict__memcpy((void *)(param_3 + iVar1 * -4),param_1,iVar1 * 4);
  return;
}

