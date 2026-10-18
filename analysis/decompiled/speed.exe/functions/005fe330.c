/* speed.exe 005fe330 FUN_005fe330; analysis pseudocode, not buildable source.
 * calls 005fb420 FUN_005fb420
 * calls 005fb4e0 FUN_005fb4e0
 * calls 007889d0 FUN_007889d0
 * calls 0064b410 FUN_0064b410
 * calls 005fa780 FUN_005fa780
 * calls 00782c60 FUN_00782c60
 * calls 005d9620 FUN_005d9620
 */

void __fastcall FUN_005fe330(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined1 uVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  
  if (*(int *)(param_1 + 0x1968) != 0) {
    uVar6 = 0;
    while( true ) {
      iVar1 = *(int *)(param_1 + 0x1968);
      piVar2 = *(int **)(iVar1 + 0xc);
      if ((piVar2 != (int *)0x0) && (*piVar2 == 0)) {
        FUN_005fa780(piVar2);
      }
      piVar2 = *(int **)(iVar1 + 0x10);
      if ((piVar2 != (int *)0x0) && (*piVar2 == 0)) {
        FUN_005fa780(piVar2);
      }
      uVar4 = FUN_005d9620();
      if (uVar4 <= uVar6) break;
      uVar5 = FUN_005fb420(uVar6);
      uVar3 = FUN_005fb4e0(uVar6);
      FUN_0064b410(uVar5,uVar3);
      uVar6 = uVar6 + 1;
    }
    FUN_00782c60();
    FUN_007889d0();
    return;
  }
  return;
}

