/* speed.exe 004d1b30 FUN_004d1b30; analysis pseudocode, not buildable source.
 * calls 00659250 FUN_00659250
 * calls 004f2b00 FUN_004f2b00
 * calls 004f2760 FUN_004f2760
 * calls 0070f500 FUN_0070f500
 * calls 00452880 FUN_00452880
 * calls 004d1a60 FUN_004d1a60
 * calls 004b8a10 FUN_004b8a10
 * calls 004aed40 FUN_004aed40
 * calls 004f2db0 FUN_004f2db0
 */

void __fastcall FUN_004d1b30(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0086c82f;
  local_c = ExceptionList;
  if (DAT_008f86f8 != 0) {
    ExceptionList = &local_c;
    FUN_00452880(0x14,1);
    iVar1 = (*(code *)**(undefined4 **)PTR_PTR_008f7ea8)(0x14,0);
    uStack_4 = 0;
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_004b8a10(0x7e4b0ed2,0,0);
    }
    uStack_4 = 0xffffffff;
    *(undefined4 *)(param_1 + 0x94) = uVar2;
    FUN_004aed40();
    FUN_004d1a60();
    FUN_0070f500(0x50000);
    FUN_004f2db0();
    FUN_004f2b00();
    FUN_004f2760();
  }
  ExceptionList = local_c;
  return;
}

