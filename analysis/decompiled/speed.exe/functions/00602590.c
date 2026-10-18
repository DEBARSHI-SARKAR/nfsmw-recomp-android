/* speed.exe 00602590 FUN_00602590; analysis pseudocode, not buildable source.
 * calls 00659250 FUN_00659250
 * calls 00454810 FUN_00454810
 * calls 005e2580 FUN_005e2580
 * calls 005d9ab0 FUN_005d9ab0
 * calls 00452880 FUN_00452880
 * calls 006269b0 FUN_006269b0
 * calls 005e3ec0 FUN_005e3ec0
 * calls 00600cd0 FUN_00600cd0
 * calls 00452430 FUN_00452430
 * calls 005e3e60 FUN_005e3e60
 */

undefined4 * __fastcall FUN_00602590(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  void *unaff_EBX;
  undefined4 unaff_retaddr;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_008761df;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_008a39b8;
  param_1[1] = 0;
  FUN_00452880(0x14,1);
  iVar1 = (*(code *)**(undefined4 **)PTR_PTR_008f7ea8)(0x14,0);
  pvStack_c = (void *)0x0;
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_005e2580(uStack_4,0,0);
  }
  pvStack_c = (void *)0xffffffff;
  param_1[2] = uVar2;
  param_1[3] = 0;
  param_1[4] = 0;
  FUN_00600cd0(unaff_retaddr);
  param_1[1] = unaff_retaddr;
  piVar3 = (int *)FUN_00454810(0x93fd9fda,0);
  if (piVar3 == (int *)0x0) {
    piVar3 = (int *)FUN_006269b0(4);
  }
  if (*piVar3 != 0) {
    uVar2 = FUN_005e3e60(*piVar3);
    param_1[4] = uVar2;
    FUN_005d9ab0();
  }
  uVar2 = FUN_00452430();
  uVar2 = FUN_005e3ec0(uVar2);
  param_1[3] = uVar2;
  ExceptionList = unaff_EBX;
  return param_1;
}

