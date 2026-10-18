/* speed.exe 0081697c FUN_0081697c; analysis pseudocode, not buildable source.
 */

void FUN_0081697c(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,int param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  short sVar10;
  short sVar11;
  short sVar12;
  short sVar13;
  
  iVar5 = 8;
  do {
    uVar1 = *param_1;
    uVar2 = *param_2;
    uVar3 = param_1[1];
    uVar4 = param_2[1];
    sVar6 = (short)uVar1 + (short)uVar2;
    sVar7 = (short)((ulonglong)uVar1 >> 0x10) + (short)((ulonglong)uVar2 >> 0x10);
    sVar8 = (short)((ulonglong)uVar1 >> 0x20) + (short)((ulonglong)uVar2 >> 0x20);
    sVar9 = (short)((ulonglong)uVar1 >> 0x30) + (short)((ulonglong)uVar2 >> 0x30);
    sVar10 = (short)uVar3 + (short)uVar4;
    sVar11 = (short)((ulonglong)uVar3 >> 0x10) + (short)((ulonglong)uVar4 >> 0x10);
    sVar12 = (short)((ulonglong)uVar3 >> 0x20) + (short)((ulonglong)uVar4 >> 0x20);
    sVar13 = (short)((ulonglong)uVar3 >> 0x30) + (short)((ulonglong)uVar4 >> 0x30);
    *param_3 = CONCAT17((0 < sVar13) * (sVar13 < 0x100) * (char)sVar13 - (0xff < sVar13),
                        CONCAT16((0 < sVar12) * (sVar12 < 0x100) * (char)sVar12 - (0xff < sVar12),
                                 CONCAT15((0 < sVar11) * (sVar11 < 0x100) * (char)sVar11 -
                                          (0xff < sVar11),
                                          CONCAT14((0 < sVar10) * (sVar10 < 0x100) * (char)sVar10 -
                                                   (0xff < sVar10),
                                                   CONCAT13((0 < sVar9) * (sVar9 < 0x100) *
                                                            (char)sVar9 - (0xff < sVar9),
                                                            CONCAT12((0 < sVar8) * (sVar8 < 0x100) *
                                                                     (char)sVar8 - (0xff < sVar8),
                                                                     CONCAT11((0 < sVar7) *
                                                                              (sVar7 < 0x100) *
                                                                              (char)sVar7 -
                                                                              (0xff < sVar7),
                                                                              (0 < sVar6) *
                                                                              (sVar6 < 0x100) *
                                                                              (char)sVar6 -
                                                                              (0xff < sVar6))))))));
    param_1 = param_1 + 2;
    param_2 = param_2 + 2;
    param_3 = (undefined8 *)((int)param_3 + param_4);
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  return;
}

