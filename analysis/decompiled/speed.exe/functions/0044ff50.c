/* speed.exe 0044ff50 FUN_0044ff50; analysis pseudocode, not buildable source.
 * calls 004494d0 FUN_004494d0
 * calls 00445fa0 FUN_00445fa0
 * calls 0044b040 FUN_0044b040
 * calls 0044ae10 FUN_0044ae10
 * calls 0044e9b0 FUN_0044e9b0
 */

void __thiscall FUN_0044ff50(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = FUN_0044ae10(1);
  if ((iVar2 != 0) && (*(int *)(iVar2 + 0x10) != 0)) {
    iVar2 = FUN_0044ae10(2);
    if ((iVar2 != 0) &&
       ((*(int *)(iVar2 + 0x10) != 0 && (*(float *)(param_1 + 0x2c) < *(float *)(param_1 + 0x20)))))
    {
      FUN_0044e9b0();
      return;
    }
    iVar2 = 0;
    piVar3 = &DAT_0090dbac;
    do {
      iVar1 = piVar3[-3];
      if ((iVar1 != 0) && (-1 < *piVar3)) {
        FUN_004494d0(param_2);
        FUN_00445fa0(1);
        FUN_0044b040(iVar2,iVar1,param_2);
      }
      piVar3 = piVar3 + 4;
      iVar2 = iVar2 + 1;
    } while ((int)piVar3 < 0x90dcac);
  }
  return;
}

