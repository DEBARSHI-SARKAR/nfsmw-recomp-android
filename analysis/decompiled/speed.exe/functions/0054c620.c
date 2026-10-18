/* speed.exe 0054c620 FUN_0054c620; analysis pseudocode, not buildable source.
 * calls 00516af0 FUN_00516af0
 * calls 005b1360 FUN_005b1360
 * calls 00798380 FUN_00798380
 * calls 0045d3a0 FUN_0045d3a0
 * calls 00790370 FUN_00790370
 * calls 005b8400 FUN_005b8400
 * calls 00513b50 FUN_00513b50
 * calls 00460d20 FUN_00460d20
 * calls 0078c900 FUN_0078c900
 * calls 005b8550 FUN_005b8550
 * calls 0079a9e0 FUN_0079a9e0
 * calls 00798270 FUN_00798270
 * calls 008375e0 FUN_008375e0
 * calls 0078c790 FUN_0078c790
 * calls 0078c8d0 FUN_0078c8d0
 * calls 005141e0 FUN_005141e0
 * calls 0078c730 FUN_0078c730
 * calls 0078d070 FUN_0078d070
 * calls 00572e80 FUN_00572e80
 * calls 0083d9c0 FUN_0083d9c0
 */

void __fastcall FUN_0054c620(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined1 *puVar7;
  undefined *puVar8;
  undefined4 uVar9;
  
  puVar8 = &DAT_0091c39c;
  *(undefined1 *)(param_1 + 0xf7) = 1;
  FUN_0079a9e0(&DAT_0091c39c);
  FUN_00798270(puVar8);
  FUN_0079a9e0();
  iVar2 = FUN_0045d3a0(0);
  while (iVar2 = iVar2 + -1, -1 < iVar2) {
    iVar6 = iVar2;
    FUN_0079a9e0(iVar2);
    iVar3 = FUN_00790370(iVar6);
    iVar6 = iVar3 + 0xc;
    iVar4 = FUN_00460d20(iVar6,&DAT_0091c39c);
    if (iVar4 == 0) {
      uVar5 = *(undefined4 *)(iVar3 + 8);
      uVar9 = 1;
      FUN_0079a9e0(iVar6,uVar5,1);
      FUN_00798380(iVar6,uVar5,uVar9);
    }
  }
  FUN_0079a9e0();
  iVar2 = FUN_0045d3a0(0);
  if (iVar2 == 0) {
    FUN_00572e80(1,0);
  }
  puVar8 = &DAT_0091c39c;
  FUN_0078c730(&DAT_0091c39c);
  cVar1 = FUN_0078c900(puVar8);
  if (cVar1 != '\0') {
    DAT_0091ca8c = 0;
    FUN_0078c730(0);
    uVar5 = FUN_0078c8d0();
    FUN_0083d9c0(uVar5);
    FUN_00572e80(2,0);
  }
  FUN_008375e0(DAT_0091c398,0);
  puVar8 = &DAT_0091c39c;
  FUN_0078c730(&DAT_0091c39c);
  iVar2 = FUN_0078c790(puVar8);
  if (iVar2 == 0) {
    *(undefined1 *)(param_1 + 0xf7) = 0;
    DAT_0091ca90 = 1;
    if ((((*(int *)(param_1 + 0x10) != 0) &&
         (iVar2 = FUN_00516af0(*(int *)(param_1 + 0x10)), iVar2 != 0)) &&
        (iVar2 = FUN_005b8550(0x47ff4e7c), iVar2 != 0)) &&
       (iVar2 = FUN_005b1360(0xde6eff34), iVar2 != 0)) {
      FUN_005b8400(iVar2,0);
      *(undefined4 *)(iVar2 + 0x10) = 0;
      return;
    }
  }
  else {
    puVar7 = &LAB_00544d00;
    uVar5 = 4;
    puVar8 = &DAT_0091c39c;
    iVar2 = param_1;
    FUN_0078c730(&DAT_0091c39c,4,&LAB_00544d00,param_1);
    iVar2 = FUN_0078d070(puVar8,uVar5,puVar7,iVar2);
    if (iVar2 == 0) {
      FUN_005141e0(0xb8066fd,&DAT_0091c39c);
    }
    else if ((*(char *)(param_1 + 0xf6) == '\0') || (iVar2 != -0x6c)) {
      FUN_00513b50(*(undefined4 *)(param_1 + 0x10),iVar2);
      DAT_0091ca90 = 1;
      return;
    }
    DAT_0091ca90 = 1;
  }
  return;
}

