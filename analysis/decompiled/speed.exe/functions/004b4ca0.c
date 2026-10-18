/* speed.exe 004b4ca0 FUN_004b4ca0; analysis pseudocode, not buildable source.
 * calls 00653bb0 FUN_00653bb0
 * calls 00653b10 FUN_00653b10
 */

void __fastcall FUN_004b4ca0(int param_1)

{
  int iVar1;
  int iVar2;
  float fVar3;
  
  *(undefined4 *)(param_1 + 0xbc) = *(undefined4 *)(param_1 + 0xac);
  iVar1 = *(int *)(param_1 + 0x18);
  *(float *)(param_1 + 0xac) = *(float *)(iVar1 + 100) - *(float *)(param_1 + 0xb4);
  *(float *)(param_1 + 0xb0) =
       *(float *)(*(int *)(param_1 + 0x28) + 0x118) - *(float *)(*(int *)(param_1 + 0x28) + 0x11c);
  *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(iVar1 + 100);
  if (*(char *)(*(int *)(iVar1 + 0x5c) + 0xb4) == '\0') {
    iVar1 = *(int *)(*(int *)(param_1 + 0x30) + 0x84);
    if (iVar1 != 0) {
      if (iVar1 == 1) {
        FUN_00653bb0(*(undefined4 *)(param_1 + 0xac));
      }
      else {
        FUN_00653bb0(*(undefined4 *)(param_1 + 0xb0));
      }
      goto LAB_004b4dc8;
    }
    iVar1 = *(int *)(param_1 + 0x2c);
    if ((*(int *)(iVar1 + 0x38) == 3) || (*(int *)(iVar1 + 0x38) != 0)) {
      iVar2 = *(int *)(iVar1 + 0x38);
      if (iVar2 == 5) {
        FUN_00653bb0(*(undefined4 *)(param_1 + 0xb0));
        goto LAB_004b4dc8;
      }
      if (*(int *)(iVar1 + 0x3c) == 2) {
        FUN_00653bb0(ABS(*(float *)(param_1 + 0xac)));
        goto LAB_004b4dc8;
      }
      if ((iVar2 == 2) || (iVar2 == 3)) {
        fVar3 = ABS(*(float *)(param_1 + 0xb0));
      }
      else {
        fVar3 = *(float *)(param_1 + 0xb0);
      }
    }
    else {
      fVar3 = *(float *)(param_1 + 0xac);
    }
  }
  else {
    fVar3 = *(float *)(param_1 + 0xb0);
  }
  FUN_00653b10(fVar3);
LAB_004b4dc8:
                    /* WARNING: Could not recover jumptable at 0x004b4dcd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)(param_1 + 0x84) + 4))();
  return;
}

