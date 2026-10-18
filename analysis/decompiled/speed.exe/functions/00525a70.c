/* speed.exe 00525a70 FUN_00525a70; analysis pseudocode, not buildable source.
 * calls 00525a70 FUN_00525a70
 * calls 005258b0 FUN_005258b0
 * calls 00460d20 FUN_00460d20
 * calls 00516af0 FUN_00516af0
 */

void __thiscall FUN_00525a70(int *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = FUN_00516af0(param_2);
  iVar1 = *(int *)(*param_1 + 0xe0);
  while (iVar2 = iVar1, iVar2 != 0) {
    iVar1 = *(int *)(iVar2 + 4);
    if (((*(int *)(iVar2 + 0x3c) == iVar3) &&
        (iVar4 = FUN_00460d20(*(undefined4 *)(iVar2 + 0xc),*(undefined4 *)(iVar3 + 0xc)), iVar4 != 0
        )) && (*(int *)(iVar2 + 0x1c) < 100)) {
      FUN_00525a70(*(undefined4 *)(iVar2 + 0xc));
      FUN_005258b0(1);
    }
  }
  return;
}

