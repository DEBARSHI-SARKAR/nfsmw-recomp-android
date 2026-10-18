/* speed.exe 006f59c0 FUN_006f59c0; analysis pseudocode, not buildable source.
 * calls 006ef8c0 FUN_006ef8c0
 * calls 006f0270 FUN_006f0270
 */

void __fastcall FUN_006f59c0(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_1 + 0x154) + *(int *)(param_1 + 0x15c) * 8;
  uVar3 = FUN_006f0270(*(undefined4 *)(param_1 + 0x154),
                       *(int *)(param_1 + 0x154) + *(int *)(param_1 + 0x15c) * 8,&LAB_006eaef0,iVar4
                      );
  FUN_006ef8c0(uVar3,iVar4);
  iVar4 = *(int *)(param_1 + 0xc);
  while (iVar4 != 0) {
    piVar1 = *(int **)(param_1 + 4);
    puVar2 = (undefined4 *)*piVar1;
    FUN_006ef8c0(piVar1,piVar1 + 2);
    if (puVar2 != (undefined4 *)0x0) {
      (**(code **)*puVar2)(1);
    }
    iVar4 = *(int *)(param_1 + 0xc);
  }
  iVar4 = *(int *)(param_1 + 0x154) + *(int *)(param_1 + 0x15c) * 8;
  uVar3 = FUN_006f0270(*(undefined4 *)(param_1 + 0x154),
                       *(int *)(param_1 + 0x154) + *(int *)(param_1 + 0x15c) * 8,&LAB_006eaef0,iVar4
                      );
  FUN_006ef8c0(uVar3,iVar4);
  return;
}

