/* speed.exe 0070da60 FUN_0070da60; analysis pseudocode, not buildable source.
 * calls 00707900 FUN_00707900
 * calls 004cf6b0 FUN_004cf6b0
 * calls 00465fd0 FUN_00465fd0
 * calls 007186e0 FUN_007186e0
 */

void __thiscall FUN_0070da60(int param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0087fc1b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  piVar2 = (int *)(**(code **)(*param_2 + 4))();
  uVar3 = (**(code **)(*piVar2 + 0x34))();
  piVar2 = DAT_00911fbc;
  if ((DAT_00993cc8 != 0) &&
     (*(int *)(*(int *)(DAT_00993cc8 + 0x238) + 0x18) !=
      *(int *)(*(int *)(DAT_00993cc8 + 0x238) + 0x2c))) {
    piVar2 = (int *)FUN_00465fd0(1,0);
  }
  uStack_4 = 0;
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    FUN_00707900(2,uVar3,0x40,1);
    *piVar2 = (int)&PTR_LAB_008b2278;
  }
  uStack_4 = 0xffffffff;
  FUN_004cf6b0(uVar3,piVar2);
  iVar1 = *(int *)(param_1 + 0x138);
  *(int **)(param_1 + 0xe0) = piVar2;
  if (iVar1 != 1) {
    if ((iVar1 != 999) && (iVar1 != 0)) {
      (**(code **)(*piVar2 + 0xf4))();
      ExceptionList = pvStack_c;
      return;
    }
    if (iVar1 != 1) {
      ExceptionList = pvStack_c;
      return;
    }
  }
  *(uint *)(param_1 + 0x54) = *(uint *)(param_1 + 0x54) | 0x40;
  ExceptionList = pvStack_c;
  return;
}

