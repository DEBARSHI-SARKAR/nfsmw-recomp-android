/* speed.exe 0071dd20 FUN_0071dd20; analysis pseudocode, not buildable source.
 * calls 0070ced0 FUN_0070ced0
 * calls 00716d20 FUN_00716d20
 * calls 00832e09 FUN_00832e09
 * calls 005d0370 FUN_005d0370
 * calls 004aecf0 FUN_004aecf0
 * calls 00832d4b FUN_00832d4b
 * calls 004cb2d0 FUN_004cb2d0
 * calls 007053d0 FUN_007053d0
 * calls 00832db8 FUN_00832db8
 * calls 004ac040 FUN_004ac040
 * calls 00832efe FUN_00832efe
 * calls 00704130 FUN_00704130
 * calls 00832df3 FUN_00832df3
 * calls 00712300 FUN_00712300
 * calls 00832d92 FUN_00832d92
 * calls 00832e1f FUN_00832e1f
 */

void FUN_0071dd20(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00880326;
  local_c = ExceptionList;
  if (DAT_008f86f8 == 0) {
    return;
  }
  ExceptionList = &local_c;
  FUN_007053d0();
  piVar4 = &DAT_00993398;
  do {
    iVar3 = *piVar4;
    if (iVar3 != 0) {
      FUN_005d0370(iVar3,(piVar4[2] - iVar3 >> 2) << 2,0);
    }
    *piVar4 = 0;
    piVar4[1] = 0;
    piVar4[2] = 0;
    piVar4 = piVar4 + 5;
  } while ((int)piVar4 < 0x9933e8);
  iVar3 = DAT_00992724;
  if (0 < DAT_00992724) {
    do {
      DAT_00992724 = DAT_00992724 + -1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  if (DAT_0099271c != 0) {
    (**(code **)(DAT_00992718 + 8))(DAT_0099271c,DAT_00992720);
    DAT_0099271c = 0;
    DAT_00992720 = 0;
    DAT_00992724 = 0;
  }
  FUN_00712300(0x14);
  if (DAT_00993c4c != 0) {
    FUN_005d0370(DAT_00993c4c,((DAT_00993c54 - DAT_00993c4c) / 0x2c) * 0x2c,0);
  }
  DAT_00993c4c = 0;
  DAT_00993c50 = 0;
  DAT_00993c54 = 0;
  DAT_00992238 = 0;
  DAT_00992234 = param_1;
  uVar1 = FUN_00832d92(0x5622,0x10,1);
  puVar2 = (undefined4 *)FUN_00832efe();
  if (DAT_0099221c == 0) {
    DAT_0099221c = FUN_004aecf0(0xffffffff);
  }
  else {
    DAT_0099221c = DAT_0099221c + 1;
  }
  FUN_00832d4b(&LAB_006fedd0,&LAB_006fede0);
  iVar3 = DAT_0099221c;
  if (DAT_0099221c < 0) {
    iVar3 = -DAT_0099221c;
  }
  FUN_00832e1f(&LAB_00713ed0,iVar3,uVar1);
  *puVar2 = &LAB_006ff430;
  puVar2[2] = &LAB_006ff5f0;
  FUN_00832db8(&LAB_006ff450,&DAT_006ff470);
  FUN_00832e09(&LAB_006ff480);
  FUN_00832df3(&LAB_006ff460);
  if (DAT_00992234 == 1) {
    DAT_00992248 = 0;
    DAT_0099224c = 0;
    if (DAT_008f8700 != 0) {
      iVar3 = FUN_004ac040(0xb8,"AUD:GameSpeech",0);
      uStack_4 = 0;
      if (iVar3 == 0) {
        DAT_00992230 = (int *)0x0;
      }
      else {
        DAT_00992230 = (int *)FUN_00716d20();
      }
      uStack_4 = 0xffffffff;
      (**(code **)(*DAT_00992230 + 4))(0);
    }
    if (DAT_008f8704 == 0) goto LAB_0071dfcd;
    iVar3 = FUN_004ac040(0x98,"AUD:NISSFXModule",0);
    uStack_4 = 1;
    if (iVar3 == 0) {
LAB_0071dfb5:
      DAT_0099222c = (int *)0x0;
    }
    else {
      DAT_0099222c = (int *)FUN_0070ced0();
    }
  }
  else {
    if ((DAT_00992234 == 2) || (DAT_00992234 != 3)) goto LAB_0071dfcd;
    DAT_0099224c = 0;
    DAT_00992248 = 0;
    if (DAT_008f8704 == 0) goto LAB_0071dfcd;
    iVar3 = FUN_004ac040(0x98,"AUD:NISSFXModule",0);
    uStack_4 = 2;
    if (iVar3 == 0) goto LAB_0071dfb5;
    DAT_0099222c = (int *)FUN_0070ced0();
  }
  uStack_4 = 0xffffffff;
  (**(code **)(*DAT_0099222c + 4))(2);
LAB_0071dfcd:
  FUN_00704130();
  FUN_004cb2d0();
  ExceptionList = local_c;
  return;
}

