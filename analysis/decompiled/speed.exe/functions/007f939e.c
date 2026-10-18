/* speed.exe 007f939e FUN_007f939e; analysis pseudocode, not buildable source.
 */

void FUN_007f939e(uint *param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  uint *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  
  uVar6 = DAT_009bee08;
  uVar5 = DAT_009bee00;
  uVar4 = DAT_009bdde8;
  uVar3 = DAT_009bdde0;
  uVar2 = DAT_00909e48;
  uVar8 = *param_1 >> 1 & DAT_00909e48;
  do {
    uVar1 = *param_1;
    uVar10 = uVar1 >> 1 & uVar2;
    param_1 = param_1 + 1;
    uVar8 = paddusb(CONCAT44(uVar1,CONCAT13((char)(uVar8 >> 0x18) + (char)(uVar10 >> 0x18),
                                            CONCAT12((char)(uVar8 >> 0x10) + (char)(uVar10 >> 0x10),
                                                     CONCAT11((char)(uVar8 >> 8) +
                                                              (char)(uVar10 >> 8),
                                                              (char)uVar8 + (char)uVar10)))),uVar6);
    uVar9 = pmaddwd(uVar8 & uVar3,uVar4);
    puVar7 = param_2 + 1;
    uVar9 = uVar9 | CONCAT44((uint)((uVar8 & uVar5) >> 0x2b),(uint)(uVar8 & uVar5) >> 0xb);
    *param_2 = (uint)uVar9 | (uint)(uVar9 >> 0x10);
    param_2 = puVar7;
    uVar8 = uVar10;
  } while (puVar7 != param_3);
  return;
}

