/* speed.exe 0053fb30 FUN_0053fb30; analysis pseudocode, not buildable source.
 * calls 00460c70 FUN_00460c70
 * calls 0079c470 FUN_0079c470
 * calls 005257f0 FUN_005257f0
 * calls 0078bc60 FUN_0078bc60
 * calls 0079bac0 FUN_0079bac0
 * calls 0045d3a0 FUN_0045d3a0
 * calls 00790370 FUN_00790370
 * calls 00460d20 FUN_00460d20
 * calls 0078cf80 FUN_0078cf80
 * calls 00652ad0 _malloc
 * calls 00513bc0 FUN_00513bc0
 * calls 0079a9e0 FUN_0079a9e0
 * calls 00573020 FUN_00573020
 * calls 0078c730 FUN_0078c730
 * calls 007902f0 FUN_007902f0
 */

void FUN_0053fb30(void)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined1 local_5ac [48];
  undefined1 local_57c;
  undefined1 local_578 [40];
  char local_550 [36];
  undefined1 local_52c [36];
  undefined4 local_508 [23];
  undefined1 local_4ac [548];
  undefined1 local_288 [644];
  
  puVar1 = (undefined4 *)FUN_00513bc0(local_288,DAT_0091c398);
  puVar4 = local_508;
  for (iVar2 = 0x9f; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar1;
    puVar1 = puVar1 + 1;
    puVar4 = puVar4 + 1;
  }
  iVar3 = 0;
  FUN_0079a9e0();
  iVar2 = FUN_0045d3a0(0);
  if (0 < iVar2) {
    do {
      iVar2 = iVar3;
      FUN_0079a9e0(iVar3);
      iVar2 = FUN_00790370(iVar2);
      if (iVar2 == 0) break;
      FUN_00460d20(iVar2 + 0xc,local_4ac);
      iVar3 = iVar3 + 1;
      FUN_0079a9e0();
      iVar2 = FUN_0045d3a0(0);
    } while (iVar3 < iVar2);
  }
  puVar6 = &DAT_0091c39c;
  uVar7 = DAT_0091c340;
  FUN_0079a9e0(&DAT_0091c39c,DAT_0091c340);
  iVar2 = FUN_007902f0(puVar6,uVar7);
  if (iVar2 == 0) {
    puVar5 = local_578;
    puVar1 = &DAT_0091c340;
    FUN_0078c730(puVar5,&DAT_0091c340);
    FUN_0078cf80(puVar5,puVar1);
    if ((DAT_0091c358 != 0) && (local_550[0] != '\0')) {
      FUN_0078bc60(1,local_550);
      uVar8 = 0;
      puVar5 = local_5ac;
      uVar7 = 0;
      local_57c = 1;
      FUN_0079bac0(puVar5,0,0);
      FUN_0079c470(puVar5,uVar7,uVar8);
      DAT_0091cacc = _malloc(0x114);
      if (DAT_0091cacc == (undefined4 *)0x0) {
        DAT_0091cacc = (undefined4 *)0x0;
      }
      else {
        *DAT_0091cacc = 0;
      }
      FUN_00460c70(DAT_0091cacc + 0xb,&DAT_0091c39c);
      FUN_00460c70(DAT_0091cacc + 0x13,local_550);
      FUN_00460c70(DAT_0091cacc + 0x3b,local_52c);
      *(undefined1 *)(DAT_0091cacc + 0x44) = 1;
    }
  }
  uVar7 = FUN_00573020((int)*(char *)(DAT_0091cf90 + 0xc));
  FUN_005257f0("OL_Challenge.fng",0,uVar7,0);
  DAT_009b41ec = 0;
  return;
}

