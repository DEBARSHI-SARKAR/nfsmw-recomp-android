/* speed.exe 0059bff0 FUN_0059bff0; analysis pseudocode, not buildable source.
 * calls 00588d60 FUN_00588d60
 * calls 00593b10 FUN_00593b10
 */

void __fastcall FUN_0059bff0(int param_1)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  uint uVar4;
  int *piVar5;
  float local_8;
  
  uVar4 = 1;
  uVar2 = FUN_00588d60(*(undefined4 *)(param_1 + 0x38));
  local_8 = *(float *)(param_1 + 0xd0);
  iVar1 = *(int *)(param_1 + 0x2c);
  if (iVar1 == 0) goto LAB_0059c024;
  piVar5 = (int *)(iVar1 + -4);
  while( true ) {
    if ((int *)(param_1 + 0x2c) == (int *)0x0) {
      piVar3 = (int *)0x0;
    }
    else {
      piVar3 = (int *)(param_1 + 0x28);
    }
    if (piVar5 == piVar3) break;
    if ((uVar4 < uVar2) || (*(int *)(param_1 + 0x10c) + uVar2 <= uVar4)) {
      (**(code **)(*piVar5 + 0x34))(0x45d9c800);
      (**(code **)(*piVar5 + 0x18))();
    }
    else {
      (**(code **)(*piVar5 + 0x14))();
      (**(code **)(*piVar5 + 0x34))(local_8);
      (**(code **)(*piVar5 + 0xc))();
      (**(code **)(*piVar5 + 0x10))();
      local_8 = local_8 + *(float *)(param_1 + 0xe0);
    }
    uVar4 = uVar4 + 1;
    if (piVar5[1] == 0) {
LAB_0059c024:
      piVar5 = (int *)0x0;
    }
    else {
      piVar5 = (int *)(piVar5[1] + -4);
    }
  }
  FUN_00593b10();
  return;
}

