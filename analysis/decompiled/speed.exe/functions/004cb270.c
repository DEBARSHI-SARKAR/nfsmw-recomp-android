/* speed.exe 004cb270 FUN_004cb270; analysis pseudocode, not buildable source.
 * calls 004c70f0 FUN_004c70f0
 */

undefined4 __thiscall FUN_004cb270(int param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 local_8;
  int local_4;
  
  iVar2 = *(int *)(param_1 + 0xc) * 8;
  local_8 = 0;
  local_4 = param_2;
  puVar1 = (undefined4 *)
           FUN_004c70f0(*(int *)(param_1 + 4),*(int *)(param_1 + 4) + iVar2,&local_8,0);
  if ((puVar1 != (undefined4 *)(*(int *)(param_1 + 4) + iVar2)) && (puVar1[1] == param_2)) {
    return *puVar1;
  }
  return 0;
}

