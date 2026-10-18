/* speed.exe 00555a90 FUN_00555a90; analysis pseudocode, not buildable source.
 * calls 005a5790 FUN_005a5790
 * calls 00573140 FUN_00573140
 * calls 00515e20 FUN_00515e20
 * calls 005b5b70 FUN_005b5b70
 * calls 005926b0 FUN_005926b0
 * calls 005868e0 FUN_005868e0
 * calls 005b1360 FUN_005b1360
 * calls 0051dcf0 FUN_0051dcf0
 * calls 00537970 FUN_00537970
 * calls 005b8400 FUN_005b8400
 * calls 0059b710 FUN_0059b710
 * calls 00572070 FUN_00572070
 * calls 00652ad0 _malloc
 * calls 005b8550 FUN_005b8550
 * calls 005b7580 FUN_005b7580
 * calls 00591d90 FUN_00591d90
 * calls 00586760 FUN_00586760
 * calls 00586d40 FUN_00586d40
 */

void __fastcall FUN_00555a90(int param_1)

{
  undefined4 *puVar1;
  char cVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  char *pcVar8;
  
  FUN_00586d40();
  iVar7 = 0;
  if (DAT_0089f6fc != 0xffffffff) {
    do {
      puVar3 = _malloc(0x44);
      if (puVar3 == (undefined4 *)0x0) {
        puVar3 = (undefined4 *)0x0;
      }
      else {
        puVar1 = puVar3 + 3;
        *puVar1 = puVar1;
        puVar3[4] = puVar1;
        *(undefined1 *)(puVar3 + 5) = 1;
        *puVar3 = &PTR_FUN_0089dd2c;
        puVar3[6] = 0;
        puVar3[7] = 0;
        puVar3[8] = 0;
        puVar3[9] = 0;
        *(undefined1 *)(puVar3 + 10) = 0;
        *(undefined1 *)((int)puVar3 + 0x29) = 0;
        puVar3[0xf] = 0xffffffff;
        *(undefined1 *)(puVar3 + 0x10) = 0;
        *(undefined1 *)((int)puVar3 + 0x2a) = 0;
      }
      FUN_0051dcf0(&DAT_00890978,0);
      FUN_00515e20((int)puVar3 + 0x2a,0x10,&DAT_0089c8d0);
      FUN_005868e0(puVar3);
      FUN_005a5790(puVar3);
      pcVar8 = *(char **)(param_1 + 0x10);
      iVar7 = iVar7 + 1;
      uVar4 = FUN_00573140("STATUS_%d",iVar7);
      if (pcVar8 != (char *)0x0) {
        pcVar5 = pcVar8;
        do {
          cVar2 = *pcVar5;
          pcVar5 = pcVar5 + 1;
        } while (cVar2 != '\0');
        if (pcVar5 != pcVar8 + 1) {
          if (DAT_0091d218 < 1) {
            iVar6 = FUN_005b5b70(pcVar8);
            if (iVar6 == 0) {
              iVar6 = FUN_005b7580(pcVar8);
              if (iVar6 == 0) goto LAB_00555beb;
              goto LAB_00555bb7;
            }
          }
          else {
            FUN_00572070();
            iVar6 = FUN_00591d90(pcVar8);
LAB_00555bb7:
            if (iVar6 == 0) goto LAB_00555beb;
          }
          iVar6 = FUN_005b8550(uVar4);
          if ((iVar6 != 0) && (iVar6 = FUN_005b1360(0x16a259), iVar6 != 0)) {
            FUN_005b8400(iVar6,0);
            *(undefined4 *)(iVar6 + 0x10) = 0;
          }
        }
      }
LAB_00555beb:
    } while (iVar7 < (int)(DAT_0089f6fc + 1));
  }
  FUN_0059b710(1);
  if (*(int *)(param_1 + 0x5c) != 0) {
    FUN_00586760(0x249db7b7);
  }
  FUN_005926b0(1);
  if (*(char *)(param_1 + 0x117c) != '\0') {
    return;
  }
  FUN_00537970();
  return;
}

