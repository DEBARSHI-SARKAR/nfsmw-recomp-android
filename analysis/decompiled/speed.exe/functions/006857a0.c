/* speed.exe 006857a0 FUN_006857a0; analysis pseudocode, not buildable source.
 * calls 006847d0 FUN_006847d0
 * calls 0067d200 FUN_0067d200
 * calls 00684710 FUN_00684710
 */

void __thiscall FUN_006857a0(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  undefined4 local_8;
  undefined1 local_4 [4];
  
  local_8 = param_2;
  piVar2 = (int *)FUN_0067d200(local_4,&local_8);
  iVar1 = param_3;
  if (*piVar2 != *(int *)(param_1 + -0x18)) {
    piVar2 = (int *)FUN_00684710(&local_8);
    if ((*piVar2 != 0) && (*(int *)(*piVar2 + 0x3c) == iVar1)) {
      return;
    }
  }
  piVar2 = (int *)FUN_006847d0(&param_2);
  *piVar2 = iVar1;
  *(undefined1 *)(param_1 + 200) = 1;
  return;
}

