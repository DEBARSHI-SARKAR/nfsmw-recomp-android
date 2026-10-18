/* speed.exe 007f9420 FUN_007f9420; analysis pseudocode, not buildable source.
 */

void FUN_007f9420(uint *param_1,uint *param_2,uint *param_3,uint *param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  uint *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  uint uVar9;
  ulonglong uVar10;
  
  uVar5 = DAT_009bee08;
  uVar4 = DAT_009bee00;
  uVar3 = DAT_009bdde8;
  uVar2 = DAT_009bdde0;
  uVar1 = DAT_00909e48;
  uVar7 = *param_1 >> 1 & DAT_00909e48;
  uVar8 = *param_2 >> 1 & DAT_00909e48;
  uVar7 = (ulonglong)
          CONCAT13((char)(uVar7 >> 0x18) + (char)(uVar8 >> 0x18),
                   CONCAT12((char)(uVar7 >> 0x10) + (char)(uVar8 >> 0x10),
                            CONCAT11((char)(uVar7 >> 8) + (char)(uVar8 >> 8),
                                     (char)uVar7 + (char)uVar8)));
  do {
    uVar8 = *param_1 >> 1 & uVar1;
    uVar10 = *param_2 >> 1 & uVar1;
    param_1 = param_1 + 1;
    uVar9 = CONCAT13((char)(uVar10 >> 0x18) + (char)(uVar8 >> 0x18),
                     CONCAT12((char)(uVar10 >> 0x10) + (char)(uVar8 >> 0x10),
                              CONCAT11((char)(uVar10 >> 8) + (char)(uVar8 >> 8),
                                       (char)uVar10 + (char)uVar8)));
    param_2 = param_2 + 1;
    uVar10 = uVar9 >> 1 & uVar1;
    uVar7 = paddusb(CONCAT44(uVar9,CONCAT13((char)(uVar7 >> 0x18) + (char)(uVar10 >> 0x18),
                                            CONCAT12((char)(uVar7 >> 0x10) + (char)(uVar10 >> 0x10),
                                                     CONCAT11((char)(uVar7 >> 8) +
                                                              (char)(uVar10 >> 8),
                                                              (char)uVar7 + (char)uVar10)))),uVar5);
    uVar8 = pmaddwd(uVar7 & uVar2,uVar3);
    puVar6 = param_3 + 1;
    uVar8 = uVar8 | CONCAT44((uint)((uVar7 & uVar4) >> 0x2b),(uint)(uVar7 & uVar4) >> 0xb);
    *param_3 = (uint)uVar8 | (uint)(uVar8 >> 0x10);
    param_3 = puVar6;
    uVar7 = uVar10;
  } while (puVar6 != param_4);
  return;
}

