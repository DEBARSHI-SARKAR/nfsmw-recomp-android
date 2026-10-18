/* speed.exe 00666de0 FUN_00666de0; analysis pseudocode, not buildable source.
 * calls 00460b80 FUN_00460b80
 * calls 00464080 FUN_00464080
 * calls 00464050 FUN_00464050
 * calls 00666aa0 FUN_00666aa0
 * calls 0075c550 FUN_0075c550
 * calls 0065f740 FUN_0065f740
 * calls 0073a420 FUN_0073a420
 * calls 007708f0 FUN_007708f0
 * calls 0062d570 FUN_0062d570
 * calls 00735620 FUN_00735620
 * calls 00465a70 FUN_00465a70
 * calls 00722840 FUN_00722840
 * calls 00660ee0 FUN_00660ee0
 * calls 00627400 FUN_00627400
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00666de0(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  char cVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0087a41f;
  local_c = ExceptionList;
  DAT_00925e90 = 4;
  ExceptionList = &local_c;
  DAT_009a3a20 = FUN_00722840(DAT_00904fb8);
  _DAT_00925890 = FUN_00464050(0);
  _DAT_00925898 = FUN_00460b80();
  _DAT_00925894 = FUN_00464080(0);
  uVar1 = FUN_0065f740("Global\\InGameMemoryFile.bin");
  uVar2 = FUN_00465a70(uVar1,0x1040);
  FUN_00660ee0(uVar2,"Global\\InGameMemoryFile.bin",0,uVar1,&LAB_0065d540,uVar2,0);
  DAT_009258a0 = uVar2;
  FUN_007708f0();
  if (DAT_00926064 == 0) {
    cVar4 = FUN_00735620();
    if (cVar4 == '\0') {
      if (((DAT_0091cf90[300] & 4U) == 0) || (*DAT_0091cf90 != '\x02')) {
        cVar4 = '\0';
      }
      else {
        cVar4 = '\x01';
      }
    }
    else {
      cVar4 = '\x02';
    }
  }
  else {
    cVar4 = DAT_0092607c != 0;
  }
  iVar3 = DAT_008f7ef0;
  if (cVar4 == '\x01') {
    iVar3 = DAT_008f7ef4;
  }
  if (DAT_00926060 != 0) {
    iVar3 = iVar3 + -0x100;
  }
  FUN_0075c550(iVar3 << 10);
  FUN_0073a420(2,cVar4 == '\x01');
  iVar3 = FUN_00627400(0xc);
  local_4 = 0;
  if (iVar3 != 0) {
    FUN_0062d570(1);
  }
  local_4 = 0xffffffff;
  *(undefined4 *)(param_1 + 4) = 0x9b35fe3a;
  FUN_00666aa0();
  ExceptionList = local_c;
  return;
}

