/* speed.exe 00600ab0 FUN_00600ab0; analysis pseudocode, not buildable source.
 * calls 007696b0 FUN_007696b0
 * calls 005dc970 FUN_005dc970
 * calls 005fccc0 FUN_005fccc0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00600ab0(int param_1,int param_2,int param_3)

{
  int iVar1;
  float10 fVar2;
  
  iVar1 = *(int *)(param_1 + 0x2c);
  if (iVar1 != 0) {
    if (*(char *)(iVar1 + 0x1d) != '\0') {
      FUN_005dc970(iVar1);
    }
    *(undefined4 *)(param_1 + 0x2c) = 0;
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
  *(int *)(param_1 + 0x2c) = param_2;
  *(int *)(param_1 + 0x30) = param_3;
  if ((param_2 != 0) && (param_3 == 2)) {
    fVar2 = (float10)FUN_005fccc0();
    if ((float10)_DAT_00890968 <= fVar2) {
      fVar2 = (float10)FUN_005fccc0();
      FUN_007696b0((float)fVar2);
    }
  }
  return;
}

