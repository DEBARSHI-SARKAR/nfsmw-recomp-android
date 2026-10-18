/* speed.exe 006f5ba0 FUN_006f5ba0; analysis pseudocode, not buildable source.
 * calls 006f02c0 FUN_006f02c0
 * calls 006ef9d0 FUN_006ef9d0
 */

void __fastcall FUN_006f5ba0(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c) * 8;
  uVar3 = FUN_006f02c0(*(undefined4 *)(param_1 + 0x54),
                       *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c) * 8,&LAB_006eaf40,iVar4);
  FUN_006ef9d0(uVar3,iVar4);
  iVar4 = *(int *)(param_1 + 0xc);
  while (iVar4 != 0) {
    piVar1 = *(int **)(param_1 + 4);
    puVar2 = (undefined4 *)*piVar1;
    FUN_006ef9d0(piVar1,piVar1 + 2);
    if (puVar2 != (undefined4 *)0x0) {
      (**(code **)*puVar2)(1);
    }
    iVar4 = *(int *)(param_1 + 0xc);
  }
  iVar4 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c) * 8;
  uVar3 = FUN_006f02c0(*(undefined4 *)(param_1 + 0x54),
                       *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c) * 8,&LAB_006eaf40,iVar4);
  FUN_006ef9d0(uVar3,iVar4);
  return;
}

