/* speed.exe 0070a760 FUN_0070a760; analysis pseudocode, not buildable source.
 * calls 00708390 FUN_00708390
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0070a760(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  float afStack_c [3];
  
  iVar1 = DAT_00993cc8;
  if (((0 < *(short *)(DAT_00993cc8 + 0x148)) && (DAT_0092d884 != 0)) &&
     ((int *)*DAT_0092d87c != (int *)0x0)) {
    piVar2 = (int *)(**(code **)(*(int *)*DAT_0092d87c + 4))();
    piVar2 = (int *)(**(code **)(*piVar2 + 0x54))();
    (**(code **)(*piVar2 + 0x3c))(afStack_c);
    if (_DAT_00890968 <= afStack_c[0]) {
      *(int *)(param_1 + 0x38) = DAT_00925ae8;
      return;
    }
    if (*(float *)(*(int *)(iVar1 + 0x184) + 0x5c) <=
        (float)(DAT_00925ae8 - *(int *)(param_1 + 0x38)) * _DAT_00890984) {
      piVar2 = (int *)FUN_00708390(1,1);
      if (piVar2 != (int *)0x0) {
        uVar3 = 2;
        if (*(float *)(iVar1 + 0x108) <= *(float *)(*(int *)(iVar1 + 0x184) + 0x70)) {
          uVar3 = 1;
        }
        (**(code **)(*piVar2 + 0x188))(uVar3);
      }
    }
  }
  return;
}

