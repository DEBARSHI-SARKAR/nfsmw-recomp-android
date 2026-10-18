/* speed.exe 005ebf30 FUN_005ebf30; analysis pseudocode, not buildable source.
 * calls 005dfad0 FUN_005dfad0
 * calls 005d59f0 FUN_005d59f0
 */

uint __fastcall FUN_005ebf30(int param_1)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  
  piVar2 = *(int **)(param_1 + 0x90);
  piVar1 = (int *)*piVar2;
  while( true ) {
    if (piVar1 == piVar2) {
      return CONCAT31((int3)((uint)piVar1 >> 8),1);
    }
    piVar2 = (int *)FUN_005d59f0(&LAB_004040e0);
    if ((piVar2 != (int *)0x0) && (uVar3 = (**(code **)(*piVar2 + 0x5c))(), (char)uVar3 != '\0'))
    break;
    FUN_005dfad0();
    piVar2 = *(int **)(param_1 + 0x90);
  }
  return uVar3 & 0xffffff00;
}

