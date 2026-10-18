/* speed.exe 00788fa0 FUN_00788fa0; analysis pseudocode, not buildable source.
 * calls 00788f30 FUN_00788f30
 * calls 007886f0 FUN_007886f0
 */

undefined4 __thiscall
FUN_00788fa0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int *piVar2;
  char cVar3;
  
  cVar3 = FUN_00788f30(param_2,param_3,param_4);
  if (cVar3 != '\0') {
    piVar1 = (int *)(DAT_009b38fc + 0x4c);
    piVar2 = *(int **)(DAT_009b38fc + 0x4c);
    while (piVar2 != piVar1) {
      FUN_007886f0(0x447a0000);
      piVar2 = (int *)*piVar1;
    }
    if (0 < *(int *)(param_1 + 0x2e0)) {
      return 1;
    }
  }
  return 0;
}

