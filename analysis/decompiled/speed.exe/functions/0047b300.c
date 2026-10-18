/* speed.exe 0047b300 FUN_0047b300; analysis pseudocode, not buildable source.
 * calls 0046e150 FUN_0046e150
 * calls 0046e1d0 FUN_0046e1d0
 * calls 0045ed20 thunk_FUN_006bd940
 */

void __thiscall FUN_0047b300(int param_1,int param_2)

{
  char cVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  float10 fVar5;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  if (DAT_009885c8 != (int *)0x0) {
    piVar2 = (int *)(**(code **)(*DAT_009885c8 + 0x48))();
    if (piVar2 != (int *)0x0) {
      cVar1 = (**(code **)(*piVar2 + 0xc))();
      if (cVar1 != '\0') {
        uStack_20 = 0;
        uStack_1c = 0;
        uStack_18 = 0;
        uStack_14 = 0;
        uVar3 = (**(code **)(*piVar2 + 0x30))();
        thunk_FUN_006bd940(&uStack_20,uVar3,param_2);
        if (*(int *)(param_1 + 0x28) < 1) {
          iVar4 = (**(code **)(*piVar2 + 0x30))();
          fVar5 = (float10)FUN_0046e150(iVar4 + 0x30);
          *(float *)(param_1 + 0x50) = (float)fVar5;
        }
        fVar5 = (float10)FUN_0046e1d0(&uStack_20);
        *(float *)(param_2 + 8) = (float)(fVar5 + (float10)*(float *)(param_2 + 8));
      }
    }
  }
  return;
}

