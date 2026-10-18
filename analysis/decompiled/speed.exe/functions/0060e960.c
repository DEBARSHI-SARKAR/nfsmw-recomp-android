/* speed.exe 0060e960 FUN_0060e960; analysis pseudocode, not buildable source.
 * calls 0060bf20 FUN_0060bf20
 * calls 00607d40 FUN_00607d40
 * calls 006127a0 FUN_006127a0
 */

undefined4 * FUN_0060e960(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  
  iVar1 = *(int *)(*(int *)(param_2 + 4) + 8);
  if ((*(byte *)(iVar1 + 6) & 1) == 0) {
    piVar2 = (int *)FUN_00607d40(iVar1,*(undefined4 *)(*(int *)(param_1 + 0x10) + 0x54));
    if (*piVar2 != 0) goto LAB_0060e993;
    *(byte *)(iVar1 + 6) = *(byte *)(iVar1 + 6) | 1;
  }
  piVar2 = (int *)0x0;
LAB_0060e993:
  if (piVar2 == (int *)0x0) {
    return &DAT_008a3c5c;
  }
  if (*piVar2 == 6) {
    FUN_006127a0(param_1,piVar2,param_2,param_3);
    return *(undefined4 **)(param_1 + 8);
  }
  puVar3 = (undefined4 *)FUN_0060bf20(param_1,piVar2,param_3,param_4);
  return puVar3;
}

