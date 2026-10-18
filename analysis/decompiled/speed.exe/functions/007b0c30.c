/* speed.exe 007b0c30 FUN_007b0c30; analysis pseudocode, not buildable source.
 * calls 0056f120 FUN_0056f120
 * calls 005a5ea0 FUN_005a5ea0
 * calls 007afc90 FUN_007afc90
 * calls 007aff10 FUN_007aff10
 * calls 007a61f0 FUN_007a61f0
 * calls 007b0620 FUN_007b0620
 * calls 007b09f0 FUN_007b09f0
 * calls 00514d10 FUN_00514d10
 * calls 0056f7b0 FUN_0056f7b0
 * calls 00575b00 FUN_00575b00
 */

void __fastcall FUN_007b0c30(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float10 fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  float local_4;
  
  if ((DAT_009b9ec4 == 0) ||
     (iVar2 = FUN_0056f120(*(undefined1 *)(DAT_009b9ec4 + 0x11)), iVar2 == 0)) {
    local_4 = -1.0;
  }
  else {
    fVar5 = (float10)FUN_0056f7b0();
    local_4 = (float)fVar5;
  }
  uVar6 = *(undefined4 *)(param_1 + 0x10);
  fVar5 = (float10)FUN_007afc90();
  FUN_007aff10(uVar6,"HEAT_METER",0x3f800000,0x40a00000,local_4,(float)fVar5);
  iVar2 = DAT_009ba078;
  if (DAT_009ba074 == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = DAT_009ba074 + -4;
  }
  while( true ) {
    if (iVar2 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = iVar2 + -4;
    }
    if (*(int *)(iVar3 + 4) == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(iVar3 + 4) + -4;
    }
    if (iVar4 == iVar3) break;
    switch(*(undefined4 *)(*(int *)(iVar4 + 0xc) + 0x10)) {
    case 0x4f:
    case 0x50:
    case 0x51:
    case 0x52:
    case 0x69:
    case 0x6a:
    case 0x72:
    case 0x85:
    case 0x86:
    case 0x87:
      break;
    default:
      FUN_007b09f0(iVar4);
      iVar2 = DAT_009ba078;
    }
    if (*(int *)(iVar4 + 4) == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *(int *)(iVar4 + 4) + -4;
    }
  }
  cVar1 = FUN_00575b00();
  if (cVar1 != '\0') {
    FUN_007a61f0();
  }
  FUN_005a5ea0(0);
  if (*(int *)(param_1 + 0x2c) == 0) goto LAB_007b0d3f;
  iVar2 = *(int *)(param_1 + 0x2c) + -4;
  while( true ) {
    if (param_1 == -0x2c) {
      iVar4 = 0;
    }
    else {
      iVar4 = param_1 + 0x28;
    }
    if (iVar2 == iVar4) break;
    if (*(char *)(*(int *)(iVar2 + 0x54) + 0x14) == '\0') {
      uVar6 = *(undefined4 *)(iVar2 + 0x4c);
      uVar7 = 0x77cdc4e9;
    }
    else {
      uVar6 = *(undefined4 *)(iVar2 + 0x4c);
      uVar7 = 0xe6361f46;
    }
    FUN_00514d10(uVar6,uVar7,1);
    if (*(char *)(*(int *)(iVar2 + 0x54) + 0x14) == '\0') {
      FUN_00514d10(*(undefined4 *)(iVar2 + 0x4c),0x163c76,1);
    }
    if (*(int *)(iVar2 + 4) == 0) {
LAB_007b0d3f:
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(iVar2 + 4) + -4;
    }
  }
  FUN_007b0620();
  return;
}

