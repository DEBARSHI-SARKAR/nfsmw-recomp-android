/* speed.exe 00819995 FUN_00819995; analysis pseudocode, not buildable source.
 * calls 00831880 FUN_00831880
 */

undefined4 FUN_00819995(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = param_1;
  iVar3 = *(int *)(param_1 + 0x14);
  if (*(int *)(param_1 + 0x10) != iVar3) {
    piVar1 = (int *)(param_1 + 8);
    piVar2 = (int *)(param_1 + 0xc);
    *(int *)(param_1 + 0x10) = iVar3;
    param_1 = *piVar1;
    if ((*piVar1 <= iVar3) && (param_1 = *piVar2, iVar3 <= *piVar2)) {
      param_1 = iVar3;
    }
    FUN_00831880(iVar4,&param_1);
  }
  return 0;
}

