/* speed.exe 005ed750 FUN_005ed750; analysis pseudocode, not buildable source.
 * calls 00454810 FUN_00454810
 * calls 005e66b0 FUN_005e66b0
 * calls 006269b0 FUN_006269b0
 * calls 00460d20 FUN_00460d20
 */

undefined4 __thiscall FUN_005ed750(int param_1,undefined4 param_2)

{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  
  piVar1 = *(int **)(param_1 + 0x34);
  piVar2 = (int *)*piVar1;
  while( true ) {
    if (piVar2 == piVar1) {
      return 0;
    }
    uVar3 = piVar2[3];
    puVar4 = (undefined4 *)FUN_00454810(0x3e225ec1,0);
    if (puVar4 == (undefined4 *)0x0) {
      puVar4 = (undefined4 *)FUN_006269b0(4);
    }
    iVar5 = FUN_00460d20(*puVar4,param_2);
    if (iVar5 == 0) break;
    FUN_005e66b0();
    piVar1 = *(int **)(param_1 + 0x34);
  }
  return uVar3;
}

