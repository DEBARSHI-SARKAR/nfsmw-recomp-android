/* speed.exe 005983c0 FUN_005983c0; analysis pseudocode, not buildable source.
 * calls 00571f30 FUN_00571f30
 * calls 00542530 FUN_00542530
 * calls 0056c6e0 FUN_0056c6e0
 * calls 005257f0 FUN_005257f0
 * calls 00460d20 FUN_00460d20
 */

int FUN_005983c0(undefined4 *param_1)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  byte bVar4;
  undefined4 *puVar5;
  
  pcVar2 = (char *)param_1[0x8a];
  if ((pcVar2 == (char *)0x0) || (*pcVar2 == '\0')) {
    if (DAT_00925e90 == 6) {
      param_1[0x8a] = "InGameDialog.fng";
      goto LAB_0059844a;
    }
  }
  else {
    iVar3 = FUN_00460d20(pcVar2,"animating");
    if (iVar3 == 0) {
      param_1[0x8a] = "OL_Dialog.fng";
      goto LAB_0059844a;
    }
    iVar3 = FUN_00460d20(pcVar2,"3button");
    if (iVar3 != 0) {
      iVar3 = FUN_00460d20(pcVar2,"3buttons_stacked");
      if (iVar3 == 0) {
        param_1[0x8a] = "OL_Dialog_Stacked_Buttons.fng";
      }
      else {
        param_1[0x8a] = pcVar2;
      }
      goto LAB_0059844a;
    }
  }
  param_1[0x8a] = "Dialog.fng";
LAB_0059844a:
  if (DAT_008f5360 != 0) {
    FUN_0056c6e0(DAT_008f5360);
  }
  puVar5 = &DAT_008f5128;
  for (iVar3 = 0x90; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = *param_1;
    param_1 = param_1 + 1;
    puVar5 = puVar5 + 1;
  }
  DAT_008f5360 = DAT_008f42bc;
  DAT_008f42bc = DAT_008f42bc + 1;
  FUN_00571f30(DAT_008f5350,FUN_00598330);
  if (DAT_008f5328 == 4) {
    cVar1 = *(char *)(DAT_0091cf90 + 0xc);
    if (cVar1 == '\0') {
      bVar4 = 1;
    }
    else if (cVar1 == '\x01') {
      bVar4 = 2;
    }
    else if (cVar1 == '\x02') {
      bVar4 = 4;
    }
    else {
      bVar4 = (cVar1 != '\x03') - 1U & 8;
    }
    FUN_00542530(DAT_008f5350,&DAT_008f5128,bVar4);
    return DAT_008f5360;
  }
  FUN_005257f0(DAT_008f5350,&DAT_008f5128,0,0);
  return DAT_008f5360;
}

