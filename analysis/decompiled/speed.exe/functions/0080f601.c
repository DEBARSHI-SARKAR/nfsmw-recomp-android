/* speed.exe 0080f601 FUN_0080f601; analysis pseudocode, not buildable source.
 */

void FUN_0080f601(undefined4 *param_1,undefined4 *param_2,uint param_3,int param_4,int param_5)

{
  undefined8 uVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  ushort uVar10;
  ushort uVar11;
  uint uVar12;
  int iVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  
  puVar14 = param_1;
  puVar15 = param_2;
  for (uVar12 = param_3 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
    *puVar15 = *puVar14;
    puVar14 = puVar14 + 1;
    puVar15 = puVar15 + 1;
  }
  for (uVar12 = param_3 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
    *(undefined1 *)puVar15 = *(undefined1 *)puVar14;
    puVar14 = (undefined4 *)((int)puVar14 + 1);
    puVar15 = (undefined4 *)((int)puVar15 + 1);
  }
  if (1 < param_4 + -1) {
    param_4 = param_4 + -2;
    do {
      param_2 = (undefined4 *)((int)param_2 + param_5);
      iVar13 = 0;
      do {
        uVar18 = *(undefined8 *)((int)param_1 + iVar13);
        uVar16 = *(undefined8 *)((int)param_1 + iVar13 + param_5);
        uVar11 = (ushort)(((uint7)(byte)((ulonglong)uVar18 >> 0x18) << 0x30) >> 0x28);
        uVar1 = *(undefined8 *)((int)param_1 + iVar13 + param_5 * 2);
        sVar2 = (short)((ulonglong)DAT_0090b260 >> 0x10);
        sVar3 = (short)((ulonglong)DAT_0090b260 >> 0x20);
        sVar4 = (short)((ulonglong)DAT_0090b260 >> 0x30);
        uVar17 = psllw((ulonglong)
                       CONCAT52((int5)(CONCAT43((int)(((uint7)CONCAT21((short)(((uint7)(byte)((
                                                  ulonglong)uVar16 >> 0x18) << 0x30) >> 0x28),
                                                  (char)((ulonglong)uVar16 >> 0x10)) << 0x20) >>
                                                  0x18),CONCAT12((char)((ulonglong)uVar16 >> 8),
                                                                 (short)uVar16)) >> 0x10),
                                (short)uVar16) & 0xffff00ff00ff00ff,1);
        uVar19 = psllw((ulonglong)
                       CONCAT16((char)((ulonglong)uVar16 >> 0x38),
                                (uint6)CONCAT14((char)((ulonglong)uVar16 >> 0x30),
                                                (uint)CONCAT12((char)((ulonglong)uVar16 >> 0x28),
                                                               (ushort)(byte)((ulonglong)uVar16 >>
                                                                             0x20)))),1);
        uVar10 = (ushort)(((uint7)(byte)((ulonglong)uVar1 >> 0x18) << 0x30) >> 0x28);
        uVar16 = psraw(CONCAT26((uVar11 >> 8) + sVar4 + (short)((ulonglong)uVar17 >> 0x30) +
                                (uVar10 >> 8),
                                CONCAT24((short)CONCAT21(uVar11,(char)((ulonglong)uVar18 >> 0x10)) +
                                         sVar3 + (short)((ulonglong)uVar17 >> 0x20) +
                                         (short)CONCAT21(uVar10,(char)((ulonglong)uVar1 >> 0x10)),
                                         CONCAT22((ushort)(byte)((ulonglong)uVar18 >> 8) + sVar2 +
                                                  (short)((ulonglong)uVar17 >> 0x10) +
                                                  (ushort)(byte)((ulonglong)uVar1 >> 8),
                                                  (ushort)(byte)uVar18 + (short)DAT_0090b260 +
                                                  (short)uVar17 + (ushort)(byte)uVar1))),2);
        uVar18 = psraw(CONCAT26((ushort)(byte)((ulonglong)uVar18 >> 0x38) + sVar4 +
                                (short)((ulonglong)uVar19 >> 0x30) +
                                (ushort)(byte)((ulonglong)uVar1 >> 0x38),
                                CONCAT24((ushort)(byte)((ulonglong)uVar18 >> 0x30) + sVar3 +
                                         (short)((ulonglong)uVar19 >> 0x20) +
                                         (ushort)(byte)((ulonglong)uVar1 >> 0x30),
                                         CONCAT22((ushort)(byte)((ulonglong)uVar18 >> 0x28) + sVar2
                                                  + (short)((ulonglong)uVar19 >> 0x10) +
                                                  (ushort)(byte)((ulonglong)uVar1 >> 0x28),
                                                  (ushort)(byte)((ulonglong)uVar18 >> 0x20) +
                                                  (short)DAT_0090b260 + (short)uVar19 +
                                                  (ushort)(byte)((ulonglong)uVar1 >> 0x20)))),2);
        sVar2 = (short)uVar16;
        sVar3 = (short)((ulonglong)uVar16 >> 0x10);
        sVar4 = (short)((ulonglong)uVar16 >> 0x20);
        sVar5 = (short)((ulonglong)uVar16 >> 0x30);
        sVar6 = (short)uVar18;
        sVar7 = (short)((ulonglong)uVar18 >> 0x10);
        sVar8 = (short)((ulonglong)uVar18 >> 0x20);
        sVar9 = (short)((ulonglong)uVar18 >> 0x30);
        *(ulonglong *)((int)param_2 + iVar13) =
             CONCAT17((0 < sVar9) * (sVar9 < 0x100) * (char)((ulonglong)uVar18 >> 0x30) -
                      (0xff < sVar9),
                      CONCAT16((0 < sVar8) * (sVar8 < 0x100) * (char)((ulonglong)uVar18 >> 0x20) -
                               (0xff < sVar8),
                               CONCAT15((0 < sVar7) * (sVar7 < 0x100) *
                                        (char)((ulonglong)uVar18 >> 0x10) - (0xff < sVar7),
                                        CONCAT14((0 < sVar6) * (sVar6 < 0x100) * (char)uVar18 -
                                                 (0xff < sVar6),
                                                 CONCAT13((0 < sVar5) * (sVar5 < 0x100) *
                                                          (char)((ulonglong)uVar16 >> 0x30) -
                                                          (0xff < sVar5),
                                                          CONCAT12((0 < sVar4) * (sVar4 < 0x100) *
                                                                   (char)((ulonglong)uVar16 >> 0x20)
                                                                   - (0xff < sVar4),
                                                                   CONCAT11((0 < sVar3) *
                                                                            (sVar3 < 0x100) *
                                                                            (char)((ulonglong)uVar16
                                                                                  >> 0x10) -
                                                                            (0xff < sVar3),
                                                                            (0 < sVar2) *
                                                                            (sVar2 < 0x100) *
                                                                            (char)uVar16 -
                                                                            (0xff < sVar2))))))));
        iVar13 = iVar13 + 8;
      } while (iVar13 < (int)param_3);
      param_1 = (undefined4 *)((int)param_1 + param_5);
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  puVar14 = (undefined4 *)((int)param_1 + param_5);
  puVar15 = (undefined4 *)((int)param_2 + param_5);
  for (uVar12 = param_3 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
    *puVar15 = *puVar14;
    puVar14 = puVar14 + 1;
    puVar15 = puVar15 + 1;
  }
  for (param_3 = param_3 & 3; param_3 != 0; param_3 = param_3 - 1) {
    *(undefined1 *)puVar15 = *(undefined1 *)puVar14;
    puVar14 = (undefined4 *)((int)puVar14 + 1);
    puVar15 = (undefined4 *)((int)puVar15 + 1);
  }
  return;
}

