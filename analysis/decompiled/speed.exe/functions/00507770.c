/* speed.exe 00507770 FUN_00507770; analysis pseudocode, not buildable source.
 * calls 0073cfe0 FUN_0073cfe0
 * calls 007c4b80 FUN_007c4b80
 * calls 00505380 FUN_00505380
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00507770(float param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  char *pcVar6;
  undefined4 uVar7;
  float local_8;
  
  iVar2 = (int)param_1;
  uVar1 = *(undefined4 *)((int)param_1 + 4);
  iVar5 = 0;
  if (0 < DAT_00916018) {
    pcVar6 = &DAT_00916aa4;
    do {
      cVar4 = *pcVar6;
      param_1 = 1.0;
      if ((cVar4 != '\x12') || (DAT_0091601c != 0)) {
        iVar3 = FUN_007c4b80();
        iVar3 = iVar3 % 3;
        if (iVar3 < 0) {
          iVar3 = -iVar3;
        }
        if (((cVar4 != '\x11') || ((&DAT_0091601c)[iVar3] != 0)) &&
           ((cVar4 != '\x13' || (DAT_00916024 != 0)))) {
          if (cVar4 == '\x15') {
            local_8 = 1.0;
            if (DAT_009196b8 != 0) {
              local_8 = _DAT_0089096c - *(float *)(DAT_009196b8 + 0x290);
            }
            iVar3 = FUN_0073cfe0(&DAT_00919650,1);
            param_1 = local_8;
            if (iVar3 != 0) {
              param_1 = _DAT_00890968;
            }
          }
          if (((&DAT_00915aa8)[iVar5] & 1 << ((byte)uVar1 & 0x1f)) == 0) {
            iVar3 = *(int *)(iVar2 + 4);
            if ((iVar3 == 3) || ((0x11 < iVar3 && (iVar3 < 0x18)))) {
              cVar4 = '\x01';
              uVar7 = 0;
            }
            else if (iVar3 == 4) {
              cVar4 = '\x02';
              uVar7 = 2;
            }
            else {
              cVar4 = (iVar3 != 1) + '\x03';
              uVar7 = 0;
              param_1 = 1.0;
            }
            FUN_00505380(iVar2,pcVar6 + -0x2c,&DAT_00987ab0,param_1,uVar7,cVar4,0,0,0x3f800000);
          }
        }
      }
      iVar5 = iVar5 + 1;
      pcVar6 = pcVar6 + 0x30;
    } while (iVar5 < DAT_00916018);
  }
  return;
}

