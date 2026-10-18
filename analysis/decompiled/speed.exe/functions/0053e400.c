/* speed.exe 0053e400 FUN_0053e400; analysis pseudocode, not buildable source.
 * calls 00573140 FUN_00573140
 * calls 005b8550 FUN_005b8550
 * calls 005b5b70 FUN_005b5b70
 * calls 005b7580 FUN_005b7580
 * calls 005b1360 FUN_005b1360
 * calls 00591d90 FUN_00591d90
 * calls 005b8400 FUN_005b8400
 * calls 005252d0 FUN_005252d0
 * calls 00572070 FUN_00572070
 */

void __fastcall FUN_0053e400(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  
  iVar6 = 1;
  do {
    uVar3 = *(undefined4 *)(param_1 + 0x10);
    uVar2 = FUN_00573140("OPTION_NAME_%d",iVar6,&DAT_008941f8,&DAT_00890978);
    FUN_005252d0(uVar3,uVar2);
    pcVar7 = *(char **)(param_1 + 0x10);
    uVar3 = FUN_00573140("STATUS_%d",iVar6);
    if (pcVar7 != (char *)0x0) {
      pcVar4 = pcVar7;
      do {
        cVar1 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar1 != '\0');
      if (pcVar4 != pcVar7 + 1) {
        if (DAT_0091d218 < 1) {
          iVar5 = FUN_005b5b70(pcVar7);
          if (iVar5 == 0) {
            iVar5 = FUN_005b7580(pcVar7);
            if (iVar5 == 0) goto LAB_0053e4ed;
            goto LAB_0053e4b4;
          }
        }
        else {
          FUN_00572070();
          iVar5 = FUN_00591d90(pcVar7);
LAB_0053e4b4:
          if (iVar5 == 0) goto LAB_0053e4ed;
        }
        iVar5 = FUN_005b8550(uVar3);
        if ((iVar5 != 0) && (iVar5 = FUN_005b1360(0x16a259), iVar5 != 0)) {
          FUN_005b8400(iVar5,0);
          *(undefined4 *)(iVar5 + 0x10) = 0;
        }
      }
    }
LAB_0053e4ed:
    iVar6 = iVar6 + 1;
    if (7 < iVar6) {
      return;
    }
  } while( true );
}

