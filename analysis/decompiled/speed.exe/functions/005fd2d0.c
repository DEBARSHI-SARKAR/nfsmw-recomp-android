/* speed.exe 005fd2d0 FUN_005fd2d0; analysis pseudocode, not buildable source.
 * calls 005fbd90 FUN_005fbd90
 * calls 00454810 FUN_00454810
 * calls 004549b0 FUN_004549b0
 * calls 005e1880 FUN_005e1880
 * calls 006269b0 FUN_006269b0
 * calls 005fa780 FUN_005fa780
 */

void __thiscall FUN_005fd2d0(int param_1,undefined4 param_2)

{
  int *piVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  
  piVar1 = *(int **)(param_1 + 0xc);
  if ((piVar1 != (int *)0x0) && (*piVar1 == 0)) {
    FUN_005fa780(piVar1);
  }
  piVar1 = *(int **)(param_1 + 0x10);
  if ((piVar1 != (int *)0x0) && (*piVar1 == 0)) {
    FUN_005fa780(piVar1);
  }
  cVar2 = FUN_005fbd90();
  if ((cVar2 != '\0') && (*(int *)(DAT_0091e000 + 0x1964) != 2)) {
    uVar3 = FUN_004549b0("character_smart");
    FUN_005e1880(uVar3);
    return;
  }
  puVar4 = (undefined4 *)FUN_00454810(0x5839fa1a,param_2);
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)FUN_006269b0(4);
  }
  FUN_005e1880(*puVar4);
  return;
}

