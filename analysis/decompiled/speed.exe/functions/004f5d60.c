/* speed.exe 004f5d60 FUN_004f5d60; analysis pseudocode, not buildable source.
 * calls 0081e274 FUN_0081e274
 * calls 0081bcd9 FUN_0081bcd9
 * calls 0081bccb FUN_0081bccb
 * calls 004f5bc0 FUN_004f5bc0
 * calls 004ac0e0 FUN_004ac0e0
 */

void __fastcall FUN_004f5d60(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0086d6c8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00899580;
  local_4 = 0;
  piVar3 = param_1 + 0x16;
  for (iVar2 = 0;
      ((*(int *)(param_1[6] + 0xa8) == 1 && (iVar2 < 1)) ||
      ((*(int *)(param_1[6] + 0xa8) == 2 && (iVar2 < 2)))); iVar2 = iVar2 + 1) {
    iVar1 = *piVar3;
    if ((iVar1 != 0) && (*(int *)(iVar1 + 0x24) != 0)) {
      FUN_0081bccb();
      FUN_0081e274(*(undefined4 *)(iVar1 + 0x1c));
      FUN_0081bcd9();
      *(undefined4 *)(iVar1 + 0x24) = 0;
    }
    if ((undefined4 *)*piVar3 != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)*piVar3)(1);
    }
    *piVar3 = 0;
    if ((undefined4 *)piVar3[-1] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)piVar3[-1])(1);
    }
    piVar3[-1] = 0;
    if (piVar3[1] != 0) {
      FUN_004ac0e0(piVar3[1]);
    }
    piVar3[1] = 0;
    piVar3 = piVar3 + 6;
  }
  local_4 = 0xffffffff;
  FUN_004f5bc0();
  ExceptionList = pvStack_c;
  return;
}

