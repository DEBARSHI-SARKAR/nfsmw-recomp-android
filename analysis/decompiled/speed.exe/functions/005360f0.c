/* speed.exe 005360f0 FUN_005360f0; analysis pseudocode, not buildable source.
 * calls 005257f0 FUN_005257f0
 * calls 00598970 FUN_00598970
 * calls 00598590 FUN_00598590
 * calls 0078bce0 FUN_0078bce0
 * calls 00460c70 FUN_00460c70
 * calls 00796220 FUN_00796220
 * calls 0079bac0 FUN_0079bac0
 * calls 00586d90 FUN_00586d90
 * calls 0079ee50 FUN_0079ee50
 * calls 00796280 FUN_00796280
 * calls 0056bc10 FUN_0056bc10
 * calls 00586950 FUN_00586950
 * calls 00598bb0 FUN_00598bb0
 * calls 0056c6e0 FUN_0056c6e0
 * calls 0056e300 FUN_0056e300
 * calls 00460d20 FUN_00460d20
 */

void __fastcall FUN_005360f0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined1 *puVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined1 *puVar8;
  
  iVar1 = FUN_00586d90();
  if (iVar1 != 0) {
    uVar2 = FUN_00586d90(&DAT_00890978);
    iVar1 = FUN_00460d20(uVar2);
    if (iVar1 != 0) {
      *(undefined4 *)(DAT_0091cf90 + 0x13c) = 1;
      uVar2 = FUN_00586d90();
      iVar1 = FUN_00586950(uVar2);
      iVar1 = iVar1 + 0x1c;
      FUN_0079bac0(iVar1);
      puVar3 = (undefined4 *)FUN_00796280(iVar1);
      if (puVar3 != (undefined4 *)0x0) {
        if (*(char *)(param_1 + 0x1a8) == '\x01') {
          uVar2 = *puVar3;
          FUN_0079bac0(uVar2);
          piVar4 = (int *)FUN_00796220(uVar2);
          if (piVar4 != (int *)0x0) {
            iVar1 = *piVar4;
            if ((iVar1 == -2) || (iVar1 == -1)) {
              uVar2 = 0x243f8e1e;
LAB_00536199:
              *(undefined1 *)(param_1 + 600) = 1;
              uVar6 = *(undefined4 *)(param_1 + 0x10);
              uVar2 = FUN_0056bc10(uVar2);
              FUN_00598bb0(uVar6,&DAT_00890978,1,0x70e01038,0x417b25e4,0xbd6234af,0xf7f19667,
                           0xf7f19667,0,uVar2);
              return;
            }
            if (0xaf < iVar1) {
              uVar2 = 0xa492ae15;
              goto LAB_00536199;
            }
          }
        }
        iVar1 = DAT_0091cf90;
        if (((*(byte *)(puVar3 + 3) & 2) != 0) && (DAT_0091ca74 == (undefined1 *)0x0)) {
          *(undefined1 *)(param_1 + 600) = 1;
          FUN_005257f0("UI_OLPassword.fng",0,0,0);
          return;
        }
        puVar5 = DAT_0091ca74;
        if (DAT_0091ca74 == (undefined1 *)0x0) {
          puVar5 = &DAT_00890978;
        }
        FUN_00460c70(DAT_0091cf90 + 0x145,puVar5);
        puVar5 = DAT_0091ca74;
        if (DAT_0091ca74 == (undefined1 *)0x0) {
          puVar5 = &DAT_00890978;
        }
        FUN_00460c70(iVar1 + 0x152,puVar5);
        *(bool *)(iVar1 + 0x144) = DAT_0091ca74 != (undefined1 *)0x0;
        puVar8 = &LAB_00513120;
        puVar7 = puVar3 + 10;
        puVar5 = DAT_0091ca74;
        iVar1 = param_1;
        FUN_0079bac0(puVar7,DAT_0091ca74,&LAB_00513120,param_1);
        iVar1 = FUN_0079ee50(puVar7,puVar5,puVar8,iVar1);
        if (iVar1 < 0) {
          uVar2 = *(undefined4 *)(param_1 + 0x10);
          uVar6 = FUN_0056bc10(0xe3a9ab2a);
          FUN_00598970(uVar2,&DAT_00890978,1,0x417b2601,0xb1fb0b6,0xb1fb0b6,uVar6);
          return;
        }
        FUN_0056e300(3);
        if (*(int *)(param_1 + 0x19c) != 0) {
          FUN_0056c6e0(*(int *)(param_1 + 0x19c));
          *(undefined4 *)(param_1 + 0x19c) = 0;
        }
        uVar2 = *(undefined4 *)(param_1 + 0x10);
        FUN_0079bac0(puVar3);
        uVar6 = FUN_0078bce0(puVar3);
        uVar6 = FUN_0056bc10(0xd48fba40,uVar6);
        uVar2 = FUN_00598590(uVar2,&DAT_00890978,1,uVar6);
        *(undefined4 *)(param_1 + 0x19c) = uVar2;
      }
    }
  }
  return;
}

