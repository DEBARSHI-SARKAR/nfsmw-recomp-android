/* speed.exe 00535dd0 FUN_00535dd0; analysis pseudocode, not buildable source.
 * calls 00527ee0 FUN_00527ee0
 * calls 00525220 FUN_00525220
 * calls 005fba70 FUN_005fba70
 * calls 0056bc00 FUN_0056bc00
 * calls 0079bac0 FUN_0079bac0
 * calls 0056e560 FUN_0056e560
 * calls 005252d0 FUN_005252d0
 * calls 005fb710 FUN_005fb710
 * calls 0083abc0 FUN_0083abc0
 * calls 00586d90 FUN_00586d90
 * calls 00796280 FUN_00796280
 * calls 0056bc10 FUN_0056bc10
 * calls 00586950 FUN_00586950
 * calls 005fb850 FUN_005fb850
 * calls 00460d20 FUN_00460d20
 * calls 0083a670 FUN_0083a670
 * calls 005faa20 FUN_005faa20
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00535dd0(int param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined *puVar8;
  float10 fVar9;
  
  iVar3 = FUN_00586d90();
  if (iVar3 == 0) {
    return;
  }
  uVar4 = FUN_00586d90(&DAT_00890978);
  iVar3 = FUN_00460d20(uVar4);
  if (iVar3 == 0) {
    return;
  }
  uVar4 = FUN_00586d90();
  iVar3 = FUN_00586950(uVar4);
  iVar3 = iVar3 + 0x1c;
  FUN_0079bac0(iVar3);
  iVar3 = FUN_00796280(iVar3);
  if (iVar3 == 0) {
    return;
  }
  FUN_0083a670(iVar3 + 0x90,&DAT_0089dcd0,0);
  uVar4 = FUN_0083abc0();
  FUN_0083a670(iVar3 + 0x90,&DAT_0089dccc,0);
  bVar1 = FUN_0083abc0();
  iVar5 = FUN_005fb710(uVar4);
  if (iVar5 == 0) {
    return;
  }
  uVar4 = FUN_005faa20();
  switch(uVar4) {
  case 0:
    uVar4 = 0xb94fd70e;
    uVar6 = 0x2521e5eb;
    break;
  case 1:
    uVar4 = 0x34fa2c1;
    uVar6 = 0xe9638d3e;
    break;
  case 2:
    uVar4 = 0x6f547e4c;
    uVar6 = 0xaaab31e9;
    break;
  case 3:
    uVar4 = 0x4930f5fc;
    goto LAB_00535ec6;
  default:
    uVar4 = 0x1b01cc;
LAB_00535ec6:
    uVar6 = 0x3a015595;
  }
  FUN_00527ee0(*(undefined4 *)(param_1 + 0x10),0xceb82625,uVar6);
  FUN_00525220(*(undefined4 *)(param_1 + 0x10),0x116d2d5c,uVar4);
  uVar4 = FUN_0056e560("TRACKNAME_",iVar5);
  cVar2 = FUN_0056bc00(uVar4);
  if (cVar2 == '\0') {
    uVar4 = *(undefined4 *)(param_1 + 0x10);
    uVar6 = FUN_005fba70();
    FUN_005252d0(uVar4,0x4b4e3888,uVar6);
  }
  else {
    FUN_00525220(*(undefined4 *)(param_1 + 0x10),0x4b4e3888,uVar4);
  }
  if (*(char *)(*(int *)(DAT_0091cf90 + 0x10) + 0x3b) == '\x01') {
    uVar4 = FUN_0056bc10(0x8569a26a);
    fVar9 = (float10)FUN_005fb850();
    fVar9 = fVar9 * (float10)_DAT_00890d60;
  }
  else {
    uVar4 = FUN_0056bc10(0x867dcfd9);
    fVar9 = (float10)FUN_005fb850();
    fVar9 = fVar9 * (float10)_DAT_0089dcc8;
  }
  FUN_005252d0(*(undefined4 *)(param_1 + 0x10),0x4b4e3889,"%$0.1f %s",(double)fVar9,uVar4);
  iVar5 = FUN_005faa20();
  if (iVar5 == 1) {
    uVar7 = (uint)bVar1;
    uVar4 = *(undefined4 *)(param_1 + 0x10);
    puVar8 = &DAT_0089d764;
  }
  else {
    uVar4 = *(undefined4 *)(param_1 + 0x10);
    uVar7 = 0x7f2f7ad6;
    puVar8 = (undefined *)FUN_0056bc10(0x7f2f7ad6);
  }
  FUN_005252d0(uVar4,CONCAT44(puVar8,0x4b4e388a),uVar7);
  uVar4 = *(undefined4 *)(param_1 + 0x10);
  if ((*(uint *)(iVar3 + 0xc) & 0x800) == 0) {
    uVar6 = 0x70dfe5c2;
  }
  else {
    uVar6 = 0x417b2604;
  }
  uVar6 = FUN_0056bc10(uVar6);
  FUN_005252d0(uVar4,0x4b4e388b,uVar6);
  uVar4 = *(undefined4 *)(param_1 + 0x10);
  if ((*(uint *)(iVar3 + 0xc) & 0x200) == 0) {
    uVar6 = 0x417b25e4;
  }
  else {
    uVar6 = 0x70e01038;
  }
  uVar6 = FUN_0056bc10(uVar6);
  FUN_005252d0(uVar4,0x4b4e388c,uVar6);
  uVar4 = *(undefined4 *)(param_1 + 0x10);
  if ((*(uint *)(iVar3 + 0xc) & 0x2000) == 0) {
    uVar6 = 0x70dfe5c2;
  }
  else {
    uVar6 = 0x417b2604;
  }
  uVar6 = FUN_0056bc10(uVar6);
  FUN_005252d0(uVar4,0x4b4e388d,uVar6);
  uVar4 = *(undefined4 *)(param_1 + 0x10);
  if ((*(uint *)(iVar3 + 0xc) & 0x400) == 0) {
    uVar6 = 0x70dfe5c2;
  }
  else {
    uVar6 = 0x417b2604;
  }
  uVar6 = FUN_0056bc10(uVar6);
  FUN_005252d0(uVar4,0x4b4e388e,uVar6);
  return;
}

