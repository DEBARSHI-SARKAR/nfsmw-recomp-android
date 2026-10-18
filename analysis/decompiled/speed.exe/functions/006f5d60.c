/* speed.exe 006f5d60 FUN_006f5d60; analysis pseudocode, not buildable source.
 * calls 006755b0 FUN_006755b0
 * calls 006f0310 FUN_006f0310
 */

void __fastcall FUN_006f5d60(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_1 + 0x514) + *(int *)(param_1 + 0x51c) * 8;
  uVar3 = FUN_006f0310(*(undefined4 *)(param_1 + 0x514),
                       *(int *)(param_1 + 0x514) + *(int *)(param_1 + 0x51c) * 8,&LAB_006eaf50,iVar4
                      );
  FUN_006755b0(uVar3,iVar4);
  iVar4 = *(int *)(param_1 + 0xc);
  while (iVar4 != 0) {
    piVar1 = *(int **)(param_1 + 4);
    puVar2 = (undefined4 *)*piVar1;
    FUN_006755b0(piVar1,piVar1 + 2);
    if (puVar2 != (undefined4 *)0x0) {
      (**(code **)*puVar2)(1);
    }
    iVar4 = *(int *)(param_1 + 0xc);
  }
  iVar4 = *(int *)(param_1 + 0x514) + *(int *)(param_1 + 0x51c) * 8;
  uVar3 = FUN_006f0310(*(undefined4 *)(param_1 + 0x514),
                       *(int *)(param_1 + 0x514) + *(int *)(param_1 + 0x51c) * 8,&LAB_006eaf50,iVar4
                      );
  FUN_006755b0(uVar3,iVar4);
  return;
}

