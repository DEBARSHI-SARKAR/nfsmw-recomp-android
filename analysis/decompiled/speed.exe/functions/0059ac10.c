/* speed.exe 0059ac10 FUN_0059ac10; analysis pseudocode, not buildable source.
 * calls 00585b50 FUN_00585b50
 * calls 005af1c0 FUN_005af1c0
 * calls 00585d00 FUN_00585d00
 * calls 00652b00 thunk_FUN_007c7250
 */

undefined4 FUN_0059ac10(int *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  
  if (*param_1 == 0x30201) {
    uVar3 = FUN_005af1c0(param_1 + 2);
    piVar4 = (int *)FUN_00585b50(uVar3);
    if (piVar4 != (int *)0x0) {
      piVar1 = (int *)piVar4[1];
      iVar2 = *piVar4;
      *piVar1 = iVar2;
      *(int **)(iVar2 + 4) = piVar1;
      FUN_00585d00();
      thunk_FUN_007c7250(piVar4);
    }
    return 1;
  }
  return 0;
}

